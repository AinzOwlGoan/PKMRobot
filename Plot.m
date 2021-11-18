
x = SetXPD.Data(13500:18500);
y = SetYPD.Data(13500:18500);
Xreal = XrealePD.Data(13500:18500);
Yreal = YrealePD.Data(13500:18500);
figure
plot(x,y,'color','R','linewidth',1.5)
hold on
plot(Xreal,Yreal,'color','b','linewidth',1.5)
grid on
axis([-0.06, 0.06, 0.35, 0.47])
axis equal

ErrPDT1 = ErrorePDT1.Data(13500:18500);
ErrPDT2 = ErrorePDT2.Data(13500:18500);
ErrIDT1 = Theta1ErrID.Data(15000:20000);
ErrIDT2 = ErroreIDT2.Data(15000:20000);

figure
plot(linspace(0,5,5001),ErrPDT1)
hold on
grid on
plot(linspace(0,5,5001),ErrIDT1)