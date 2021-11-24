
PKM = Define_Robot();

thetaMA = (-228509*pi/2048)/40;
thetaMB = (612*pi/2048)/40;
thetaMA_p = (0*pi/204.8)/40;
thetaMB_p = (0*pi/204.8)/40;

pv = PKM.vite.pv;

J = [pv/(2*pi), pv/(2*pi);0,1]; % 2x2
P1 = [thetaMA;thetaMB]; % 2x1 
V1 = [thetaMA_p;thetaMB_p];

Zp = J*P1; %2x1
Zv = J*V1;

% J2-2 J2-3 input 8 ed input 15
% pag input output 
% mettere solo la logica, guardare valore input, leggere
% valori azionamento, avvitare vite manualmente
% quando arriviamo a FC alto vediamo se i due valori di input cambiano. 
% segnare alto e basso, l'obiettivo è capire come chiedere all'azionamento
% di pubblicare sulla rete il valore di quell'input. Provare solo con
% quello in alto per quanto riguarda l'homing. 

% input 15 è FC ALTO SU VALORE = LOW