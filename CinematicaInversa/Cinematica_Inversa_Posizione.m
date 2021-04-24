function [theta1inv, theta2inv] = Cinematica_Inversa_Posizione(P, PKM, theta1ldm, theta2ldm)
%CINEMATICA_INVERSA_POSIZIONE 
    P_x = P(1,:);
    P_y = P(2,:);
%     P_z = P(3,:);
    d = PKM.link.d;
    l = PKM.link.l;
    theta1inv = zeros(1, 1000);
    theta2inv = zeros(1, 1000);
    for i=1:1000 
        p = 2*d*l + 2*P_x(1,i)*l;
        e = 2*P_y(i)*l;
        f = P_x(i)^2 + d^2 + P_y(i)^2 + 2*P_x(i)*d;
        a = -2*d*l + 2*P_x(i)*l;
        b = +2*P_y(i)*l;
        c = P_x(i)^2 + d^2 + P_y(i)^2 - 2*P_x(i)*d;
        

        
        if p^2 + e^2 -f^2 > 0 
           theta1inv(1,i) = 2*atan2(e + sqrt(p^2 + e^2 -f^2), p +f);
        else
           formatSpec = 'Possibile singolarità in theta1 = %4.2f\n';
           fprintf(formatSpec, rad2deg(theta1ldm(1,i)))
        end
        if a^2 + b^2 -c^2 > 0
           theta2inv(1,i) = 2*atan2(b - sqrt(a^2 + b^2 -c^2), a +c);
        else
           formatSpec = 'Possibile singolarità in theta2 = %4.2f\n';
           fprintf(formatSpec, rad2deg(theta2ldm(1,i)))
        end
        
      % test
      if theta1inv(1,i) - theta1ldm(1,i) > 0.0001 || theta1inv(1,i) - theta1ldm(1,i) < -0.0001
          formatSpec = 'theta1inv = %4.2f ~= theta1ldm = %4.2f\n';
          fprintf(formatSpec, rad2deg(theta1inv(1,i)), rad2deg(theta1ldm(1,i)))
      end
      if theta2inv(1,i) - theta2ldm(1,i) > 0.0001 || theta2inv(1,i) - theta2ldm(1,i) < -0.0001
          formatSpec = 'theta2inv = %4.2f ~= theta2ldm = %4.2f\n';
          fprintf(formatSpec, rad2deg(theta2inv(1,i)), rad2deg(theta2ldm(1,i)))
      end
      
    end
end