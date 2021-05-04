function [M, K, T] = Matrici_Lagrange(PKM, theta1, theta2)
% Coefficienti equazione di Lagrange

d = PKM.link.d;
l = PKM.link.l;
m = PKM.link.m;
me = PKM.vite.me;
pv = PKM.vite.pv;
Jv = PKM.vite.Jv;
J = PKM.link.J;
g = 9.81;

[theta3, dtheta3_dtheta1, dtheta3_dtheta1_dtheta1, dtheta3_dtheta1_dtheta2, dtheta3_dtheta2, theta4, dtheta4_dtheta2, dtheta4_dtheta2_dtheta2, dtheta4_dtheta2_dtheta1, dtheta4_dtheta1] = Derivate_theta34(theta1, theta2);

% M11 = 2*((1/8)*m*l^2+0.5*J+0.5*m*l^2+0.5*me*l^2 + dtheta3_dtheta1^2*((1/8)*m*l^2+0.5*J+me*l^2) + dtheta3_dtheta1*(l*cos(theta1-theta3)*(0.5*m+me)));
 
M11 = 2*((1/8)*m*l^2 + 0.5*J + 0.5*m*l^2*(1 + dtheta3_dtheta1*cos(theta1-theta3) + 0.25*dtheta3_dtheta1^2) +...
    0.5*me*l^2*(1 + 2*dtheta3_dtheta1*cos(theta1-theta3) + dtheta3_dtheta1^2) + 0.5*J*dtheta3_dtheta1^2);

% K1 = 2*(2*dtheta3_dtheta1*dtheta3_dtheta1_dtheta1*((1/8)*m*l^2+0.5*J) + dtheta3_dtheta1_dtheta1*(l*cos(theta1-theta3)*(0.5*m+me))-...
%     dtheta3_dtheta1*l*(0.5*m+me)*sin(theta1-theta3)*(1-dtheta3_dtheta1));

K1 = 2*(0.5*m*l^2*(dtheta3_dtheta1_dtheta1*cos(theta1-theta3) + dtheta3_dtheta1*(-sin(theta1-theta3)*(1-dtheta3_dtheta1)) +...
    0.25*2*dtheta3_dtheta1*dtheta3_dtheta1_dtheta1) +0.5*me*l^2*(2*dtheta3_dtheta1_dtheta1*cos(theta1-theta3) +...
    2*dtheta3_dtheta1*(-sin(theta1-theta3)*(1-dtheta3_dtheta1) + 2*dtheta3_dtheta1*dtheta3_dtheta1_dtheta1) +...
    0.5*J*2*dtheta3_dtheta1*dtheta3_dtheta1_dtheta1));

% K2 = (2*dtheta3_dtheta1*dtheta3_dtheta1_dtheta1*((1/8)*m*l^2+0.5*J+0.5*me*l^2) + dtheta3_dtheta1_dtheta1*l*(cos(theta1-theta3)*(0.5*m+me)) - ...
%     dtheta3_dtheta1*l*(0.5*m+me)*sin(theta1-theta3)*(1-dtheta3_dtheta1));

K2 = 0.5*m*l^2*(dtheta3_dtheta1_dtheta1*cos(theta1-theta3) + dtheta3_dtheta1*(-sin(theta1-theta3)*(1-dtheta3_dtheta1)) +...
    0.25*2*dtheta3_dtheta1*dtheta3_dtheta1_dtheta1) + 0.5*me*l^2*(2*dtheta3_dtheta1_dtheta1*cos(theta1-theta3) +...
    2*dtheta3_dtheta1*(-sin(theta1-theta3)*(1-dtheta3_dtheta1)) + 2*dtheta3_dtheta1*dtheta3_dtheta1_dtheta1) +...
    0.5*J*2*dtheta3_dtheta1*dtheta3_dtheta1_dtheta1;

% K3 = (2*dtheta4_dtheta2*(dtheta4_dtheta2_dtheta1)*((1/8)*m*l^2+0.5*J) + (dtheta4_dtheta2_dtheta1)*(0.5*m*l*cos(theta2-theta4)) - ...
%     dtheta4_dtheta2*0.5*m*l*sin(theta2-theta4)*(-dtheta4_dtheta1));

