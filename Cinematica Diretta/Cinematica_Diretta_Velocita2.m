function [P_p,J,P_pM] = Cinematica_Diretta_Velocita2(PKM, theta1ldm,theta2ldm, theta1_p,theta2_p,P)
%CINEMATICA_DIRETTA_VELOCITA_1000 Calcolo della velocità a partire dalle
%derivate
d = PKM.link.d;
l = PKM.link.l;
for i=1:length(theta1_p)

    x = P(1,i); % scalare
    y = P(2,i); % scalare
    
theta1 = theta1ldm(1,i);
theta2 = theta2ldm(1,i);
    
N21 = -l*sin(theta1)*(x+d-l*cos(theta1)) + l*cos(theta1)*(y-l*sin(theta1));

N22 = -l*cos(theta2)*(y-l*sin(theta2))*(x+d-l*cos(theta1))/(x-d-l*cos(theta2)) + l*sin(theta2)*(x+d-l*cos(theta1));

D2 = y-l*sin(theta1) - (y-l*sin(theta2))*(x+d-l*cos(theta1))/(x-d-l*cos(theta2));

J21 = N21/D2;

J22 = N22/D2;

J11 = -(y-l*sin(theta2))/(x-d-l*cos(theta2))*(J21);

J12 = -(y-l*sin(theta2))/(x-d-l*cos(theta2))*(J22) -l*sin(theta2) + (y-l*sin(theta2))/(x-d-l*cos(theta2))*(l*cos(theta2));

x_p = J11*theta1_p(1,i) + J12*theta2_p(1,i);
y_p = J21*theta1_p(1,i) + J22*theta2_p(1,i);

P_p(1,i) = x_p;
if i>=2
P_pM(1,i-1) = (P_p(1,i)+P_p(1,i-1))/2;
end
P_p(2,i) = y_p;

Jactual = [J11, J12;
           J21, J22 ];
if i ==1
       J = Jactual;
end
if i ~= 1
 J = [J,Jactual];       
end 

end

end