
% Intervallo di riferimento 16.3-17.3 cerchio raggio 5 in 1 secondo
%% Inserimento input
% posizione B = theta1 , posizioneA = theta2

% La lunghezza di tutti i campioni ? 1001
time = linspace(0,1,1001);
% Posizioni
PosA = theta2R.Data(21850:22850);
SpA = theta2Sp.Data(21850:22850);
errPA = SpA-PosA;

PosB = theta1R.Data(21850:22850);
SpB = theta1Sp.Data(21850:22850);
errPB = SpB-PosB;
% Velocit?
VelA = theta2pR.Data(21850:22850);
SpvA = theta2pSet.Data(21850:22850);
errVA = SpvA-VelA;

VelB = theta1pR.Data(21850:22850);
SpvB = theta1pSet.Data(21850:22850);
errVB = SpvB-VelB;
%% Struttura filtro di Kalman

% [kalmf,L,P] = kalman(sys,Q,R,N)
% sys ? il sistema degli stati composto da 
% A, BG, C, DH, in tempo continuo possiamo vedere come:
% dot(x)=Ax+Bu+Gw??
% y=Cx+Du+Hw+v

% ssest(data,ordine), posso stimare un modello in base a dei dati

% Q = covarianza del rumore di processo, [Nw,Nw], con Nw numero di input
% del modello, Kalman utilizza Q per determinare quali degli input saranno
% rumori

% R = misura della covarianza del rumore, [Ny,Ny], con Ny il numero di
% output. La i misua facendo considerazioni sulle propriet? di rumore del
% sistema

% N = cross-covarianza, [Ny,Nw], kalma assume che il rumore di processo W e
% il rumore misurato V soddisfano N = E(WV), se le due sorgenti di rumore
% non sono correlate N = 0, altrimenti bisogna determinare il valore.

%% Idea


sysVa = ssest(VelA,4);

Ava = [   -0.001822   -0.009247   -0.001082     0.01254;
       0.01349    -0.05608      0.1645      -0.249;
     -0.0009005    -0.01093     -0.0367      0.6589;
        0.00144     0.04097     -0.1307    -0.01502];
Bva = zeros(4,1);
Cva = [36.6645   -0.2377    0.0059    0.0179];
Dva = 0;

vAtest = ss(Ava,Bva,Cva,Dva);

sysSetVa = ssest(SetvA,4);
Asetva = [  -0.0003   -0.0093    0.0003   -0.0002;
            0.0104   -0.0002   -0.0063    0.0001;
           -0.0001    0.0078   -0.0020    0.0295;
           -0.0001    0.0003   -0.0079   -0.0103];
Bsetva = zeros(4,1);
Csetva = [36.7660   -0.1749    0.0007    0.0000];
Dsetva = 0;

vaSettest = ss(Asetva,Bsetva,Csetva,Dsetva);
    
Tot = append(vAtest,vaSettest);
Q = eye(2);
R = eye(2);
N = 0;
[kalmf,L,P] = kalman(Tot,Q,R,N);



