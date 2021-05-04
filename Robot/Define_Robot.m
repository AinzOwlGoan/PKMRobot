function [PKM] = Define_Robot()
% Output: Fornisce un dato strutturato con tutte le informazioni dul robot
PKM.link.l = 0.25; % Lunghezza link
PKM.link.m = 2.9; % Massa link
PKM.link.cm = 0.125; % Posizione centro massa link
PKM.link.J = 5.22E-02; % Momento d'inerzia baricentrico 
PKM.link.d = 0.09; % Lunghezza semitelaio 
PKM.vite.me = 0.36; % massa ef/vite
PKM.vite.pv = 0.02; % Passo vite
PKM.vite.z0 = -0.3; % Posizione iniziale vite
PKM.vite.Jv = 6.4E-06; % Inerzia meccanismo vite
end
