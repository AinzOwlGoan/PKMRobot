function [Theta_pSucc,Theta_Succ,Theta_pp] = SoluzioniEquazioniDifferenziali(Cond,Tau)
% Definizioni condizioni iniziali
PKM = Define_Robot();
m = PKM.link.m;
me = PKM.vite.me;
I = PKM.link.J;

theta1 = Cond(1);
theta2 = Cond(2);
theta1_p = Cond(3);
theta2_p = Cond(4);
Theta = [theta1;theta2];
Theta_p = [theta1_p;theta2_p];

theta3  = 2*atan((sin(theta2) - sin(theta1) + ((cos(theta2) - cos(theta1 ) + 18/25)^2 - ((cos(theta2) - cos(theta1) + 18/25)^2/2 +...
    (sin(theta1) - sin(theta2))^2/2)^2 + (sin(theta1) - sin(theta2))^2)^(1/2))/(cos(theta2) - cos(theta1) +...
    (cos(theta2) - cos(theta1) + 18/25)^2/2 + (sin(theta1) - sin(theta2))^2/2 + 18/25));

theta4  = -2*atan((sin(theta2) - sin(theta1) + ((cos(theta2) - cos(theta1) + 18/25)^2 - ((cos(theta2) - cos(theta1) + 18/25)^2/2 + (sin(theta1) -...
    sin(theta2))^2/2)^2 + (sin(theta1) - sin(theta2 ))^2)^(1/2))/(cos(theta1) - cos(theta2) + (cos(theta2) - cos(theta1) + 18/25)^2/2 +...
    (sin(theta1) -sin(theta2))^2/2 - 18/25));

[theta3_p,theta4_p,J34] = Theta34pGen(theta1,theta2,theta3,theta4,theta1_p,theta2_p);
[J34_p] = Theta34ppGen(theta1,theta2,theta3,theta4, theta1_p,theta2_p,theta3_p,theta4_p);
[J1, J1p, J2, J2p, J3, J3p, J4, J4p, JE, JEp] = JacobianiGen(PKM, theta1,theta2,theta3,theta4,theta1_p,theta2_p,theta3_p,theta4_p,J34,J34_p);

M = (I*eye(2) + m*(J1')*J1 + m*(J2')*J2 + I*(J34')*J34 + m*(J3')*J3 + m*(J4')*J4 + me*(JE')*JE);
    
K = (m*(J1')*J1p + m*(J2')*J2p + I*(J34')*J34_p + m*(J3')*J3p + m*(J4')*J4p + me*(JE')*JEp);

Theta_pp = M^-1*(-K*Theta_p+Tau);

dt = 0.002;
Theta_pSucc = Theta_p+Theta_pp*dt;
Theta_Succ = Theta+Theta_p*dt;
end

