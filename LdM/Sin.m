function [ G, F, f, J ] = Sin( par , x )

if( x >= 0 && x <= 1 )
    J = -cos(x);
    f = -sin(x);
    F = cos(x);
    G = sin(x);
else
    J=0;
    f=0;
    F=0;
    G=0;
end