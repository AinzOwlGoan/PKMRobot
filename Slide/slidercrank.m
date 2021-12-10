classdef slidercrank
    properties
        geom
        mass
        pos
        vel
        acc
    end
    methods
        function [obj] = slidercrank(lprox,ldist,mprox,mdist,mcart)
            obj.geom.lp  = lprox;
            obj.geom.ld  = ldist;
            obj.geom.glp = 0.5 * obj.geom.lp;
            obj.geom.gld = 0.5 * obj.geom.ld;

            obj.geom.xrange = [ldist - lprox;
                               ldist + lprox];

            obj.mass.mp  = mprox;
            obj.mass.md  = mdist;
            obj.mass.mc  = mcart;
            obj.mass.Jp  = obj.mass.mp * obj.geom.lp^2 /12;
            obj.mass.Jd  = obj.mass.md * obj.geom.ld^2 /12;
            obj.mass.gconst = 9.81;

            obj.pos.O    = zeros(3,1);
        end

        function [obj,feasible] = forward_position_kinematics(obj,q)
            obj.pos.q = q;
            obj.pos.E = obj.geom.lp * [cos(q); sin(q); 0];
            a = 1;
            b =-2 * obj.pos.E(1);
            c = obj.pos.E(1)^2 + obj.pos.E(2)^2 - obj.geom.ld^2;

            delta = b^2 - 4*a*c;
            if (delta < 0)
                obj.pos.P = NaN(3,1);
                obj.pos.phi = NaN(1,1);
                feasible  = false;
            else
                x1 = (-b  + sqrt(delta)) / (2*a);
                x2 = (-b  - sqrt(delta)) / (2*a);
                obj.pos.P = [x1; 0; 0]; % an assembly is implied.
                PE = obj.pos.E - obj.pos.P;
                obj.pos.phi = atan2(PE(2), PE(1));
                feasible  = true;
            end
        end
    
        function [obj,feasible] = inverse_position_kinematics(obj,P)
            obj.pos.P = P;
            [pt(:,1), pt(:,2), nfound] = intersect_circles(obj.pos.O, obj.geom.lp, obj.pos.P, obj.geom.ld);
            if (nfound == 0)
                obj.pos.P = NaN(3,1);
                obj.pos.E = NaN(3,1);
                obj.pos.q = NaN(1,1);
                feasible  = false;
            else
                y         = pt(2,:);
                [mx,imx]  = max(y)
                obj.pos.E = [pt(1,imx); pt(2,imx); 0];
                PE = obj.pos.E - obj.pos.P;
                obj.pos.phi = atan2(PE(2), PE(1));
                obj.pos.q   = atan2(obj.pos.E(2),obj.pos.E(1));
                feasible  = true;
            end
        end

        function [obj] = jacobian_analysis(obj)
            EP            = obj.pos.P - obj.pos.E;
            obj.vel.jcbe  = obj.geom.lp * [-sin(obj.pos.q); cos(obj.pos.q); 0];
            obj.vel.jcbp  = [dot(obj.vel.jcbe, EP) / EP(1); 0; 0];
            obj.vel.jcbw  = [0; 0;  (obj.vel.jcbp(2) - obj.vel.jcbe(2)) / EP(1)];
        end
        %
        function [obj] = acceleration_analysis(obj,dqdt)
            EP              = obj.pos.P - obj.pos.E;
            dpdt            = obj.vel.jcbp * dqdt;
            dedt            = obj.vel.jcbe * dqdt;
            dEPdt           = dpdt - dedt;

            obj.acc.djcbedt = obj.geom.lp * [-cos(obj.pos.q); -sin(obj.pos.q); 0] * dqdt;
        %   accelerazione del piede di biella:
            num    = dot(obj.vel.jcbe, EP);
            den    = EP(1);
            dnumdt = dot(obj.acc.djcbedt, EP) + dot(obj.vel.jcbe, dEPdt);
            ddendt = dEPdt(1);
            obj.acc.djcbpdt = [(dnumdt * den - num * ddendt) / den^2; 0; 0];

        %   accelerazione angolare della biella:
            num    = obj.vel.jcbp(2) - obj.vel.jcbe(2);
            den    = EP(1);
            dnumdt = obj.acc.djcbpdt(2) - obj.acc.djcbedt(2);
            ddendt = dEPdt(1);
            obj.acc.djcbwdt = [0; 0; (dnumdt * den - num * ddendt) / den^2];
        end
        %
        function [grad_Vg] = statics(obj)
            grad_y_prox   = 0.5 * obj.vel.jcbe(2);
            grad_y_dist   = 0.5 * obj.vel.jcbe(2);
            grad_Vg       =-obj.mass.gconst * (obj.mass.mp * grad_y_prox + obj.mass.md * grad_y_dist);
        end
        %
        function [M,C] = dynamics(obj)
        %   Da verificare!
            jcbgp = obj.vel.jcbe * 0.5;
            jcbgd = obj.vel.jcbe * 0.5 + obj.vel.jcbp * 0.5;

            djcbgpdt = obj.acc.djcbedt * 0.5;
            djcbgddt = obj.acc.djcbedt * 0.5 + obj.acc.djcbpdt * 0.5;

            Mprox = obj.mass.Jp + obj.mass.mp * (jcbgp.' * jcbgp);
            %Mprox = obj.mass.mp * obj.geom.lp^2 / 3;
            Mdist = obj.mass.Jd * obj.vel.jcbw.' * obj.vel.jcbw + obj.mass.md * jcbgd.' * jcbgd;
            Mcart = obj.mass.mc * obj.vel.jcbp.' * obj.vel.jcbp;

            Cprox = (obj.mass.mp * (jcbgp.' * djcbgpdt));
            Cdist = (obj.mass.md * (jcbgd.' * djcbgddt) +...
                     obj.mass.Jd * (obj.vel.jcbw.' * obj.acc.djcbwdt));
            Ccart = (obj.mass.mc * (obj.vel.jcbp.' * obj.acc.djcbpdt));

            M = Mprox + Mdist + Mcart;
            C = Cprox + Cdist + Ccart;
        end
        %
        function [sol] = inverse_dynamics(mech, q, dqdt, ddqdt)
            mech    = mech.forward_position_kinematics(q);
            mech    = mech.jacobian_analysis();
            mech    = mech.acceleration_analysis(dqdt);

        %   xi = [q,xprox,yprox,phi,xdist,ydist,xcart]'
            m = [mech.mass.Jp, 
                 mech.mass.mp,
                 mech.mass.mp,
                 mech.mass.Jd,
                 mech.mass.md,
                 mech.mass.md,
                 mech.mass.mc];
            M = diag(m);
            %
            grad_Vg = -mech.mass.gconst * [0; 0; mech.mass.mp; 0; 0; mech.mass.md; 0];
            %
            jcbg1    = mech.vel.jcbe * 0.5;
            jcbg2    = mech.vel.jcbe * 0.5 + mech.vel.jcbp * 0.5;
            djcbg1dt = mech.acc.djcbedt * 0.5;
            djcbg2dt = mech.acc.djcbedt * 0.5 + mech.acc.djcbpdt * 0.5;
            ddG1dt   = jcbg1 * ddqdt + djcbg1dt * dqdt;
            ddG2dt   = jcbg2 * ddqdt + djcbg2dt * dqdt;
            ddPdt    = mech.vel.jcbp * ddqdt + mech.acc.djcbpdt * dqdt;
            ddwdt    = mech.vel.jcbw * ddqdt + mech.acc.djcbwdt * dqdt;

            ddxidt = [ddqdt;
                      ddG1dt(1:2);
                      ddwdt(3);
                      ddG2dt(1:2);
                      ddPdt(1)];
            %
            %   jacobian of the constraint equations:
            dCnstr = [-0.5 * mech.geom.lp * sin(mech.pos.q), 1, 0, 0.5 * mech.geom.ld * sin(mech.pos.phi), -1, 0, 0;
                       0.5 * mech.geom.lp * cos(mech.pos.q), 0, 1,-0.5 * mech.geom.ld * cos(mech.pos.phi),  0,-1, 0;
                       0.5 * mech.geom.lp * sin(mech.pos.q), 1, 0, 0, 0, 0, 0;
                      -0.5 * mech.geom.lp * cos(mech.pos.q), 0, 1, 0 ,0, 0, 0;
                       0, 0, 0,-0.5*mech.geom.ld * sin(mech.pos.phi),-1, 0, 1;
                       0, 0, 0,-0.5*mech.geom.ld * cos(mech.pos.phi), 0, 1, 0];
            %   solution of the inverse dynamics:
            A  = [1,0,0,0,0,0,0;
                 dCnstr];
            sol = A' \ (M * ddxidt - grad_Vg);
            motor_torque = sol(1);
        end
    end
end
