    clear all
    close all
    clc
    lw  = 'linewidth';
    npt = 1000;

    lprox = 0.25;
    ldist = 0.5;
    mprox = 1;
    mdist = 2;
    mcart = 0.5;
    mech  = slidercrank(lprox,ldist,mprox,mdist,mcart);
    mech2 = slidercrank(lprox,ldist,mprox,mdist,mcart);

%%
%     ampl  = 2 * pi();
%     puls  = 1;
%     t     = linspace(0,2*pi(),npt);
%     q     = ampl * sin(puls * t);
%     dqdt  = ampl * cos(puls * t) * puls;
%     ddqdt =-ampl * sin(puls * t) * puls * puls;

%     t     = linspace(0,2*pi(),npt);
%     q     = t;
%     dqdt  = ones(size(t));
%     ddqdt = zeros(size(t));;

    t     = linspace(0,2*pi(),npt);
    ddqdt = t;
    dqdt  = t.^2/2;
    q     = t.^3/6;

    figure();hold();plot(dqdt,'b',lw,1.2);plot(diff(q)./diff(t),'r',lw,1.2);grid()
    figure();hold();plot(ddqdt,'b',lw,1.2);plot(diff(dqdt)./diff(t),'r',lw,1.2);grid()
    

    for k = 1:npt
        mech       = mech.forward_position_kinematics(q(k));
        
        mech       = mech.jacobian_analysis();
        mech       = mech.acceleration_analysis(dqdt(k));
        mech2      = mech2.inverse_position_kinematics(mech.pos.P);
        qinv(k)    = mech2.pos.q;
        phi(k)     = mech.pos.phi;
        p(:,k)     = mech.pos.P;
        jcbp(:,k)  = mech.vel.jcbp;
        dpdt(:,k)  = jcbp(:,k) * dqdt(k);
        dedt(:,k)  = mech.vel.jcbe * dqdt(k);
        EP(:,k)    = mech.pos.P - mech.pos.E;
        w(:,k)     = mech.vel.jcbw * dqdt(k);
                   
        ddedt(:,k) = mech.vel.jcbe * ddqdt(k) + mech.acc.djcbedt * dqdt(k);
        ddpdt(:,k) = mech.vel.jcbp * ddqdt(k) + mech.acc.djcbpdt * dqdt(k);
        dwdt(:,k)  = mech.vel.jcbw * ddqdt(k) + mech.acc.djcbwdt * dqdt(k);

        static_trq(k) = mech.statics();
        [M(k),C(k)]   = mech.dynamics();
        trq(k) = M(k) * ddqdt(k) + C(k) * dqdt(k) - static_trq(k);
    end
%%
    figure();
    plot(t,rad2deg(phi),lw,1.2);grid();
    
%%
    figure()
    hold();
    plot(t,dpdt,lw,1.2,'color','b')
    plot(t(2:npt),diff(p,1,2)./diff(t,1,2),lw,1.2,'color','r');
    plot(t,dedt + cross(w,EP),lw,1.2,'color','k');
%%
    figure(); hold();
    plot(t,ddpdt,lw,2.4,'color','b')
    plot(t(2:end),diff(dpdt,1,2)./diff(t,1,2),lw,1.2,'color','r')
    plot(t, ddedt + cross(w,dpdt-dedt) + cross(dwdt,EP),lw,1.2,'color','k','linestyle','-.');
%%
    figure(); plot(t,w,lw,1.2); grid()
    figure(); plot(t,dwdt,lw,1.2); grid()
    figure(); plot(t,trq,lw,1.2); grid()
    
    %%
    cfg   = slidercrank_config(lprox,ldist,mprox,mdist,mcart);
    for k = 1:npt
        [P,E,feasible]            = forward_position_kinematics(q(k), cfg.proximal.len, cfg.distal.len);
        [jcbe,jcbp,jcbw]          = jacobian_analysis(q(k),P,E,cfg.proximal.len);
        [djcbedt,djcbpdt,djcbwdt] = acceleration_analysis(q(k),P,E,dqdt(k),jcbp,jcbe,cfg.proximal.len);
        
        static_trq2(k)  = statics(jcbe,cfg.proximal.len, cfg.distal.len, cfg.proximal.mass, cfg.distal.mass);
        [M2(k),C2(k)] = dynamics(jcbp,jcbe,jcbw,djcbpdt,djcbedt,djcbwdt,cfg.proximal.len, cfg.distal.len,cfg.proximal.mass, cfg.distal.mass, cfg.cart.mass);
        trq2(k) = M2(k) * ddqdt(k) + C2(k) * dqdt(k) - static_trq2(k);
        trq3(k) = inverse_dynamics(q(k), dqdt(k), ddqdt(k), cfg.proximal.len, cfg.distal.len, cfg.proximal.mass, cfg.distal.mass, cfg.cart.mass);
    end
    %%
    close all
    figure();plot(t,static_trq2-static_trq);grid();
    figure();plot(t,trq2-trq);grid();
    figure();plot(t,trq3-trq);grid();

    figure();plot(t,M-M2);grid();
    figure();plot(t,C-C2);grid();

