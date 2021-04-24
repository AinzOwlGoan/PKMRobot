function [P_p,J] = Cinematica_Diretta_Velocita_1000(PKM, theta1,theta2, theta1_p,theta2_p,thetaV_p,P)
%CINEMATICA_DIRETTA_VELOCITA_1000 Calcolo della velocità a partire dalle
%derivate
d = PKM.link.d;
l = PKM.link.l;
pv = PKM.vite.pv;
for i=1:1000
    
    x = P(1,i); % scalare
    y = P(2,i); % scalare
    z = P(3,i); % scalare
    
    
N11 = -x*y*sin(theta1(1,i))+ x*l^2*sin(theta1(1,i))*sin(theta2(1,i))+y^2*l*cos(theta1(1,i))- ... 
    y*l^2*cos(theta1(1,i))*sin(theta2(1,i)) - y*l*d*sin(theta1(1,i))+d*l^2*sin(theta1(1,i))*sin(theta2(1,i));

N12 = x*y*l*sin(theta2(1,i))-x*l^2*sin(theta2(1,i))*sin(theta1(1,i))-y^2*l*cos(theta2(1,i))+ ... 
    y*l^2*sin(theta1(1,i))*cos(theta2(1,i)) - y*l*d*sin(theta2(1,i))+d*l^2*sin(theta2(1,i))*sin(theta1(1,i));

D1 = l*x*(sin(theta1(1,i))-sin(theta2(1,i)))+ l*y*(cos(theta2(1,i))-cos(theta1(1,i)))+ ...
    l^2*sin(theta2(1,i)-theta1(1,i))-l*d*(sin(theta1(1,i))+sin(theta2(1,i)));

D2 = D1*(y-l*sin(theta2(1,i)));

N21 = -x*N11+d*N11+N11*l*cos(theta2(1,i));

N22 = -x*N12+d*N12+N12*l*cos(theta2(1,i))-D1*x*l*sin(theta2(1,i))+y*D1*l*cos(theta2(1,i))+D1*d*l*sin(theta2(1,i));

x_p = (N11*theta1_p(1,i) + N12*theta2_p(1,i))/D1;
y_p = (theta1_p(1,i)*(-x*N11+d*N11+N11*l*cos(theta2(1,i)))+theta2_p(1,i)*(-x*N12+d*N12+N12*l*cos(theta2(1,i))-...
    D1*x*l*sin(theta2(1,i))+y*D1*l*cos(theta2(1,i))+D1*d*l*sin(theta2(1,i))))/D2;
z_p = pv/(2*pi)*thetaV_p;

P_p(1,i) = x_p;
P_p(2,i) = y_p;
P_p(3,i) = z_p;
% probabilmente con questa J c'è un problema, salva solo l'ultima)
Jactual = [N11/D1, N12/D1, 0;
           N21/D2, N22/D2, 0;
           0, 0, pv/(2*pi)];
if i ==1
       J = Jactual;
end
if i ~= 1
 J = [J,Jactual];       
end 

end
end

