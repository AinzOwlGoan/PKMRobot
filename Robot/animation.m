function animation(d, l ,theta1,theta2, theta3, theta4)

% animazione
v_1 = l*exp(1i*theta1);
v_3 = l*exp(1i*theta3);
v_2 = l*exp(1i*theta2);
v_4 = l*exp(1i*theta4);


figure('name','animazione')
line_1 = line('xdata',[],'ydata',[],'color','r','linewidth',3);
line_2 = line('xdata',[],'ydata',[],'color','b','linewidth',3);
line_3 = line('xdata',[],'ydata',[],'color','g','linewidth',3);
line_4 = line('xdata',[],'ydata',[],'color','m','linewidth',3);
line_d = line([-d d],[0 0],'color','k','linewidth',3);
grid on
axis square
axis equal
xlim([-0.4 0.4])
ylim([-0.3 0.5])
zlim([-0.5 0.5])
view([-0.50 90.000])
legend('z1','z2','z3','z4','d')
title('Movimento PKM')
for z=1:length(theta3)
      set(line_1,'xdata',[-d, -d+real(v_1(z))], 'ydata',[0, imag(v_1(z))])
      set(line_3,'xdata',[-d+real(v_1(z)), -d+real(v_1(z))+real(v_3(z)) ],...
          'ydata',[imag(v_1(z)),imag(v_1(z))+imag(v_3(z))])
      set(line_2,'xdata',[d, d+real(v_2(z))], 'ydata',[0, imag(v_2(z))])
      set(line_4,'xdata',[d+real(v_2(z)), d+real(v_2(z))+real(v_4(z)) ],...
          'ydata',[imag(v_2(z)),imag(v_2(z))+imag(v_4(z))]) 
    pause(0.01)
end