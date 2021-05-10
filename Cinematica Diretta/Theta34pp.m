function [theta3_pp,theta4_pp,J34p] = Theta34pp(theta1ldm,theta2ldm,theta3ldm,theta4ldm,theta1ldm_p,theta2ldm_p,theta3ldm_p,theta4ldm_p,theta1ldm_pp, theta2ldm_pp,J34)
k = 1;
for i=1:length(theta1ldm)
    theta1 = theta1ldm(1,i);
    theta2 = theta2ldm(1,i);
    theta3 = theta3ldm(1,i);
    theta4 = theta4ldm(1,i);
    theta1_p = theta1ldm_p(1,i);
    theta2_p = theta2ldm_p(1,i);
    theta3_p = theta3ldm_p(1,i);
    theta4_p = theta4ldm_p(1,i);
    theta1_pp = theta1ldm_pp(1,i);
    theta2_pp = theta2ldm_pp(1,i);
    A1 = cos(theta1)*theta1_p^2 + sin(theta1)*theta1_pp;
    A2 = cos(theta2)*theta2_p^2 + sin(theta2)*theta2_pp;
    B1 = -sin(theta1)*theta1_p^2 + cos(theta1)*theta1_pp;
    B2 = -sin(theta2)*theta2_p^2 + cos(theta2)*theta2_pp;
    
    theta3_pp(1,i) = (-B1 +B2 + sin(theta3)*theta3_p^2 - sin(theta4)*theta4_p^2 + cos(theta4)/sin(theta4)*(A1 - A2 + cos(theta3)*theta3_p^2 - cos(theta4)*theta4_p^2))/...
        (cos(theta3) - cos(theta4)/sin(theta4)*sin(theta3));
    
    theta4_pp(1,i) = (A1 - A2 + cos(theta3)*theta3_p^2 - cos(theta4)*theta4_p^2 + sin(theta3)*theta3_pp(1,i))/sin(theta4);
    
    ErrLoop1(1,i) = A1 - A2 + cos(theta3)*theta3_p^2 + sin(theta3)*theta3_pp(1,i) - cos(theta4)*theta4_p^2 - sin(theta4)*theta4_pp(1,i);
    ErrLoop2(1,i) = B1 - B2 - sin(theta3)*theta3_p^2 + cos(theta3)*theta3_pp(1,i) + sin(theta4)*theta4_p^2 - cos(theta4)*theta4_pp(1,i);
    
    
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
    
    Jactual_p = [(N11p*D1 - N11*D1p)/(D1^2), (N12p*D1 - N12*D1p)/(D1^2);(N21p*D2 - N21*D2p)/(D2^2), (N22p*D2 - N22*D2p)/(D2^2)];
    Jactual = J34(:, k:k+1);
    k = k+2;

    if i ==1
       J34p = Jactual_p;
    end
    if i ~= 1
    J34p = [J34p,Jactual_p];       
    end 
    
    theta34_pp(:,i) = Jactual_p*[theta1_p; theta2_p] + Jactual*[theta1_pp; theta2_pp];
    ErrLoop1(1,i) = A1 - A2 + cos(theta3)*theta3_p^2 + sin(theta3)*theta34_pp(1,i) - cos(theta4)*theta4_p^2 - sin(theta4)*theta34_pp(2,i);
    ErrLoop2(1,i) = B1 - B2 - sin(theta3)*theta3_p^2 + cos(theta3)*theta34_pp(1,i) + sin(theta4)*theta4_p^2 - cos(theta4)*theta34_pp(2,i);

end

Errtheta3pp = theta3_pp-theta34_pp(1,:);
Errtheta4pp = theta4_pp-theta34_pp(2,:);

time = linspace(0,1,length(ErrLoop1));
figure
subplot(2,1,1);
plot(time,ErrLoop1(1,:),'color','k')
title('Test loop vettoriali accelerazione 1')
grid on
subplot(2,1,2); 
plot(time,ErrLoop2(1,:),'color','k')
title('Test loop vettoriali accelerazione 2')
grid on


% figure
% subplot(2,1,1);
% plot(time,Errtheta3pp,'color','b')
% title('Errore theta3pp')
% grid on
% subplot(2,1,2); 
% plot(time,Errtheta4pp,'color','b')
% title('Errore theta4pp')
% grid on
end