%% Filtro di Kalman esteso
syms theta1 theta2 theta1p theta2p theta1pp theta2pp vk wk
%vk = 1; % varianza
%wk = 1; %varianza
% Prendere le matrici calcolate mediante la dinamica inversa
% x_p = [theta1_pp thetha2_pp theta1_p theta2_p]';
dt = 0.001;
q = [theta1, theta2]';
qp = [theta1p,theta2p]';
qpp = [theta1pp, theta2pp]';
% Identificazione modello
xp = [qpp ; qp];
csi = ones(2,1); % matrice csi px1 con p = 2
%z = [qp; q; csi];
z = [theta1p;theta2p;theta1;theta2;1;1];
csip = zeros(2,1); % matrice di zero con p = 2
%zp = [qpp; qp; csip];
zp = [theta1pp;theta2pp;theta1p;theta2p;0;0];

%% Identificazione metodo
f = z + zp*dt;
Vg = [vk;vk;vk;vk;csip];
zk1 = f+Vg;
% zk1 = f(zk,tauk) + [vk; csip]
% f(zk,tau) = zk + zp(zk,tauk)*dt
Q = mean(Vg*Vg');
%Q = cov(Vg*Vg');
% p = 2
% n = 2
C = [zeros(2,2), eye(2), zeros(2,2)]; % 2x6
W = [wk;wk];
y = C*z + W;
%R = cov(W*W');
R = mean(W*W');
%% Passo di stima
% Espansione taylor bisogna farlo introno a zk|k
zk1t = taylor(zk1,'Order',1);
zk1tMatrix = [ theta1p + theta1pp/1000 + 1,   theta2p + theta2pp/1000;
               theta1p/1000, theta2 + theta2p/1000 + 1;
                         1,                         1;
                           1,                         1];
% Fz = 2*2+2 => 6x6

Fz = zeros(6);

for i = 1:4

    temp = jacobian(f,z(i));
    Fz(:,i) = temp;
end 

zKdatoK = 0;
zpKdatoK = 0;
zK1datoK = zKdatoK + zpKdatoK*dt;

PK1datoK = Fz*PKdatoK*Fz'+Q;

Kk1 = PK1datoK*C'*(C*PK1datoK*C'+R)^-1;

% z k+1|k+1 = zk+1|kk + Kk+1(yk+1-Czk+1|k)
P = zk-zkprec;
zkdatiprec = mean(zkprec);
PkdatoKm1 = Fz*Pkm1*F'+Q;
K0 = PkdatoKm1*C'*(C*PkdatoKm1*C'+R)^-1;
Zkk = zKdatoKm1 + K0*(y-C*zKdatoKm1);
PK1datoK1 = PK1datoK - Kk1*C*PK1datoK;

% dove Kk1 ? il guadagno di kalaman al tempo t k+1
% Z k+1 dato k+1 ? il valore aspettato di zk+1 date k+1 misurazioni

% % Passo predizione
% P0 = zeros(4);
% zk1 = f;
% 
% Ps = Fz*P0*Fz'+cov(Q); % primo passo
% Pk1 = Fz*Ps*Fz' + cov(Q);
% % Passo di stima
% Kk1 = Pk1*C'*(C*Pk1*C' + R)^-1
% zk1k1 = zk1+Kk1*(y-C*zk1);
% Pk1k1 = Pk1-Kk1*C*Pk1;