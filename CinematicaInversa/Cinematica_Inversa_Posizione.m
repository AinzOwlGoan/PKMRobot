function [theta1inv, theta2inv] = Cinematica_Inversa_Posizione(P)
%CINEMATICA_INVERSA_POSIZIONE 
    P_x = P(1,:);
    P_y = P(2,:);
    P_z = P(3,:);
    
    for i=1:1000 
        p = 2*d*l + 2*P_x(1,i)*d;
        e = 2*P_y(i)*l;
        f = P_x(i)^2+d^2+P_y(i)^2+2*P_x(i)*d;
        a = -2*d*l + 2*P_x(i)*l;
        b = +2*P_y(i)*l;
        c = P_x(i)^2 + d^2 + P_y(i)^2 - 2*P_x(i)*d;
        
        theta1inv(1,i) = 2*atan2(e + sqrt(p^2 + e^2 -f^2), p +f);
        theta2inv(1,i) = 2*atan2(b - sqrt(a^2 + b^2 -c^2), a +c);
    end
end

