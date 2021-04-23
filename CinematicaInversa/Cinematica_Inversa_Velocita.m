function [Theta_p] = Cinematica_Inversa_Velocita(J,P_p)
%CINEMATICA_INVERSA_VELOCITA Summary of this function goes here
Pref = P_p(1:3,1);
Jinv = J^-1
Japprox = (J'*J)^-1*J'

Theta_p = Jinv*Pref;
end

