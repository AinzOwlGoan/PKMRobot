function [p1,p2,found] = intersect_circles(c1, r1, c2, r2)
    xc1 = c1(1);
    xc2 = c2(1);

    yc1 = c1(2);
    yc2 = c2(2);

    found = 0;
    p1 = zeros(2,1);
    p2 = zeros(2,1);
%
    dc = norm(c1 - c2);

    if ((r1 > dc + r2) || (r2 > dc + r1))
        return
    end

    if ((yc1 - yc2) == 0)

        if ((xc1 - xc2) == 0)
            return
        end

        delta_x =  xc2 - xc1;

        if (abs(delta_x) > (r1 + r2))
            return
        else
            found   = 1;
            xi_1    =(r1^2 - r2^2 + delta_x^2) / (2 * delta_x) ;
            eta     = sqrt(r1^2 - xi_1^2);
            p1(1)   = xc1 + xi_1;
            p2(1)   = p1(1);
            p1(2)   = yc1 + eta;
            p2(2)   = yc1 - eta;
        end
    else
    %   y = m x + q;     
        m =-(xc1 - xc2) / (yc1 - yc2);
        q = (r2^2 - r1^2 + xc1^2 - xc2^2 + yc1^2 - yc2^2) / (2 * (yc1 - yc2));
    %   
        a = 1 + m^2;
        b = -2 * (xc1 +  m * yc1 - m * q);
        c = (xc1^2 + yc1^2 - 2*q*yc1 + q^2 - r1^2);
    %
        d = b^2 - 4 * a * c;
        if (d < 0)
            return
        else
            found = 1;
        end

        p1(1,1) = (-b + sqrt(d)) / (2 * a);
        p1(2,1) = m * p1(1,1) + q;

        p2(1,1) = (-b - sqrt(d)) / (2 * a);
        p2(2,1) = m * p2(1,1) + q;
    end
end
