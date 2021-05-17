function [ThetaInt,Theta_pInt,Theta_ppInt] = DinamicaInversa(Tau,Condizioni)
%DINAMICAINVERSA Summary of this function goes here
% Inizializzazione variabili funzioni
Theta_Succ = zeros(2,1);
Theta_pSucc = zeros(2,1);
Theta_ppSucc = zeros(2,1);
ThetaInt = zeros(2,length(Tau(1,:)));
Theta_pInt = zeros(2,length(Tau(1,:)));
Theta_ppInt = zeros(2,length(Tau(1,:)));
% Inizio del calcolo della dinamica inversa
for i=1:length(Tau(1,:))
    
    if i > 1 
        Condizioni = [Theta_Succ(1),Theta_Succ(2),Theta_pSucc(1),Theta_pSucc(2)];
    end
    % con i = 1 -> acc(1) v(2) p(2)
    [Theta_pSucc,Theta_Succ,Theta_ppSucc] = SoluzioniEquazioniDifferenziali(Condizioni,Tau(:,i));
    
    if i == 1
         ThetaInt(:,i) = [Condizioni(1),Condizioni(2)];
        Theta_pInt(:,i) = [Condizioni(3),Condizioni(4)];
    end
    if i <=length(Tau(1,:))-1
        ThetaInt(:,i+1) = Theta_Succ;
        Theta_pInt(:,i+1) = Theta_pSucc;
        Theta_ppInt(:,i) = Theta_ppSucc;
    end
    if i ==length(Tau(1,:))
        Theta_ppInt(:,i) = Theta_ppSucc;
    end
end
end

