function [M,K] = DinamicaKalman(f)

theta1 = f(1);
theta2 = f(2);
theta1_p = f(3);
theta2_p = f(4);
d = 0.09;
l = 0.25;
m = 2.9;
me = 0.36;
pv = 0.02;
Jv = 6.4e-06;
J = 5.22e-02;

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