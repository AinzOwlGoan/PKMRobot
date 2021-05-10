function [] = Plot_EF(PKM,P, P_p, P_pp, P_pM)
%Plotta posizione, velocità e accelerazione dell'end-effector
% e le confronta conle rispettive derivate approssimate
ta = PKM.ta;
time = linspace(0,ta,length(P));
dtime = diff(time);

%% X
x = P(1,:);
dx = diff(x);
dx_app = dx./dtime;
x_p = P_p(1,:);
dx_p = diff(x_p);
dx_p_app = dx_p./dtime;


figure
subplot(3,1,1);
plot(time(1,:),P(1,:),'color','r','linewidth',1)
title('Posizione X End-Effector')
grid on

subplot(3,1,2); 
plot(time(1:(length(time)-1)),P_pM(1,1:length(time)-1)-dx_app,'color','r','linewidth',1)
title('Differenza Velocità X End-Effector numerica - analitica')
grid on

subplot(3,1,3); 
plot(time(1:(length(time)-1)),P_pp(1,1:length(time)-1)-dx_p_app,'color','r','linewidth',1)
title('Differenza Accelerazione X End-Effector numerica - analitica')
grid on

%% Y
y = P(2,:);
dy = diff(y);
dy_app = dy./dtime;
y_p = P_p(2,:);
dy_p = diff(y_p);
dy_p_app = dy_p./dtime;

figure
subplot(3,1,1);
plot(time(1,:),P(2,:),'color','b','linewidth',1)
title('Posizione Y End-Effector')
grid on

subplot(3,1,2); 
plot(time(1:(length(time)-1)),P_p(2,1:length(time)-1)-dy_app,'color','b','linewidth',1)
title('Differenza Velocità Y End-Effector numerica - analitica')
grid on

subplot(3,1,3); 
plot(time(1:(length(time)-1)),P_pp(2,1:length(time)-1)-dy_p_app,'color','b','linewidth',1)
title('Differenza Accelerazione Y End-Effector numerica - analitica')
grid on



% %% Z
% z = P(3,:);
% dz = diff(z);
% dz_app = dz./dtime;
% z_p = P_p(3,:);
% dz_p = diff(z_p);
% dz_p_app = dz_p./dtime;
% 
% figure
% subplot(3,1,1);
% plot(time,P(3,:),'color','g','linewidth',2)
% title('Posizione Z End-Effector')
% grid on
% 
% subplot(3,1,2); 
% plot(time(1:(length(time)-1)),P_p(3,1:length(time)-1)-dz_app,'color','g','linewidth',1)
% title('Differenza Velocità Z End-Effector numerica - analitica')
% grid on
% 
% subplot(3,1,3); 
% plot(time(1:(length(time)-1)),P_pp(3,1:length(time)-1)-dz_p_app,'color','g','linewidth',1)
% title('Differenza Accelerazione Z End-Effector numerica - analitica')
% grid on

end

