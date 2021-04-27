function [Dtheta1_p] = EnergiaCinetica(PKM,theta1_p,theta2_p,theta1,theta2,theta3,theta4,thetaV_pp,theta1_pp)
%ENERGIACINETICA Summary of this function goes here
%   Detailed explanation goes here
d = PKM.link.d;
l = PKM.link.l;
m = PKM.link.m;
me = PKM.vite.me;
pv = PKM.vite.pv;
J = PKM.link.J;
g = 9.81;
t1p = theta1_p(1);
t2p = theta2_p(1);
t1 = theta1(1);
t2 = theta2(1);
t3 = theta3(1);
t4 = theta4(1);
t1pp = theta1_pp;
% theta3_p = theta3primo*theta1_p
% theta4_p = theta4primo*theta2__p

[theta3risptheta1,theta3risptheta2,theta4risptheta1,theta4risptheta2,dtheta3risptheta1,dtheta3risptheta12,dtheta4risptheta2,dtheta4risptheta12] = GetDerivate34(theta1,theta2,PKM);

theta3primo = theta3risptheta1;
theta3secondo = dtheta3risptheta1;
theta4primo = theta4risptheta2;
theta4secondo = dtheta4risptheta2;
d4psd1 = dtheta4risptheta12; % derivata di theta4 primo rispetto a theta1
dt3st2 = theta3risptheta2; 
d3pst2 = dtheta3risptheta12; % derivata di theta3 rispetto a theta2
syms theta1_p(t) theta2_p(t) theta1(t) theta2(t) theta3(t) theta4(t) thetaV_p(t) theta1_pp(t) theta2_pp(t)


T = theta1_p^2*((1/8)*m*l^2+(1/2)*J+(1/2)*m*l^2+1/2*me*l^2)+ ...
    theta2_p^2*((1/8)*m*l^2+(1/2)*J+(1/2)*m*l^2)+ ...
    theta3risptheta1^2*((1/8)*m*l^2+(1/2)*J+(1/2)*me*l^2)+ ... %t3/t1^2
    theta4risptheta2^2*((1/8)*m*l^2+(1/2)*J)+ ... % t4/t2^2
    theta3risptheta1*l*cos(theta1-theta3)*((1/2)*m+me)+ ... % t3/t1
    theta4risptheta2*(1/2)*m*l*cos(theta2-theta4)+ ...% t4/t2
    thetaV_p^2*(pv)^2/(4*pi^2)*(1/2)*me;
% posso riscrivere theta1_p*theta3_p come diff(theta3,theta1)
Trisptheta1rispt = 2*theta1_pp*((1/8)*m*l^2+0.5*J+0.5*me^2+0.5*me*l^2+theta3primo^2*((1/8)*m*l^2+0.5*J+me*l^2)+...
                   theta3primo*(l*cos(theta1-theta3)*(0.5*m+me)))+...
                   2*(2*theta3primo*theta3secondo*theta1_p*((1/8)*m*l^2+0.5*J)+...
                               theta3secondo*theta1_p*(l*cos(theta1-theta3)*(0.5*m+me))-...
                               theta3primo*l*(0.5*m+me)*sin(theta1-theta3)*theta1_p*(1-theta3primo));
                           
Trisptheta1_p = theta1_p^2*(2*theta3primo*theta3secondo*((1/8)*m*l^2+0.5*J+0.5*me*l^2) +...
                          theta3secondo*l*(cos(theta1-theta3)*(0.5*m+me)) - ...
                          theta3primo*l*(0.5*m+me)*sin(theta1-theta3)*(1-theta3primo))+...
              theta2_p^2*(2*theta4primo*(d4psd1)*((1/8)*m*l^2+0.5*J) +...
                          (d4psd1)*(0.5*me*cos(theta2-theta4)) - ...
                          theta4primo*0.5*me*sin(theta2-theta4)*(-theta4risptheta1));
% Lagrangiana theta1
% M11*theta1_pp + (k1-k2)*theta1_p^2 - k3*theta2_p^2 = Qtheta1

Trisptheta2_prispt =  2*theta2_pp*((1/8)*m*l^2+0.5*J+0.5*me^2+0.5*me*l^2+theta4primo^2*((1/8)*m*l^2+0.5*J+me*l^2)+...
                   theta4primo*(l*cos(theta2-theta4)*(0.5*m+me)))+...
                   2*(2*theta4primo*theta4secondo*theta2_p*((1/8)*m*l^2+0.5*J)+...
                               theta4secondo*theta2_p*(l*cos(theta2-theta4)*(0.5*m+me))-...
                               theta4primo*l*(0.5*m+me)*sin(theta2-theta4)*theta2_p*(1-theta4primo));
                           
                           
Trisptheta2rispt = theta1_p^2*(2*theta3primo*(d3pst2)*((1/8)*m*l^2+0.5*J+0.5*me*l^2) +...
                          (d3pst2)*l*(cos(theta1-theta3)*(0.5*m+me)) - ...
                          theta3primo*(-l)*sin(theta1-theta3)*(-dt3st2)*(0.5*m+me))+...                        
              theta2_p^2*(2*theta4primo*theta4secondo*((1/8)*m*l^2+0.5*J) +...
                          theta4secondo*(0.5*me*cos(theta2-theta4)) - ...
                          theta4primo*(-0.5*me*sin(theta2-theta4)*(1-theta4primo)));                        
% M22*theta2_pp - h2*theta1_p^2+(h1-h3)*theta2_p^2 = Qtheta2
Trispthetav_prispt = (me*(pv^2)/(4*pi^2))*thetaV_pp;
Trispthetav = 0;
Urispthetav = m*g*(pv/(2*pi));
                     
%Dtheta1_p = subs(Trisptheta1rispt,{theta1_p,theta2_p,theta1,theta2,theta3,theta4,theta1_pp},{t1p,t2p,t1,t2,t3,t4,t1pp});

Dtheta1_p = subs(Trisptheta1rispt,theta1_pp,t1p);

end

