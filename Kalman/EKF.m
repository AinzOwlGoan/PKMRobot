%% Filtro di Kalman esteso
syms theta1 theta2 theta1p theta2p theta1pp theta2pp 
vk = 1; % varianza
wk = 1; %varianza
% Prendere le matrici calcolate mediante la dinamica inversa
% x_p = [theta1_pp thetha2_pp theta1_p theta2_p]';
dt = 0.001;
q = [theta1, theta2]';
qp = [theta1p,theta2p]';
qpp = [theta1pp, theta2pp]';
% Identificazione modello
xp = [qpp ; qp];
csi = ones(2);
z = [qp, q, csi]';
csip = zeros(2); % matrice di zero px1
zp = [qpp, qp, csip]';


%% Identificazione metodo
f = z + zp*dt;
Vg = [vk 0 ; 0 vk;csip];
zk1 = f+Vg;
% zk1 = f(zk,tauk) + [vk; csip]
% f(zk,tau) = zk + zp(zk,tauk)*dt
%Q = mean(Vg*Vg');
Q = cov(Vg*Vg');
C = [zeros(1,1), eye(1), zeros(1,2)];
y = C*z + wk;
R = cov(wk*wk');

%% Passo di stima
% Espansione taylor bisogna farlo introno a zk|k
zk1t = taylor(zk1,'Order',1);
zk1tMatrix = [ theta1p + theta1pp/1000 + 1,   theta2p + theta2pp/1000;
               theta1p/1000, theta2 + theta2p/1000 + 1;
                         1,                         1;
                           1,                         1];
Jf1_qp = jacobian(f(1,:),z(1,:));
Jf1_q = jacobian(f(1,:),z(2,:));
Jf1_o = zeros(2,2);
Jf1 = [Jf1_qp; Jf1_q];

Jf2_qp = jacobian(f(2,:),z(1,:));
Jf2_q = jacobian(f(2,:),z(2,:));
Jf2_o = zeros(2,2);
Jf2 = [Jf2_qp;  Jf2_q];

Fz = [Jf1, Jf2];
% Passo predizione
P0 = zeros(4);
zk1 = f;

Ps = Fz*P0*Fz'+cov(Q); % primo passo
Pk1 = Fz*Ps*Fz' + cov(Q);
% Passo di stima
Kk1 = Pk1*C'*(C*Pk1*C' + R)^-1
zk1k1 = zk1+Kk1*(y-C*zk1);
Pk1k1 = Pk1-Kk1*C*Pk1;