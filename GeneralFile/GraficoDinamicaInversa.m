figure1 = figure;
X2 = XrealeID.Data(15000:20000);
Y2 = YrealeID.Data(15000:20000);
% Create axes
axes1 = axes('Parent',figure1);
hold(axes1,'on');

% Create plot
plot(x,y,'DisplayName','SetPoint','LineWidth',1.5,'Color',[1 0 0]);

% Create plot
plot(X2,Y2,'DisplayName','Reale','LineWidth',1.5,'Color',[0 0 1]);

% Create xlabel
xlabel({'X [m]'});

% Create title
title({'Circonferenza controllo Dinamica Inversa'});

% Create ylabel
ylabel({'Y [m]'});

% Uncomment the following line to preserve the Y-limits of the axes
% ylim(axes1,[0.35 0.47]);
box(axes1,'on');
grid(axes1,'on');
% Set the remaining axes properties
set(axes1,'DataAspectRatio',[1 1 1],'PlotBoxAspectRatio',...
    [1.2678936605317 1 16.6666666666667]);
% Create legend
legend(axes1,'show');