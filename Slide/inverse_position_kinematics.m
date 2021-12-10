function [q,E,P,feasible] = inverse_position_kinematics(x, proximal_len, distal_len)
    P = [x;0;0];
    O = [0;0;0];
    [pt(:,1), pt(:,2), nfound] = intersect_circles(O, proximal_len, P, distal_len);
    if (nfound == 0)
        P = NaN(3,1);
        E = NaN(3,1);
        q = NaN(1,1);
        feasible  = false;
    else
        y        = pt(2,:);
        [~,imx]  = max(y);
        E = [pt(imx,:); 0];
        q = atan2(E(2),E(1));
        feasible  = true;
    end
end