function [P,E,feasible] = forward_position_kinematics(q, proximal_len, distal_len)
    E = proximal_len * [cos(q); sin(q); 0];
    a = 1;
    b =-2 * E(1);
    c = E(1)^2 + E(2)^2 - distal_len^2;

    delta = b^2 - 4*a*c;
    if (delta < 0)
        P = NaN(3,1);
        feasible  = false;
    else
        x1 = (-b  + sqrt(delta)) / (2*a);
        x2 = (-b  - sqrt(delta)) / (2*a);
        P = [x1; 0; 0]; % an assembly is implied.
        feasible  = true;
    end
end