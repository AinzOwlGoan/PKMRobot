function Singolarita(Traiettoria,time)

PKM = Define_Robot();

l = PKM.link.l;
d = PKM.link.d;
time = linspace(0,1,1000);
%% Primo e secondo caso di singolarità (CD//DE - AB//BC)

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

thetas2 = linspace(deg2rad(5),deg2rad(85),1000);

a = -l^2*cos(thetas2)- 2*d*l;
b = -l^2*sin(thetas2);
c = l^2-2*d^2-2*d*l*cos(thetas2);

theta1p = 2*atan2(b+sqrt(a.^2+b.^2+c.^2),a+c);
theta1m = 2*atan2(b-sqrt(a.^2+b.^2+c.^2),a+c);

[P, t3, t4, ~, ~] = Cinematica_Diretta_Posizione(PKM, theta1p, thetas2,time);
%animation(d, l ,theta1p,thetas2, t3, t4)

[P2, t3m, t4m, ~, ~] = Cinematica_Diretta_Posizione(PKM, theta1m, thetas2,time);
%animation(d, l ,theta1m,thetas2, t3m, t4m)

% Traiettoria di singolarità punto 5
x5 = -d+l*cos(theta1m)+l*cos(t3m);
y5 = l*sin(theta1m)+l*sin(t3m);

%% Sesto caso
x6 = 0;
y6p = sqrt(l^2-d^2)+l;
y6m = -sqrt(l^2-d^2)-l;

%% PLOT DEI PUNTI DI SINGOLARITà
figure
plot(x1,y1,'linewidth',2)
hold on
plot(x2,y2,'linewidth',2)
hold on
plot(x3,y3,'-o','linewidth',2)
hold on
plot(x4,y4,'-o','linewidth',2)
hold on
plot(x5,y5,'linewidth',2)
hold on
plot(x6,y6p,'-o','linewidth',2)
axis equal
grid on
hold on
plot(Traiettoria(1,:),Traiettoria(2,:),'linewidth', 2)
legend('Caso 1','Caso 2', 'Caso 3','Caso 4','Caso 5','Caso 6','Traiettoria originale');
% 
% figure
% % Caso 5 segno +
% plot(P(1,:),P(2,:),'color','r');
% grid on
% hold on
% % Caso 5 segno -
% plot(P2(1,:),P2(2,:),'color','b');
% hold on
% % Caso 6 segno +
% plot(P0(1,:),P0(2,:),'color','r');
% grid on
% hold on
% % Caso 6 segno -
% plot(P20(1,:),P20(2,:),'color','b');
% legend ('p1+','p1-','p2+','p2-')
end

