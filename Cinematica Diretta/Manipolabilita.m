function [AutoVal,r] = Manipolabilita(Jmat)
%MANIPOLABILITA Summary of this function goes here
%   Detailed explanation goes here
k = 1;
for i=1:1
    
    J = Jmat(:,k:k+1);
    
    Jt = J*J';
    [AutoVett,AutoVal] = eig(Jt);
    
    r(1,i) = max(AutoVal)/min(AutoVal);
    
    k = k+1;
end
end

