function [Ldm_theta] = Define_ldm(h)


Ldm_theta = CreateLdmComp(4);    % Legge di moto composta composta                 % Rotazione di theta1 in radianti
Ldm_theta.name = 'ldm composta PKM';
Ldm_theta.disp.um = 'deg';
Ldm_theta.time.label= 'tempo';
Ldm_theta.time.um= 's';
% Definizione  di una legge di moto
%first ML
Ldm_theta.vldm{1}.file = 'pol345';
Ldm_theta.vldm{1}.name = 'rise';
Ldm_theta.vldm{1}.h = h;              % Alzata
Ldm_theta.vldm{1}.ta = 0.35;           % Tempo adimensionale

%second ML
Ldm_theta.vldm{2}.file = 'Stop';
Ldm_theta.vldm{2}.name = 'dwell';
Ldm_theta.vldm{2}.h =  0;             % Il robot rimane fermo
Ldm_theta.vldm{2}.ta = 0.2;           % Tempo adimensionale

%third ML
Ldm_theta.vldm{3}.file = 'pol357';
Ldm_theta.vldm{3}.name = 'return';
Ldm_theta.vldm{3}.h = -h;             % Negativo perchè torna indietro
Ldm_theta.vldm{3}.ta = 0.35;           % Tempo adimensionale

%fourth ML
Ldm_theta.vldm{4}.file = 'Stop';
Ldm_theta.vldm{4}.name = 'dwell';
Ldm_theta.vldm{4}.h = 0;              % Il robot rimane fermo
Ldm_theta.vldm{4}.ta = 0.1;           % Tempo adimensionale

Ldm_theta = EvalLdmComp(Ldm_theta,1000)
PlotLdmComp(Ldm_theta)
end

