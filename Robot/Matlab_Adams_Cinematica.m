function [] = Matlab_Adams_Cinematica(PKM_PosEF, P, PKM_VelEF, P_p, PKM_AccEF, P_pp, PKM_PosE1, E1, PKM_VelE1, E1_p, PKM_AccE1, E1_pp)

time = linspace(0,1,length(P));

E1x_ad = PKM_PosE1(:,1);
E1x_ad = E1x_ad';
E1x_p_ad = PKM_VelE1(:,1);
E1x_p_ad = E1x_p_ad';
E1x_pp_ad = PKM_AccE1(:,1);
E1x_pp_ad = E1x_pp_ad';

E1y_ad = PKM_PosE1(:,2);
E1y_ad = E1y_ad';
E1y_p_ad = PKM_VelE1(:,2);
E1y_p_ad = E1y_p_ad';
E1y_pp_ad = PKM_AccE1(:,2);
E1y_pp_ad = E1y_pp_ad';

x_ad = PKM_PosEF(:,1);
x_ad = x_ad';
x_p_ad = PKM_VelEF(:,1);
x_p_ad = x_p_ad';
x_pp_ad = PKM_AccEF(:,1);
x_pp_ad = x_pp_ad';

y_ad = PKM_PosEF(:,2);
y_ad = y_ad';
y_p_ad = PKM_VelEF(:,2);
y_p_ad = y_p_ad';
y_pp_ad = PKM_AccEF(:,2);
y_pp_ad = y_pp_ad';

figure
subplot(3,1,1);
plot(time,E1(1,:)-E1x_ad,'color','b','linewidth',1)
title('Errore posizione X E1 Matlab-Adams')
grid on

subplot(3,1,2); 
plot(time,E1_p(1,:)-E1x_p_ad,'color','b','linewidth',1)
title('Errore velocità X E1 Matlab-Adams')
grid on

subplot(3,1,3); 
plot(time,E1_pp(1,:)-E1x_pp_ad,'color','b','linewidth',1)
title('Differenza Accelerazione X E1 Matlab-Adams')
grid on

figure
subplot(3,1,1);
plot(time,E1(2,:)-E1y_ad,'color','b','linewidth',1)
title('Errore posizione Y E1 Matlab-Adams')
grid on

subplot(3,1,2); 
plot(time,E1_p(2,:)-E1y_p_ad,'color','b','linewidth',1)
title('Errore velocità Y E1 Matlab-Adams')
grid on

subplot(3,1,3); 
plot(time,E1_pp(2,:)-E1y_pp_ad,'color','b','linewidth',1)
title('Differenza Accelerazione Y E1 Matlab-Adams')
grid on


figure
subplot(3,1,1);
plot(time,P(1,:)-x_ad,'color','b','linewidth',1)
title('Errore posizione X End-Effector Matlab-Adams')
grid on

subplot(3,1,2); 
plot(time,P_p(1,:)-x_p_ad,'color','b','linewidth',1)
title('Errore velocità X End-Effector Matlab-Adams')
grid on

subplot(3,1,3); 
plot(time,P_pp(1,:)-x_pp_ad,'color','b','linewidth',1)
title('Differenza Accelerazione X End-Effector Matlab-Adams')
grid on


figure
subplot(3,1,1);
plot(time,P(2,:)-y_ad,'color','b','linewidth',1)
title('Errore posizione Y End-Effector Matlab-Adams')
grid on

subplot(3,1,2); 
plot(time,P_p(2,:)-y_p_ad,'color','b','linewidth',1)
title('Errore velocità Y End-Effector Matlab-Adams')
grid on

subplot(3,1,3); 
plot(time,P_pp(2,:)-y_pp_ad,'color','b','linewidth',1)
title('Differenza Accelerazione Y End-Effector Matlab-Adams')
grid on
end

