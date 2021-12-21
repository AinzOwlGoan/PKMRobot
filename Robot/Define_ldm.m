function [Ldm_theta,time] = Define_ldm(h, ldm)


Ldm_theta = CreateLdmComp(1);    % Legge di moto composta composta                 % Rotazione di theta1 in radianti
Ldm_theta.name = 'ldm composta PKM';
Ldm_theta.disp.um = 'rad';
Ldm_theta.time.label= 'tempo';
Ldm_theta.time.um= 's';
% Definizione  di una legge di moto
%first ML
Ldm_theta.vldm{1}.file = ldm;
Ldm_theta.vldm{1}.name = 'rise';
Ldm_theta.vldm{1}.h = h;              % Alzata
Ldm_theta.vldm{1}.ta = 1;           % Tempo adimensionale

%second ML
Ldm_theta.vldm{2}.file = 'Stop';
Ldm_theta.vldm{2}.name = 'dwell';
Ldm_theta.vldm{2}.h =  0;             % Il robot rimane fermo
Ldm_theta.vldm{2}.ta = 0;           % Tempo adimensionale

%third ML
Ldm_theta.vldm{3}.file = ldm;
Ldm_theta.vldm{3}.name = 'return';
Ldm_theta.vldm{3}.h = -h;             % Negativo perch?? torna indietro
Ldm_theta.vldm{3}.ta = 0;           % Tempo adimensionale

%fourth ML
Ldm_theta.vldm{4}.file = 'Stop';
Ldm_theta.vldm{4}.name = 'dwell';
Ldm_theta.vldm{4}.h = 0;              % Il robot rimane fermo
Ldm_theta.vldm{4}.ta = 0;           % Tempo adimensionale

Ldm_theta = EvalLdmComp(Ldm_theta,1000)
time = Ldm_theta.moto.time;
x = Ldm_theta.moto.data{1}.v;
xd = Ldm_theta.moto.data{2}.v;
xdd = Ldm_theta.moto.data{3}.v;

figure
subplot(311)
plot(time,x,'color','r','linewidth',2)
title('Posizione')
grid on
subplot(312)
plot(time,xd,'color','g','linewidth',2)
title('Velocit??')
grid on
subplot(313)
plot(time,xdd,'color','b','linewidth',2)
title('Accelerazione')
grid on
%PlotLdmComp(Ldm_theta)
end

