d = 0.09;
l = 0.25;
m = 2.9;
me = 0.36;
pv = 0.02;
Jv = 6.4e-06;
J = 5.22e-02;
xs = linspace(-0.15,0.15,100);
ys = linspace(0.25,0.4,100);
xp = .06;
yp = 0.06;
Mfin = zeros(200);
Mnorm = zeros(100);
xpp = 0.2;
ypp = 0.2;

fv = 1;
hv = 1;
for i = 1:100
     hv = 1;
    for j = 1:100
        
x = xs(i);
y = ys(j);

p = 2*d*l + 2*x*l;
e = 2*y*l;
f = x^2 + d^2 + y^2 + 2*x*d;
a = -2*d*l + 2*x*l;
b = +2*y*l;
c = x^2 + d^2 + y^2 - 2*x*d;

theta1 = 2*atan2(e + sqrt(p^2 + e^2 -f^2), p +f);
theta2 = 2*atan2(b - sqrt(a^2 + b^2 -c^2), a +c);
   if (theta2) < -deg2rad(200)
       theta2 = theta2 + 2*pi;
   end           
   
   N21 = -l*sin(theta1)*(x+d-l*cos(theta1)) + l*cos(theta1)*(y-l*sin(theta1));

N22 = -l*cos(theta2)*(y-l*sin(theta2))*(x+d-l*cos(theta1))/(x-d-l*cos(theta2)) + l*sin(theta2)*(x+d-l*cos(theta1));

D2 = y-l*sin(theta1) - (y-l*sin(theta2))*(x+d-l*cos(theta1))/(x-d-l*cos(theta2));

J21 = N21/D2;

J22 = N22/D2;

J11 = -(y-l*sin(theta2))/(x-d-l*cos(theta2))*(J21);

J12 = -(y-l*sin(theta2))/(x-d-l*cos(theta2))*(J22) -l*sin(theta2) + (y-l*sin(theta2))/(x-d-l*cos(theta2))*(l*cos(theta2));

J = [J11 J12; J21 J22];


theta_p = J^-1 * [xp; yp];
theta1_p = theta_p(1);
theta2_p = theta_p(2);

N21 = -l*sin(theta1)*(x+d-l*cos(theta1)) + l*cos(theta1)*(y-l*sin(theta1));

N22 = -l*cos(theta2)*(y-l*sin(theta2))*(x+d-l*cos(theta1))/(x-d-l*cos(theta2)) + l*sin(theta2)*(x+d-l*cos(theta1));

D2 = y-l*sin(theta1) - (y-l*sin(theta2))*(x+d-l*cos(theta1))/(x-d-l*cos(theta2));

J21 = N21/D2;

J22 = N22/D2;

J11 = -(y-l*sin(theta2))/(x-d-l*cos(theta2))*(J21);

J12 = -(y-l*sin(theta2))/(x-d-l*cos(theta2))*(J22) -l*sin(theta2) + (y-l*sin(theta2))/(x-d-l*cos(theta2))*(l*cos(theta2));

J = [J11 J12; J21 J22];

