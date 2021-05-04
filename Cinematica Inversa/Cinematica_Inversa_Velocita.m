function [Theta_p] = Cinematica_Inversa_Velocita(J,P_p)
%CINEMATICA_INVERSA_VELOCITA Summary of this function goes here
% Pref = P_p(1:3,1);
k=1;
for i=1:length(P_p)
Jinv = J(:,k:k+2)^-1;
% Japprox = (J'*J)^-1*J'
Theta_p(:,i) = Jinv*P_p(:,i);
k = k+3;
end
end

