Mtot = zeros(2);
Ktot = zeros(2);
n = 0;

for i = 1:2:2000
    Ms = M(:,i:i+1);
    Mtot = Mtot + Ms;
    
    Ks = K(:,i:i+1);
    Ktot = Ktot + Ks;
    
    n = n+1;
end

Mris = Mtot/n;
Mris(1,2) = 0;
Mris(2,1) = 0;

Kris = Ktot/n;
Kris(1,2) = 0;
Kris(2,1) = 0;

Mdiag = Mris
Kdiag = Kris