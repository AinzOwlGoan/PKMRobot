function [djcbedt,djcbpdt,djcbwdt] = acceleration_analysis(q,P,E,dqdt,jcbp,jcbe,proximal_len)
    EP              = P - E;
    dpdt            = jcbp * dqdt;
    dedt            = jcbe * dqdt;
    dEPdt           = dpdt - dedt;

    djcbedt = proximal_len * [-cos(q); -sin(q); 0] * dqdt;
%   accelerazione del piede di biella:
    num    = dot(jcbe, EP);
    den    = EP(1);
    dnumdt = dot(djcbedt, EP) + dot(jcbe, dEPdt);
    ddendt = dEPdt(1);
    djcbpdt = [(dnumdt * den - num * ddendt) / den^2; 0; 0];

%   accelerazione angolare della biella:
    num    = jcbp(2) - jcbe(2);
    den    = EP(1);
    dnumdt = djcbpdt(2) - djcbedt(2);
    ddendt = dEPdt(1);
    djcbwdt = [0; 0; (dnumdt * den - num * ddendt) / den^2];
end