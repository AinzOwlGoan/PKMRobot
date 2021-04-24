function [theta3_p,theta4_p,testLoop1,testLoop2,J34] = Theta34p(theta1,theta2,theta3,theta4,theta1_p,theta2_p)
%THETA34P Funzione che ritorna theta3_p e theta4_p
% th = (theta1_p(1)*sin(theta1(1))+theta3_p(1)*sin(theta3(1))-theta2_p(1)*sin(theta2(1)))/sin(theta4(1))

for i=1:1000
    
N13 = cot(theta4(1,i))*sin(theta1(1,i))-cos(theta1(1,i));
N23 = cos(theta2(1,i))-cot(theta4(1,i)*sin(theta2(1,i)));
D13 = cos(theta3(1,i))-cot(theta4(1,i))*sin(theta3(1,i));

theta3_p(1,i) = (theta1_p(1,i)*(N13)+theta2_p(1,i)*(N23))/D13;

N14 = D13*sin(theta1(1,i))+sin(theta3(1,i))*N13;
N24 = -D13*sin(theta2(1,i))+sin(theta3(1,i)*N23);

theta4_p(1,i) = (theta1_p(1,i)*(N14)+theta2_p(1,i)*(N24))/D13;

testLoop1(1,i) = -sin(theta1(1,i))*theta1_p(1,i)-sin(theta3(1,i))*theta3_p(1,i)+sin(theta2(1,i))*theta2_p(1,i)+sin(theta4(1,i))*theta4_p(1,i);
testLoop2(1,i) = theta1_p(1,i)*cos(theta1(1,i))+theta3_p(1,i)*cos(theta3(1,i))-theta2_p(1,i)*cos(theta2(1,i))-theta4_p(1,i)*cos(theta4(1,i));

Jactual = [N13/D13, N23/D13; N14/D13, N24/D13];

if i ==1
       J34 = Jactual;
end
if i ~= 1
 J34 = [J34,Jactual];       
end 

end
end

