function [Cvite] = DinamicaVite(Jvite,phi1ldm_pp,phi2ldm_pp)
%DINAMICAVITE Summary of this function goes here

PKM = Define_Robot();
Iv = PKM.vite.Jv;
me = PKM.vite.me;

Cvite = Jvite'*[me,0;0,Iv]*Jvite*[phi1ldm_pp;phi2ldm_pp];
end

