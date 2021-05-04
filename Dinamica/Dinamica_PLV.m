function [C1, C2] = Dinamica_PLV(PKM,theta1ldm,theta2ldm,theta3ldm,theta4ldm,theta1ldm_p,theta2ldm_p,theta3ldm_p,theta4ldm_p,...
    theta1ldm_pp,theta2ldm_pp,theta3ldm_pp,theta4ldm_pp,J34,PKM_Acc)

d = PKM.link.d;
l = PKM.link.l;
m = PKM.link.m;
me = PKM.vite.me;
J = PKM.link.J;


k = 1;
for i=1:1000
    theta1 = theta1ldm(1,i);
    theta2 = theta2ldm(1,i);
    theta3 = theta3ldm(1,i);
    theta4 = theta4ldm(1,i);
    theta1_p = theta1ldm_p(1,i);
    theta2_p = theta2ldm_p(1,i);
    theta3_p = theta3ldm_p(1,i);
    theta4_p = theta4ldm_p(1,i);
    theta1_pp = theta1ldm_pp(1,i);
    theta2_pp = theta2ldm_pp(1,i);
    theta3_pp = theta3ldm_pp(1,i);
    theta4_pp = theta4ldm_pp(1,i);
    J11 = J34(1,k);
    J12 = J34(1,k+1);
    J21 = J34(2,k);
    J22 = J34(2,k+1);
    k = k+2;
    a3 = PKM_Acc(i,1);
    a4 = PKM_Acc(i,2);
    aE = PKM_Acc(i,3);
    
    C1(1,i) = (J + 0.25*l^2*m)*theta1_pp + J*J11*theta3_pp + m*a3*(l+0.5*l*J11) + J*J21*theta4_pp + 0.5*m*l*J21*a4 + me*aE*(l+l*J11);
    C2(1,i) = (J + 0.25*l^2*m)*theta2_pp + J*J12*theta3_pp + m*a3*0.5*l*J12 + J*J22*theta4_pp + m*a4*(l+0.5*l*J22) + me*aE*l*J12;
    
end
end