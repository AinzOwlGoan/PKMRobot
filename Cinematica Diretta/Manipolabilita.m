function [Aval,Avec,r] = Manipolabilita(Jmat)
%MANIPOLABILITA Summary of this function goes here
%   Detailed explanation goes here
k = 1;
for i=1:length(Jmat)/2
    
    J = Jmat(:,k:k+1);
    
    Jt = J*J';
    [AutoVett,AutoVal] = eig(Jt);
    
    r(1,i) = max(diag(AutoVal))/min(diag(AutoVal));
    
    Aval(:,i) = [AutoVal(1,1);AutoVal(2,2)];
    Avec(:,k:k+1) = AutoVett;
    k = k+2;
end
end

