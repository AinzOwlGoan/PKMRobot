d = 0.09;
l = 0.25;
m = 2.9;
me = 0.36;
pv = 0.02;
Jv = 6.4e-06;
J = 5.22e-02;
theta1s = linspace(deg2rad(90),deg2rad(110),100);
theta2s = linspace(deg2rad(70),deg2rad(90),100);
theta1_p = 0;
theta1_pp = 0;
theta2_p = 0;
theta2_pp = 0;
Mfin = zeros(100);
Mnorm = zeros(100);
Determinante = zeros(100);
Ms = zeros(2);
fv = 1;
hv = 1;

Maxnorm =  1.4604e+04;
Minnorm =  9.5631e+03;
alpha = (Maxnorm-Minnorm)/(Maxnorm+Minnorm);
Mcap = 2/(Maxnorm+Minnorm)*eye(2);

for i = 1:100
     hv = 1;
    for j = 1:100
        
    theta1 = theta1s(i);
    theta2 = theta2s(j);


     
Theta_pp = 0;

theta1_pp = 0;
theta2_pp = 0;

   
A1 = cos(theta1)*theta1_p^2 + sin(theta1)*theta1_pp;
A2 = cos(theta2)*theta2_p^2 + sin(theta2)*theta2_pp;
B1 = -sin(theta1)*theta1_p^2 + cos(theta1)*theta1_pp;
B2 = -sin(theta2)*theta2_p^2 + cos(theta2)*theta2_pp;


theta3 = 2*atan((sin(theta2) - sin(theta1) + ((cos(theta2) - cos(theta1) + 18/25)^2 - ((cos(theta2) - cos(theta1) + 18/25)^2/2 +...
    (sin(theta1) - sin(theta2))^2/2)^2 + (sin(theta1) - sin(theta2))^2)^(1/2))/(cos(theta2) - cos(theta1) +...
    (cos(theta2) - cos(theta1) + 18/25)^2/2 + (sin(theta1) - sin(theta2))^2/2 + 18/25));

theta4 = -2*atan((sin(theta2) - sin(theta1) + ((cos(theta2) - cos(theta1) + 18/25)^2 - ((cos(theta2) - cos(theta1) + 18/25)^2/2 + (sin(theta1) -...
    sin(theta2))^2/2)^2 + (sin(theta1) - sin(theta2))^2)^(1/2))/(cos(theta1) - cos(theta2) + (cos(theta2) - cos(theta1) + 18/25)^2/2 +...
    (sin(theta1) -sin(theta2))^2/2 - 18/25));

N13 = cos(theta4)/sin(theta4)*sin(theta1)-cos(theta1);
N23 = cos(theta2)-cos(theta4)/sin(theta4)*sin(theta2);
D13 = cos(theta3)-cos(theta4)/sin(theta4)*sin(theta3);

theta3_p = (theta1_p*(N13)+theta2_p*(N23))/D13;

N21 = sin(theta1)*(cos(theta3)/sin(theta3) - cos(theta4)/sin(theta4)) +...
    cos(theta4)/sin(theta4)*sin(theta1) - cos(theta1);
N22 = -sin(theta2)*(cos(theta3)/sin(theta3) - cos(theta4)/sin(theta4)) -...
    cos(theta4)/sin(theta4)*sin(theta2) + cos(theta2);
D2 = sin(theta4)*(cos(theta3)/sin(theta3) - cos(theta4)/sin(theta4));

theta4_p = theta1_p*(N21/D2)+ theta2_p*(N22/D2);

J34 = [N13/D13, N23/D13; N21/D2, N22/D2];

theta3_pp = (-B1 +B2 + sin(theta3)*theta3_p^2 - sin(theta4)*theta4_p^2 + cos(theta4)/sin(theta4)*(A1 - A2 + cos(theta3)*theta3_p^2 - cos(theta4)*theta4_p^2))/...
    (cos(theta3) - cos(theta4)/sin(theta4)*sin(theta3));

theta4_pp = (A1 - A2 + cos(theta3)*theta3_p^2 - cos(theta4)*theta4_p^2 + sin(theta3)*theta3_pp)/sin(theta4);

