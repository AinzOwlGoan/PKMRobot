function PlotRobot(H1,H2,E1,E2,P)
%PLOTROBOT Funzione che plotta i link del robot
%  
O = [0 0 0]'; % Origine sistema di riferimento
A = eye(3,3); 
color0 = ['r', 'r', 'r']; 
figure;
axis equal
Draw_assi(O, A, color0)
Draw_Link3D(O, H1, H2, E1(:,1), E2(:,1), P(:,1),'b')
Draw_Link3D(O, H1, H2, E1(:,400), E2(:,400), P(:,400),'k')

xlim([-0.4 0.4])
ylim([-0.4 0.4])
zlim([-0.5 0.5])

view([-0.50 90.000])
end

