function [] = Draw_vet(P1,P2,color)

coord = [P1 P2];
x = coord(1,:);
y = coord(2,:);
z = coord(3,:);
line(x,y,z,'color',color,'linewidth',3)
axis equal
grid on
view(3)
end

