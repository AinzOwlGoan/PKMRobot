%22,5 inizio tempo utile
clear;
clc;
load('Valori.mat');
% togliere 0.3 sec, durata totale 2.7 sec

t= linspace(0,3,3000);
y= theta1R;

yPref = theta1pS;
ypReal = theta1pR;

errY = zeros(10,2802);
errF = zeros(1,2802);
VelFinale = zeros(10,2802);
Vf = zeros(1,2802);

T=0.001;
A = [ 1 T ;  0 1 ];
B = [ 0 ; T ];
C = [ 1 0 ];

% process variance
presetQ = [1e-1,1e-2,1e-3,1e-4,1e-5,1e-6,1e-7,1e-8,1e-9,1e-10];
presetQ2 = [1e4,1e3,1e2,1e1,1e0,1e-1,1e-2,1e-3,1e-4,1e-5];
q1val = 0;
q2val = 0;
% sensor noise variance //non cambia
presetR = [1e-15,1e-6,1e-7,1e-8,1e-9,1e-10,1e-11,1e-12,1e-13,1e-14];
rval = 0;
% initial state estimate variance
P0 = [ 1 0 %non cambia nulla
       0 1 ];
   
       % Output filtro
my = 100;
mval = 0;
myVarianza = 100;

for Qj = 1:10 

    for Qi = 1:10

       Q = [presetQ(Qi),0;0,presetQ2(Qj)];

        for Ri = 1:10
        
        R = presetR(Ri);    
        % Costruzione filtro
        Pm = P0;
        for i = 1:1000
         % step misura
         S = C*Pm*C' + R; % 
         K = Pm*C'*inv(S);
         Pp = Pm - K*C*Pm;
         % step predizione
         Pm = A*Pp*A' + Q;
        end

        % Avvio del filtro per la creazione di output d'esempio
        sem = [ 0 0 ]';
        for i = 1:length(y)
         % passo misura
         sep = sem + K*(y(i)-C*sem);
         pose(i) = sep(1);
         vele(i) = sep(2);	   
         % passo predizione
         sem = A*sep + B*y(i);
        end

        ii = 1:length(y(200:end));
        vele = vele(200:end);
        yprefTagliata = yPref(200:end)';
        errY(Ri,:) = yprefTagliata-vele;
        VelFinale(Ri,:) = vele;
        end %END R

        for i = 1:10
             varianza = sum((errY(i,:)-mean(errY(i,:))).^2)/length(errY);
            if (varianza <  myVarianza)
                myVarianza = varianza;
                q1V = presetQ(Qi);
                q2V = presetQ2(Qj);
                rV = presetR(i);
            end
            
            if(mean(abs(errY(i,:)))< my)
                my = mean(abs(errY(i,:)));
                mval = i;
                q1val = presetQ(Qi);
                q2val = presetQ2(Qj);
                rval = presetR(mval);
                errF = errY(mval,:);
                Vf = VelFinale(mval,:);
                
            end
        end

    end 
end 
figure
plot(ii,errF)
% plot dei filtri
figure
plot(ii,Vf,'b',ii,ypReal(200:end)','r')
hold on 
plot(yPref(200:end),'k','linewidth',2)
legend('Velocita KF','Velocita reale','Setpoint')
%xlabel('sample (100Hz)')
rval 
q1val
q2val
myVarianza