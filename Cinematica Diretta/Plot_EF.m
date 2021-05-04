function [] = Plot_EF(P, P_p, P_pp, PKM_PosEF, PKM_VelEF)
%Plotta posizione, velocità e accelerazione dell'end-effector
% e le confronta conle rispettive derivate approssimate
time = linspace(0,1,length(P));
dtime = diff(time);

%% X
x_ad = PKM_PosEF(:,1);
x_ad = x_ad';
x_p_ad = PKM_VelEF(:,1);
x_p_ad = x_p_ad';
x = P(1,:);
dx = diff(x);
dx_app = dx./dtime;
x_p = P_p(1,:);
dx_p = diff(x_p);
dx_p_app = dx_p./dtime;

figure
subplot(3,1,1);
plot(time,P(1,:),'color','r','linewidth',2)
hold on
plot(time,x_ad,'color','g','linewidth',2)
title('Posizione X End-Effector')
grid on

subplot(3,1,2); 
plot(time,P_p(1,:),'color','r','linewidth',2)
hold on
plot(time(1:(length(time)-1)),dx_app, 'color','b','linewidth',2)
hold on
plot(time,x_p_ad,'color','g','linewidth',2)
title('Velocità X End-Effector')
grid on

subplot(3,1,3); 
plot(time,P_pp(1,:),'color','r','linewidth',2)
title('Accelerazione X End-Effector')
hold on
plot(time(1:(length(time)-1)),dx_p_app, 'color','b','linewidth',2)
grid on

%% Y
y_ad = PKM_PosEF(:,2);
y_ad = y_ad';
y_p_ad = PKM_VelEF(:,2);
y_p_ad = y_p_ad';
y = P(2,:);
dy = diff(y);
dy_app = dy./dtime;
y_p = P_p(2,:);
dy_p = diff(y_p);
dy_p_app = dy_p./dtime;

figure
subplot(3,1,1);
plot(time,P(2,:),'color','r','linewidth',2)
hold on
plot(time,y_ad,'color','b','linewidth',2)
title('Posizione Y End-Effector')
grid on

subplot(3,1,2); 
plot(time,P_p(2,:),'color','r','linewidth',2)
hold on
plot(time(1:(length(time)-1)),dy_app,'color','b','linewidth',2)
hold on
plot(time,y_p_ad,'color','g','linewidth',2)
title('Velocità Y End-Effector')
grid on

subplot(3,1,3); 
plot(time,P_pp(2,:),'color','r','linewidth',3)
hold on
plot(time(1:(length(time)-1)),dy_p_app,'color','b','linewidth',3)
title('Accelerazione Y End-Effector')
grid on

%% Z
z = P(3,:);
dz = diff(z);
dz_app = dz./dtime;
z_p = P_p(3,:);
dz_p = diff(z_p);
dz_p_app = dz_p./dtime;

figure
subplot(3,1,1);
plot(time,P(3,:),'color','r','linewidth',2)
title('Posizione Z End-Effector')
grid on

subplot(3,1,2); 
plot(time,P_p(3,:),'color','r','linewidth',2)
hold on
plot(time(1:(length(time)-1)),dz_app,'color','b','linewidth',2)
title('Velocità Z End-Effector')
grid on

subplot(3,1,3); 
plot(time,P_pp(3,:),'color','r','linewidth',2)
hold on
plot(time(1:(length(time)-1)),dz_p_app,'color','b','linewidth',2)
title('Accelerazione Z End-Effector')
grid on

end

