function [C1, C2, M, K] = Dinamica_PLV(PKM,theta1ldm_p,theta2ldm_p,theta1ldm_pp,theta2ldm_pp,J1m,J2m,J3m,J4m,JEm,J34m,J1pm,J2pm,J3pm,J4pm,JEpm,J34pm)

m = PKM.link.m;
m3 = PKM.link.m;
m4 = PKM.link.m;
me = 0;
I = PKM.link.J; % Inerzia link
I3 = PKM.link.J;
k = 1;
C = zeros(2,1000);
C1 = zeros(1,1000);
C2 = zeros(1,1000);

for i=1:1000
    theta1_p = theta1ldm_p(1,i);
    theta2_p = theta2ldm_p(1,i);
    theta1_pp = theta1ldm_pp(1,i);
    theta2_pp = theta2ldm_pp(1,i);
    J1 = J1m(:, k:k+1);
    J2 = J2m(:, k:k+1);
    J3 = J3m(:, k:k+1);
    J4 = J4m(:, k:k+1);
    JE = JEm(:, k:k+1);
    J34 = J34m(:, k:k+1);
    J1p = J1pm(:, k:k+1);
    J2p = J2pm(:, k:k+1);
    J3p = J3pm(:, k:k+1);
    J4p = J4pm(:, k:k+1);
    JEp = JEpm(:, k:k+1);
    J34p = J34pm(:, k:k+1);
    k = k+2;

    C(:,i) = (I*eye(2) + m*(J1')*J1 + m*(J2')*J2 + I3*(J34')*J34 + m3*(J3')*J3 + m4*(J4')*J4 + me*(JE')*JE)*[theta1_pp; theta2_pp] + ...
        (m*(J1')*J1p + m*(J2')*J2p + I3*(J34')*J34p + m3*(J3')*J3p + m4*(J4')*J4p + me*(JE')*JEp)*[theta1_p; theta2_p];
    C1(1,i) = C(1,i);
    C2(1,i) = C(2,i);
    Mi = (I*eye(2) + m*(J1')*J1 + m*(J2')*J2 + I3*(J34')*J34 + m3*(J3')*J3 + m4*(J4')*J4 + me*(JE')*JE);
    Ki = (m*(J1')*J1p + m*(J2')*J2p + I3*(J34')*J34p + m3*(J3')*J3p + m4*(J4')*J4p + me*(JE')*JEp);
    
     if i ==1
       M = Mi;
       K = Ki;
     end
      if i ~= 1
       M = [M,Mi];
       K = [K,Ki];
      end

end

