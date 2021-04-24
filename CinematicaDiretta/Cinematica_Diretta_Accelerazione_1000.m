function [P_pp] = Cinematica_Diretta_Accelerazione_1000(PKM, J, J_p, Theta_p, Theta_pp)
%CINEMATICA_DIRETTA_ACCELERAZIONE_1000 
for i=1:3:1000
    
    subJ = J(:,i:i+2);
    subJ_p = J_p(:,i:i+2);
    
   P_pp(:,i) = subJ*Theta_pp(:,i)+subJ_p*Theta_p(:,i);
    
end

