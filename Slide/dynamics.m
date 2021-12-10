function [M,C] = dynamics(jcbp,jcbe,jcbw,djcbpdt,djcbedt,djcbwdt,proximal_len,distal_len,proximal_mass,distal_mass,cart_mass)
    proximal_J = proximal_mass * proximal_len^2 / 12;
    distal_J   = distal_mass * distal_len^2 / 12;

    jcbgp = 0.5 * jcbe;
    jcbgd = 0.5 *jcbe + 0.5 * jcbp;

    djcbgpdt = 0.5 * djcbedt;
    djcbgddt = 0.5 *  djcbedt + 0.5 * djcbpdt;

    Mprox = proximal_J + proximal_mass * (jcbgp.' * jcbgp);
    Mdist = distal_J * (jcbw.' * jcbw) + distal_mass * (jcbgd.' * jcbgd);
    Mcart = cart_mass  * (jcbp.' * jcbp);

    Cprox = (proximal_mass * (jcbgp.' * djcbgpdt));
    Cdist = (distal_mass * (jcbgd.' * djcbgddt) +...
             distal_J * (jcbw.'  * djcbwdt));
    Ccart = (cart_mass * (jcbp.'  * djcbpdt));

    M = Mprox + Mdist + Mcart;
    C = Cprox + Cdist + Ccart;
end
