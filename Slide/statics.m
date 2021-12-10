function [grad_Vg] = statics(jcbe,proximal_len, distal_len, proximal_mass, distal_mass)
    gconst = 9.81;
    grad_y_prox   = 0.5 * jcbe(2);
    grad_y_dist   = 0.5 * jcbe(2);
    grad_Vg       =-gconst * (proximal_mass * grad_y_prox + distal_mass * grad_y_dist);
end