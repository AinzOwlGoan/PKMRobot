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
 
[P, theta3, theta4, E1, E2] = Cinematica_Diretta_Posizione(PKM, theta1ldm, theta2ldm,time)

Theta = [theta1ldm; theta2ldm]