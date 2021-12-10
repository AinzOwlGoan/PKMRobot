    clear all
    close all
    clc
    lw  = 'linewidth';
    npt = 1000;

    lprox = 0.3;
    ldist = 1.2;
    mprox = 1;
    mdist = 3;
    mcart = 0.5;
    mech  = slidercrank(lprox,ldist,mprox,mdist,mcart);    
%%
   ampl  = 2 * pi();
   puls  = 1;
   t     = linspace(0,2*pi(),npt);
   q     = ampl * sin(puls * t);
   dqdt  = ampl * cos(puls * t) * puls;
   ddqdt =-ampl * sin(puls * t) * puls * puls;
   figure();hold();plot(dqdt,'b',lw,1.2);plot(diff(q)./diff(t),'r',lw,1.2);grid()
   figure();hold();plot(ddqdt,'b',lw,1.2);plot(diff(dqdt)./diff(t),'r',lw,1.2);grid()

    for k = 1:npt
        mech       = mech.forward_position_kinematics(q(k));
        mech       = mech.jacobian_analysis();
        mech       = mech.acceleration_analysis(dqdt(k));
        phi(k)   = mech.pos.phi;
        p(:,k)     = mech.pos.P;
        E(:,k)     = mech.pos.E;
        jcbp(:,k)  = mech.vel.jcbp;
        dpdt(:,k)  = jcbp(:,k) * dqdt(k);
        dedt(:,k)  = mech.vel.jcbe * dqdt(k);
        EP(:,k)    = mech.pos.P - mech.pos.E;
        w(:,k)     = mech.vel.jcbw * dqdt(k);
                   
        ddedt(:,k) = mech.vel.jcbe * ddqdt(k) + mech.acc.djcbedt * dqdt(k);
        ddpdt(:,k) = mech.vel.jcbp * ddqdt(k) + mech.acc.djcbpdt * dqdt(k);
        dwdt(:,k)  = mech.vel.jcbw * ddqdt(k) + mech.acc.djcbwdt * dqdt(k);

        grad_Vg     = mech.statics();
        [M(k),C(k)] = mech.dynamics();

        trq(k)        = M(k) * ddqdt(k) + C(k) * dqdt(k) - grad_Vg;
        invdyn_trq(:,k) = mech.inverse_dynamics(q(k),dqdt(k),ddqdt(k));
    end
  %%  
    close all
    td = t(2:end);
    figure();hold();plot(td,diff(p,1,2)./diff(t));plot(t,dpdt)
    figure();hold();plot(td,diff(dpdt,1,2)./diff(t));plot(t,ddpdt)
    figure();hold();plot(td,diff(E,1,2)./diff(t));plot(t,dedt)
    figure();hold();plot(td,diff(dedt,1,2)./diff(t));plot(t,ddedt)
    %%
    figure();hold();plot(td,diff(phi)./diff(t)); plot(t,w(3,:));
    figure();hold();plot(td,diff(w,1,2)./diff(t)); plot(t,dwdt);
%%
    close all
    figure();subplot(3,1,1);plot(t,trq); subplot(3,1,2); plot(t,invdyn_trq(1,:)); subplot(3,1,3); plot(t,trq-invdyn_trq(1,:));
    return
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