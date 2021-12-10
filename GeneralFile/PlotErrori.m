figure1 = figure;

x = linspace(0,2,2001);
% ErrPDT1 = ErrorePDT1.Data(13500:18500);
% ErrPDT2 = ErrorePDT2.Data(13500:18500);
% ErrIDT1 = Theta1ErrID.Data(15700:20700);
% ErrIDT2 = ErroreIDT2.Data(15000:20000);
ErrTP = trasP.Data(16860:18860);
ErrRP = rotP.Data(16860:18860);
ErrTPD = trasPD.Data(15840:17840);
ErrRPD = rotPD.Data(15840:17840);
ErrTPD2 = rotP2.Data(19830:21830);
ErrTP2 = trasP2.Data(15080:17080);
% Create axes
axes1 = axes('Parent',figure1);
hold(axes1,'on');

% Create plot
plot(x,ErrRP,'DisplayName','Errore P','LineWidth',1.5,'Color',[1 0 0]);

% Create plot
plot(x,ErrRPD,'DisplayName','Errore PD','LineWidth',1.5,'Color',[0 0 1]);

% Create xlabel
xlabel({'time [sec]'});

% Create title
title({'Confronto errori rotazione'});

% Create ylabel
ylabel({'error [rad]'});
% 1446
% Uncomment the following line to preserve the Y-limits of the axes
% ylim(axes1,[0.35 0.47]);
box(axes1,'on');
grid(axes1,'on');
% Set the remaining axes properties
% Create legend
legend(axes1,'show');