J_p11 = ((l*cos(theta1)*(y - l*sin(theta1)) - l*sin(theta1)*(d + x - l*cos(theta1)))*(yp - l*cos(theta2)*theta2_p))/((d - x + l*cos(theta2))*(y - l*sin(theta1) + ((y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))) - ((y - l*sin(theta2))*(l*sin(theta1)*(xp + l*sin(theta1)*theta1_p) - l*cos(theta1)*(yp - l*cos(theta1)*theta1_p) + l*sin(theta1)*(y - l*sin(theta1))*theta1_p + l*cos(theta1)*theta1_p*(d + x - l*cos(theta1))))/((d - x + l*cos(theta2))*(y - l*sin(theta1) + ((y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))) + ((xp + l*sin(theta2)*theta2_p)*(y - l*sin(theta2))*(l*cos(theta1)*(y - l*sin(theta1)) - l*sin(theta1)*(d + x - l*cos(theta1))))/((d - x + l*cos(theta2))^2*(y - l*sin(theta1) + ((y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))) - ((y - l*sin(theta2))*(l*cos(theta1)*(y - l*sin(theta1)) - l*sin(theta1)*(d + x - l*cos(theta1)))*(yp + ((xp + l*sin(theta1)*theta1_p)*(y - l*sin(theta2)))/(d - x + l*cos(theta2)) + ((yp - l*cos(theta2)*theta2_p)*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)) - l*cos(theta1)*theta1_p + ((xp + l*sin(theta2)*theta2_p)*(y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2))^2))/((d - x + l*cos(theta2))*(y - l*sin(theta1) + ((y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))^2);
 
 
J_p12 = ((y - l*sin(theta2))*(l*sin(theta2)*(xp + l*sin(theta1)*theta1_p) + l*cos(theta2)*theta2_p*(d + x - l*cos(theta1)) + (l*cos(theta2)*(xp + l*sin(theta1)*theta1_p)*(y - l*sin(theta2)))/(d - x + l*cos(theta2)) + (l*cos(theta2)*(yp - l*cos(theta2)*theta2_p)*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)) - (l*sin(theta2)*(y - l*sin(theta2))*theta2_p*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)) + (l*cos(theta2)*(xp + l*sin(theta2)*theta2_p)*(y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2))^2))/((d - x + l*cos(theta2))*(y - l*sin(theta1) + ((y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))) - l*cos(theta2)*theta2_p - (l*cos(theta2)*(yp - l*cos(theta2)*theta2_p))/(d - x + l*cos(theta2)) + ((l*sin(theta2)*(d + x - l*cos(theta1)) + (l*cos(theta2)*(y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))*(yp - l*cos(theta2)*theta2_p))/((d - x + l*cos(theta2))*(y - l*sin(theta1) + ((y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))) - (l*cos(theta2)*(xp + l*sin(theta2)*theta2_p)*(y - l*sin(theta2)))/(d - x + l*cos(theta2))^2 + ((xp + l*sin(theta2)*theta2_p)*(l*sin(theta2)*(d + x - l*cos(theta1)) + (l*cos(theta2)*(y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))*(y - l*sin(theta2)))/((d - x + l*cos(theta2))^2*(y - l*sin(theta1) + ((y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))) - ((l*sin(theta2)*(d + x - l*cos(theta1)) + (l*cos(theta2)*(y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))*(y - l*sin(theta2))*(yp + ((xp + l*sin(theta1)*theta1_p)*(y - l*sin(theta2)))/(d - x + l*cos(theta2)) + ((yp - l*cos(theta2)*theta2_p)*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)) - l*cos(theta1)*theta1_p + ((xp + l*sin(theta2)*theta2_p)*(y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2))^2))/((d - x + l*cos(theta2))*(y - l*sin(theta1) + ((y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))^2) + (l*sin(theta2)*(y - l*sin(theta2))*theta2_p)/(d - x + l*cos(theta2));
 
 
J_p21 = - (l*sin(theta1)*(xp + l*sin(theta1)*theta1_p) - l*cos(theta1)*(yp - l*cos(theta1)*theta1_p) + l*sin(theta1)*(y - l*sin(theta1))*theta1_p + l*cos(theta1)*theta1_p*(d + x - l*cos(theta1)))/(y - l*sin(theta1) + ((y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2))) - ((l*cos(theta1)*(y - l*sin(theta1)) - l*sin(theta1)*(d + x - l*cos(theta1)))*(yp + ((xp + l*sin(theta1)*theta1_p)*(y - l*sin(theta2)))/(d - x + l*cos(theta2)) + ((yp - l*cos(theta2)*theta2_p)*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)) - l*cos(theta1)*theta1_p + ((xp + l*sin(theta2)*theta2_p)*(y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2))^2))/(y - l*sin(theta1) + ((y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))^2;
 
 
J_p22 = (l*sin(theta2)*(xp + l*sin(theta1)*theta1_p) + l*cos(theta2)*theta2_p*(d + x - l*cos(theta1)) + (l*cos(theta2)*(xp + l*sin(theta1)*theta1_p)*(y - l*sin(theta2)))/(d - x + l*cos(theta2)) + (l*cos(theta2)*(yp - l*cos(theta2)*theta2_p)*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)) - (l*sin(theta2)*(y - l*sin(theta2))*theta2_p*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)) + (l*cos(theta2)*(xp + l*sin(theta2)*theta2_p)*(y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2))^2)/(y - l*sin(theta1) + ((y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2))) - ((l*sin(theta2)*(d + x - l*cos(theta1)) + (l*cos(theta2)*(y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))*(yp + ((xp + l*sin(theta1)*theta1_p)*(y - l*sin(theta2)))/(d - x + l*cos(theta2)) + ((yp - l*cos(theta2)*theta2_p)*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)) - l*cos(theta1)*theta1_p + ((xp + l*sin(theta2)*theta2_p)*(y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2))^2))/(y - l*sin(theta1) + ((y - l*sin(theta2))*(d + x - l*cos(theta1)))/(d - x + l*cos(theta2)))^2;
 

J_p = [J_p11, J_p12
    J_p21, J_p22];
     
Theta_pp = (inv(J))*([xpp; ypp] - J_p*[theta1_p; theta2_p]);

theta1_pp = Theta_pp(1,1);
theta2_pp = Theta_pp(2,1);

   
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


Mm = (Jtrasm'*M*Jtrasm + Jm);
Mnorm(i,j) = norm((Mm));

Km = (Jtrasm'*K*Jtrasm);
Cm = Mm*Thetam_pp  +  Km*Thetam_p;

% Mm_ = Jm;
% DMm = Mm-Jm;
% D = DMm*Thetam_pp + Km*Thetam_p;
% Aol = [zeros(2,2) eye(2,2); zeros(2,2), zeros(2,2)];
% Bt = [zeros(2,2); Mm_^-1];
% Acl = Aol - Bt*[Kp Kd];

 Mfin(fv:fv+1,hv:hv+1) = Mm;
     hv = hv+2;
    end
     fv = fv+2;
end

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