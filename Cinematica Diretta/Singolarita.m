function [theta1inv,theta2inv] =Singolarita()

PKM = Define_Robot();

l = PKM.link.l;
d = PKM.link.d;
time = linspace(0,1,1000);
%% Primo caso di singolarità CD//DE

x1 = linspace(d-1.8*l,d+1.8*l,1000);
y1 = sqrt(4*l^2-(x1-d).^2);
P1 = [x1;y1];
[theta1inv, theta2inv] = Cinematica_Inversa_Posizione(P1, PKM, zeros(1000,1)', zeros(1000,1)');
figure
plot(time,rad2deg(theta2inv));
hold on
%plot(time,rad2deg(theta2inv));
%% Secondo caso di singolarità AB//BC

x2 = linspace(-d-2*l,-d+2*l,1000);
y2 = sqrt(4*l^2-(x2+d).^2);

%% PLOT
figure
plot(x1,y1)
hold on
plot(x2,y2)

axis equal
grid on
end

