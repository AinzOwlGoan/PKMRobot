function [J_p] = CalcoloJacobiana(PKM, theta1,theta2, theta1_p,theta2_p,thetaV_p)
%CINEMATICA_DIRETTA_ACCELERAZIONE_1000 
for i=1:1000
    
N11_p = -x_p*y*sin(theta1(1,i)) - x*y_p*sin(theta1(1,i)) - x*y*cos(theta1(1,i))*theta1_pv + x_p*l^2*sin(theta1(1,i))*sin(theta2(1,i)) + ...
    + x_p*l^2*cos(theta1(1,i))*theta1_p(1,i)*sin(theta2(1,i)) + z*l^2*sin(theta1(1,i))*cos(theta2(1,i))*theta2_p(1,i) + 2*y*y_p*l*cos(theta1(1,i)) - ...
    y^2*l*sin(theta1(1,i))*theta1_p(1,i) - y_p*l^2*cos(theta1(1,i))*sin(theta2(1,i)) + y*l^2*sin(theta1(1,i))*theta1_p(1,i)*sin(theta2(1,i)) - ...
    y*l^2*cos(theta1(1,i))*cos(theta2(1,i))*theta2_p(1,i) - y_p*l*d*sin(theta1(1,i)) - y*l*d*cos(theta1(1,i))*theta1_p(1,i) + ...
    d*l^2*cos(theta1(1,i))*theta1_p*sin(theta2(1,i)) + d*l^2*sin(theta1(1,i))*cos(theta2(1,i))*theta2_p(1,i);

D1_p = l*x_p*(sin(theta1(1,i))-sin(theta2(1,i))) + l*x*(cos(theta1(1,i))*theta1_p(1,i) - cos(theta2(1,i))*theta2_p(1,i)) + ...
    l*y_p*(cos(theta2(1,i))-cos(theta1(1,i))) - l*y*(sin(theta2(1,i))*theta2_p(1,i) - sin(theta1(1,i))*theta1_p(1,i)) - ...
    l^2*cos(theta2(1,i)-theta1(1,i))*(theta2_p(1,i)-theta1_p(1,i)) - l*d*(cos(theta1(1,i))*theta1_p(1,i) + cos(theta2(1,i))*theta2_p(1,i));

N12_p = x_p*y*l*sin(theta2(1,i)) + x*y_p*l*sin(theta2(1,i)) + x*y*l*cos(theta2(1,i))*theta2_p(1,i) - x_p*l^2*sin(theta2(1,i))*sin(theta1(1,i)) - ...
    x*l^2*cos(theta2(1,i))*theta2_p*sin(theta1(1,i)) - x*l^2*sin(theta2(1,i))*cos(theta1(1,i))*theta1_p(1,i) - 2*y*y_p*l*cos(theta2(1,i)) + ...
    y^2*l*sin(theta2(1,i))*theta2_p(1,i) + y_p*l^2*sin(theta1)*cos(theta2(1,i)) + y*l^2*cos(theta1(1,i))*theta1_p(1,i)*cos(theta2(1,i)) - ...
    y*l^2*sin(theta1(1,i))*sin(theta2(1,i))*theta2_p(1,i) - y_p*l*d*sin(theta2(1,i)) - y*l*d*cos(theta2(1,i))*theta2_p(1,i) + ...
    d*l^2*cos(theta2(1,i))*theta2_p*sin(theta1(1,i)) + d*l^2*sin(theta2(1,i))*cos(theta1(1,i))*theta1_p(1,i);

N21_p = -x_p*N11 - x*N11_p + d*N11_p + l*cos(theta2(1,i))*N11_p - l*sin(theta2(1,i))*theta2_p(1,i)*N11;

D2_p = D1_p*(y - l*sin(theta2(1,i))) + D1*(y_p - l*cos(theta2(1,i))*theta2_p(1,i));

N22_p = -x_p*N12 - x*N12_p + d*N12_p + N12_p*l*cos(theta2(1,i)) - N12*l*sin(theta2(1,i))*theta2_p(1,i) - D1_p*x*l*sin(theta2(1,i)) - ...
    D1*x_p*l*sin(theta2(1,i)) - D1*x*l*cos(theta2(1,i))*theta2_p(1,i) + y_p*D1*l*cos(theta2(1,i)) + y*D1_p*l*cos(theta2(1,i)) - ...
    y*D1*l*sin(theta2(1,i))*theta2_p(1,i) + D1_p*d*l*sin(theta2(1,i)) + D1*d*l*cos(theta2(1,i))*theta2_p(1,i);

Jactual = [(N11_p*D1-N11*D1_p)/D1^2, (N12_p*D1-N12*D1_p)/D1^2, 0;
         (N21_p*D2-N21*D2_p)/D2^2, (N22_p*D2-N22*D2_p)/D2^2, 0;
         0, 0, pv/(2*pi)]
if i ==1
       J = Jactual;
end
if i ~= 1
 J_p = [J_p,Jactual];       
end 

end

end

