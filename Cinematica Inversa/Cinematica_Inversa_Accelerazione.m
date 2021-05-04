  function [Theta_pp] = Cinematica_Inversa_Accelerazione(J_p,J,Theta_p,P_pp)
%CINEMATICA_INVERSA_ACCELERAZIONE Summary of this function goes here
%   Detailed explanation goes here

k=1;
for i=1:length(P_pp)
Jinv = J(:,k:k+2)^-1;
Theta_pp(:,i) = Jinv*(P_pp(:,i)- J_p(:,k:k+2)*Theta_p(:,i));
k = k+3;
end
end