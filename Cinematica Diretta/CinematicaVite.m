function [V,V_p,V_pp,Jvite] = CinematicaVite(phi1ldm,phi2ldm,phi1ldm_p,phi2ldm_p,phi1ldm_pp,phi2ldm_pp)
%CINEMATICAVITE Calcolo cinematica della vite
PKM = Define_Robot();
pv = PKM.vite.pv;

%z = zvldm + (pv/2*pi)*thetavldm;

Jvite = [pv/(2*pi),pv/(2*pi); 0,1];
V = Jvite*[phi1ldm;phi2ldm];
V_p = Jvite*[phi1ldm_p;phi2ldm_p];
V_pp = Jvite*[phi1ldm_pp;phi2ldm_pp];


end

