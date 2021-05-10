function [J34_p] = Theta34ppGen(theta1,theta2,theta3,theta4, theta1_p,theta2_p,theta3_p,theta4_p)

    
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
    
    J34_p = [(N11p*D1 - N11*D1p)/(D1^2), (N12p*D1 - N12*D1p)/(D1^2);(N21p*D2 - N21*D2p)/(D2^2), (N22p*D2 - N22*D2p)/(D2^2)];
   
 
end

