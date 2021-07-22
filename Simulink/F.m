function [csi_p] = F(u,csi)


% time -> external
% settings -> fixed step, tempo max inf, passo 0.001
% metodo di risoluzione DISCRETE
% code generator -> simulink real time
PKM = Define_Robot();
m = PKM.link.m;
me = PKM.vite.me;
I = PKM.link.J;

theta1 = csi(1,1);
theta2 = csi(2,1);
theta1_p = csi(3,1);
theta2_p = csi(4,1);


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
    
C = (m*(J1')*J1p + m*(J2')*J2p + I*(J34')*J34_p + m*(J3')*J3p + m*(J4')*J4p + me*(JE')*JEp);


A = [zeros(2,2),eye(2);
     zeros(2,2),-M^-1*C];
 
B = [zeros(2,2);M^-1]; 
 
csi_p = A*csi+B*u;

end

