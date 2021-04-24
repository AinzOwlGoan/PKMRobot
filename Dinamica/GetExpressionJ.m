function [J] = GetExpressionJ(PKM,P,P_p)
% ritorna sotto forma di espressione i risultati della Jacobiana iniziale
   
    x = P(1,1); % scalare
    y = P(2,1); % scalare
    z = P(3,1); % scalare
    x_p = P_p(1,1);
    y_p = P_p(2,1);
    z_p = P_p(3,1);
    d = PKM.link.d;
    l = PKM.link.l;
    m = PKM.link.m;
    pv = PKM.vite.pv;
    
syms theta1(t) theta2(t)
    N11 = -x*y*sin(theta1)+ x*l^2*sin(theta1)*sin(theta2)+y^2*l*cos(theta1)- ... 
        y*l^2*cos(theta1)*sin(theta2) - y*l*d*sin(theta1)+d*l^2*sin(theta1)*sin(theta2);
    N12 = x*y*l*sin(theta2)-x*l^2*sin(theta2)*sin(theta1)-y^2*l*cos(theta2)+ ... 
        y*l^2*sin(theta1)*cos(theta2) - y*l*d*sin(theta2)+d*l^2*sin(theta2)*sin(theta1);
    D1 = l*x*(sin(theta1)-sin(theta2))+ l*y*(cos(theta2)-cos(theta1))+ ...
        l^2*sin(theta2-theta1)-l*d*(sin(theta1)+sin(theta2));
    D2 = D1*(y-l*sin(theta2));
    N21 = -x*N11+d*N11+N11*l*cos(theta2);
    N22 = -x*N12+d*N12+N12*l*cos(theta2)-D1*x*l*sin(theta2)+y*D1*l*cos(theta2)+D1*d*l*sin(theta2);
    A = N11/D1;
    
J(1,1) = N11/D1;
J(1,2) = N12/D1;
J(1,3) = 0;
J(2,1) = N21/D2;
J(2,2) =N22/D2;
J(2,3) =0;
J(3,1) =0;
J(3,2) =0;
J(3,3) =pv/(2*pi);
 
end