N11 = cos(theta4)/sin(theta4)*sin(theta1)-cos(theta1);
N12 = cos(theta2)-cos(theta4)/sin(theta4)*sin(theta2);
D1 = cos(theta3)-cos(theta4)/sin(theta4)*sin(theta3);

N21 = sin(theta1)*(cos(theta3)/sin(theta3) - cos(theta4)/sin(theta4)) +...
    cos(theta4)/sin(theta4)*sin(theta1) - cos(theta1);
N22 = -sin(theta2)*(cos(theta3)/sin(theta3) - cos(theta4)/sin(theta4)) -...
    cos(theta4)/sin(theta4)*sin(theta2) + cos(theta2);
D2 = sin(theta4)*(cos(theta3)/sin(theta3) - cos(theta4)/sin(theta4));

N11p =  (-1)/(sin(theta4)^2)*theta4_p*sin(theta1) + cos(theta4)/sin(theta4)*cos(theta1)*theta1_p + sin(theta1)*theta1_p;

N12p = -(-1)/(sin(theta4)^2)*theta4_p*sin(theta2) - cos(theta4)/sin(theta4)*cos(theta2)*theta2_p - sin(theta2)*theta2_p;

D1p = -sin(theta3)*theta3_p -(-1)/(sin(theta4)^2)*theta4_p*sin(theta3) - cos(theta4)/sin(theta4)*cos(theta3)*theta3_p;

N21p = cos(theta1)*theta1_p*(cos(theta3)/sin(theta3) - cos(theta4)/sin(theta4)) + sin(theta1)*((-1)/(sin(theta3)^2)*theta3_p + 1/(sin(theta4)^2)*theta4_p) + ...
    (-1)/(sin(theta4)^2)*theta4_p*sin(theta1) + cos(theta4)/sin(theta4)*cos(theta1)*theta1_p + sin(theta1)*theta1_p;

N22p = -cos(theta2)*theta2_p*(cos(theta3)/sin(theta3) - cos(theta4)/sin(theta4)) - sin(theta2)*((-1)/(sin(theta3)^2)*theta3_p + 1/(sin(theta4)^2)*theta4_p) - ...
    (-1)/(sin(theta4)^2)*theta4_p*sin(theta2) - cos(theta4)/sin(theta4)*cos(theta2)*theta2_p - sin(theta2)*theta2_p;

D2p = cos(theta4)*theta4_p*(cos(theta3)/sin(theta3) - cos(theta4)/sin(theta4)) + sin(theta4)*((-1)/(sin(theta3)^2)*theta3_p + 1/(sin(theta4)^2)*theta4_p);

J34p = [(N11p*D1 - N11*D1p)/(D1^2), (N12p*D1 - N12*D1p)/(D1^2);(N21p*D2 - N21*D2p)/(D2^2), (N22p*D2 - N22*D2p)/(D2^2)];

J1 = [-0.5*l*sin(theta1), 0;
        0.5*l*cos(theta1), 0]; 
J1p = [-0.5*l*cos(theta1)*theta1_p, 0;
       -0.5*l*sin(theta1)*theta1_p, 0];

J2 = [0, -0.5*l*sin(theta2);
       0,  0.5*l*cos(theta2)]; 
J2p = [0, -0.5*l*cos(theta2)*theta2_p;
       0, -0.5*l*sin(theta2)*theta2_p];

J3 = [ -l*(sin(theta1)+0.5*sin(theta3)*J34(1,1)), -l*(0.5*sin(theta3)*J34(1,2));
        l*(cos(theta1)+0.5*cos(theta3)*J34(1,1)),  l*(0.5*cos(theta3)*J34(1,2))];
J3p = [ -l*(cos(theta1)*theta1_p+0.5*cos(theta3)*theta3_p*J34(1,1)+0.5*sin(theta3)*J34p(1,1)), -l*(0.5*cos(theta3)*theta3_p*J34(1,2)+0.5*sin(theta3)*J34p(1,2));
        l*(-sin(theta1)*theta1_p-0.5*sin(theta3)*theta3_p*J34(1,1)+0.5*cos(theta3)*J34p(1,1)), l*(-0.5*sin(theta3)*theta3_p*J34(1,2)+0.5*cos(theta3)*J34p(1,2))];

