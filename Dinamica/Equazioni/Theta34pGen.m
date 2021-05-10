function [theta3_p,theta4_p,J34] = Theta34pGen(theta1,theta2,theta3,theta4,theta1_p,theta2_p)
%THETA34P Funzione che ritorna velocità e accelerazione dei link non
%motorizzati

N13 = cos(theta4 )/sin(theta4 )*sin(theta1 )-cos(theta1 );
N23 = cos(theta2 )-cos(theta4 )/sin(theta4 )*sin(theta2 );
D13 = cos(theta3 )-cos(theta4 )/sin(theta4 )*sin(theta3 );

theta3_p  = (theta1_p *(N13)+theta2_p *(N23))/D13;

N21 = sin(theta1 )*(cos(theta3 )/sin(theta3 ) - cos(theta4 )/sin(theta4 )) +...
    cos(theta4 )/sin(theta4 )*sin(theta1 ) - cos(theta1 );
N22 = -sin(theta2 )*(cos(theta3 )/sin(theta3 ) - cos(theta4 )/sin(theta4 )) -...
    cos(theta4 )/sin(theta4 )*sin(theta2 ) + cos(theta2 );
D2 = sin(theta4 )*(cos(theta3 )/sin(theta3 ) - cos(theta4 )/sin(theta4 ));

theta4_p  = theta1_p *(N21/D2)+ theta2_p *(N22/D2);

J34 = [N13/D13, N23/D13; N21/D2, N22/D2];

end