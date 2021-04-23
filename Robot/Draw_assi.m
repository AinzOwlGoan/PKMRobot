function [] = Draw_assi(Or,A,colore)
% Input: Matrice d'orientamento A, Origine e Vettore(1,3) con i colori degli assi
% Output: Disegna assi

for i = 1:3
    P1 = Or;
    P2 = Or + A(:,i);
    color = colore(i);
    Draw_vet(P1,P2,color)
end
end

