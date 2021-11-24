figure1 = figure;

x = linspace(0,5,5001);
ErrPDT1 = ErrorePDT1.Data(13500:18500);
ErrPDT2 = ErrorePDT2.Data(13500:18500);
ErrIDT1 = Theta1ErrID.Data(15700:20700);
ErrIDT2 = ErroreIDT2.Data(15000:20000);

% Create axes
axes1 = axes('Parent',figure1);
hold(axes1,'on');

% Create plot
plot(x,ErrPDT1,'DisplayName','Theta1 PD','LineWidth',1.5,'Color',[1 0 0]);

% Create plot
plot(x,ErrIDT1,'DisplayName','Theta1 ID','LineWidth',1.5,'Color',[0 0 1]);

% Create xlabel
xlabel({'time [rad]'});

% Create title
title({'Confronto errori theta1'});

% Create ylabel
ylabel({'error [rad]'});

% Uncomment the following line to preserve the Y-limits of the axes
% ylim(axes1,[0.35 0.47]);
box(axes1,'on');
grid(axes1,'on');
% Set the remaining axes properties
% Create legend
legend(axes1,'show');