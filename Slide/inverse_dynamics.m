function [motor_torque] = inverse_dynamics(q, dqdt, ddqdt, lp, ld, mp, md, mc)
%
    [P,E,feasible]            = forward_position_kinematics(q, lp, ld);
    [jcbe,jcbp,jcbw]          = jacobian_analysis(q,P,E,lp);
    [djcbedt,djcbpdt,djcbwdt] = acceleration_analysis(q,P,E,dqdt,jcbp,jcbe,lp);
    
    PE = E - P;
    phi = atan2(PE(2), PE(1));

%   NB: xi = [q,xprox,yprox,phi,xdist,ydist,xcart]'
    gconst = 9.81;
    Jp = mp * lp^2 / 12;
    Jd = md * ld^2 / 12;
    m = [Jp, 
         mp,
         mp,
         Jd,
         md,
         md,
         mc];
    M = diag(m);
    %
    grad_Vg = -gconst * [0; 0; mp; 0; 0; md; 0];
    %
    jcbg1    = jcbe * 0.5;
    jcbg2    = jcbe * 0.5 + jcbp * 0.5;
    djcbg1dt = djcbedt * 0.5;
    djcbg2dt = djcbedt * 0.5 + djcbpdt * 0.5;
    ddG1dt   = jcbg1 * ddqdt + djcbg1dt * dqdt;
    ddG2dt   = jcbg2 * ddqdt + djcbg2dt * dqdt;
    ddPdt    = jcbp * ddqdt + djcbpdt * dqdt;
    ddwdt    = jcbw * ddqdt + djcbwdt * dqdt;

    ddxidt = [ddqdt;
              ddG1dt(1:2);
              ddwdt(3);
              ddG2dt(1:2);
              ddPdt(1)];
    %
    %   jacobian of the constraint equations:
    dCnstr = [-0.5 * lp * sin(q), 1, 0, 0.5 * ld * sin(phi), -1, 0, 0;
               0.5 * lp * cos(q), 0, 1,-0.5 * ld * cos(phi),  0,-1, 0;
               0.5 * lp * sin(q), 1, 0, 0, 0, 0, 0;
              -0.5 * lp * cos(q), 0, 1, 0 ,0, 0, 0;
               0, 0, 0,-0.5*ld * sin(phi),-1, 0, 1;
               0, 0, 0,-0.5*ld * cos(phi), 0, 1, 0];
    %   solution of the inverse dynamics:
    A  = [1,0,0,0,0,0,0;
         dCnstr];
    sol = A' \ (M * ddxidt - grad_Vg);
    motor_torque = sol(1);
end