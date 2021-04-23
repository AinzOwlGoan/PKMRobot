function [Theta_pp] = Cinematica_Inversa_Accelerazione(Jrif_p,Jrif,Theta_p_inv,P_pp)
%CINEMATICA_INVERSA_ACCELERAZIONE Summary of this function goes here
%   Detailed explanation goes here
Prif = P_pp(1:3,1:3);
Jinv = Jrif^-1;
Theta_pp = Jinv*(Prif - Jrif_p*Theta_p_inv);
end