J4 = [ -l*0.5*sin(theta4)*J34(2,1), -l*(sin(theta2)+0.5*sin(theta4)*J34(2,2));
         l*0.5*cos(theta4)*J34(2,1),  l*(cos(theta2)+0.5*cos(theta4)*J34(2,2))];
J4p = [ -l*(0.5*cos(theta4)*theta4_p*J34(2,1)+0.5*sin(theta4)*J34p(2,1)), -l*(cos(theta2)*theta2_p+0.5*cos(theta4)*theta4_p*J34(2,2)+0.5*sin(theta4)*J34p(2,2));
        l*(-0.5*sin(theta4)*theta4_p*J34(2,1)+0.5*cos(theta4)*J34p(2,1)), l*(-sin(theta2)*theta2_p-0.5*sin(theta4)*theta4_p*J34(2,2)+0.5*cos(theta4)*J34p(2,2))];

JE = [ -l*(sin(theta1)+sin(theta3)*J34(1,1)), -l*(sin(theta3)*J34(1,2));
        l*(cos(theta1)+cos(theta3)*J34(1,1)),  l*(cos(theta3)*J34(1,2))];
JEp = [ -l*(cos(theta1)*theta1_p+cos(theta3)*theta3_p*J34(1,1)+sin(theta3)*J34p(1,1)), -l*(cos(theta3)*theta3_p*J34(1,2)+sin(theta3)*J34p(1,2));
        l*(-sin(theta1)*theta1_p-sin(theta3)*theta3_p*J34(1,1)+cos(theta3)*J34p(1,1)), l*(-sin(theta3)*theta3_p*J34(1,2)+cos(theta3)*J34p(1,2))];
  
  
M = (J*eye(2) + m*(J1')*J1 + m*(J2')*J2 + J*(J34')*J34 + m*(J3')*J3 + m*(J4')*J4 + me*(JE')*JE);
K = (m*(J1')*J1p + m*(J2')*J2p + J*(J34')*J34p + m*(J3')*J3p + m*(J4')*J4p + me*(JE')*JEp);
Jm = [1.7e-05, 0; 0, 1.7e-05];
Jtrasm = [1/64, 0; 0, 1/64];
Thetam_pp = Jtrasm^-1*[theta1_pp; theta2_pp];
Thetam_p = Jtrasm^-1*[theta1_p; theta2_p];


Mm = (M*(Jtrasm)^2 + Jm);
Mnorm(i,j) = norm(((Mm)^-1),Inf);
Mfin(i,j) = norm(Mm^-1*Mcap-eye(2));
Km = (Jtrasm'*K*Jtrasm);
Cm = Mm*Thetam_pp  +  Km*Thetam_p;

if i == 1 && j == 1
    Ms = Mm;
end
% Mm_ = Jm;
% DMm = Mm-Jm;
% D = DMm*Thetam_pp + Km*Thetam_p;
% Aol = [zeros(2,2) eye(2,2); zeros(2,2), zeros(2,2)];
% Bt = [zeros(2,2); Mm_^-1];
% Acl = Aol - Bt*[Kp Kd];
     hv = hv+2;
    end
     fv = fv+2;
end

[xsgrid, ysgrid] = meshgrid(theta1s,theta2s);
contourf(xsgrid,ysgrid,Mfin);
colorbar

figure
Mfin(Mfin>alpha) = 0.23;
contourf(xsgrid,ysgrid,Mfin);
colorbar
% figure
% contourf(xsgrid,ysgrid,Determinante);
% colorbar



% for i=1:200
%     for j = 1:200
%         Mset = Mfin(i:i+1, j:j+1);
%         if chol(Mset)
%            
%         else
%             formatSpec = 'True';
%            fprintf(formatSpec)
%         end
%         j = j+2;
%     end
%     i = i+2;
% end
%         