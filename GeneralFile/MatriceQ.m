% Q1 = Kp/(2*Kd)* (1+1/Kp)+Kd/(2*Kp);
% Q2 = (1+1/Kp)/(2*Kd);
% Q12 = 1/(2*Kp);
% 
% Q = [Q1,Q12;Q12,Q2];
Kp = 3000;
Kd = 5;
syms Q1 Q2 Q3 Q4 Q12 Q13 Q14 Q23 Q24 Q34

A = [0,0,-Kp,0; 
    0,0,0,-Kp;
    1,0,-Kd,0;
    0,1,0,-Kd];
B = A';
Q = [Q1,Q12,Q13,Q14; Q12,Q2,Q23,Q24;Q13,Q23,Q3,Q34; Q14,Q24,Q34,Q4];

S = A*Q+Q*B;
% S = B*Q+Q*A; DUBBIO


Sp = S*[1;1;1;1];

Tn = -eye(4);

eqn1 = -2*Kp*Q13 == -1;
eqn2 = -Q14*Kp-Kp*Q23 == 0;
eqn3 = Q1-Q13*Kd-Kp*Q3 == 0;
eqn4 = Q12-Q14*Kd-Kp*Q34 == 0;
eqn5 = -2*Kp*Q24 == -1;
eqn6 = -Kp*Q34+Q12-Kd*Q23==0;
eqn7 = -Kp*Q4+Q2-Kd*Q24 == 0;
eqn8 = 2*(Q13-Kd*Q3) == -1;
eqn9 = Q14-2*Kd*Q34 +Q23 == 0;
eqn10 = 2*(Q24-Kd*Q4) == -1;
[Sa,Sb] = equationsToMatrix([eqn1,eqn2,eqn3,eqn4,eqn5,eqn6,eqn7,eqn8,eqn9,eqn10],[Q1 Q12 Q13 Q14 Q2 Q23 Q24 Q3 Q34 Q4]);

Soluzioni = linsolve(Sa,Sb);

Q = [ (Kd^2 + Kp^2 + Kp)/(2*Kd*Kp),0 1/(2*Kp),0;
    0, (Kd^2 + Kp^2 + Kp)/(2*Kd*Kp),0, 1/(2*Kp); 
    1/(2*Kp),0, (Kp + 1)/(2*Kd*Kp),0;
    0,1/(2*Kp),0,(Kp + 1)/(2*Kd*Kp)];

% Q funziona correttamente
final = A*Q+Q*B; 

