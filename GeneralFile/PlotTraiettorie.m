figure1 = figure;
% .Data(16100:21100);
time = linspace(0,3,3001);

Xreal = Tvr.Data(15500:18500);
Xset = TvS.Data(15500:18500);
err = Xset-Xreal;
% Create axes
axes1 = axes('Parent',figure1);
hold(axes1,'on');

% Create plot
plot(time,Xset,'DisplayName','Setpoint','LineWidth',1.5,'Color',[1 0 0]);
hold on
% Create plot
plot(time,Xreal,'DisplayName','Reale','LineWidth',1.5,'Color',[0 0 1]);

% Create xlabel
xlabel({'Time [sec]'});
% Create title
title({'Rotazione controllo PD'});

% Create ylabel
ylabel({'Z [m]'});

% Uncomment the following line to preserve the Y-limits of the axes
% ylim(axes1,[0.35 0.47]);
box(axes1,'on');
grid(axes1,'on');
% Set the remaining axes properties
% Create legend
legend(axes1,'show');

figure 
plot(time,err,'linewidth',2)
xlabel({'Time [sec]'});
% Create title
title({'Errore rotazione controllo PD'});
% Create ylabel
ylabel({'[rad]'});