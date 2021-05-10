function [J1, J1p, J2, J2p, J3, J3p, J4, J4p, JE, JEp] = JacobianiGen(PKM, theta1,theta2,theta3,theta4,theta1_p,theta2_p,theta3_p,theta4_p,J34,J34_p)

l = PKM.link.l;
    
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
   J3p = [ -l*(cos(theta1)*theta1_p+0.5*cos(theta3)*theta3_p*J34(1,1)+0.5*sin(theta3)*J34_p(1,1)), -l*(0.5*cos(theta3)*theta3_p*J34(1,2)+0.5*sin(theta3)*J34_p(1,2));
            l*(-sin(theta1)*theta1_p-0.5*sin(theta3)*theta3_p*J34(1,1)+0.5*cos(theta3)*J34_p(1,1)), l*(-0.5*sin(theta3)*theta3_p*J34(1,2)+0.5*cos(theta3)*J34_p(1,2))];
     
    J4 = [ -l*0.5*sin(theta4)*J34(2,1), -l*(sin(theta2)+0.5*sin(theta4)*J34(2,2));
             l*0.5*cos(theta4)*J34(2,1),  l*(cos(theta2)+0.5*cos(theta4)*J34(2,2))];
   J4p = [ -l*(0.5*cos(theta4)*theta4_p*J34(2,1)+0.5*sin(theta4)*J34_p(2,1)), -l*(cos(theta2)*theta2_p+0.5*cos(theta4)*theta4_p*J34(2,2)+0.5*sin(theta4)*J34_p(2,2));
            l*(-0.5*sin(theta4)*theta4_p*J34(2,1)+0.5*cos(theta4)*J34_p(2,1)), l*(-sin(theta2)*theta2_p-0.5*sin(theta4)*theta4_p*J34(2,2)+0.5*cos(theta4)*J34_p(2,2))];
     
    JE = [ -l*(sin(theta1)+sin(theta3)*J34(1,1)), -l*(sin(theta3)*J34(1,2));
            l*(cos(theta1)+cos(theta3)*J34(1,1)),  l*(cos(theta3)*J34(1,2))];
   JEp = [ -l*(cos(theta1)*theta1_p+cos(theta3)*theta3_p*J34(1,1)+sin(theta3)*J34_p(1,1)), -l*(cos(theta3)*theta3_p*J34(1,2)+sin(theta3)*J34_p(1,2));
            l*(-sin(theta1)*theta1_p-sin(theta3)*theta3_p*J34(1,1)+cos(theta3)*J34_p(1,1)), l*(-sin(theta3)*theta3_p*J34(1,2)+cos(theta3)*J34_p(1,2))];
  
    
   
   
end


