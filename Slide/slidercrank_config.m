function [cfg, cfg_array] = slidercrank_config(lprox,ldist,mprox,mdist,mcart)
    cfg.proximal.len  = lprox;
    cfg.proximal.mass = mprox;
    cfg.proximal.lenG = 0.5 * lprox;
    cfg.proximal.J    = mprox * lprox^2 / 12;

    cfg.distal.len  = ldist;
    cfg.distal.mass = mdist;
    cfg.distal.lenG = 0.5 * ldist;
    cfg.distal.J    = mdist * ldist^2 / 12;

    cfg.cart.mass     = mcart;
    cfg.gconst        = 9.81;    
    
    cfg_array = [lprox;
                 mprox;
                 0.5*lprox;
                 mprox * lprox^2/12;
                 ldist;
                 mdist;
                 0.5 * ldist;
                 mdist * ldist^2 / 12;
                 mcart; 9.81];
end
