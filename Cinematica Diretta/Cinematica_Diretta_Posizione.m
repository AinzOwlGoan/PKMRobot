function [P, theta3_new, theta4_new, E1, E2] = Cinematica_Diretta_Posizione(PKM, theta1, theta2,time)
% Input: Posizione theta1, theta2 e parametri robot
% Output: Posizione End-effector, theta3, theta4, posizione E1 e E2
d = PKM.link.d;
l = PKM.link.l;
E1 = zeros(1,length(theta1));
E2 = zeros(1,length(theta1));
theta3 = zeros(1,length(theta1));
theta4 = zeros(1,length(theta1));
P = zeros(1,length(theta1));

% Posizione Z end-effector

for i=1:length(theta1)
A = l^2*(sin(theta2(1,i))-sin(theta1(1,i)))^2 + (-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))))^2;
B = -2*l^2*d*(sin(theta2(1,i))-sin(theta1(1,i)))*(cos(theta2(1,i))+cos(theta1(1,i))) + ...
    l*(sin(theta2(1,i))-sin(theta1(1,i)))*(-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))))*(-2*d -2*l*cos(theta2(1,i))) - ...
    2*l*sin(theta2(1,i))*(-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))))^2;
C = l^2*d^2*(cos(theta2(1,i))+cos(theta1(1,i)))^2 -l*d*(cos(theta2(1,i))+cos(theta1(1,i)))*(-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))))*(-2*d -2*l*cos(theta2(1,i))) + ...
    (d^2 + 2*d*l*cos(theta2(1,i)))*(-2*d - l*(cos(theta2(1,i))-cos(theta1(1,i))))^2;

% Posizione Y end-effector
y = (-B + sqrt(B^2 - 4*A*C))/(2*A);
% Posizione X end-effector
x = (y*l*(sin(theta2(1,i))-sin(theta1(1,i))) - l*d*(cos(theta2(1,i))+cos(theta1(1,i))))q/(-2*d -l*(cos(theta2(1,i))-cos(theta1(1,i))));


% X punto E1
E1X = -d +l*cos(theta1(1,i));
% Y punto E1
E1Y = l*sin(theta1(1,i));

% X punto E2
E2X = d +l*cos(theta2(1,i));
% Y punto E2
E2Y = l*sin(theta2(1,i));

E1(1,i) = E1X;
E1(2,i) = E1Y;
E1(3,i) = 0; 
E2(1,i) = E2X;
E2(2,i) = E2Y;
E2(3,i) = 0; 

        if B^2 - 4*A*C > 0 
           theta3(1,i) = atan2((y-E1Y)/l, (x-E1X)/l);
           theta4(1,i) = atan2((y-E2Y)/l, (x-E2X)/l);
        else
           formatSpec = 'Configurazione impossibile con theta1 = %4.2f e theta2 = %4.2f\n';
           %fprintf(formatSpec, rad2deg(theta1(1,i)), rad2deg(theta2(1,i)))
        end

theta3_new(1,i) = 2*atan((sin(theta2(1,i)) - sin(theta1(1,i)) + ((cos(theta2(1,i)) - cos(theta1(1,i)) + 18/25)^2 - ((cos(theta2(1,i)) - cos(theta1(1,i)) + 18/25)^2/2 +...
    (sin(theta1(1,i)) - sin(theta2(1,i)))^2/2)^2 + (sin(theta1(1,i)) - sin(theta2(1,i)))^2)^(1/2))/(cos(theta2(1,i)) - cos(theta1(1,i)) +...
    (cos(theta2(1,i)) - cos(theta1(1,i)) + 18/25)^2/2 + (sin(theta1(1,i)) - sin(theta2(1,i)))^2/2 + 18/25));

theta4_new(1,i) = -2*atan((sin(theta2(1,i)) - sin(theta1(1,i)) + ((cos(theta2(1,i)) - cos(theta1(1,i)) + 18/25)^2 - ((cos(theta2(1,i)) - cos(theta1(1,i)) + 18/25)^2/2 + (sin(theta1(1,i)) -...
    sin(theta2(1,i)))^2/2)^2 + (sin(theta1(1,i)) - sin(theta2(1,i)))^2)^(1/2))/(cos(theta1(1,i)) - cos(theta2(1,i)) + (cos(theta2(1,i)) - cos(theta1(1,i)) + 18/25)^2/2 +...
    (sin(theta1(1,i)) -sin(theta2(1,i)))^2/2 - 18/25));

% Test theta3 theta4
Err1(1,i) = PKM.link.l*(cos(theta1(1,i)) + cos(theta3(1,i)) - cos(theta2(1,i)) - cos(theta4(1,i))) - 2*PKM.link.d;
Err2(1,i) = sin(theta1(1,i)) + sin(theta3(1,i)) - sin(theta2(1,i)) - sin(theta4(1,i));

% % Test theta3 theta4
% ErrC_new(1,i) = PKM.link.l*(cos(theta1(1,i)) + cos(theta3_new(1,i)) - cos(theta2(1,i)) - cos(theta4_new(1,i))) - 2*PKM.link.d;
% ErrS_new(1,i) = sin(theta1(1,i)) + sin(theta3_new(1,i)) - sin(theta2(1,i)) - sin(theta4_new(1,i));

% Test theta3 theta4
Err_theta3(1,i) = theta3(1,i)-theta3_new(1,i);
Err_theta4(1,i) = theta4(1,i)-theta4_new(1,i);

% Vettore posizione end-effector
P(1,i) = x;
P(2,i) = y;


end
% 
% figure
% subplot(2,1,1);
% plot(time,Err1,'color','k')
% title('Test loop vettoriali coseno')
% grid on
% subplot(2,1,2); 
% plot(time,Err2,'color','k')
% title('Test loop vettoriali seno')
% grid on

% figure
% subplot(2,1,1);
% plot(time,ErrC_new,'color','k')
% title('Test loop vettoriali coseno new')
% grid on
% subplot(2,1,2); 
% plot(time,ErrS_new,'color','k')
% title('Test loop vettoriali seno new')
% grid on

% figure
% subplot(2,1,1);
% plot(time,Err_theta3,'color','b')
% title('Test theta3')
% grid on
% subplot(2,1,2); 
% plot(time,Err_theta4,'color','b')
% title('Test theta4')
% grid on
end
