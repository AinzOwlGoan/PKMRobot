function [P_pp] = Cinematica_Diretta_Accelerazione_1000(PKM, J, J_p, Theta_p, Theta_pp)
%CINEMATICA_DIRETTA_ACCELERAZIONE_1000 
for i=1:3:1000
    
   P_pp(:,i) = J(i:i+2,i:i+2)*Theta_pp(:,i)+J_p(i:i+2,i:i+2)*Theta_p(:,i);
end

