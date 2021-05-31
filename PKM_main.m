[PKM] = Define_Robot();

% Definizione parametri di test
theta1 = deg2rad(120); % Condizione iniziale posizione Theta1
theta2 = deg2rad(60); %  Condizione iniziale posizione Theta2
thetaV = deg2rad(0); % Angolo proprio della vite
Zv = 0;              % Posizione iniziale vite a riposo

theta1_p = 0; %  Condizione iniziale velocità theta1
theta2_p = 0; %  Condizione iniziale velocità tehta2
thetaV_p = 0; % Velocita thetav di prova
Zv_p = 0;

theta1_pp = 0; %  Condizione iniziale accelerazione theta1
theta2_pp = 0; %  Condizione iniziale accelarazione theta2
thetaV_pp = 0; % Accelerazione thetav di prova
Zv_pp = 0;

%% Legge di moto
[Ldm_theta1,time] = Define_ldm(deg2rad(60), 'pol345') % Definisce una legge di moto data l'alzata in gradi per theta1
[Ldm_theta2,time] = Define_ldm(deg2rad(70), 'pol345') % Definisce una legge di moto data l'alzata in gradi per theta2
[Ldm_thetav,time] = Define_ldm(deg2rad(90), 'pol357') % Definisce una legge di moto per la vite
[Ldm_zv,time] = Define_ldm(-0.1, 'pol357') % Definisce una legge di moto per l'altezza della vite

theta1ldm = theta1 + Ldm_theta1.moto.data{1,1}.v;
theta2ldm = theta2 + Ldm_theta2.moto.data{1,1}.v;
thetavldm = thetaV + Ldm_thetav.moto.data{1,1}.v;
zvldm = Zv + Ldm_zv.moto.data{1,1}.v;

%% Cinematica diretta
 
% Analisi posizione
[P, theta3, theta4, E1, E2] = Cinematica_Diretta_Posizione(PKM, theta1ldm, theta2ldm,time)

Theta = [theta1ldm; theta2ldm]
theta1ldm_p = theta1_p + Ldm_theta1.moto.data{2,1}.v;
theta2ldm_p = theta2_p + Ldm_theta2.moto.data{2,1}.v;
thetavldm_p = thetaV_p + Ldm_thetav.moto.data{2,1}.v;
zvldm_p = Zv_p + Ldm_zv.moto.data{2,1}.v;

% Analisi velocità
[P_p, J, P_pM] = Cinematica_Diretta_Velocita2(PKM, theta1ldm, theta2ldm, theta1ldm_p,theta2ldm_p,P)
Theta_p = [theta1ldm_p;theta2ldm_p]
[theta3_p,theta4_p,J34] = Theta34p(PKM,theta1ldm,theta2ldm,theta3,theta4,theta1ldm_p,theta2ldm_p,time)

% Analisi di accelerazione
theta1ldm_pp = theta1_p + Ldm_theta1.moto.data{3,1}.v;
theta2ldm_pp = theta2_p + Ldm_theta2.moto.data{3,1}.v;
thetavldm_pp = thetaV_p + Ldm_thetav.moto.data{3,1}.v;
zvldm_pp = Zv_pp + Ldm_zv.moto.data{3,1}.v;

Theta_pp = [theta1ldm_pp;theta2ldm_pp]
[P_pp] = Cinematica_Diretta_Accelerazione2(PKM,Theta, Theta_p, Theta_pp, P, P_p)
[theta3_pp,theta4_pp,J34p] = Theta34pp(theta1ldm,theta2ldm,theta3,theta4,theta1ldm_p,theta2ldm_p,...
    theta3_p,theta4_p,theta1ldm_pp, theta2ldm_pp,J34)

[C1_p, C2_p, C1_pp, C2_pp, E1_p, E1_pp, J1, J1p, J2, J2p, J3, J3p, J4, J4p, JE, JEp,P_p34, P_pp34] = Jacobiani(PKM, Theta, Theta_p, theta3, theta4, theta3_p, theta4_p, J34, J34p, P_pp, Theta_pp);

%% Cinematica inversa

[theta1inv,theta2inv] = Cinematica_Inversa_Posizione(P, PKM, theta1ldm, theta2ldm);
Errore_theta1 = theta1ldm - theta1inv;
Errore_theta2 = theta2ldm - theta2inv;

Theta_p_inv = Cinematica_Inversa_Velocita(J,P_p);

%% Dinamica

[C1_PLV, C2_PLV, M, K] = Dinamica_PLV(PKM,theta1ldm_p,theta2ldm_p,theta1ldm_pp,theta2ldm_pp,J1,J2,J3,J4,JE,J34,J1p,J2p,J3p,J4p,JEp,J34p)

%% Dinamica inversa
Condizioni = [theta1ldm(1,1),theta2ldm(1,1),theta1ldm_p(1,1),theta2ldm_p(1,1)]
[ThetaInt,Theta_pInt,Theta_ppInt] =  DinamicaInversa([C1_PLV;C2_PLV],Condizioni);


figure
plot(linspace(0,time(end),1000),C1_PLV,"Color","red")
hold on 
grid on
plot(linspace(0,time(end),1000),C2_PLV,"Color","b")
figure
plot(linspace(0,time(end),1000),Theta_ppInt(1,:),"Color","red")
hold on
grid on
plot(linspace(0,time(end),1000),theta1ldm_pp(1,:),"Color","b")
title('Confronto accelerazioni theta1')
figure
plot(linspace(0,time(end),1000),Theta_ppInt(2,:),"Color","red")
hold on
grid on
plot(linspace(0,time(end),1000),theta2ldm_pp(1,:),"Color","b")
title('Confronto accelerazioni theta2')
figure
plot(linspace(0,time(end),1000),Theta_pInt(1,:),"Color","red")
hold on
grid on
plot(linspace(0,time(end),1000),theta1ldm_p(1,:),"Color","b")
title('Confronto velocità theta1')
figure
plot(linspace(0,time(end),1000),Theta_pInt(2,:),"Color","red")
hold on
grid on
plot(linspace(0,time(end),1000),theta2ldm_p(1,:),"Color","b")
title('Confronto velocità theta2')

figure
plot(linspace(0,time(end),1000),ThetaInt(1,:),"Color","red")
hold on
grid on
plot(linspace(0,time(end),1000),theta1ldm(1,:),"Color","b")
title('Confronto posizione theta1')
figure
plot(linspace(0,time(end),1000),ThetaInt(2,:),"Color","red")
hold on
grid on
plot(linspace(0,time(end),1000),theta2ldm(1,:),"Color","b")
title('Confronto posizione theta2')

%% Singolarità e manipolabilità
Singolarita(P,time)
[autoval,r] = Manipolabilita(J);
figure
plot(time,r)

te = linspace(0,2*pi) ;
ae = 30 ; bi = 15 ;
xi = ae*cos(te) ;
yi = bi*sin(te) ;
plot(xi,yi,'r')