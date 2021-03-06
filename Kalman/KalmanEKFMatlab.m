% velocit? [asse B, asse A]
%% Definizione dati
dt = 0.001;
deltaXi = 1e-15;
F = zeros(4);
Ident = eye(4);

v1 = 1e-2*eye(4);
v2 = 1e-5*eye(4);
v12 = cov(v1*v2);

H = eye(4);
P = eye(4);
e = zeros(4,1);
pos = [pB(1);pA(1)];
vel = [Vb(1);Va(1)];
xhat = [1.75; 1.39; 0;0];
VelFinal = zeros(2,3001);
eFinal = zeros(4,3001);
%% Calcolo 
for j = 1:length(C1)
       pos = [pB(j);pA(j)];
       vel = [Vb(j);Va(j)];
       
    for i = 1:4
      fp = [pos;vel]+deltaXi*Ident(:,i);
      fm = [pos;vel]-deltaXi*Ident(:,i);
      
      [Mp,Kp] = DinamicaKalman(fp);
      [Mm,Km] = DinamicaKalman(fm);
      
      
phip = [zeros(2), eye(2); zeros(2), -Mp^-1*Kp]*fp + [zeros(2); Mp^-1]*[C1(j);C2(j)];
phim = [zeros(2), eye(2); zeros(2), -Mm^-1*Km]*fm + [zeros(2); Mm^-1]*[C1(j);C2(j)];

Fp = fp + phip*dt;
Fm = fm + phim*dt;

F(:,i) = (Fp-Fm)/(2*deltaXi);
    end
    
    K = (F*P*H'+v12)*(H*P*H'+v2)^-1;

    Pt1 = F*P*F'-K*(H*P*H'+v2)*K'+v1;
    
   
    xhatt1 = F*xhat+K*e;

    yhatt1 = H*xhatt1;    
    
    %% sovrascrivo dati per passi successivi al primo
    e = [pos;vel] - yhatt1;
    P = Pt1;
    pos = [xhatt1(1);xhatt1(2)];
    vel = [xhatt1(3);xhatt1(4)];
    xhat = xhatt1;
    
    VelFinal(:,j) = [xhatt1(3);xhatt1(4)]; 
    eFinal(:,j) = e;
end

%% Plot velocit?
tempo = linspace(0,3,3001);
plot(tempo,VelFinal(1,:),'color','b')
hold on
plot(tempo,Vb,'color','r')
legend('Kalman','Riferimento')
figure
plot(tempo,eFinal(1,:))
hold on
plot(tempo,eFinal(3,:))
legend('Errore pos','Errore vel')
