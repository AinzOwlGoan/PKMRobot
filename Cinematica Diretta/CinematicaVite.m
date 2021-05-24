function [z,z_p,z_pp,Jvite] = CinematicaVite(zvldm,thetavldm,zvldm_p,thetavldm_p,zvldm_pp,thetavldm_pp)
%CINEMATICAVITE Calcolo cinematica della vite
PKM = Define_Robot();
pv = PKM.vite.pv;

z = zvldm + (pv/2*pi)*thetavldm;

Jvite = [pv/(2*pi) , 1];
z_p = Jvite*[thetavldm_p;zvldm_p];
z_pp = Jvite*[thetavldm_pp;zvldm_pp];


end

