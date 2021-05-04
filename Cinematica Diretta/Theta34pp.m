function [theta3_pp,theta4_pp] = Theta34pp(theta1ldm,theta2ldm,theta3ldm,theta4ldm,theta1ldm_p,theta2ldm_p,theta3ldm_p,theta4ldm_p,theta1ldm_pp, theta2ldm_pp)

for i=1:1000
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
end
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

end