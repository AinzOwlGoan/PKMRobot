%% DEFINIZIONE DEL ROBOT
[PKM] = Define_Robot();

[PKM] = Define_Robot();

% Definizione parametri di test
theta1 = deg2rad(90); % Condizione iniziale posizione Theta1
theta2 = deg2rad(90); %  Condizione iniziale posizione Theta2
thetaV = deg2rad(720); % Angolo proprio della vite

theta1_p = 0; %  Condizione iniziale velocità theta1
theta2_p = 0; %  Condizione iniziale velocità tehta2
thetaV_p = 0; % Velocita thetav di prova

theta1_pp = 0; %  Condizione iniziale accelerazione theta1
theta2_pp = 0; %  Condizione iniziale accelarazione theta2
thetaV_pp = 0; % Accelerazione thetav di prova

%% Legge di moto
[Ldm_theta1] = Define_ldm(3, 'Sin') % Definisce una legge di moto data l'alzata in gradi per theta1
[Ldm_theta2] = Define_ldm(1, 'Sin') % Definisce una legge di moto data l'alzata in gradi per theta2
[Ldm_thetav] = Define_ldm(2, 'pol357') % Definisce una legge di moto per la vite

theta1ldm = theta1 + Ldm_theta1.moto.data{1,1}.v;
theta2ldm = theta2 + Ldm_theta2.moto.data{1,1}.v;
thetavldm = thetaV + Ldm_thetav.moto.data{1,1}.v;

Theta = [theta1ldm; theta2ldm; thetavldm]
%% Cinematica diretta

% Analisi di posizione
[P, theta3, theta4, E1, E2] = Cinematica_Diretta_Posizione(PKM, theta1ldm, theta2ldm, thetavldm)

% Rappresentazione grafica
d = PKM.link.d;
H1 = [-d; 0; 0]; % Coordinate punto H1
H2 = [d; 0; 0]; % Coordinate punto H2

% Plot delle posizioni dei link
%PlotRobot(H1,H2,E1,E2,P)

% Analisi di velocità
% DOMANDA: va fatta anche la legge di moto per le velocità?
theta1ldm_p = theta1_p + Ldm_theta1.moto.data{2,1}.v;
theta2ldm_p = theta2_p + Ldm_theta2.moto.data{2,1}.v;
thetavldm_p = thetaV_p + Ldm_thetav.moto.data{2,1}.v;

[P_p, J] = Cinematica_Diretta_Velocita2(PKM, theta1ldm, theta2ldm, theta1ldm_p,theta2ldm_p,thetavldm_p,P)
Theta_p = [theta1ldm_p;theta2ldm_p;thetavldm_p]
[theta3_p,theta4_p,J34] = Theta34p(theta1ldm,theta2ldm,theta3,theta4,theta1ldm_p,theta2ldm_p)

% Analisi di accelerazione
theta1ldm_pp = theta1_p + Ldm_theta1.moto.data{3,1}.v;
theta2ldm_pp = theta2_p + Ldm_theta2.moto.data{3,1}.v;
thetavldm_pp = thetaV_p + Ldm_thetav.moto.data{3,1}.v;

% % Test
% figure
% plot(time, theta1ldm_pp,'color','r')
% hold on
% plot(time,sqrt(theta1ldm_p.^4 + theta1ldm_pp.^2),'color','b')
% [J_p] = CalcoloJacobiana(PKM, theta1ldm,theta2ldm, theta1ldm_p,theta2ldm_p,P_p,P)

Theta_pp = [theta1ldm_pp;theta2ldm_pp;thetavldm_pp]
[P_pp] = Cinematica_Diretta_Accelerazione2(PKM,Theta, Theta_p, Theta_pp, P, P_p)
[theta3_pp,theta4_pp] = Theta34pp(theta1ldm,theta2ldm,theta3,theta4,theta1ldm_p,theta2ldm_p,...
    theta3_p,theta4_p,theta1ldm_pp, theta2ldm_pp)
%% Cinematica Inversa

% Analisi di posizione
[theta1inv,theta2inv] = Cinematica_Inversa_Posizione(P, PKM, theta1ldm, theta2ldm);
Errore_theta1 = theta1ldm - theta1inv;
Errore_theta2 = theta2ldm - theta2inv;
time = linspace(0,1,length(Theta_p));

figure
subplot(2,1,1);
plot(time,Errore_theta1,'color','b')
title('Errore theta1')
grid on
subplot(2,1,2); 
plot(time,Errore_theta2,'color','b')
title('Errore theta2')
grid on
% Analisi di velocità
Theta_p_inv = Cinematica_Inversa_Velocita(J,P_p);
% Analisi di accelerazione
load PKM_PosEF
load PKM_VelEF
Plot_EF(P, P_p, P_pp,PKM_PosEF,PKM_VelEF)
%% Dinamica

Qtot = zeros(3,length(P));
for i=1:length(P)
[M, K, TN] = Matrici_Lagrange(PKM, theta1ldm(1,i), theta2ldm(1,i));
Q = M*Theta_pp(:,i) + K*(Theta_p(:,i).^2) + TN ;
Qtot(:,i) = Q;
end

[C1, C2] = Dinamica(PKM,theta1ldm,theta2ldm,theta3,theta4,theta1ldm_p,theta2ldm_p,theta3_p,theta4_p,...
    theta1ldm_pp,theta2ldm_pp,theta3_pp,theta4_pp,thetavldm_pp)

load PKM_Coppie
C1_adams = PKM_Coppie(:,1);
C2_adams = PKM_Coppie(:,2);
C1_adams = C1_adams';
C2_adams = C2_adams';

load PKM_Acc
[C1_PLV, C2_PLV] = Dinamica_PLV(PKM,theta1ldm,theta2ldm,theta3,theta4,theta1ldm_p,theta2ldm_p,theta3_p,theta4_p,...
    theta1ldm_pp,theta2ldm_pp,theta3_pp,theta4_pp,J34,PKM_Acc)

figure
plot(time,Qtot(1,:),'color','r','linewidth',3)
hold on
plot(time,C1(1,:),'color','b','linewidth',3)
hold on
plot(time,C1_PLV(1,:),'color','k','linewidth',3)
hold on
plot(time,C1_adams(1,:),'color','g','linewidth',3)
title('Coppia theta1')
legend('C1 Lagrange','C1 Azioni interne','C1 PLV','C1 Adams')
grid on

figure
plot(time,Qtot(2,:),'color','r','linewidth',3)
hold on
plot(time,C2(1,:),'color','b','linewidth',3)
hold on
plot(time,C2_PLV(1,:),'color','k','linewidth',3)
hold on
plot(time,C2_adams(1,:),'color','g','linewidth',3)
title('Coppia theta2')
legend('C2 Lagrange','C2 Azioni interne','C2 PLV','C2 Adams')
grid on

figure
plot(time,Qtot(3,:),'color','r','linewidth',3)
title('Coppia thetaV')
grid on