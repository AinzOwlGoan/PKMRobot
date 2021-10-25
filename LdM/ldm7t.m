function [G, F, f] = ldm7t(x)
xv = 0.4;
xj = 0.1;
Ca = 1/((1-xv)*(xv-xj));

if ( x >= 0 && x < xj)            %acc crescente positiva
    F = (1/2)*Ca/xj*x^2;
    G = (1/6)*Ca/xj*x^3;
    f = Ca/xj*x;

  elseif (x >= xj && x < (xv-xj))   %acc costante positiva
    F = Ca*x - (1/2)*Ca*xj;
    G = (1/2)*Ca*x^2 - (1/2)*Ca*xj*x + (1/6)*Ca*xj^2;
    f = Ca;

  elseif( x>= (xv-xj) && x < xv)    %acc decrescente positiva
    F = -(1/2)*Ca/xj*x^2 + Ca/xj*xv*x - Ca*(xj + (1/2)/xj*xv^2 - xv);
    G = -(1/6)*Ca/xj*x^3 + (1/2)*Ca/xj*xv*x^2 - Ca*(xj + (1/2)/xj*xv^2 - xv)*x ...
        - (1/2)*Ca*xv^2  + (1/6)*Ca/xj*xv^3 + (1/2)*Ca*xv*xj;
    f = -Ca/xj*x + Ca*xv/xj;

  elseif( x>= xv && x < (1-xv))     %acc costante nulla
    F = Ca*(xv - xj);
    G = Ca*(xv - xj)*x - (1/2)*Ca*xv^2 + (1/2)*Ca*xv*xj;
    f = 0;
    
  elseif( x>= (1-xv) && x < (1-xv+xj))   %acc decrescente negativa
    F = -(1/2)*Ca/xj*x^2 + Ca/xj*(1-xv)*x + Ca*(xv-xj) - (1/2)*Ca/xj*(1-xv)^2;
    G = -(1/6)*Ca/xj*x^3 + (1/2)*Ca/xj*(1-xv)*x^2 + Ca*(xv-xj)*x - (1/2)*Ca/xj*(1-xv)^2*x ...
        - (1/2)*Ca*xv^2 + (1/2)*Ca*xv*xj + (1/6)*Ca/xj*(1-xv)^3;
    f = -Ca/xj*x + Ca/xj*(1-xv);
    
  elseif( x>= (1-xv+xj) && x < (1-xj))   %acc costante negativa
    F = -Ca*x + Ca - (1/2)*Ca*xj;
    G = -(1/2)*Ca*x^2 + Ca*x - (1/2)*Ca*xj*x + 1 - Ca*(-(1/2)*xj + (1/6)*xj^2 + (1/2));
    f = -Ca;
    
  elseif( x>= (1-xj) && x <= 1)          %acc crescente negativa
    F = (1/2)*Ca/xj*x^2 - Ca/xj*x +(1/2)*Ca/xj;
    G = (1/6)*Ca/xj*x^3 - (1/2)*Ca/xj*x^2 +(1/2)*Ca/xj*x + 1 - (1/6)*Ca/xj;
    f = Ca/xj*(x-1);
    
  else                                   %acc costante nulla
    F = 0;
    G = 1;
    f = 0;
end

end

