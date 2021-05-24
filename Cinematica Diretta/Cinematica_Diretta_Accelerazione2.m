function [P_pp] = Cinematica_Diretta_Accelerazione2(PKM,Theta, Theta_p, Theta_pp, P, P_p)
d = PKM.link.d;
l = PKM.link.l;
P_pp = zeros(2,1000);

for i=1:length(Theta)

    x = P(1,i); % scalare
    y = P(2,i); % scalare
    x_p = P_p(1,i);
    y_p = P_p(2,i);
    theta1 = Theta(1,i);
    theta2 = Theta(2,i);
    theta1_p = Theta_p(1,i);
    theta2_p = Theta_p(2,i);
    theta1_pp = Theta_pp(1,i);
    theta2_pp = Theta_pp(2,i);

    
    A = x_p^2 + 2*l*sin(theta2)*x_p*theta2_p + (l*sin(theta2)*theta2_p)^2 + (x-d-l*cos(theta2))*(l*cos(theta2)*theta2_p^2 + l*sin(theta2)*theta2_pp) +...
        y_p^2 - 2*l*cos(theta2)*y_p*theta2_p + (l*cos(theta2)*theta2_p)^2 + (y-l*sin(theta2))*(l*sin(theta2)*theta2_p^2 - l*cos(theta2)*theta2_pp);
    
    B = x_p^2 + 2*l*sin(theta1)*x_p*theta1_p + (l*sin(theta1)*theta1_p)^2 + (x+d-l*cos(theta1))*(l*cos(theta1)*theta1_p^2 + l*sin(theta1)*theta1_pp) +...
        y_p^2 - 2*l*cos(theta1)*y_p*theta1_p + (l*cos(theta1)*theta1_p)^2 + (y-l*sin(theta1))*(l*sin(theta1)*theta1_p^2 - l*cos(theta1)*theta1_pp);
    
    P_pp(2,i) = (B*(x-d-l*cos(theta2))/(x+d-l*cos(theta1)) - A)/(y-l*sin(theta2) - (x-d-l*cos(theta2))/(x+d-l*cos(theta1))*(y-l*sin(theta1)));
    
    P_pp(1,i) = (-P_pp(2,i)*(y-l*sin(theta1)) - B)/(x+d-l*cos(theta1));
   
end
end