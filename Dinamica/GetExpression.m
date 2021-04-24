function [A,B,C,D] = GetExpression()
% ritorna sotto forma di espressione i risultati della Jacobiana 34
    
syms theta1(t) theta2(t) theta3(t) theta4(t)

N13 = cot(theta4)*sin(theta1)-cos(theta1);
N23 = cos(theta2)-cot(theta4(1)*sin(theta2));
D13 = cos(theta3)-cot(theta4(1))*sin(theta3);
N14 = D13*sin(theta1)+sin(theta3)*N13;
N24 = -D13*sin(theta2)+sin(theta3*N23);

A = N13/D13;
B = N23/D13; 
C = N14/D13;
D = N24/D13;



end

