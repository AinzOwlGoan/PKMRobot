function Singolarita(Traiettoria,time,J)

PKM = Define_Robot();

l = PKM.link.l;
d = PKM.link.d;
time = linspace(0,1,1000);
%% Primo e secondo caso di singolarit?? (CD//DE - AB//BC)

x1 = linspace(d-2*l,d+2*l,1000);
y1 = sqrt(4*l^2-(x1-d).^2);
% I valori ottenuti non sempre sono corretti in quanto quando
% l'arcotangente da valori immaginari come output si prende il valore zero.
%[theta1inv, theta2inv] = Cinematica_Inversa_Posizione(P1, PKM, zeros(1000,1)', zeros(1000,1)');
% figure
% plot(time,rad2deg(theta2inv));
% hold on

x2 = linspace(-d-2*l,-d+2*l,1000);
y2 = sqrt(4*l^2-(x2+d).^2);
%% Terzo caso e quarto caso
x3 = d;
y3 = sqrt(-(x3-d)^2);

x4 = -d;
y4 = sqrt(-(x4+d)^2);

%% Quinto caso

theta1s = linspace(deg2rad(0),deg2rad(360),100);
y5p = zeros(length(theta1s),1);
y5n = zeros(length(theta1s),1);
x5p = zeros(length(theta1s),1);
x5n = zeros(length(theta1s),1);
x5m = zeros(length(theta1s),1);
y5m = zeros(length(theta1s),1);
x5mn = zeros(length(theta1s),1);
y5mn = zeros(length(theta1s),1);
%a = -l^2*cos(thetas2)- 2*d*l;
%b = -l^2*sin(thetas2);
%c = l^2-2*d^2-2*d*l*cos(thetas2);
for i=1:length(theta1s)
   
 theta1 = theta1s(i);
 
a = l^2*(sin(theta1))^2+4*d^2-4*d*l*cos(theta1)+l^2*(cos(theta1))^2;
b = 2*l^3*sin(theta1)+2*d*l^2*sin(theta1)*cos(theta1)-2*d*l*sin(theta1)*(2*d-2*l*cos(theta1));
c = l^2*(l^2+d^2*(cos(theta1))^2+2*l*d*cos(theta1))-2*d*l*(l+d*cos(theta1))*(2*d-l*cos(theta1))+d^2-l^2*(2*d-l*cos(theta1))^2;
delta = b^2-4*a*c;
y5 = roots([a b c]);
if delta >=0  
    y5p(i,1) = y5(1);
    y5n(i,1) = y5(2);
    x5p(i,1) = (l^2+y5p(i,1)*l*sin(theta1)+l*d*cos(theta1))/(2*d-l*cos(theta1));
    x5n(i,1) = (l^2+y5n(i,1)*l*sin(theta1)+l*d*cos(theta1))/(2*d-l*cos(theta1));
    sx = -b+l*cos(theta1);
    sy = l*sin(theta1);
    x5m(i,1) = (abs(x5p(i,1))+sx)/2;
    y5m(i,1) = (abs(y5p(i,1))+sy)/2;
    x5mn(i,1) = (x5n(i,1)+sx)/2;
    y5mn(i,1) = (y5n(i,1)+sy)/2;
end 
end
%% Sesto caso
x6 = 0;
y6p = sqrt(l^2-d^2)+l;
y6m = -sqrt(l^2-d^2)-l;

%% Calcolo della Manipolabilit?? 
[Aval,Avet,r] = Manipolabilita(J);
figure
plot(time,r);
title('Manipolabilit??')

[valmax,posmax] = max(r);
tellisse = linspace(0,2*pi,1000);
x1e = Aval(1,1)*cos(tellisse)+Traiettoria(1,1);
y1e = Aval(2,1)*sin(tellisse)+Traiettoria(2,1);
xy1 = Avet(:,1:2)*[x1e;y1e];


x2e = Aval(1,1000)*cos(tellisse)+Traiettoria(1,1000);
y2e = Aval(2,1000)*sin(tellisse)+Traiettoria(2,1000);
xy2 = Avet(:,999:1000)*[x2e;y2e];


x3e = Aval(1,posmax)*cos(tellisse)+Traiettoria(1,posmax);
y3e = Aval(2,posmax)*sin(tellisse)+Traiettoria(2,posmax);
xy3 = Avet(:,posmax-1:posmax)*[x3e;y3e];


%% PLOT DEI PUNTI DI SINGOLARIT??
figure
plot(x1,y1,'linewidth',2,'color',[0, 0.4470, 0.7410])
hold on
plot(x2,y2,'linewidth',2,'color',[0.8500, 0.3250, 0.0980])
hold on
plot(x3,y3,'-o','linewidth',2)
hold on
plot(x4,y4,'-o','linewidth',2)
hold on
%plot(x5p,y5p,'-o','linewidth',2,'color','green')
scatter(x5m,y5m)
hold on
plot(x6,y6p,'-o','linewidth',2,'color',[0.3010, 0.7450, 0.9330])
axis equal
grid on
hold on
%plot(Traiettoria(1,:),Traiettoria(2,:),'linewidth', 2)
%hold on
plot(x1,-y1,'linewidth',2,'color',[0, 0.4470, 0.7410])
hold on
plot(x2,-y2,'linewidth',2,'color',[0.8500, 0.3250, 0.0980])
hold on
plot(x6,-y6p,'-o','linewidth',2,'color',[0.3010, 0.7450, 0.9330])
hold on
scatter(-x5m,y5m,[],[0.4660 0.6740 0.1880])
hold on 
% hold on
% plot(xy1(1,:),xy1(2,:))
% hold on
% plot(xy2(1,:),xy2(2,:))
% hold on
% plot(xy3(1,:),xy3(2,:))
legend('Caso 1','Caso 2', 'Caso 3','Caso 4','Caso 5','Caso 6');

end

