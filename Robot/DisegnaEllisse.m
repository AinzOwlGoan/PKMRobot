function  DisegnaEllisse(Aval,Avet)
%DISEGNAELLISSE Summary of this function goes here
% for k=1:10
% a = Avet(1,k)^2*Aval(1,k)+Avet(1,k+1)^2*Aval(2,k);
% b = 2*(Avet(1,k)*Aval(1,k)*Avet(2,k)+Avet(2,k)*Aval(2,k)*Avet(2,k+1));
% c = Avet(2,k)^2*Aval(1,k)+Avet(2,k+1)^2*Aval(2,k);
% 
% y1 = -sqrt(-4*a*c/(b^2-4*a*c));
% y2 = sqrt(-4*a*c/(b^2-4*a*c));
% 
% y = linspace(y1,y2,1000);
% for i=1:length(y)
%     expression = [a,b*y(i),c*y(i)^2-1];
%     [x] = roots(expression);
%     
%     x1(1,i) = x(1,:);
%     x2(1,i) = x(2,:);
%     
% end
% end
% plot(x1,y);
% hold on
% plot(x2,y);

