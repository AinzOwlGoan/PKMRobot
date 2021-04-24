function [theta3risptheta1,theta3risptheta2,theta4risptheta1,theta4risptheta2] = DerivataTheta34(theta1,theta2,PKM)
%DERIVATATHETA3RISP Summary of this function goes here
%   Detailed explanation goes here
i = 1;
d = PKM.link.d;
l = PKM.link.l;
point1 = theta1(1,i)
point2 = theta2(1,i)

syms theta2 theta1

A = l^2*(sin(theta2(1,i))-sin(theta1(1,i)))^2 + (-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))))^2;
B = -2*l^2*d*(sin(theta2(1,i))-sin(theta1(1,i)))*(cos(theta2(1,i))+cos(theta1(1,i))) + ...
    l*(sin(theta2(1,i))-sin(theta1(1,i)))*(-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))))*(-2*d -2*l*cos(theta2(1,i))) - ...
    2*l*sin(theta2(1,i))*(-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))))^2;
C = l^2*d^2*(cos(theta2(1,i))+cos(theta1(1,i)))^2 -l*d*(cos(theta2(1,i))+cos(theta1(1,i)))*(-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))))*(-2*d -2*l*cos(theta2(1,i))) + ...
    (d^2 + 2*d*l*cos(theta2(1,i)))*(-2*d - l*(cos(theta2(1,i))-cos(theta1(1,i))))^2;

% Posizione Y end-effector
y = (-B + sqrt(B^2 - 4*A*C))/(2*A);
% Posizione X end-effector
x = (y*l*(sin(theta2(1,i))-sin(theta1(1,i))) - l*d*(cos(theta2(1,i))+cos(theta1(1,i))))/(-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))));


% X punto E1
E1X = -d +l*cos(theta1(1,i));
% Y punto E1
E1Y = l*sin(theta1(1,i));

% X punto E2
E2X = d +l*cos(theta2(1,i));
% Y punto E2
E2Y = l*sin(theta2(1,i));


theta3(1,i) = atan2((y-E1Y)/l, (x-E1X)/l);
theta3risptheta1 = diff(theta3(1,i),theta1);
theta3risptheta1 = double(subs(theta3risptheta1, {theta1,theta2},{point1,point2}));

theta3risptheta2 = diff(theta3(1,i),theta2);
theta3risptheta2 = double(subs(theta3risptheta2, {theta1,theta2},{point1,point2}));

theta4(1,i) = atan2((y-E2Y)/l, (x-E2X)/l);
theta4risptheta1 = diff(theta4(1,i),theta1);
theta4risptheta1 = double(subs(theta4risptheta1, {theta1,theta2},{point1,point2}));

theta4risptheta2 = diff(theta4(1,i),theta2);
theta4risptheta2 = double(subs(theta4risptheta2, {theta1,theta2},{point1,point2}));
end

