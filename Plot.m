
xa = Xtangentiactual.Data(11930:30900);
ya = Ytangentiactual.Data(11930:30900);


X = XtangentiRif.Data(11930:30900);
Y = YtangentiRif.Data(11930:30900);

figure
plot(xa,ya,'color','R','linewidth',1.5)
hold on
plot(X,Y,'color','b','linewidth',1.5)
grid on
axis equal

