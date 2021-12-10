figure1 = figure;
% 144600
x = Xset.Data(15000:31000);
y = Yset.Data(15000:31000);

Xreal = xR.Data(15000:31000);
Yreal = yR.Data(15000:31000);
% Create axes
axes1 = axes('Parent',figure1);
hold(axes1,'on');

% Create plot
plot(x,y,'DisplayName','Setpoint','LineWidth',1.5,'Color',[1 0 0]);

% Create plot
plot(Xreal,Yreal,'DisplayName','Reale','LineWidth',1.5,'Color',[0 0 1]);

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