function [theta3risptheta1,theta3risptheta2,theta4risptheta1,theta4risptheta2,dtheta3risptheta1,dtheta3risptheta12,dtheta4risptheta2,dtheta4risptheta12] = GetDerivate34(theta1,theta2,PKM)
%DERIVATATHETA3RISP Summary of this function goes here
%   Detailed explanation goes here
i = 1;
d = PKM.link.d;
l = PKM.link.l;

syms theta2 theta1

A = l^2*(sin(theta2(1,i))-sin(theta1(1,i)))^2 + (-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))))^2;
B = -2*l^2*d*(sin(theta2(1,i))-sin(theta1(1,i)))*(cos(theta2(1,i))+cos(theta1(1,i))) + ...
    l*(sin(theta2(1,i))-sin(theta1(1,i)))*(-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))))*(-2*d -2*l*cos(theta2(1,i))) - ...
    2*l*sin(theta2(1,i))*(-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))))^2;
C = l^2*d^2*(cos(theta2(1,i))+cos(theta1(1,i)))^2 -l*d*(cos(theta2(1,i))+cos(theta1(1,i)))*(-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))))*(-2*d -2*l*cos(theta2(1,i))) + ...
    (d^2 + 2*d*l*cos(theta2(1,i)))*(-2*d - l*(cos(theta2(1,i))-cos(theta1(1,i))))^2;
y = (-B + sqrt(B^2 - 4*A*C))/(2*A);
x = (y*l*(sin(theta2(1,i))-sin(theta1(1,i))) - l*d*(cos(theta2(1,i))+cos(theta1(1,i))))/(-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))));
E1X = -d +l*cos(theta1(1,i));
E1Y = l*sin(theta1(1,i));
E2X = d +l*cos(theta2(1,i));
E2Y = l*sin(theta2(1,i));
% Formule
theta3(1,i) = atan2((y-E1Y)/l, (x-E1X)/l);
theta4(1,i) = atan2((y-E2Y)/l, (x-E2X)/l);
% Derivate prime
theta3risptheta1 = diff(theta3(1,i),theta1);
theta3risptheta2 = diff(theta3(1,i),theta2);

theta4risptheta1 = diff(theta4(1,i),theta1);
theta4risptheta2 = diff(theta4(1,i),theta2);

% Derivate seconde
dtheta3risptheta1 = diff(theta3risptheta1,theta1);
dtheta3risptheta12 = diff(theta3risptheta1,theta2);

dtheta4risptheta2 = diff(theta4risptheta2,theta2);
dtheta4risptheta12 = diff(theta4risptheta2,theta1);

end

