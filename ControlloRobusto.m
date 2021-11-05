
% Mm e Nm si riescono a ricavare dallo script TestMatriciTheta

Maxnorm =  1.4604e+04;
Minnorm =  9.5631e+03;
alpha = (Maxnorm-Minnorm)/(Maxnorm+Minnorm);
Mhat = 2/(Maxnorm+Minnorm)*eye(2);

% Calcolo Phi(||Csi||)
alpha0 = 0.0005;
alpha1 = 0.002;
alpha2 = -0.000015;

q =  [0.003;-0.002];
qdot = [0.01;-0.0005];

csiH = 1*[q;qdot];
y = norm(csiH);
phi = alpha0+alpha1*y+alpha2*y.^2;
%% Calcolo H,P,Q
% P ? definita positiva
P = eye(4);

Ht = [0,0,-Kp,0; 
    0,0,0,-Kp;
    1,0,-Kd,0;
    0,1,0,-Kd];
H = Ht';

Q = [ (Kd^2 + Kp^2 + Kp)/(2*Kd*Kp),0 1/(2*Kp),0;
    0, (Kd^2 + Kp^2 + Kp)/(2*Kd*Kp),0, 1/(2*Kp); 
    1/(2*Kp),0, (Kp + 1)/(2*Kd*Kp),0;
    0,1/(2*Kp),0,(Kp + 1)/(2*Kd*Kp)];
%% Calcolo D e z, zV
D = [zeros(2);eye(2)];
z = D'*Q*csiH; % Il risultato ? una 2x1 [2x4][4x4][4x1]
zV = z/norm(z);
Qm = pi/2;
% norma di omega = rho
K = [Kp,0,Kd,0; 0,Kp,0,Kd];
%y = theta_pp + K*csiH+omega;
%eta = (eye(2)-M^-1*Mhat)*y-M^-1*ntilde;

Bm = Maxnorm;
b0 = (alpha*Qm+alpha0*Bm)/(1-alpha); %[1]+[1][2,2] ERR
b1 = (alpha*norm(K)+alpha1*Bm)/(1-alpha); %[1]+[2,4][2,2] ERR
b2 = (alpha2*Bm)/(1-alpha); %[1]+[1][2,2] ERR
%rho = (1/(1-alpha))*(alpha*Qm+alpha*norm(K)*norm(CsiH)+Mm*phi);
rho = b0+b1*norm(csiH)+b2*norm(csiH)^2

omega = rho*zV;
