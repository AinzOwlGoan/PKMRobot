figure1 = figure;

x = Xval.Data(37374:69374);
y = Yval.Data(37374:69374);

Xr = Xreal.Data(37374:69374);
Yr = Yreal.Data(37374:69374);
% Create axes
axes1 = axes('Parent',figure1);
hold(axes1,'on');

% Create plot
plot(x,y,'DisplayName','Setpoint','LineWidth',1.5,'Color',[1 0 0]);

% Create plot
plot(Xr,Yr,'DisplayName','Reale','LineWidth',1.5,'Color',[0 0 1]);

% Create xlabel
xlabel({'X [m]'});

% Create title
title({'Pattern controllo dinamica inversa'});

% Create ylabel
ylabel({'Y [m]'});

% Uncomment the following line to preserve the Y-limits of the axes
% ylim(axes1,[0.35 0.47]);
box(axes1,'on');
grid(axes1,'on');
% Set the remaining axes properties
% Create legend
legend(axes1,'show');