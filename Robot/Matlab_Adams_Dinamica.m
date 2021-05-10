function [] = Matlab_Adams_Dinamica(PKM_Coppie, C1, C2)
time = linspace(0,1,length(C1));

C1_ad = PKM_Coppie(:,1);
C1_ad = C1_ad';
C2_ad = PKM_Coppie(:,2);
C2_ad = C2_ad';

figure
subplot(2,1,1);
plot(time(2:1000),C1(1,2:1000)-C1_ad(1,2:1000),'color','k','linewidth',1)
title('Errore coppia C1 Matlab-Adams')
grid on

subplot(2,1,2); 
plot(time(2:1000),C2(1,2:1000)-C2_ad(1,2:1000),'color','k','linewidth',1)
title('Errore coppia C2 Matlab-Adams')
grid on

end