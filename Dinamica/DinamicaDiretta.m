function [Dtheta1_p,Dtheta2_p,Dtheta1_pt,Dtheta2_pt] = DinamicaDiretta(PKM,theta1_p,theta2_p,theta1,theta2,theta3,theta4,Jexp)
%DINAMICADIRETTA Summary of this function goes here
%   
d = PKM.link.d;
l = PKM.link.l;
m = PKM.link.m;
me = PKM.vite.me;
pv = PKM.vite.pv;

t1p = theta1_p(1);
t2p = theta2_p(1);
t1 = theta1(1);
t2 = theta2(1);
t3 = theta3(1);
t4 = theta4(1);
% Indagare sulle funzioni del tempo...
% Mettendo theta4(t) non funziona ma con theta4 normale si..
syms theta1_p(t) theta2_p(t) theta1(t) theta2(t) theta3(t) theta4(t) thetaV_p(t)
[A,B,C,D] = GetExpression();
J = Jexp;
% Rimosso una J dopo il primo 1/2 perché ottenevo un'espressione a matrice
T = (1/8)*m*l^2*(theta1_p^2+theta2_p^2)+(1/2)*J*(theta1_p^2+theta2_p^2)+(A*theta1_p+B*theta2_p)^2+...
    (C*theta1_p+D*theta2_p)+(1/2)*m*l^2*(theta1_p^2*(sin(theta1)+cos(theta1)+...
    theta1_p*(A*theta1_p+B*theta2_p)*(sin(theta1)*sin(theta3)+cos(theta1)*cos(theta3))+ ...
    (1/4)*(A*theta1_p+B*theta2_p)^2+theta2_p^2*(sin(theta2)+cos(theta2))+ ...
    theta2_p*(C*theta1_p+D*theta2_p)*(sin(theta2)*sin(theta4)+cos(theta2)*cos(theta4)+ ...
    (1/4)*(C*theta1_p+D*theta2_p)^2)))+(1/2)*me*((J(1,1)*theta1_p+J(1,2)*theta2_p)^2+(J(2,1)*theta1_p+...
    J(2,2)*theta2_p)^2+ ((pv)^2/(4*pi^2))*thetaV_p^2);

d1p = diff(T,theta1_p);
d2p = diff(T,theta2_p);
d1 = diff(T,theta1);
d2 = diff(T,theta2);
d3 = diff(T,theta3);
% Andando a sostituire il valore che appariva si riesce
T2 = subs(T,theta4(1),t4);
d4 = diff(T2,theta4);

Dtheta1_p = double(subs(d1p,{theta1_p,theta2_p,theta1,theta2,theta3,theta4},{t1p,t2p,t1,t2,t3,t4}));
Dtheta2_p = double(subs(d2p,{theta1_p,theta2_p,theta1,theta2,theta3,theta4},{t1p,t2p,t1,t2,t3,t4}));
% dubbio sull'ultimo termine
d1pt = diff(d1p,t);
d2pt = diff(d2p,t);
Dtheta1_pt = double(subs(d1pt,{theta1_p,theta2_p,theta1,theta2,theta3,theta4},{t1p,t2p,t1,t2,t3,t4}));
Dtheta2_pt = double(subs(d2pt,{theta1_p,theta2_p,theta1,theta2,theta3,theta4},{t1p,t2p,t1,t2,t3,t4}));

end

