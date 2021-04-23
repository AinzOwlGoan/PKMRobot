%% DEFINIZIONE DEL ROBOT
[PKM] = Define_Robot();

% Definizione parametri di test
theta1 = deg2rad(60); % Condizione iniziale posizione Theta1
theta2 = deg2rad(-20); %  Condizione iniziale posizione Theta2
thetaV = deg2rad(720); % Angolo proprio della vite

theta1_p = 0; %  Condizione iniziale velocità theta1
theta2_p = 0; %  Condizione iniziale velocità tehta2
thetaV_p = 0.5; % Velocita thetav di prova

theta1_pp = 0.05; %  Condizione iniziale accelerazione theta1
theta2_pp = 0.05; %  Condizione iniziale accelarazione theta2
thetaV_pp = 0.5; % Accelerazione thetav di prova

Theta = [theta1; theta2; thetaV] % Vettore coordinate posizione iniziale
Theta_p = [theta1_p; theta2_p; thetaV_p] % Vettore coordinate velocità iniziale
Theta_pp = [theta1_pp; theta2_pp; thetaV_pp] % Vettore coordinate accelerazione

%% Legge di moto
% DOMANDA: mancano dei file giusto?
[Ldm_theta1] = Define_ldm(deg2rad(45)) % Definisce una legge di moto data l'alzata in gradi per theta1
[Ldm_theta2] = Define_ldm(deg2rad(60)) % Definisce una legge di moto data l'alzata in gradi per theta2

% Associo a theta1 e theta2 le stesse leggi di moto, ma con valori di angoli di partenza diversi
theta1ldm = theta1 + Ldm_theta1.moto.data{1,1}.v;
theta2ldm = theta2 + Ldm_theta2.moto.data{1,1}.v;

%% Cinematica diretta

% Analisi di posizione
[P, theta3, theta4, E1, E2] = Cinematica_Diretta_Posizione_1000(PKM, theta1ldm, theta2ldm, thetaV)

% Rappresentazione grafica
d = PKM.link.d;
H1 = [-d; 0; 0]; % Coordinate punto H1
H2 = [d; 0; 0]; % Coordinate punto H2

% Plot delle posizioni dei link
PlotRobot(H1,H2,E1,E2,P)

% Analisi di velocità
% DOMANDA: va fatta anche la legge di moto per le velocità?
theta1ldm_p = theta1_p + Ldm_theta1.moto.data{2,1}.v;
theta2ldm_p = theta2_p + Ldm_theta2.moto.data{2,1}.v;
[P_p, J] = Cinematica_Diretta_Velocita_1000(PKM, theta1ldm, theta2ldm, theta1ldm_p,theta2ldm_p,thetaV_p)
Theta_p = [theta1ldm_p;theta2ldm_p;thetaV_p]
x_p = P_p(1,1)
y_p = P_p(2,1)
z_p = P_p(3,1)
% Analisi di accelerazione
theta1ldm_pp = theta1_p + Ldm_theta1.moto.data{3,1}.v;
theta2ldm_pp = theta2_p + Ldm_theta2.moto.data{3,1}.v;
[J_p] = CalcoloJacobiana(PKM, theta1ldm, theta2ldm, theta1ldm_p,theta2ldm_p,theta1ldm_pp,theta2ldm_pp,thetaV_pp)
Theta_pp = [theta1ldm_pp;theta2ldm_pp;thetaV_pp]
P_pp = Cinematica_Diretta_Accelerazione_1000(PKM, J, J_p, Theta_p, Theta_pp)
x_pp = P_pp(1,1)
y_pp = P_pp(2,1)
z_pp = P_pp(3,1)

%% Cinematica Inversa

% Analisi di posizione
[theta1inv,theta2inv] = Cinematica_Inversa_Posizione(P)

% Analisi di velocità
Jrif = J(1:3,1:3);
Theta_p_inv = Cinematica_Inversa_Velocita(Jrif,P_p)
% Analisi di accelerazione
Jrif_p = J_p(1:3,1:3);
Theta_pp_inv = Cinematica_Inversa_Accelerazione(Jrif_p,Jrif,Theta_p_inv,P_pp)

%% Dinamica

