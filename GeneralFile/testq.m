function [x, y] = testq(t, T, h)
if t > 0 && t <= T/4
    y = 0;
    X1 = linspace(0, h, 1000*T/4)';
    
    x = X1(t*1000);
elseif t > T/4 && t <= 2*T/4
    x = h;
    Y1 = linspace(0, -h, 1000*T/4);
    y = Y1(t*1000);
elseif t > 2*T/4 && t <= 3*T/4
    y = -h;
    X1 = linspace(h, 0, 1000*T/4);
    x = X1(t*1000);
elseif t > 3*T/4 && t <= 4*T/4
    x = 0;
    Y1 = linspace(-h, 0, 1000*T/4);
    y = Y1(t*100);
else
    x = 0;
    y = 0;
end