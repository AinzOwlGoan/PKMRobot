function [jcbe,jcbp,jcbw] = jacobian_analysis(q,P,E,proximal_len)
    EP            = P - E;
    jcbe  = proximal_len * [-sin(q); cos(q); 0];
    jcbp  = [dot(jcbe, EP) / EP(1); 0; 0];
    jcbw  = [0; 0;  (jcbp(2) - jcbe(2)) / EP(1)];
end