K3 = 0.5*m*l^2*(dtheta4_dtheta2_dtheta1*cos(theta2-theta4) + dtheta4_dtheta2*(-sin(theta2-theta4))*(-dtheta4_dtheta2_dtheta1) +...
    0.25*2*dtheta4_dtheta2*dtheta4_dtheta2_dtheta1) + 0.5*J*2*dtheta4_dtheta2*dtheta4_dtheta2_dtheta1;

% M22 = 2*((1/8)*m*l^2+0.5*J+0.5*m*l^2 + dtheta4_dtheta2^2*((1/8)*m*l^2+0.5*J) + dtheta4_dtheta2*(l*cos(theta2-theta4)*0.5*m));

M22 = 2*((1/8)*m*l^2 + 0.5*J + 0.5*m*l^2*(1 + dtheta4_dtheta2*cos(theta2-theta4) + 0.25*dtheta4_dtheta2^2) + 0.5*J*dtheta4_dtheta2^2);

% H1 = 2*(2*dtheta4_dtheta2*dtheta4_dtheta2_dtheta2*((1/8)*m*l^2+0.5*J) + dtheta4_dtheta2_dtheta2*(l*cos(theta2-theta4)*(0.5*m))-...
%     dtheta4_dtheta2*l*(0.5*m)*sin(theta2-theta4)*(1-dtheta4_dtheta2));

H1 = 2*(0.5*m*l^2*(dtheta4_dtheta2_dtheta2*cos(theta2-theta4) + dtheta4_dtheta2*(-sin(theta2-theta4))*(1 - dtheta4_dtheta2) +...
    0.25*2*dtheta4_dtheta2*dtheta4_dtheta2_dtheta2) + 0.25*J*2*dtheta4_dtheta2*dtheta4_dtheta2_dtheta2);

% H2 = (2*dtheta3_dtheta1*(dtheta3_dtheta1_dtheta2)*((1/8)*m*l^2+0.5*J+0.5*me*l^2) +...
%      (dtheta3_dtheta1_dtheta2)*l*(cos(theta1-theta3)*(0.5*m+me)) - ...
%       dtheta3_dtheta1*(-l)*sin(theta1-theta3)*(dtheta3_dtheta1)*(0.5*m+me));

H2 = 0.5*m*l^2*(dtheta3_dtheta1_dtheta2*cos(theta1-theta3) + dtheta3_dtheta1*(-sin(theta1-theta3))*(-dtheta3_dtheta2) +...
    0.25*2*dtheta3_dtheta1*dtheta3_dtheta1_dtheta2) + 0.5*me*l^2*(2*dtheta3_dtheta1_dtheta2*cos(theta1-theta3) +...
    2*dtheta3_dtheta1*(-sin(theta1-theta3))*(-dtheta3_dtheta2) + 2*dtheta3_dtheta1*dtheta3_dtheta1_dtheta2) +...
    0.5*J*2*dtheta3_dtheta1*dtheta3_dtheta1_dtheta2;
  
% H3 = (2*dtheta4_dtheta2*dtheta4_dtheta2_dtheta2*((1/8)*m*l^2+0.5*J) + dtheta4_dtheta2_dtheta2*(0.5*m*l*cos(theta2-theta4)) - ...
%      dtheta4_dtheta2*(0.5*m*l*sin(theta2-theta4)*(1-dtheta4_dtheta2)));  

H3 = 0.5*m*l^2*(dtheta4_dtheta2_dtheta2*cos(theta2-theta4) + dtheta4_dtheta2*(-sin(theta2-theta4))*(1-dtheta4_dtheta2) +...
    0.25*2*dtheta4_dtheta2*dtheta4_dtheta2_dtheta2) + 0.5*J*2*dtheta4_dtheta2*dtheta4_dtheta2_dtheta2;

M33 = (me*(pv^2)/(4*pi^2)) + Jv;
T3 = me*g*(pv/(2*pi));

                     
M = [M11, 0, 0;
    0, M22, 0;
    0, 0, M33];

K = [K1-K2, -K3, 0;
    -H2, H1-H3, 0;
    0, 0, 0];

T = [0; 0; T3];


end
