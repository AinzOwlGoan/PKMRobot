% 19.76 - 20.76
% Proseguo tenendo i riferimenti e ricavando i parametri

% velocit? filtrate e derivate
 theta1pF = theta1pFiltro.Data(17000:20000);
 theta2pF = theta2pFiltro.Data(17000:20000);
% 
% % prendo posizioni Real e Setpoint
 theta1R = theta1Real.Data(17000:20000);
 theta2R = theta2Real.Data(17000:20000);
 theta1S = theta1Set.Data(17000:20000);
 theta2S = theta2Set.Data(17000:20000);
% 
% % prendo velocit? real e Setpoint
 theta1pR = theta1pR.Data(17000:20000);
 theta2pR = theta2pR.Data(17000:20000);
 theta1pS = theta1pSet.Data(17000:20000);
 theta2pS = theta2pSet.Data(17000:20000);


save('ValoriCerchio3.mat', 'theta1pF','theta2pF', 'theta1R','theta2R','theta1S','theta2S','theta1pR','theta2pR','theta1pS','theta2pS')