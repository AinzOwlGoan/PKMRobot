function [] = Draw_Link3D(O, H1, H2, E1, E2, P, col)
%   Input: Posizione Punti H1, H2, E1, E2, P, Origine O e colore
%   Output: Rappresentazione grafica nello spazio del robot PKM
Pxy = [P(1,1); P(2,1); 0];
Draw_vet(O, H1, col)
Draw_vet(O, H2, col)
Draw_vet(H1, E1, col)
Draw_vet(H2, E2, col)
Draw_vet(E1, Pxy, col)
Draw_vet(E2, Pxy, col)
Draw_vet(Pxy, P, col)


end