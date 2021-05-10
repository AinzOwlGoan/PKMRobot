function [C1_p, C2_p, C1_pp, C2_pp, E1_p, E1_pp, J1, J1p, J2, J2p, J3, J3p, J4, J4p, JE, JEp,P_p34, P_pp34] = Jacobiani(PKM, Theta, Theta_p, theta3ldm, theta4ldm, theta3ldm_p, theta4ldm_p, J34vet, J34pvet, P_pp, Theta_pp)

l = PKM.link.l;
% ta = PKM.ta;
k = 1;
for i = 1:length(Theta)
    theta1 = Theta(1,i);
    theta2 = Theta(2,i);
    theta1_p = Theta_p(1,i);
    theta2_p = Theta_p(2,i);
    theta1_pp = Theta_pp(1,i);
    theta2_pp = Theta_pp(2,i);
    theta3 = theta3ldm(1,i);
    theta4 = theta4ldm(1,i);
    theta3_p = theta3ldm_p(1,i);
    theta4_p = theta4ldm_p(1,i);
    J34 = J34vet(:,k:k+1);
    J34p = J34pvet(:,k:k+1);
    k = k+2;
    
    
    J1i = [-0.5*l*sin(theta1), 0;
            0.5*l*cos(theta1), 0]; 
   J1pi = [-0.5*l*cos(theta1)*theta1_p, 0;
           -0.5*l*sin(theta1)*theta1_p, 0];
       
   C1_p(:,i) = J1i*[theta1_p; theta2_p];
   C1_pp(:,i) = J1pi*[theta1_p; theta2_p] + J1i*[theta1_pp; theta2_pp];
       
   E1_p(:,i) = 2*J1i*[theta1_p; theta2_p];
   E1_pp(:,i) = 2*J1pi*[theta1_p; theta2_p] + 2*J1i*[theta1_pp; theta2_pp];
       
    J2i = [0, -0.5*l*sin(theta2);
           0,  0.5*l*cos(theta2)]; 
   J2pi = [0, -0.5*l*cos(theta2)*theta2_p;
           0, -0.5*l*sin(theta2)*theta2_p];
       
   C2_p(:,i) = J2i*[theta1_p; theta2_p];
   C2_pp(:,i) = J2pi*[theta1_p; theta2_p] + J2i*[theta1_pp; theta2_pp];
    
    J3i = [ -l*(sin(theta1)+0.5*sin(theta3)*J34(1,1)), -l*(0.5*sin(theta3)*J34(1,2));
            l*(cos(theta1)+0.5*cos(theta3)*J34(1,1)),  l*(0.5*cos(theta3)*J34(1,2))];
   J3pi = [ -l*(cos(theta1)*theta1_p+0.5*cos(theta3)*theta3_p*J34(1,1)+0.5*sin(theta3)*J34p(1,1)), -l*(0.5*cos(theta3)*theta3_p*J34(1,2)+0.5*sin(theta3)*J34p(1,2));
            l*(-sin(theta1)*theta1_p-0.5*sin(theta3)*theta3_p*J34(1,1)+0.5*cos(theta3)*J34p(1,1)), l*(-0.5*sin(theta3)*theta3_p*J34(1,2)+0.5*cos(theta3)*J34p(1,2))];
     
    J4i = [ -l*0.5*sin(theta4)*J34(2,1), -l*(sin(theta2)+0.5*sin(theta4)*J34(2,2));
             l*0.5*cos(theta4)*J34(2,1),  l*(cos(theta2)+0.5*cos(theta4)*J34(2,2))];
   J4pi = [ -l*(0.5*cos(theta4)*theta4_p*J34(2,1)+0.5*sin(theta4)*J34p(2,1)), -l*(cos(theta2)*theta2_p+0.5*cos(theta4)*theta4_p*J34(2,2)+0.5*sin(theta4)*J34p(2,2));
            l*(-0.5*sin(theta4)*theta4_p*J34(2,1)+0.5*cos(theta4)*J34p(2,1)), l*(-sin(theta2)*theta2_p-0.5*sin(theta4)*theta4_p*J34(2,2)+0.5*cos(theta4)*J34p(2,2))];
     
    JEi = [ -l*(sin(theta1)+sin(theta3)*J34(1,1)), -l*(sin(theta3)*J34(1,2));
            l*(cos(theta1)+cos(theta3)*J34(1,1)),  l*(cos(theta3)*J34(1,2))];
   JEpi = [ -l*(cos(theta1)*theta1_p+cos(theta3)*theta3_p*J34(1,1)+sin(theta3)*J34p(1,1)), -l*(cos(theta3)*theta3_p*J34(1,2)+sin(theta3)*J34p(1,2));
            l*(-sin(theta1)*theta1_p-sin(theta3)*theta3_p*J34(1,1)+cos(theta3)*J34p(1,1)), l*(-sin(theta3)*theta3_p*J34(1,2)+cos(theta3)*J34p(1,2))];
  
    
    if i ==1
       J1 = J1i;
       J1p = J1pi;
       J2 = J2i;
       J2p = J2pi;
       J3 = J3i;
       J3p = J3pi;
       J4 = J4i;
       J4p = J4pi;
       JE = JEi;
       JEp = JEpi;
    end
    
    if i ~= 1
       J1 = [J1,J1i];
       J1p = [J1p,J1pi];
       J2 = [J2,J2i];
       J2p = [J2p,J2pi];
       J3 = [J3,J3i]; 
       J3p = [J3p,J3pi]; 
       J4 = [J4,J4i];
       J4p = [J4p,J4pi];
       JE = [JE,JEi];
       JEp = [JEp,JEpi];       
    end 
    
    P_p34(:,i) = JEi*[theta1_p; theta2_p];
    P_pp34(:,i) = JEpi*[theta1_p; theta2_p] + JEi*[theta1_pp; theta2_pp];
    
end
% time = linspace(0,ta,length(P_pp));
% figure
% subplot(2,1,1);
% plot(time,P_pp(1,:)-P_ppE(1,:),'color','b')
% title('Errore xpp')
% grid on
% subplot(2,1,2); 
% plot(time,P_pp(2,:)-P_ppE(2,:),'color','b')
% title('Errore ypp')
% grid on 

end

