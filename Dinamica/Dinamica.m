function [C1, C2] = Dinamica(PKM,theta1ldm,theta2ldm,theta3ldm,theta4ldm,theta1ldm_p,theta2ldm_p,theta3ldm_p,theta4ldm_p,...
    theta1ldm_pp,theta2ldm_pp,theta3ldm_pp,theta4ldm_pp,thetaVldm_pp)

d = PKM.link.d;
l = PKM.link.l;
m = PKM.link.m;
me = PKM.vite.me;
pv = PKM.vite.pv;
Jv = PKM.vite.Jv;
J = PKM.link.J;


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
    thetaV_pp = thetaVldm_pp(1,i);
    
    a1x = -0.5*l*cos(theta1)*theta1_p^2 - 0.5*l*sin(theta1)*theta1_pp;
    a1y = -0.5*l*sin(theta1)*theta1_p^2 + 0.5*l*cos(theta1)*theta1_pp;
    a2x = -0.5*l*cos(theta2)*theta2_p^2 - 0.5*l*sin(theta2)*theta2_pp;
    a2y = -0.5*l*sin(theta2)*theta2_p^2 + 0.5*l*cos(theta2)*theta2_pp;
    a3x = 2*a1x - 0.5*l*cos(theta3)*theta3_p^2 - 0.5*l*sin(theta3)*theta3_pp;
    a3y = 2*a1y - 0.5*l*sin(theta3)*theta3_p^2 + 0.5*l*cos(theta3)*theta3_pp;
    a4x = 2*a2x - 0.5*l*cos(theta4)*theta4_p^2 - 0.5*l*sin(theta4)*theta4_pp;
    a4y = 2*a2y - 0.5*l*sin(theta4)*theta4_p^2 + 0.5*l*cos(theta4)*theta4_pp;    
    aEx = 2*a1x - l*cos(theta3)*theta3_p^2 - l*sin(theta3)*theta3_pp;
    aEy = 2*a1y - l*sin(theta3)*theta3_p^2 + l*cos(theta3)*theta3_pp;
    
    XE = (J*theta4_pp + Jv*thetaV_pp - (0.5*m*a4x + me*aEx)*l*sin(theta4) + (0.5*m*a4y + me*aEy + (J*theta3_pp)/(l*cos(theta3)) -...
        m*a3x*0.5*tan(theta3) + 0.5*m*a3y)*l*cos(theta4))/(-l*sin(theta4) + l*tan(theta3)*cos(theta4));
    YE = -(J*theta3_pp)/(l*cos(theta3)) + (2*XE + m*a3x)*0.5*tan(theta3) - 0.5*m*a3y;
    Y4 = YE - m*a4y - me*aEy;
    X4 = XE - m*a4x - me*aEx;
    Y3 = YE + m*a3y;
    X3 = XE + m*a3x;
    Y1 = Y3 + m*a1y;
    X1 = X3 + m*a1x;
    Y2 = -Y4 + m*a2y;
    X2 = -X4 + m*a2x;
    
    C1(1,i) = J*theta1_pp -(X1+X3)*0.5*l*sin(theta1) +(Y1+Y3)*0.5*l*cos(theta1);
    C2(1,i) = J*theta2_pp +(X4-X2)*0.5*l*sin(theta2) +(Y2-Y4)*0.5*l*cos(theta2);
end
end