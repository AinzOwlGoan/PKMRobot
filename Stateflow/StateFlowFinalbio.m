function bio=StateFlowFinalbio
bio = [];
bio(1).blkName='State flow robot/p1';
bio(1).sigName='bool';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&StateFlowFinal_B.Bool';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='State flow robot/p2';
bio(2).sigName='offC';
bio(2).portIdx=1;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&StateFlowFinal_B.OffT';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='State flow robot/p3';
bio(3).sigName='homeH';
bio(3).portIdx=2;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&StateFlowFinal_B.CoppiaH';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='State flow robot/p4';
bio(4).sigName='offAv';
bio(4).portIdx=3;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&StateFlowFinal_B.OffA_vite';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='State flow robot/p5';
bio(5).sigName='offBv';
bio(5).portIdx=4;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&StateFlowFinal_B.OffB_vite';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='State flow robot/p6';
bio(6).sigName='offAb';
bio(6).portIdx=5;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&StateFlowFinal_B.OffA';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='State flow robot/p7';
bio(7).sigName='offBb';
bio(7).portIdx=6;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&StateFlowFinal_B.OffB';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='State flow robot/p8';
bio(8).sigName='homeA';
bio(8).portIdx=7;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&StateFlowFinal_B.CoppiaA';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='State flow robot/p9';
bio(9).sigName='homeB';
bio(9).portIdx=8;
bio(9).dim=[1,1];
bio(9).sigWidth=1;
bio(9).sigAddress='&StateFlowFinal_B.CoppiaB';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='State flow robot/p10';
bio(10).sigName='luci';
bio(10).portIdx=9;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&StateFlowFinal_B.Luci';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='State flow robot/p11';
bio(11).sigName='Hv';
bio(11).portIdx=10;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&StateFlowFinal_B.Hv';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='State flow robot/p12';
bio(12).sigName='Hb';
bio(12).portIdx=11;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&StateFlowFinal_B.Hb';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='State flow robot/p13';
bio(13).sigName='Enable';
bio(13).portIdx=12;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&StateFlowFinal_B.Enable';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='State flow robot/p14';
bio(14).sigName='FineLav';
bio(14).portIdx=13;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&StateFlowFinal_B.FineLavorazione';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='State flow robot/p15';
bio(15).sigName='';
bio(15).portIdx=14;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&StateFlowFinal_B.PosRifA';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='State flow robot/p16';
bio(16).sigName='';
bio(16).portIdx=15;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&StateFlowFinal_B.PosRifB';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='State flow robot/p17';
bio(17).sigName='';
bio(17).portIdx=16;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&StateFlowFinal_B.Stato';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='Clock';
bio(18).sigName='';
bio(18).portIdx=0;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&StateFlowFinal_B.Clock';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='Abbassa';
bio(19).sigName='';
bio(19).portIdx=0;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&StateFlowFinal_B.Abbassa';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='Discesa';
bio(20).sigName='';
bio(20).portIdx=0;
bio(20).dim=[1,1];
bio(20).sigWidth=1;
bio(20).sigAddress='&StateFlowFinal_B.Discesa';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='Reset';
bio(21).sigName='';
bio(21).portIdx=0;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&StateFlowFinal_B.Reset';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='StartHome';
bio(22).sigName='';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&StateFlowFinal_B.StartHome';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='StartRobot';
bio(23).sigName='';
bio(23).portIdx=0;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&StateFlowFinal_B.StartRobot';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='StartWork';
bio(24).sigName='';
bio(24).portIdx=0;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&StateFlowFinal_B.StartWork';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='StartZero';
bio(25).sigName='';
bio(25).portIdx=0;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&StateFlowFinal_B.StartZero';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='Stop';
bio(26).sigName='';
bio(26).portIdx=0;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&StateFlowFinal_B.Stop';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='Data Type Conversion1';
bio(27).sigName='';
bio(27).portIdx=0;
bio(27).dim=[1,1];
bio(27).sigWidth=1;
bio(27).sigAddress='&StateFlowFinal_B.DataTypeConversion1_p';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

bio(28).blkName='Data Type Conversion2';
bio(28).sigName='';
bio(28).portIdx=0;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&StateFlowFinal_B.DataTypeConversion2';
bio(28).ndims=2;
bio(28).size=[];
bio(28).isStruct=false;

bio(29).blkName='Data Type Conversion5';
bio(29).sigName='';
bio(29).portIdx=0;
bio(29).dim=[1,1];
bio(29).sigWidth=1;
bio(29).sigAddress='&StateFlowFinal_B.DataTypeConversion5';
bio(29).ndims=2;
bio(29).size=[];
bio(29).isStruct=false;

bio(30).blkName='Data Type Conversion7';
bio(30).sigName='';
bio(30).portIdx=0;
bio(30).dim=[1,1];
bio(30).sigWidth=1;
bio(30).sigAddress='&StateFlowFinal_B.DataTypeConversion7';
bio(30).ndims=2;
bio(30).size=[];
bio(30).isStruct=false;

bio(31).blkName='EtherCAT Init ';
bio(31).sigName='';
bio(31).portIdx=0;
bio(31).dim=[6,1];
bio(31).sigWidth=6;
bio(31).sigAddress='&StateFlowFinal_B.EtherCATInit[0]';
bio(31).ndims=2;
bio(31).size=[];
bio(31).isStruct=false;

bio(32).blkName='Finecorsa Vite/Data Type Conversion8';
bio(32).sigName='';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&StateFlowFinal_B.DataTypeConversion8';
bio(32).ndims=2;
bio(32).size=[];
bio(32).isStruct=false;

bio(33).blkName='Finecorsa Vite/EtherCAT PDO Receive16';
bio(33).sigName='';
bio(33).portIdx=0;
bio(33).dim=[1,1];
bio(33).sigWidth=1;
bio(33).sigAddress='&StateFlowFinal_B.EtherCATPDOReceive16';
bio(33).ndims=2;
bio(33).size=[];
bio(33).isStruct=false;

bio(34).blkName='Finecorsa Vite/Integer to Bit Converter';
bio(34).sigName='';
bio(34).portIdx=0;
bio(34).dim=[16,1];
bio(34).sigWidth=16;
bio(34).sigAddress='&StateFlowFinal_B.IntegertoBitConverter[0]';
bio(34).ndims=2;
bio(34).size=[];
bio(34).isStruct=false;

bio(35).blkName='Finecorsa braccia/Data Type Conversion8';
bio(35).sigName='';
bio(35).portIdx=0;
bio(35).dim=[1,1];
bio(35).sigWidth=1;
bio(35).sigAddress='&StateFlowFinal_B.DataTypeConversion8_f';
bio(35).ndims=2;
bio(35).size=[];
bio(35).isStruct=false;

bio(36).blkName='Finecorsa braccia/EtherCAT PDO Receive16';
bio(36).sigName='';
bio(36).portIdx=0;
bio(36).dim=[1,1];
bio(36).sigWidth=1;
bio(36).sigAddress='&StateFlowFinal_B.EtherCATPDOReceive16_d';
bio(36).ndims=2;
bio(36).size=[];
bio(36).isStruct=false;

bio(37).blkName='Finecorsa braccia/Integer to Bit Converter';
bio(37).sigName='';
bio(37).portIdx=0;
bio(37).dim=[16,1];
bio(37).sigWidth=16;
bio(37).sigAddress='&StateFlowFinal_B.IntegertoBitConverter_d[0]';
bio(37).ndims=2;
bio(37).size=[];
bio(37).isStruct=false;

bio(38).blkName='LED Status/MATLAB Function';
bio(38).sigName='rosso';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&StateFlowFinal_B.y_i';
bio(38).ndims=2;
bio(38).size=[];
bio(38).isStruct=false;

bio(39).blkName='LED Status/MATLAB Function1';
bio(39).sigName='bianco';
bio(39).portIdx=0;
bio(39).dim=[1,1];
bio(39).sigWidth=1;
bio(39).sigAddress='&StateFlowFinal_B.y_b';
bio(39).ndims=2;
bio(39).size=[];
bio(39).isStruct=false;

bio(40).blkName='LED Status/MATLAB Function2';
bio(40).sigName='verde';
bio(40).portIdx=0;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&StateFlowFinal_B.y_f';
bio(40).ndims=2;
bio(40).size=[];
bio(40).isStruct=false;

bio(41).blkName='LED Status/Data Type Conversion24';
bio(41).sigName='';
bio(41).portIdx=0;
bio(41).dim=[1,1];
bio(41).sigWidth=1;
bio(41).sigAddress='&StateFlowFinal_B.DataTypeConversion24';
bio(41).ndims=2;
bio(41).size=[];
bio(41).isStruct=false;

bio(42).blkName='LED Status/Data Type Conversion25';
bio(42).sigName='';
bio(42).portIdx=0;
bio(42).dim=[1,1];
bio(42).sigWidth=1;
bio(42).sigAddress='&StateFlowFinal_B.DataTypeConversion25';
bio(42).ndims=2;
bio(42).size=[];
bio(42).isStruct=false;

bio(43).blkName='LED Status/Data Type Conversion26';
bio(43).sigName='';
bio(43).portIdx=0;
bio(43).dim=[1,1];
bio(43).sigWidth=1;
bio(43).sigAddress='&StateFlowFinal_B.DataTypeConversion26';
bio(43).ndims=2;
bio(43).size=[];
bio(43).isStruct=false;

bio(44).blkName='Out Asse A Braccia/Data Type Conversion3';
bio(44).sigName='';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&StateFlowFinal_B.DataTypeConversion3';
bio(44).ndims=2;
bio(44).size=[];
bio(44).isStruct=false;

bio(45).blkName='Out Asse A Braccia/Coppia A braccia saturata';
bio(45).sigName='';
bio(45).portIdx=0;
bio(45).dim=[1,1];
bio(45).sigWidth=1;
bio(45).sigAddress='&StateFlowFinal_B.CoppiaAbracciasaturata';
bio(45).ndims=2;
bio(45).size=[];
bio(45).isStruct=false;

bio(46).blkName='Out Asse A Braccia/Switch1';
bio(46).sigName='';
bio(46).portIdx=0;
bio(46).dim=[1,1];
bio(46).sigWidth=1;
bio(46).sigAddress='&StateFlowFinal_B.Switch1_c';
bio(46).ndims=2;
bio(46).size=[];
bio(46).isStruct=false;

bio(47).blkName='Out Asse B Braccia/Data Type Conversion4';
bio(47).sigName='';
bio(47).portIdx=0;
bio(47).dim=[1,1];
bio(47).sigWidth=1;
bio(47).sigAddress='&StateFlowFinal_B.DataTypeConversion4';
bio(47).ndims=2;
bio(47).size=[];
bio(47).isStruct=false;

bio(48).blkName='Out Asse B Braccia/Coppia B braccia saturata';
bio(48).sigName='';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&StateFlowFinal_B.CoppiaBbracciasaturata';
bio(48).ndims=2;
bio(48).size=[];
bio(48).isStruct=false;

bio(49).blkName='Out Asse B Braccia/Switch1';
bio(49).sigName='';
bio(49).portIdx=0;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&StateFlowFinal_B.Switch1_i';
bio(49).ndims=2;
bio(49).size=[];
bio(49).isStruct=false;

bio(50).blkName='Out asse A Vite/Convert A';
bio(50).sigName='';
bio(50).portIdx=0;
bio(50).dim=[1,1];
bio(50).sigWidth=1;
bio(50).sigAddress='&StateFlowFinal_B.ConvertA';
bio(50).ndims=2;
bio(50).size=[];
bio(50).isStruct=false;

bio(51).blkName='Out asse A Vite/Gain';
bio(51).sigName='';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&StateFlowFinal_B.Gain_m';
bio(51).ndims=2;
bio(51).size=[];
bio(51).isStruct=false;

bio(52).blkName='Out asse A Vite/Switch';
bio(52).sigName='';
bio(52).portIdx=0;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&StateFlowFinal_B.Switch';
bio(52).ndims=2;
bio(52).size=[];
bio(52).isStruct=false;

bio(53).blkName='Out asse B Vite/Convert B';
bio(53).sigName='';
bio(53).portIdx=0;
bio(53).dim=[1,1];
bio(53).sigWidth=1;
bio(53).sigAddress='&StateFlowFinal_B.ConvertB';
bio(53).ndims=2;
bio(53).size=[];
bio(53).isStruct=false;

bio(54).blkName='Out asse B Vite/Coppia A vite saturata';
bio(54).sigName='';
bio(54).portIdx=0;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&StateFlowFinal_B.CoppiaAvitesaturata';
bio(54).ndims=2;
bio(54).size=[];
bio(54).isStruct=false;

bio(55).blkName='Out asse B Vite/Switch2';
bio(55).sigName='';
bio(55).portIdx=0;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&StateFlowFinal_B.Switch2';
bio(55).ndims=2;
bio(55).size=[];
bio(55).isStruct=false;

bio(56).blkName='Posizione Braccia /convert';
bio(56).sigName='';
bio(56).portIdx=0;
bio(56).dim=[1,1];
bio(56).sigWidth=1;
bio(56).sigAddress='&StateFlowFinal_B.convert';
bio(56).ndims=2;
bio(56).size=[];
bio(56).isStruct=false;

bio(57).blkName='Posizione Braccia /convert 10 ';
bio(57).sigName='';
bio(57).portIdx=0;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&StateFlowFinal_B.convert10';
bio(57).ndims=2;
bio(57).size=[];
bio(57).isStruct=false;

bio(58).blkName='Posizione Braccia /Motore braccia A';
bio(58).sigName='';
bio(58).portIdx=0;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&StateFlowFinal_B.MotorebracciaA';
bio(58).ndims=2;
bio(58).size=[];
bio(58).isStruct=false;

bio(59).blkName='Posizione Braccia /Motore braccia B';
bio(59).sigName='';
bio(59).portIdx=0;
bio(59).dim=[1,1];
bio(59).sigWidth=1;
bio(59).sigAddress='&StateFlowFinal_B.MotorebracciaB';
bio(59).ndims=2;
bio(59).size=[];
bio(59).isStruct=false;

bio(60).blkName='Posizione Vite/convert';
bio(60).sigName='';
bio(60).portIdx=0;
bio(60).dim=[1,1];
bio(60).sigWidth=1;
bio(60).sigAddress='&StateFlowFinal_B.convert_k';
bio(60).ndims=2;
bio(60).size=[];
bio(60).isStruct=false;

bio(61).blkName='Posizione Vite/convert 10 ';
bio(61).sigName='';
bio(61).portIdx=0;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&StateFlowFinal_B.convert10_p';
bio(61).ndims=2;
bio(61).size=[];
bio(61).isStruct=false;

bio(62).blkName='Posizione Vite/Motore vite A';
bio(62).sigName='';
bio(62).portIdx=0;
bio(62).dim=[1,1];
bio(62).sigWidth=1;
bio(62).sigAddress='&StateFlowFinal_B.MotoreviteA';
bio(62).ndims=2;
bio(62).size=[];
bio(62).isStruct=false;

bio(63).blkName='Posizione Vite/Motore vite B';
bio(63).sigName='';
bio(63).portIdx=0;
bio(63).dim=[1,1];
bio(63).sigWidth=1;
bio(63).sigAddress='&StateFlowFinal_B.MotoreviteB';
bio(63).ndims=2;
bio(63).size=[];
bio(63).isStruct=false;

bio(64).blkName='Sistema Vite/Asse B/p1';
bio(64).sigName='';
bio(64).portIdx=0;
bio(64).dim=[1,1];
bio(64).sigWidth=1;
bio(64).sigAddress='&StateFlowFinal_B.ldm_pos_n';
bio(64).ndims=2;
bio(64).size=[];
bio(64).isStruct=false;

bio(65).blkName='Sistema Vite/Asse B/p2';
bio(65).sigName='';
bio(65).portIdx=1;
bio(65).dim=[1,1];
bio(65).sigWidth=1;
bio(65).sigAddress='&StateFlowFinal_B.ldm_vel_c';
bio(65).ndims=2;
bio(65).size=[];
bio(65).isStruct=false;

bio(66).blkName='Sistema Vite/Asse B conv';
bio(66).sigName='';
bio(66).portIdx=0;
bio(66).dim=[1,1];
bio(66).sigWidth=1;
bio(66).sigAddress='&StateFlowFinal_B.pos_B_conv_p';
bio(66).ndims=2;
bio(66).size=[];
bio(66).isStruct=false;

bio(67).blkName='Sistema Vite/Rifermento Asse A Vite/p1';
bio(67).sigName='';
bio(67).portIdx=0;
bio(67).dim=[1,1];
bio(67).sigWidth=1;
bio(67).sigAddress='&StateFlowFinal_B.ldm_pos';
bio(67).ndims=2;
bio(67).size=[];
bio(67).isStruct=false;

bio(68).blkName='Sistema Vite/Rifermento Asse A Vite/p2';
bio(68).sigName='';
bio(68).portIdx=1;
bio(68).dim=[1,1];
bio(68).sigWidth=1;
bio(68).sigAddress='&StateFlowFinal_B.ldm_vel';
bio(68).ndims=2;
bio(68).size=[];
bio(68).isStruct=false;

bio(69).blkName='Sistema Vite/Gain2';
bio(69).sigName='';
bio(69).portIdx=0;
bio(69).dim=[1,1];
bio(69).sigWidth=1;
bio(69).sigAddress='&StateFlowFinal_B.Gain2';
bio(69).ndims=2;
bio(69).size=[];
bio(69).isStruct=false;

bio(70).blkName='Sistema Vite/Gain4';
bio(70).sigName='';
bio(70).portIdx=0;
bio(70).dim=[1,1];
bio(70).sigWidth=1;
bio(70).sigAddress='&StateFlowFinal_B.Gain4';
bio(70).ndims=2;
bio(70).size=[];
bio(70).isStruct=false;

bio(71).blkName='Sistema Vite/Sum1';
bio(71).sigName='';
bio(71).portIdx=0;
bio(71).dim=[1,1];
bio(71).sigWidth=1;
bio(71).sigAddress='&StateFlowFinal_B.Sum1';
bio(71).ndims=2;
bio(71).size=[];
bio(71).isStruct=false;

bio(72).blkName='Sistema Vite/Sum3';
bio(72).sigName='';
bio(72).portIdx=0;
bio(72).dim=[1,1];
bio(72).sigWidth=1;
bio(72).sigAddress='&StateFlowFinal_B.Sum3';
bio(72).ndims=2;
bio(72).size=[];
bio(72).isStruct=false;

bio(73).blkName='Sistema Vite/Sum4';
bio(73).sigName='';
bio(73).portIdx=0;
bio(73).dim=[1,1];
bio(73).sigWidth=1;
bio(73).sigAddress='&StateFlowFinal_B.Sum4_l';
bio(73).ndims=2;
bio(73).size=[];
bio(73).isStruct=false;

bio(74).blkName='Sistema Vite/Sum6';
bio(74).sigName='';
bio(74).portIdx=0;
bio(74).dim=[1,1];
bio(74).sigWidth=1;
bio(74).sigAddress='&StateFlowFinal_B.Sum6';
bio(74).ndims=2;
bio(74).size=[];
bio(74).isStruct=false;

bio(75).blkName='Sistema Vite/Sum7';
bio(75).sigName='';
bio(75).portIdx=0;
bio(75).dim=[1,1];
bio(75).sigWidth=1;
bio(75).sigAddress='&StateFlowFinal_B.Sum7_n';
bio(75).ndims=2;
bio(75).size=[];
bio(75).isStruct=false;

bio(76).blkName='Sistema Vite/Sum8';
bio(76).sigName='';
bio(76).portIdx=0;
bio(76).dim=[1,1];
bio(76).sigWidth=1;
bio(76).sigAddress='&StateFlowFinal_B.Sum8';
bio(76).ndims=2;
bio(76).size=[];
bio(76).isStruct=false;

bio(77).blkName='Sistema_braccia/Cinematica Inversa/p1';
bio(77).sigName='theta1';
bio(77).portIdx=0;
bio(77).dim=[1,1];
bio(77).sigWidth=1;
bio(77).sigAddress='&StateFlowFinal_B.theta1_l';
bio(77).ndims=2;
bio(77).size=[];
bio(77).isStruct=false;

bio(78).blkName='Sistema_braccia/Cinematica Inversa/p2';
bio(78).sigName='theta2';
bio(78).portIdx=1;
bio(78).dim=[1,1];
bio(78).sigWidth=1;
bio(78).sigAddress='&StateFlowFinal_B.theta2_j';
bio(78).ndims=2;
bio(78).size=[];
bio(78).isStruct=false;

bio(79).blkName='Sistema_braccia/Cinematica Inversa Acc/p1';
bio(79).sigName='';
bio(79).portIdx=0;
bio(79).dim=[1,1];
bio(79).sigWidth=1;
bio(79).sigAddress='&StateFlowFinal_B.theta1_pp';
bio(79).ndims=2;
bio(79).size=[];
bio(79).isStruct=false;

bio(80).blkName='Sistema_braccia/Cinematica Inversa Acc/p2';
bio(80).sigName='';
bio(80).portIdx=1;
bio(80).dim=[1,1];
bio(80).sigWidth=1;
bio(80).sigAddress='&StateFlowFinal_B.theta2_pp';
bio(80).ndims=2;
bio(80).size=[];
bio(80).isStruct=false;

bio(81).blkName='Sistema_braccia/Cinematica Inversa vel/p1';
bio(81).sigName='';
bio(81).portIdx=0;
bio(81).dim=[1,1];
bio(81).sigWidth=1;
bio(81).sigAddress='&StateFlowFinal_B.theta1_p';
bio(81).ndims=2;
bio(81).size=[];
bio(81).isStruct=false;

bio(82).blkName='Sistema_braccia/Cinematica Inversa vel/p2';
bio(82).sigName='';
bio(82).portIdx=1;
bio(82).dim=[1,1];
bio(82).sigWidth=1;
bio(82).sigAddress='&StateFlowFinal_B.theta2_p';
bio(82).ndims=2;
bio(82).size=[];
bio(82).isStruct=false;

bio(83).blkName='Sistema_braccia/Cinematica diretta/p1';
bio(83).sigName='xr';
bio(83).portIdx=0;
bio(83).dim=[1,1];
bio(83).sigWidth=1;
bio(83).sigAddress='&StateFlowFinal_B.x_n';
bio(83).ndims=2;
bio(83).size=[];
bio(83).isStruct=false;

bio(84).blkName='Sistema_braccia/Cinematica diretta/p2';
bio(84).sigName='yr';
bio(84).portIdx=1;
bio(84).dim=[1,1];
bio(84).sigWidth=1;
bio(84).sigAddress='&StateFlowFinal_B.y_k';
bio(84).ndims=2;
bio(84).size=[];
bio(84).isStruct=false;

bio(85).blkName='Sistema_braccia/Cinematica diretta Acc/p1';
bio(85).sigName='';
bio(85).portIdx=0;
bio(85).dim=[1,1];
bio(85).sigWidth=1;
bio(85).sigAddress='&StateFlowFinal_B.x_pp_f';
bio(85).ndims=2;
bio(85).size=[];
bio(85).isStruct=false;

bio(86).blkName='Sistema_braccia/Cinematica diretta Acc/p2';
bio(86).sigName='';
bio(86).portIdx=1;
bio(86).dim=[1,1];
bio(86).sigWidth=1;
bio(86).sigAddress='&StateFlowFinal_B.y_pp_l';
bio(86).ndims=2;
bio(86).size=[];
bio(86).isStruct=false;

bio(87).blkName='Sistema_braccia/Coppia motrice/p1';
bio(87).sigName='';
bio(87).portIdx=0;
bio(87).dim=[1,1];
bio(87).sigWidth=1;
bio(87).sigAddress='&StateFlowFinal_B.Cm1';
bio(87).ndims=2;
bio(87).size=[];
bio(87).isStruct=false;

bio(88).blkName='Sistema_braccia/Coppia motrice/p2';
bio(88).sigName='';
bio(88).portIdx=1;
bio(88).dim=[1,1];
bio(88).sigWidth=1;
bio(88).sigAddress='&StateFlowFinal_B.Cm2';
bio(88).ndims=2;
bio(88).size=[];
bio(88).isStruct=false;

bio(89).blkName='Sistema_braccia/Dinamica Inversa1/p1';
bio(89).sigName='';
bio(89).portIdx=0;
bio(89).dim=[1,1];
bio(89).sigWidth=1;
bio(89).sigAddress='&StateFlowFinal_B.C1';
bio(89).ndims=2;
bio(89).size=[];
bio(89).isStruct=false;

bio(90).blkName='Sistema_braccia/Dinamica Inversa1/p2';
bio(90).sigName='';
bio(90).portIdx=1;
bio(90).dim=[1,1];
bio(90).sigWidth=1;
bio(90).sigAddress='&StateFlowFinal_B.C2';
bio(90).ndims=2;
bio(90).size=[];
bio(90).isStruct=false;

bio(91).blkName='Sistema_braccia/Dinamica Inversa1/p3';
bio(91).sigName='';
bio(91).portIdx=2;
bio(91).dim=[2,2];
bio(91).sigWidth=4;
bio(91).sigAddress='&StateFlowFinal_B.Mm[0]';
bio(91).ndims=2;
bio(91).size=[];
bio(91).isStruct=false;

bio(92).blkName='Sistema_braccia/Dinamica Inversa1/p4';
bio(92).sigName='ntilde';
bio(92).portIdx=3;
bio(92).dim=[1,1];
bio(92).sigWidth=1;
bio(92).sigAddress='&StateFlowFinal_B.ntilde';
bio(92).ndims=2;
bio(92).size=[];
bio(92).isStruct=false;

bio(93).blkName='Sistema_braccia/MATLAB Function2/p1';
bio(93).sigName='';
bio(93).portIdx=0;
bio(93).dim=[1,1];
bio(93).sigWidth=1;
bio(93).sigAddress='&StateFlowFinal_B.xp';
bio(93).ndims=2;
bio(93).size=[];
bio(93).isStruct=false;

bio(94).blkName='Sistema_braccia/MATLAB Function2/p2';
bio(94).sigName='';
bio(94).portIdx=1;
bio(94).dim=[1,1];
bio(94).sigWidth=1;
bio(94).sigAddress='&StateFlowFinal_B.yp';
bio(94).ndims=2;
bio(94).size=[];
bio(94).isStruct=false;

bio(95).blkName='Sistema_braccia/MATLAB Function3/p1';
bio(95).sigName='';
bio(95).portIdx=0;
bio(95).dim=[4,1];
bio(95).sigWidth=4;
bio(95).sigAddress='&StateFlowFinal_B.csiH[0]';
bio(95).ndims=2;
bio(95).size=[];
bio(95).isStruct=false;

bio(96).blkName='Sistema_braccia/MATLAB Function3/p2';
bio(96).sigName='phi';
bio(96).portIdx=1;
bio(96).dim=[1,1];
bio(96).sigWidth=1;
bio(96).sigAddress='&StateFlowFinal_B.phi';
bio(96).ndims=2;
bio(96).size=[];
bio(96).isStruct=false;

bio(97).blkName='Sistema_braccia/MATLAB Function4/p1';
bio(97).sigName='Rho';
bio(97).portIdx=0;
bio(97).dim=[1,1];
bio(97).sigWidth=1;
bio(97).sigAddress='&StateFlowFinal_B.rho';
bio(97).ndims=2;
bio(97).size=[];
bio(97).isStruct=false;

bio(98).blkName='Sistema_braccia/MATLAB Function4/p2';
bio(98).sigName='Omega';
bio(98).portIdx=1;
bio(98).dim=[2,1];
bio(98).sigWidth=2;
bio(98).sigAddress='&StateFlowFinal_B.omega[0]';
bio(98).ndims=2;
bio(98).size=[];
bio(98).isStruct=false;

bio(99).blkName='Sistema_braccia/MATLAB Function4/p3';
bio(99).sigName='zV';
bio(99).portIdx=2;
bio(99).dim=[2,1];
bio(99).sigWidth=2;
bio(99).sigAddress='&StateFlowFinal_B.z[0]';
bio(99).ndims=2;
bio(99).size=[];
bio(99).isStruct=false;

bio(100).blkName='Sistema_braccia/MATLAB Jin/p1';
bio(100).sigName='';
bio(100).portIdx=0;
bio(100).dim=[1,1];
bio(100).sigWidth=1;
bio(100).sigAddress='&StateFlowFinal_B.x_p';
bio(100).ndims=2;
bio(100).size=[];
bio(100).isStruct=false;

bio(101).blkName='Sistema_braccia/MATLAB Jin/p2';
bio(101).sigName='';
bio(101).portIdx=1;
bio(101).dim=[1,1];
bio(101).sigWidth=1;
bio(101).sigAddress='&StateFlowFinal_B.y_p';
bio(101).ndims=2;
bio(101).size=[];
bio(101).isStruct=false;

bio(102).blkName='Sistema_braccia/Gain';
bio(102).sigName='';
bio(102).portIdx=0;
bio(102).dim=[1,1];
bio(102).sigWidth=1;
bio(102).sigAddress='&StateFlowFinal_B.Gain';
bio(102).ndims=2;
bio(102).size=[];
bio(102).isStruct=false;

bio(103).blkName='Sistema_braccia/Gain1';
bio(103).sigName='';
bio(103).portIdx=0;
bio(103).dim=[1,1];
bio(103).sigWidth=1;
bio(103).sigAddress='&StateFlowFinal_B.Gain1';
bio(103).ndims=2;
bio(103).size=[];
bio(103).isStruct=false;

bio(104).blkName='Sistema_braccia/Kd';
bio(104).sigName='';
bio(104).portIdx=0;
bio(104).dim=[2,1];
bio(104).sigWidth=2;
bio(104).sigAddress='&StateFlowFinal_B.Kd[0]';
bio(104).ndims=2;
bio(104).size=[];
bio(104).isStruct=false;

bio(105).blkName='Sistema_braccia/Kd1';
bio(105).sigName='';
bio(105).portIdx=0;
bio(105).dim=[2,1];
bio(105).sigWidth=2;
bio(105).sigAddress='&StateFlowFinal_B.Kd1[0]';
bio(105).ndims=2;
bio(105).size=[];
bio(105).isStruct=false;

bio(106).blkName='Sistema_braccia/Kp1';
bio(106).sigName='';
bio(106).portIdx=0;
bio(106).dim=[2,1];
bio(106).sigWidth=2;
bio(106).sigAddress='&StateFlowFinal_B.Kp1[0]';
bio(106).ndims=2;
bio(106).size=[];
bio(106).isStruct=false;

bio(107).blkName='Sistema_braccia/Rate Transition';
bio(107).sigName='';
bio(107).portIdx=0;
bio(107).dim=[1,1];
bio(107).sigWidth=1;
bio(107).sigAddress='&StateFlowFinal_B.RateTransition';
bio(107).ndims=2;
bio(107).size=[];
bio(107).isStruct=false;

bio(108).blkName='Sistema_braccia/Rate Transition1';
bio(108).sigName='';
bio(108).portIdx=0;
bio(108).dim=[1,1];
bio(108).sigWidth=1;
bio(108).sigAddress='&StateFlowFinal_B.RateTransition1';
bio(108).ndims=2;
bio(108).size=[];
bio(108).isStruct=false;

bio(109).blkName='Sistema_braccia/Sum';
bio(109).sigName='Xmov';
bio(109).portIdx=0;
bio(109).dim=[1,1];
bio(109).sigWidth=1;
bio(109).sigAddress='&StateFlowFinal_B.Xmov';
bio(109).ndims=2;
bio(109).size=[];
bio(109).isStruct=false;

bio(110).blkName='Sistema_braccia/Sum1';
bio(110).sigName='Ymov';
bio(110).portIdx=0;
bio(110).dim=[1,1];
bio(110).sigWidth=1;
bio(110).sigAddress='&StateFlowFinal_B.Ymov';
bio(110).ndims=2;
bio(110).size=[];
bio(110).isStruct=false;

bio(111).blkName='Sistema_braccia/Sum2';
bio(111).sigName='';
bio(111).portIdx=0;
bio(111).dim=[1,1];
bio(111).sigWidth=1;
bio(111).sigAddress='&StateFlowFinal_B.Sum2_d';
bio(111).ndims=2;
bio(111).size=[];
bio(111).isStruct=false;

bio(112).blkName='Sistema_braccia/Sum3';
bio(112).sigName='';
bio(112).portIdx=0;
bio(112).dim=[1,1];
bio(112).sigWidth=1;
bio(112).sigAddress='&StateFlowFinal_B.Sum3_b';
bio(112).ndims=2;
bio(112).size=[];
bio(112).isStruct=false;

bio(113).blkName='Sistema_braccia/Sum4';
bio(113).sigName='q';
bio(113).portIdx=0;
bio(113).dim=[2,1];
bio(113).sigWidth=2;
bio(113).sigAddress='&StateFlowFinal_B.q[0]';
bio(113).ndims=2;
bio(113).size=[];
bio(113).isStruct=false;

bio(114).blkName='Sistema_braccia/Sum5';
bio(114).sigName='n-phi';
bio(114).portIdx=0;
bio(114).dim=[1,1];
bio(114).sigWidth=1;
bio(114).sigAddress='&StateFlowFinal_B.nphi';
bio(114).ndims=2;
bio(114).size=[];
bio(114).isStruct=false;

bio(115).blkName='Sistema_braccia/Sum7';
bio(115).sigName='qdot';
bio(115).portIdx=0;
bio(115).dim=[2,1];
bio(115).sigWidth=2;
bio(115).sigAddress='&StateFlowFinal_B.qdot[0]';
bio(115).ndims=2;
bio(115).size=[];
bio(115).isStruct=false;

bio(116).blkName='Sistema_braccia/Sum8';
bio(116).sigName='YRobusto';
bio(116).portIdx=0;
bio(116).dim=[2,1];
bio(116).sigWidth=2;
bio(116).sigAddress='&StateFlowFinal_B.YRobusto[0]';
bio(116).ndims=2;
bio(116).size=[];
bio(116).isStruct=false;

bio(117).blkName='Sistema_braccia/Sum9';
bio(117).sigName='Y';
bio(117).portIdx=0;
bio(117).dim=[2,1];
bio(117).sigWidth=2;
bio(117).sigAddress='&StateFlowFinal_B.Y[0]';
bio(117).ndims=2;
bio(117).size=[];
bio(117).isStruct=false;

bio(118).blkName='Status/Data Type Conversion6';
bio(118).sigName='';
bio(118).portIdx=0;
bio(118).dim=[1,1];
bio(118).sigWidth=1;
bio(118).sigAddress='&StateFlowFinal_B.DataTypeConversion6';
bio(118).ndims=2;
bio(118).size=[];
bio(118).isStruct=false;

bio(119).blkName='Status/Status Word';
bio(119).sigName='';
bio(119).portIdx=0;
bio(119).dim=[1,1];
bio(119).sigWidth=1;
bio(119).sigAddress='&StateFlowFinal_B.StatusWord';
bio(119).ndims=2;
bio(119).size=[];
bio(119).isStruct=false;

bio(120).blkName='Out Asse A Braccia/Fungo/MATLAB Function';
bio(120).sigName='';
bio(120).portIdx=0;
bio(120).dim=[1,1];
bio(120).sigWidth=1;
bio(120).sigAddress='&StateFlowFinal_B.sf_MATLABFunction_e.y';
bio(120).ndims=2;
bio(120).size=[];
bio(120).isStruct=false;

bio(121).blkName='Out Asse A Braccia/Fungo/Data Type Conversion14';
bio(121).sigName='';
bio(121).portIdx=0;
bio(121).dim=[1,1];
bio(121).sigWidth=1;
bio(121).sigAddress='&StateFlowFinal_B.DataTypeConversion14';
bio(121).ndims=2;
bio(121).size=[];
bio(121).isStruct=false;

bio(122).blkName='Out Asse A Braccia/Fungo/Memory';
bio(122).sigName='';
bio(122).portIdx=0;
bio(122).dim=[1,1];
bio(122).sigWidth=1;
bio(122).sigAddress='&StateFlowFinal_B.Memory';
bio(122).ndims=2;
bio(122).size=[];
bio(122).isStruct=false;

bio(123).blkName='Out Asse A Braccia/Fungo/EtherCAT PDO Receive9';
bio(123).sigName='';
bio(123).portIdx=0;
bio(123).dim=[1,1];
bio(123).sigWidth=1;
bio(123).sigAddress='&StateFlowFinal_B.EtherCATPDOReceive9';
bio(123).ndims=2;
bio(123).size=[];
bio(123).isStruct=false;

bio(124).blkName='Out Asse A Braccia/Fungo/Switch1';
bio(124).sigName='';
bio(124).portIdx=0;
bio(124).dim=[1,1];
bio(124).sigWidth=1;
bio(124).sigAddress='&StateFlowFinal_B.Switch1';
bio(124).ndims=2;
bio(124).size=[];
bio(124).isStruct=false;

bio(125).blkName='Out Asse B Braccia/Fungo/MATLAB Function';
bio(125).sigName='';
bio(125).portIdx=0;
bio(125).dim=[1,1];
bio(125).sigWidth=1;
bio(125).sigAddress='&StateFlowFinal_B.sf_MATLABFunction_a.y';
bio(125).ndims=2;
bio(125).size=[];
bio(125).isStruct=false;

bio(126).blkName='Out Asse B Braccia/Fungo/Data Type Conversion14';
bio(126).sigName='';
bio(126).portIdx=0;
bio(126).dim=[1,1];
bio(126).sigWidth=1;
bio(126).sigAddress='&StateFlowFinal_B.DataTypeConversion14_g';
bio(126).ndims=2;
bio(126).size=[];
bio(126).isStruct=false;

bio(127).blkName='Out Asse B Braccia/Fungo/Memory';
bio(127).sigName='';
bio(127).portIdx=0;
bio(127).dim=[1,1];
bio(127).sigWidth=1;
bio(127).sigAddress='&StateFlowFinal_B.Memory_g';
bio(127).ndims=2;
bio(127).size=[];
bio(127).isStruct=false;

bio(128).blkName='Out Asse B Braccia/Fungo/EtherCAT PDO Receive9';
bio(128).sigName='';
bio(128).portIdx=0;
bio(128).dim=[1,1];
bio(128).sigWidth=1;
bio(128).sigAddress='&StateFlowFinal_B.EtherCATPDOReceive9_h';
bio(128).ndims=2;
bio(128).size=[];
bio(128).isStruct=false;

bio(129).blkName='Out Asse B Braccia/Fungo/Switch1';
bio(129).sigName='';
bio(129).portIdx=0;
bio(129).dim=[1,1];
bio(129).sigWidth=1;
bio(129).sigAddress='&StateFlowFinal_B.Switch1_l';
bio(129).ndims=2;
bio(129).size=[];
bio(129).isStruct=false;

bio(130).blkName='Out asse A Vite/Fungo/MATLAB Function';
bio(130).sigName='';
bio(130).portIdx=0;
bio(130).dim=[1,1];
bio(130).sigWidth=1;
bio(130).sigAddress='&StateFlowFinal_B.sf_MATLABFunction_f.y';
bio(130).ndims=2;
bio(130).size=[];
bio(130).isStruct=false;

bio(131).blkName='Out asse A Vite/Fungo/Data Type Conversion14';
bio(131).sigName='';
bio(131).portIdx=0;
bio(131).dim=[1,1];
bio(131).sigWidth=1;
bio(131).sigAddress='&StateFlowFinal_B.DataTypeConversion14_k';
bio(131).ndims=2;
bio(131).size=[];
bio(131).isStruct=false;

bio(132).blkName='Out asse A Vite/Fungo/Memory';
bio(132).sigName='';
bio(132).portIdx=0;
bio(132).dim=[1,1];
bio(132).sigWidth=1;
bio(132).sigAddress='&StateFlowFinal_B.Memory_n';
bio(132).ndims=2;
bio(132).size=[];
bio(132).isStruct=false;

bio(133).blkName='Out asse A Vite/Fungo/EtherCAT PDO Receive9';
bio(133).sigName='';
bio(133).portIdx=0;
bio(133).dim=[1,1];
bio(133).sigWidth=1;
bio(133).sigAddress='&StateFlowFinal_B.EtherCATPDOReceive9_hd';
bio(133).ndims=2;
bio(133).size=[];
bio(133).isStruct=false;

bio(134).blkName='Out asse A Vite/Fungo/Switch1';
bio(134).sigName='';
bio(134).portIdx=0;
bio(134).dim=[1,1];
bio(134).sigWidth=1;
bio(134).sigAddress='&StateFlowFinal_B.Switch1_f';
bio(134).ndims=2;
bio(134).size=[];
bio(134).isStruct=false;

bio(135).blkName='Out asse B Vite/Fungo/MATLAB Function';
bio(135).sigName='';
bio(135).portIdx=0;
bio(135).dim=[1,1];
bio(135).sigWidth=1;
bio(135).sigAddress='&StateFlowFinal_B.sf_MATLABFunction_fb.y';
bio(135).ndims=2;
bio(135).size=[];
bio(135).isStruct=false;

bio(136).blkName='Out asse B Vite/Fungo/Data Type Conversion14';
bio(136).sigName='';
bio(136).portIdx=0;
bio(136).dim=[1,1];
bio(136).sigWidth=1;
bio(136).sigAddress='&StateFlowFinal_B.DataTypeConversion14_h';
bio(136).ndims=2;
bio(136).size=[];
bio(136).isStruct=false;

bio(137).blkName='Out asse B Vite/Fungo/Memory';
bio(137).sigName='';
bio(137).portIdx=0;
bio(137).dim=[1,1];
bio(137).sigWidth=1;
bio(137).sigAddress='&StateFlowFinal_B.Memory_d';
bio(137).ndims=2;
bio(137).size=[];
bio(137).isStruct=false;

bio(138).blkName='Out asse B Vite/Fungo/EtherCAT PDO Receive9';
bio(138).sigName='';
bio(138).portIdx=0;
bio(138).dim=[1,1];
bio(138).sigWidth=1;
bio(138).sigAddress='&StateFlowFinal_B.EtherCATPDOReceive9_m';
bio(138).ndims=2;
bio(138).size=[];
bio(138).isStruct=false;

bio(139).blkName='Out asse B Vite/Fungo/Switch1';
bio(139).sigName='';
bio(139).portIdx=0;
bio(139).dim=[1,1];
bio(139).sigWidth=1;
bio(139).sigAddress='&StateFlowFinal_B.Switch1_h';
bio(139).ndims=2;
bio(139).size=[];
bio(139).isStruct=false;

bio(140).blkName='Sistema Vite/Actual A/Sum';
bio(140).sigName='';
bio(140).portIdx=0;
bio(140).dim=[1,1];
bio(140).sigWidth=1;
bio(140).sigAddress='&StateFlowFinal_B.Sum_p';
bio(140).ndims=2;
bio(140).size=[];
bio(140).isStruct=false;

bio(141).blkName='Sistema Vite/Clock reale/Sum2';
bio(141).sigName='';
bio(141).portIdx=0;
bio(141).dim=[1,1];
bio(141).sigWidth=1;
bio(141).sigAddress='&StateFlowFinal_B.Sum2_m';
bio(141).ndims=2;
bio(141).size=[];
bio(141).isStruct=false;

bio(142).blkName='Sistema Vite/Coppia VIte A finale/Gain';
bio(142).sigName='';
bio(142).portIdx=0;
bio(142).dim=[1,1];
bio(142).sigWidth=1;
bio(142).sigAddress='&StateFlowFinal_B.Gain_a';
bio(142).ndims=2;
bio(142).size=[];
bio(142).isStruct=false;

bio(143).blkName='Sistema Vite/Coppia VIte A finale/Gain6';
bio(143).sigName='';
bio(143).portIdx=0;
bio(143).dim=[1,1];
bio(143).sigWidth=1;
bio(143).sigAddress='&StateFlowFinal_B.Gain6';
bio(143).ndims=2;
bio(143).size=[];
bio(143).isStruct=false;

bio(144).blkName='Sistema Vite/Coppia VIte A finale/Sum9';
bio(144).sigName='';
bio(144).portIdx=0;
bio(144).dim=[1,1];
bio(144).sigWidth=1;
bio(144).sigAddress='&StateFlowFinal_B.Sum9_p';
bio(144).ndims=2;
bio(144).size=[];
bio(144).isStruct=false;

bio(145).blkName='Sistema Vite/Discrete Derivative B/Diff';
bio(145).sigName='';
bio(145).portIdx=0;
bio(145).dim=[1,1];
bio(145).sigWidth=1;
bio(145).sigAddress='&StateFlowFinal_B.Diff';
bio(145).ndims=2;
bio(145).size=[];
bio(145).isStruct=false;

bio(146).blkName='Sistema Vite/Discrete Derivative B/TSamp';
bio(146).sigName='';
bio(146).portIdx=0;
bio(146).dim=[1,1];
bio(146).sigWidth=1;
bio(146).sigAddress='&StateFlowFinal_B.TSamp';
bio(146).ndims=2;
bio(146).size=[];
bio(146).isStruct=false;

bio(147).blkName='Sistema Vite/Discrete Derivative B/UD';
bio(147).sigName='U(k-1)';
bio(147).portIdx=0;
bio(147).dim=[1,1];
bio(147).sigWidth=1;
bio(147).sigAddress='&StateFlowFinal_B.Uk1';
bio(147).ndims=2;
bio(147).size=[];
bio(147).isStruct=false;

bio(148).blkName='Sistema Vite/Velocita vite /Vel Asse A conv';
bio(148).sigName='';
bio(148).portIdx=0;
bio(148).dim=[1,1];
bio(148).sigWidth=1;
bio(148).sigAddress='&StateFlowFinal_B.vel_A_conv_d';
bio(148).ndims=2;
bio(148).size=[];
bio(148).isStruct=false;

bio(149).blkName='Sistema Vite/Velocita vite /Vel Asse B conv';
bio(149).sigName='';
bio(149).portIdx=0;
bio(149).dim=[1,1];
bio(149).sigWidth=1;
bio(149).sigAddress='&StateFlowFinal_B.vel_B_conv_d';
bio(149).ndims=2;
bio(149).size=[];
bio(149).isStruct=false;

bio(150).blkName='Sistema Vite/Velocita vite /Velocity A';
bio(150).sigName='';
bio(150).portIdx=0;
bio(150).dim=[1,1];
bio(150).sigWidth=1;
bio(150).sigAddress='&StateFlowFinal_B.VelocityA_b';
bio(150).ndims=2;
bio(150).size=[];
bio(150).isStruct=false;

bio(151).blkName='Sistema Vite/Velocita vite /Velocity B';
bio(151).sigName='';
bio(151).portIdx=0;
bio(151).dim=[1,1];
bio(151).sigWidth=1;
bio(151).sigAddress='&StateFlowFinal_B.VelocityB_d';
bio(151).ndims=2;
bio(151).size=[];
bio(151).isStruct=false;

bio(152).blkName='Sistema Vite/Velocita vite /EtherCAT PDO Receive14';
bio(152).sigName='';
bio(152).portIdx=0;
bio(152).dim=[1,1];
bio(152).sigWidth=1;
bio(152).sigAddress='&StateFlowFinal_B.EtherCATPDOReceive14_j';
bio(152).ndims=2;
bio(152).size=[];
bio(152).isStruct=false;

bio(153).blkName='Sistema Vite/Velocita vite /EtherCAT PDO Receive15';
bio(153).sigName='';
bio(153).portIdx=0;
bio(153).dim=[1,1];
bio(153).sigWidth=1;
bio(153).sigAddress='&StateFlowFinal_B.EtherCATPDOReceive15_k';
bio(153).ndims=2;
bio(153).size=[];
bio(153).isStruct=false;

bio(154).blkName='Sistema_braccia/Clock reale/Sum2';
bio(154).sigName='';
bio(154).portIdx=0;
bio(154).dim=[1,1];
bio(154).sigWidth=1;
bio(154).sigAddress='&StateFlowFinal_B.Sum2';
bio(154).ndims=2;
bio(154).size=[];
bio(154).isStruct=false;

bio(155).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionEnable';
bio(155).sigName='';
bio(155).portIdx=0;
bio(155).dim=[1,1];
bio(155).sigWidth=1;
bio(155).sigAddress='&StateFlowFinal_B.DataTypeConversionEnable_i';
bio(155).ndims=2;
bio(155).size=[];
bio(155).isStruct=false;

bio(156).blkName='Sistema_braccia/Kalman Filter1/ReshapeX0';
bio(156).sigName='';
bio(156).portIdx=0;
bio(156).dim=[2,1];
bio(156).sigWidth=2;
bio(156).sigAddress='&StateFlowFinal_B.ReshapeX0_i[0]';
bio(156).ndims=2;
bio(156).size=[];
bio(156).isStruct=false;

bio(157).blkName='Sistema_braccia/Kalman Filter1/Reshapeu';
bio(157).sigName='';
bio(157).portIdx=0;
bio(157).dim=[1,1];
bio(157).sigWidth=1;
bio(157).sigAddress='&StateFlowFinal_B.Reshapeu_m';
bio(157).ndims=2;
bio(157).size=[];
bio(157).isStruct=false;

bio(158).blkName='Sistema_braccia/Kalman Filter1/Reshapexhat';
bio(158).sigName='';
bio(158).portIdx=0;
bio(158).dim=[2,1];
bio(158).sigWidth=2;
bio(158).sigAddress='&StateFlowFinal_B.Reshapexhat_m[0]';
bio(158).ndims=2;
bio(158).size=[];
bio(158).isStruct=false;

bio(159).blkName='Sistema_braccia/Kalman Filter1/Reshapey';
bio(159).sigName='';
bio(159).portIdx=0;
bio(159).dim=[1,1];
bio(159).sigWidth=1;
bio(159).sigAddress='&StateFlowFinal_B.Reshapey_e';
bio(159).ndims=2;
bio(159).size=[];
bio(159).isStruct=false;

bio(160).blkName='Sistema_braccia/Kalman Filter1/Reshapeyhat';
bio(160).sigName='';
bio(160).portIdx=0;
bio(160).dim=[1,1];
bio(160).sigWidth=1;
bio(160).sigAddress='&StateFlowFinal_B.Reshapeyhat';
bio(160).ndims=2;
bio(160).size=[];
bio(160).isStruct=false;

bio(161).blkName='Sistema_braccia/Kalman Filter1/ManualSwitchPZ';
bio(161).sigName='';
bio(161).portIdx=0;
bio(161).dim=[2,2];
bio(161).sigWidth=4;
bio(161).sigAddress='&StateFlowFinal_B.ManualSwitchPZ[0]';
bio(161).ndims=2;
bio(161).size=[];
bio(161).isStruct=false;

bio(162).blkName='Sistema_braccia/Kalman Filter1/MemoryX';
bio(162).sigName='';
bio(162).portIdx=0;
bio(162).dim=[2,1];
bio(162).sigWidth=2;
bio(162).sigAddress='&StateFlowFinal_B.MemoryX_m[0]';
bio(162).ndims=2;
bio(162).size=[];
bio(162).isStruct=false;

bio(163).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionEnable';
bio(163).sigName='';
bio(163).portIdx=0;
bio(163).dim=[1,1];
bio(163).sigWidth=1;
bio(163).sigAddress='&StateFlowFinal_B.DataTypeConversionEnable';
bio(163).ndims=2;
bio(163).size=[];
bio(163).isStruct=false;

bio(164).blkName='Sistema_braccia/Kalman Filter2/ReshapeX0';
bio(164).sigName='';
bio(164).portIdx=0;
bio(164).dim=[2,1];
bio(164).sigWidth=2;
bio(164).sigAddress='&StateFlowFinal_B.ReshapeX0[0]';
bio(164).ndims=2;
bio(164).size=[];
bio(164).isStruct=false;

bio(165).blkName='Sistema_braccia/Kalman Filter2/Reshapeu';
bio(165).sigName='';
bio(165).portIdx=0;
bio(165).dim=[1,1];
bio(165).sigWidth=1;
bio(165).sigAddress='&StateFlowFinal_B.Reshapeu';
bio(165).ndims=2;
bio(165).size=[];
bio(165).isStruct=false;

bio(166).blkName='Sistema_braccia/Kalman Filter2/Reshapexhat';
bio(166).sigName='';
bio(166).portIdx=0;
bio(166).dim=[2,1];
bio(166).sigWidth=2;
bio(166).sigAddress='&StateFlowFinal_B.Reshapexhat[0]';
bio(166).ndims=2;
bio(166).size=[];
bio(166).isStruct=false;

bio(167).blkName='Sistema_braccia/Kalman Filter2/Reshapey';
bio(167).sigName='';
bio(167).portIdx=0;
bio(167).dim=[1,1];
bio(167).sigWidth=1;
bio(167).sigAddress='&StateFlowFinal_B.Reshapey';
bio(167).ndims=2;
bio(167).size=[];
bio(167).isStruct=false;

bio(168).blkName='Sistema_braccia/Kalman Filter2/Reshapeyhat';
bio(168).sigName='';
bio(168).portIdx=0;
bio(168).dim=[1,1];
bio(168).sigWidth=1;
bio(168).sigAddress='&StateFlowFinal_B.Reshapeyhat_f';
bio(168).ndims=2;
bio(168).size=[];
bio(168).isStruct=false;

bio(169).blkName='Sistema_braccia/Kalman Filter2/ManualSwitchPZ';
bio(169).sigName='';
bio(169).portIdx=0;
bio(169).dim=[2,2];
bio(169).sigWidth=4;
bio(169).sigAddress='&StateFlowFinal_B.ManualSwitchPZ_l[0]';
bio(169).ndims=2;
bio(169).size=[];
bio(169).isStruct=false;

bio(170).blkName='Sistema_braccia/Kalman Filter2/MemoryX';
bio(170).sigName='';
bio(170).portIdx=0;
bio(170).dim=[2,1];
bio(170).sigWidth=2;
bio(170).sigAddress='&StateFlowFinal_B.MemoryX[0]';
bio(170).ndims=2;
bio(170).size=[];
bio(170).isStruct=false;

bio(171).blkName='Sistema_braccia/Leggi di moto/Cerchi Tangenti/p1';
bio(171).sigName='';
bio(171).portIdx=0;
bio(171).dim=[1,1];
bio(171).sigWidth=1;
bio(171).sigAddress='&StateFlowFinal_B.xct';
bio(171).ndims=2;
bio(171).size=[];
bio(171).isStruct=false;

bio(172).blkName='Sistema_braccia/Leggi di moto/Cerchi Tangenti/p2';
bio(172).sigName='';
bio(172).portIdx=1;
bio(172).dim=[1,1];
bio(172).sigWidth=1;
bio(172).sigAddress='&StateFlowFinal_B.yct';
bio(172).ndims=2;
bio(172).size=[];
bio(172).isStruct=false;

bio(173).blkName='Sistema_braccia/Leggi di moto/Cerchi Tangenti/p3';
bio(173).sigName='';
bio(173).portIdx=2;
bio(173).dim=[1,1];
bio(173).sigWidth=1;
bio(173).sigAddress='&StateFlowFinal_B.xct_p';
bio(173).ndims=2;
bio(173).size=[];
bio(173).isStruct=false;

bio(174).blkName='Sistema_braccia/Leggi di moto/Cerchi Tangenti/p4';
bio(174).sigName='';
bio(174).portIdx=3;
bio(174).dim=[1,1];
bio(174).sigWidth=1;
bio(174).sigAddress='&StateFlowFinal_B.yct_p';
bio(174).ndims=2;
bio(174).size=[];
bio(174).isStruct=false;

bio(175).blkName='Sistema_braccia/Leggi di moto/Cerchi Tangenti/p5';
bio(175).sigName='';
bio(175).portIdx=4;
bio(175).dim=[1,1];
bio(175).sigWidth=1;
bio(175).sigAddress='&StateFlowFinal_B.xct_pp';
bio(175).ndims=2;
bio(175).size=[];
bio(175).isStruct=false;

bio(176).blkName='Sistema_braccia/Leggi di moto/Cerchi Tangenti/p6';
bio(176).sigName='';
bio(176).portIdx=5;
bio(176).dim=[1,1];
bio(176).sigWidth=1;
bio(176).sigAddress='&StateFlowFinal_B.yct_pp';
bio(176).ndims=2;
bio(176).size=[];
bio(176).isStruct=false;

bio(177).blkName='Sistema_braccia/Leggi di moto/Cerchio/p1';
bio(177).sigName='';
bio(177).portIdx=0;
bio(177).dim=[1,1];
bio(177).sigWidth=1;
bio(177).sigAddress='&StateFlowFinal_B.xc';
bio(177).ndims=2;
bio(177).size=[];
bio(177).isStruct=false;

bio(178).blkName='Sistema_braccia/Leggi di moto/Cerchio/p2';
bio(178).sigName='';
bio(178).portIdx=1;
bio(178).dim=[1,1];
bio(178).sigWidth=1;
bio(178).sigAddress='&StateFlowFinal_B.yc';
bio(178).ndims=2;
bio(178).size=[];
bio(178).isStruct=false;

bio(179).blkName='Sistema_braccia/Leggi di moto/Cerchio/p3';
bio(179).sigName='';
bio(179).portIdx=2;
bio(179).dim=[1,1];
bio(179).sigWidth=1;
bio(179).sigAddress='&StateFlowFinal_B.xc_p';
bio(179).ndims=2;
bio(179).size=[];
bio(179).isStruct=false;

bio(180).blkName='Sistema_braccia/Leggi di moto/Cerchio/p4';
bio(180).sigName='';
bio(180).portIdx=3;
bio(180).dim=[1,1];
bio(180).sigWidth=1;
bio(180).sigAddress='&StateFlowFinal_B.yc_p';
bio(180).ndims=2;
bio(180).size=[];
bio(180).isStruct=false;

bio(181).blkName='Sistema_braccia/Leggi di moto/Cerchio/p5';
bio(181).sigName='';
bio(181).portIdx=4;
bio(181).dim=[1,1];
bio(181).sigWidth=1;
bio(181).sigAddress='&StateFlowFinal_B.xc_pp';
bio(181).ndims=2;
bio(181).size=[];
bio(181).isStruct=false;

bio(182).blkName='Sistema_braccia/Leggi di moto/Cerchio/p6';
bio(182).sigName='';
bio(182).portIdx=5;
bio(182).dim=[1,1];
bio(182).sigWidth=1;
bio(182).sigAddress='&StateFlowFinal_B.yc_pp';
bio(182).ndims=2;
bio(182).size=[];
bio(182).isStruct=false;

bio(183).blkName='Sistema_braccia/Leggi di moto/Quadrato/p1';
bio(183).sigName='';
bio(183).portIdx=0;
bio(183).dim=[1,1];
bio(183).sigWidth=1;
bio(183).sigAddress='&StateFlowFinal_B.xq';
bio(183).ndims=2;
bio(183).size=[];
bio(183).isStruct=false;

bio(184).blkName='Sistema_braccia/Leggi di moto/Quadrato/p2';
bio(184).sigName='';
bio(184).portIdx=1;
bio(184).dim=[1,1];
bio(184).sigWidth=1;
bio(184).sigAddress='&StateFlowFinal_B.yq';
bio(184).ndims=2;
bio(184).size=[];
bio(184).isStruct=false;

bio(185).blkName='Sistema_braccia/Leggi di moto/Quadrato/p3';
bio(185).sigName='';
bio(185).portIdx=2;
bio(185).dim=[1,1];
bio(185).sigWidth=1;
bio(185).sigAddress='&StateFlowFinal_B.xq_p';
bio(185).ndims=2;
bio(185).size=[];
bio(185).isStruct=false;

bio(186).blkName='Sistema_braccia/Leggi di moto/Quadrato/p4';
bio(186).sigName='';
bio(186).portIdx=3;
bio(186).dim=[1,1];
bio(186).sigWidth=1;
bio(186).sigAddress='&StateFlowFinal_B.yq_p';
bio(186).ndims=2;
bio(186).size=[];
bio(186).isStruct=false;

bio(187).blkName='Sistema_braccia/Leggi di moto/Quadrato/p5';
bio(187).sigName='';
bio(187).portIdx=4;
bio(187).dim=[1,1];
bio(187).sigWidth=1;
bio(187).sigAddress='&StateFlowFinal_B.xq_pp';
bio(187).ndims=2;
bio(187).size=[];
bio(187).isStruct=false;

bio(188).blkName='Sistema_braccia/Leggi di moto/Quadrato/p6';
bio(188).sigName='';
bio(188).portIdx=5;
bio(188).dim=[1,1];
bio(188).sigWidth=1;
bio(188).sigAddress='&StateFlowFinal_B.yq_pp';
bio(188).ndims=2;
bio(188).size=[];
bio(188).isStruct=false;

bio(189).blkName='Sistema_braccia/Leggi di moto/g/p1';
bio(189).sigName='';
bio(189).portIdx=0;
bio(189).dim=[1,1];
bio(189).sigWidth=1;
bio(189).sigAddress='&StateFlowFinal_B.x';
bio(189).ndims=2;
bio(189).size=[];
bio(189).isStruct=false;

bio(190).blkName='Sistema_braccia/Leggi di moto/g/p2';
bio(190).sigName='';
bio(190).portIdx=1;
bio(190).dim=[1,1];
bio(190).sigWidth=1;
bio(190).sigAddress='&StateFlowFinal_B.y';
bio(190).ndims=2;
bio(190).size=[];
bio(190).isStruct=false;

bio(191).blkName='Sistema_braccia/Leggi di moto/g/p3';
bio(191).sigName='';
bio(191).portIdx=2;
bio(191).dim=[1,1];
bio(191).sigWidth=1;
bio(191).sigAddress='&StateFlowFinal_B.x_p_l';
bio(191).ndims=2;
bio(191).size=[];
bio(191).isStruct=false;

bio(192).blkName='Sistema_braccia/Leggi di moto/g/p4';
bio(192).sigName='';
bio(192).portIdx=3;
bio(192).dim=[1,1];
bio(192).sigWidth=1;
bio(192).sigAddress='&StateFlowFinal_B.y_p_o';
bio(192).ndims=2;
bio(192).size=[];
bio(192).isStruct=false;

bio(193).blkName='Sistema_braccia/Leggi di moto/g/p5';
bio(193).sigName='';
bio(193).portIdx=4;
bio(193).dim=[1,1];
bio(193).sigWidth=1;
bio(193).sigAddress='&StateFlowFinal_B.x_pp';
bio(193).ndims=2;
bio(193).size=[];
bio(193).isStruct=false;

bio(194).blkName='Sistema_braccia/Leggi di moto/g/p6';
bio(194).sigName='';
bio(194).portIdx=5;
bio(194).dim=[1,1];
bio(194).sigWidth=1;
bio(194).sigAddress='&StateFlowFinal_B.y_pp';
bio(194).ndims=2;
bio(194).size=[];
bio(194).isStruct=false;

bio(195).blkName='Sistema_braccia/Leggi di moto/spirale/p1';
bio(195).sigName='';
bio(195).portIdx=0;
bio(195).dim=[1,1];
bio(195).sigWidth=1;
bio(195).sigAddress='&StateFlowFinal_B.xs';
bio(195).ndims=2;
bio(195).size=[];
bio(195).isStruct=false;

bio(196).blkName='Sistema_braccia/Leggi di moto/spirale/p2';
bio(196).sigName='';
bio(196).portIdx=1;
bio(196).dim=[1,1];
bio(196).sigWidth=1;
bio(196).sigAddress='&StateFlowFinal_B.ys';
bio(196).ndims=2;
bio(196).size=[];
bio(196).isStruct=false;

bio(197).blkName='Sistema_braccia/Leggi di moto/spirale/p3';
bio(197).sigName='';
bio(197).portIdx=2;
bio(197).dim=[1,1];
bio(197).sigWidth=1;
bio(197).sigAddress='&StateFlowFinal_B.xs_p';
bio(197).ndims=2;
bio(197).size=[];
bio(197).isStruct=false;

bio(198).blkName='Sistema_braccia/Leggi di moto/spirale/p4';
bio(198).sigName='';
bio(198).portIdx=3;
bio(198).dim=[1,1];
bio(198).sigWidth=1;
bio(198).sigAddress='&StateFlowFinal_B.ys_p';
bio(198).ndims=2;
bio(198).size=[];
bio(198).isStruct=false;

bio(199).blkName='Sistema_braccia/Leggi di moto/spirale/p5';
bio(199).sigName='';
bio(199).portIdx=4;
bio(199).dim=[1,1];
bio(199).sigWidth=1;
bio(199).sigAddress='&StateFlowFinal_B.xs_pp';
bio(199).ndims=2;
bio(199).size=[];
bio(199).isStruct=false;

bio(200).blkName='Sistema_braccia/Leggi di moto/spirale/p6';
bio(200).sigName='';
bio(200).portIdx=5;
bio(200).dim=[1,1];
bio(200).sigWidth=1;
bio(200).sigAddress='&StateFlowFinal_B.ys_pp';
bio(200).ndims=2;
bio(200).size=[];
bio(200).isStruct=false;

bio(201).blkName='Sistema_braccia/Leggi di moto/Multiport Switch';
bio(201).sigName='';
bio(201).portIdx=0;
bio(201).dim=[6,1];
bio(201).sigWidth=6;
bio(201).sigAddress='&StateFlowFinal_B.MultiportSwitch[0]';
bio(201).ndims=2;
bio(201).size=[];
bio(201).isStruct=false;

bio(202).blkName='Sistema_braccia/PID Controller/Integrator';
bio(202).sigName='';
bio(202).portIdx=0;
bio(202).dim=[2,1];
bio(202).sigWidth=2;
bio(202).sigAddress='&StateFlowFinal_B.Integrator[0]';
bio(202).ndims=2;
bio(202).size=[];
bio(202).isStruct=false;

bio(203).blkName='Sistema_braccia/PID Controller/Integral Gain';
bio(203).sigName='';
bio(203).portIdx=0;
bio(203).dim=[2,1];
bio(203).sigWidth=2;
bio(203).sigAddress='&StateFlowFinal_B.IntegralGain[0]';
bio(203).ndims=2;
bio(203).size=[];
bio(203).isStruct=false;

bio(204).blkName='Sistema_braccia/PID Controller/Proportional Gain';
bio(204).sigName='';
bio(204).portIdx=0;
bio(204).dim=[2,1];
bio(204).sigWidth=2;
bio(204).sigAddress='&StateFlowFinal_B.ProportionalGain[0]';
bio(204).ndims=2;
bio(204).size=[];
bio(204).isStruct=false;

bio(205).blkName='Sistema_braccia/PID Controller/Sum';
bio(205).sigName='';
bio(205).portIdx=0;
bio(205).dim=[2,1];
bio(205).sigWidth=2;
bio(205).sigAddress='&StateFlowFinal_B.Sum[0]';
bio(205).ndims=2;
bio(205).size=[];
bio(205).isStruct=false;

bio(206).blkName='Sistema_braccia/Pos iniziali/Cinematica Inversa2/p1';
bio(206).sigName='';
bio(206).portIdx=0;
bio(206).dim=[1,1];
bio(206).sigWidth=1;
bio(206).sigAddress='&StateFlowFinal_B.x0';
bio(206).ndims=2;
bio(206).size=[];
bio(206).isStruct=false;

bio(207).blkName='Sistema_braccia/Pos iniziali/Cinematica Inversa2/p2';
bio(207).sigName='';
bio(207).portIdx=1;
bio(207).dim=[1,1];
bio(207).sigWidth=1;
bio(207).sigAddress='&StateFlowFinal_B.y0';
bio(207).ndims=2;
bio(207).size=[];
bio(207).isStruct=false;

bio(208).blkName='Sistema_braccia/Posizioni/Asse A conv bracc';
bio(208).sigName='';
bio(208).portIdx=0;
bio(208).dim=[1,1];
bio(208).sigWidth=1;
bio(208).sigAddress='&StateFlowFinal_B.pos_A_conv';
bio(208).ndims=2;
bio(208).size=[];
bio(208).isStruct=false;

bio(209).blkName='Sistema_braccia/Posizioni/Asse B conv brac1';
bio(209).sigName='';
bio(209).portIdx=0;
bio(209).dim=[1,1];
bio(209).sigWidth=1;
bio(209).sigAddress='&StateFlowFinal_B.pos_B_conv';
bio(209).ndims=2;
bio(209).size=[];
bio(209).isStruct=false;

bio(210).blkName='Sistema_braccia/Posizioni/Digital Clock';
bio(210).sigName='';
bio(210).portIdx=0;
bio(210).dim=[1,1];
bio(210).sigWidth=1;
bio(210).sigAddress='&StateFlowFinal_B.DigitalClock';
bio(210).ndims=2;
bio(210).size=[];
bio(210).isStruct=false;

bio(211).blkName='Sistema_braccia/Posizioni/Sum12';
bio(211).sigName='';
bio(211).portIdx=0;
bio(211).dim=[1,1];
bio(211).sigWidth=1;
bio(211).sigAddress='&StateFlowFinal_B.Sum12';
bio(211).ndims=2;
bio(211).size=[];
bio(211).isStruct=false;

bio(212).blkName='Sistema_braccia/Posizioni/Sum4';
bio(212).sigName='';
bio(212).portIdx=0;
bio(212).dim=[1,1];
bio(212).sigWidth=1;
bio(212).sigAddress='&StateFlowFinal_B.Sum4';
bio(212).ndims=2;
bio(212).size=[];
bio(212).isStruct=false;

bio(213).blkName='Sistema_braccia/Posizioni/Sum7';
bio(213).sigName='';
bio(213).portIdx=0;
bio(213).dim=[1,1];
bio(213).sigWidth=1;
bio(213).sigAddress='&StateFlowFinal_B.Sum7';
bio(213).ndims=2;
bio(213).size=[];
bio(213).isStruct=false;

bio(214).blkName='Sistema_braccia/Posizioni/Sum9';
bio(214).sigName='';
bio(214).portIdx=0;
bio(214).dim=[1,1];
bio(214).sigWidth=1;
bio(214).sigAddress='&StateFlowFinal_B.Sum9';
bio(214).ndims=2;
bio(214).size=[];
bio(214).isStruct=false;

bio(215).blkName='Sistema_braccia/Radians to Degrees/Gain';
bio(215).sigName='';
bio(215).portIdx=0;
bio(215).dim=[1,1];
bio(215).sigWidth=1;
bio(215).sigAddress='&StateFlowFinal_B.Gain_p';
bio(215).ndims=2;
bio(215).size=[];
bio(215).isStruct=false;

bio(216).blkName='Sistema_braccia/Radians to Degrees1/Gain';
bio(216).sigName='';
bio(216).portIdx=0;
bio(216).dim=[1,1];
bio(216).sigWidth=1;
bio(216).sigAddress='&StateFlowFinal_B.Gain_n';
bio(216).ndims=2;
bio(216).size=[];
bio(216).isStruct=false;

bio(217).blkName='Sistema_braccia/Velocita /Vel Asse A conv';
bio(217).sigName='';
bio(217).portIdx=0;
bio(217).dim=[1,1];
bio(217).sigWidth=1;
bio(217).sigAddress='&StateFlowFinal_B.vel_A_conv_b';
bio(217).ndims=2;
bio(217).size=[];
bio(217).isStruct=false;

bio(218).blkName='Sistema_braccia/Velocita /Vel Asse B conv';
bio(218).sigName='';
bio(218).portIdx=0;
bio(218).dim=[1,1];
bio(218).sigWidth=1;
bio(218).sigAddress='&StateFlowFinal_B.vel_B_conv_b';
bio(218).ndims=2;
bio(218).size=[];
bio(218).isStruct=false;

bio(219).blkName='Sistema_braccia/Velocita /Velocity A';
bio(219).sigName='';
bio(219).portIdx=0;
bio(219).dim=[1,1];
bio(219).sigWidth=1;
bio(219).sigAddress='&StateFlowFinal_B.VelocityA_o';
bio(219).ndims=2;
bio(219).size=[];
bio(219).isStruct=false;

bio(220).blkName='Sistema_braccia/Velocita /Velocity B';
bio(220).sigName='';
bio(220).portIdx=0;
bio(220).dim=[1,1];
bio(220).sigWidth=1;
bio(220).sigAddress='&StateFlowFinal_B.VelocityB_f';
bio(220).ndims=2;
bio(220).size=[];
bio(220).isStruct=false;

bio(221).blkName='Sistema_braccia/Velocita /EtherCAT PDO Receive14';
bio(221).sigName='';
bio(221).portIdx=0;
bio(221).dim=[1,1];
bio(221).sigWidth=1;
bio(221).sigAddress='&StateFlowFinal_B.EtherCATPDOReceive14_b';
bio(221).ndims=2;
bio(221).size=[];
bio(221).isStruct=false;

bio(222).blkName='Sistema_braccia/Velocita /EtherCAT PDO Receive15';
bio(222).sigName='';
bio(222).portIdx=0;
bio(222).dim=[1,1];
bio(222).sigWidth=1;
bio(222).sigAddress='&StateFlowFinal_B.EtherCATPDOReceive15_d';
bio(222).ndims=2;
bio(222).size=[];
bio(222).isStruct=false;

bio(223).blkName='Sistema_braccia/Velocita braccia 1/Vel Asse A conv';
bio(223).sigName='';
bio(223).portIdx=0;
bio(223).dim=[1,1];
bio(223).sigWidth=1;
bio(223).sigAddress='&StateFlowFinal_B.vel_A_conv';
bio(223).ndims=2;
bio(223).size=[];
bio(223).isStruct=false;

bio(224).blkName='Sistema_braccia/Velocita braccia 1/Vel Asse B conv';
bio(224).sigName='';
bio(224).portIdx=0;
bio(224).dim=[1,1];
bio(224).sigWidth=1;
bio(224).sigAddress='&StateFlowFinal_B.vel_B_conv';
bio(224).ndims=2;
bio(224).size=[];
bio(224).isStruct=false;

bio(225).blkName='Sistema_braccia/Velocita braccia 1/Velocity A';
bio(225).sigName='';
bio(225).portIdx=0;
bio(225).dim=[1,1];
bio(225).sigWidth=1;
bio(225).sigAddress='&StateFlowFinal_B.VelocityA';
bio(225).ndims=2;
bio(225).size=[];
bio(225).isStruct=false;

bio(226).blkName='Sistema_braccia/Velocita braccia 1/Velocity B';
bio(226).sigName='';
bio(226).portIdx=0;
bio(226).dim=[1,1];
bio(226).sigWidth=1;
bio(226).sigAddress='&StateFlowFinal_B.VelocityB';
bio(226).ndims=2;
bio(226).size=[];
bio(226).isStruct=false;

bio(227).blkName='Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14';
bio(227).sigName='';
bio(227).portIdx=0;
bio(227).dim=[1,1];
bio(227).sigWidth=1;
bio(227).sigAddress='&StateFlowFinal_B.EtherCATPDOReceive14';
bio(227).ndims=2;
bio(227).size=[];
bio(227).isStruct=false;

bio(228).blkName='Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15';
bio(228).sigName='';
bio(228).portIdx=0;
bio(228).dim=[1,1];
bio(228).sigWidth=1;
bio(228).sigAddress='&StateFlowFinal_B.EtherCATPDOReceive15';
bio(228).ndims=2;
bio(228).size=[];
bio(228).isStruct=false;

bio(229).blkName='State flow robot/Posizionamento/MATLAB Function/p1';
bio(229).sigName='';
bio(229).portIdx=0;
bio(229).dim=[1,1];
bio(229).sigWidth=1;
bio(229).sigAddress='&StateFlowFinal_B.theta1';
bio(229).ndims=2;
bio(229).size=[];
bio(229).isStruct=false;

bio(230).blkName='State flow robot/Posizionamento/MATLAB Function/p2';
bio(230).sigName='';
bio(230).portIdx=1;
bio(230).dim=[1,1];
bio(230).sigWidth=1;
bio(230).sigAddress='&StateFlowFinal_B.theta2';
bio(230).ndims=2;
bio(230).size=[];
bio(230).isStruct=false;

bio(231).blkName='State flow robot/Posizionamento/MATLAB Function1/p1';
bio(231).sigName='';
bio(231).portIdx=0;
bio(231).dim=[1,1];
bio(231).sigWidth=1;
bio(231).sigAddress='&StateFlowFinal_B.CA_o';
bio(231).ndims=2;
bio(231).size=[];
bio(231).isStruct=false;

bio(232).blkName='State flow robot/Posizionamento/MATLAB Function1/p2';
bio(232).sigName='';
bio(232).portIdx=1;
bio(232).dim=[1,1];
bio(232).sigWidth=1;
bio(232).sigAddress='&StateFlowFinal_B.CB_b';
bio(232).ndims=2;
bio(232).size=[];
bio(232).isStruct=false;

bio(233).blkName='State flow robot/Posizionamento/Discrete-Time Integrator';
bio(233).sigName='';
bio(233).portIdx=0;
bio(233).dim=[1,1];
bio(233).sigWidth=1;
bio(233).sigAddress='&StateFlowFinal_B.DiscreteTimeIntegrator_i';
bio(233).ndims=2;
bio(233).size=[];
bio(233).isStruct=false;

bio(234).blkName='State flow robot/Posizionamento/Discrete-Time Integrator1';
bio(234).sigName='';
bio(234).portIdx=0;
bio(234).dim=[1,1];
bio(234).sigWidth=1;
bio(234).sigAddress='&StateFlowFinal_B.DiscreteTimeIntegrator1_b';
bio(234).ndims=2;
bio(234).size=[];
bio(234).isStruct=false;

bio(235).blkName='State flow robot/Posizionamento/Conversione in gradi ';
bio(235).sigName='';
bio(235).portIdx=0;
bio(235).dim=[1,1];
bio(235).sigWidth=1;
bio(235).sigAddress='&StateFlowFinal_B.Conversioneingradi';
bio(235).ndims=2;
bio(235).size=[];
bio(235).isStruct=false;

bio(236).blkName='State flow robot/Posizionamento/Gain1';
bio(236).sigName='';
bio(236).portIdx=0;
bio(236).dim=[1,1];
bio(236).sigWidth=1;
bio(236).sigAddress='&StateFlowFinal_B.Gain1_e';
bio(236).ndims=2;
bio(236).size=[];
bio(236).isStruct=false;

bio(237).blkName='State flow robot/Posizionamento/Ki1';
bio(237).sigName='';
bio(237).portIdx=0;
bio(237).dim=[1,1];
bio(237).sigWidth=1;
bio(237).sigAddress='&StateFlowFinal_B.Ki1';
bio(237).ndims=2;
bio(237).size=[];
bio(237).isStruct=false;

bio(238).blkName='State flow robot/Posizionamento/Ki2';
bio(238).sigName='';
bio(238).portIdx=0;
bio(238).dim=[1,1];
bio(238).sigWidth=1;
bio(238).sigAddress='&StateFlowFinal_B.Ki2';
bio(238).ndims=2;
bio(238).size=[];
bio(238).isStruct=false;

bio(239).blkName='State flow robot/Posizionamento/Kp1';
bio(239).sigName='';
bio(239).portIdx=0;
bio(239).dim=[1,1];
bio(239).sigWidth=1;
bio(239).sigAddress='&StateFlowFinal_B.Kp1_g';
bio(239).ndims=2;
bio(239).size=[];
bio(239).isStruct=false;

bio(240).blkName='State flow robot/Posizionamento/Kp2';
bio(240).sigName='';
bio(240).portIdx=0;
bio(240).dim=[1,1];
bio(240).sigWidth=1;
bio(240).sigAddress='&StateFlowFinal_B.Kp2';
bio(240).ndims=2;
bio(240).size=[];
bio(240).isStruct=false;

bio(241).blkName='State flow robot/Posizionamento/Sum';
bio(241).sigName='';
bio(241).portIdx=0;
bio(241).dim=[1,1];
bio(241).sigWidth=1;
bio(241).sigAddress='&StateFlowFinal_B.Sum_h';
bio(241).ndims=2;
bio(241).size=[];
bio(241).isStruct=false;

bio(242).blkName='State flow robot/Posizionamento/Sum1';
bio(242).sigName='';
bio(242).portIdx=0;
bio(242).dim=[1,1];
bio(242).sigWidth=1;
bio(242).sigAddress='&StateFlowFinal_B.Sum1_e';
bio(242).ndims=2;
bio(242).size=[];
bio(242).isStruct=false;

bio(243).blkName='State flow robot/Posizionamento/Sum2';
bio(243).sigName='';
bio(243).portIdx=0;
bio(243).dim=[1,1];
bio(243).sigWidth=1;
bio(243).sigAddress='&StateFlowFinal_B.Sum2_g';
bio(243).ndims=2;
bio(243).size=[];
bio(243).isStruct=false;

bio(244).blkName='State flow robot/Posizionamento/Sum3';
bio(244).sigName='';
bio(244).portIdx=0;
bio(244).dim=[1,1];
bio(244).sigWidth=1;
bio(244).sigAddress='&StateFlowFinal_B.Sum3_a';
bio(244).ndims=2;
bio(244).size=[];
bio(244).isStruct=false;

bio(245).blkName='State flow robot/Posizionamento/Sum4';
bio(245).sigName='';
bio(245).portIdx=0;
bio(245).dim=[1,1];
bio(245).sigWidth=1;
bio(245).sigAddress='&StateFlowFinal_B.Sum4_f';
bio(245).ndims=2;
bio(245).size=[];
bio(245).isStruct=false;

bio(246).blkName='State flow robot/Posizionamento/Sum5';
bio(246).sigName='';
bio(246).portIdx=0;
bio(246).dim=[1,1];
bio(246).sigWidth=1;
bio(246).sigAddress='&StateFlowFinal_B.Sum5_p';
bio(246).ndims=2;
bio(246).size=[];
bio(246).isStruct=false;

bio(247).blkName='State flow robot/Posizionamento/Sum6';
bio(247).sigName='';
bio(247).portIdx=0;
bio(247).dim=[1,1];
bio(247).sigWidth=1;
bio(247).sigAddress='&StateFlowFinal_B.Sum6_n';
bio(247).ndims=2;
bio(247).size=[];
bio(247).isStruct=false;

bio(248).blkName='State flow robot/Setting/MATLAB Function/p1';
bio(248).sigName='';
bio(248).portIdx=0;
bio(248).dim=[1,1];
bio(248).sigWidth=1;
bio(248).sigAddress='&StateFlowFinal_B.CA';
bio(248).ndims=2;
bio(248).size=[];
bio(248).isStruct=false;

bio(249).blkName='State flow robot/Setting/MATLAB Function/p2';
bio(249).sigName='';
bio(249).portIdx=1;
bio(249).dim=[1,1];
bio(249).sigWidth=1;
bio(249).sigAddress='&StateFlowFinal_B.CB';
bio(249).ndims=2;
bio(249).size=[];
bio(249).isStruct=false;

bio(250).blkName='State flow robot/Setting/MATLAB Function/p3';
bio(250).sigName='';
bio(250).portIdx=2;
bio(250).dim=[1,1];
bio(250).sigWidth=1;
bio(250).sigAddress='&StateFlowFinal_B.CH';
bio(250).ndims=2;
bio(250).size=[];
bio(250).isStruct=false;

bio(251).blkName='State flow robot/Setting/Discrete-Time Integrator';
bio(251).sigName='';
bio(251).portIdx=0;
bio(251).dim=[1,1];
bio(251).sigWidth=1;
bio(251).sigAddress='&StateFlowFinal_B.DiscreteTimeIntegrator';
bio(251).ndims=2;
bio(251).size=[];
bio(251).isStruct=false;

bio(252).blkName='State flow robot/Setting/Discrete-Time Integrator1';
bio(252).sigName='';
bio(252).portIdx=0;
bio(252).dim=[1,1];
bio(252).sigWidth=1;
bio(252).sigAddress='&StateFlowFinal_B.DiscreteTimeIntegrator1';
bio(252).ndims=2;
bio(252).size=[];
bio(252).isStruct=false;

bio(253).blkName='State flow robot/Setting/Gain';
bio(253).sigName='';
bio(253).portIdx=0;
bio(253).dim=[1,1];
bio(253).sigWidth=1;
bio(253).sigAddress='&StateFlowFinal_B.Gain_i';
bio(253).ndims=2;
bio(253).size=[];
bio(253).isStruct=false;

bio(254).blkName='State flow robot/Setting/Gain1';
bio(254).sigName='';
bio(254).portIdx=0;
bio(254).dim=[1,1];
bio(254).sigWidth=1;
bio(254).sigAddress='&StateFlowFinal_B.Gain1_f';
bio(254).ndims=2;
bio(254).size=[];
bio(254).isStruct=false;

bio(255).blkName='State flow robot/Setting/Sum1';
bio(255).sigName='';
bio(255).portIdx=0;
bio(255).dim=[1,1];
bio(255).sigWidth=1;
bio(255).sigAddress='&StateFlowFinal_B.Sum1_i';
bio(255).ndims=2;
bio(255).size=[];
bio(255).isStruct=false;

bio(256).blkName='State flow robot/Setting/Sum2';
bio(256).sigName='';
bio(256).portIdx=0;
bio(256).dim=[1,1];
bio(256).sigWidth=1;
bio(256).sigAddress='&StateFlowFinal_B.Sum2_b';
bio(256).ndims=2;
bio(256).size=[];
bio(256).isStruct=false;

bio(257).blkName='Sistema Vite/Actual A/Discrete Derivative A/Diff';
bio(257).sigName='';
bio(257).portIdx=0;
bio(257).dim=[1,1];
bio(257).sigWidth=1;
bio(257).sigAddress='&StateFlowFinal_B.Diff_l';
bio(257).ndims=2;
bio(257).size=[];
bio(257).isStruct=false;

bio(258).blkName='Sistema Vite/Actual A/Discrete Derivative A/TSamp';
bio(258).sigName='';
bio(258).portIdx=0;
bio(258).dim=[1,1];
bio(258).sigWidth=1;
bio(258).sigAddress='&StateFlowFinal_B.TSamp_i';
bio(258).ndims=2;
bio(258).size=[];
bio(258).isStruct=false;

bio(259).blkName='Sistema Vite/Actual A/Discrete Derivative A/UD';
bio(259).sigName='U(k-1)';
bio(259).portIdx=0;
bio(259).dim=[1,1];
bio(259).sigWidth=1;
bio(259).sigAddress='&StateFlowFinal_B.Uk1_p';
bio(259).ndims=2;
bio(259).size=[];
bio(259).isStruct=false;

bio(260).blkName='Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv';
bio(260).sigName='';
bio(260).portIdx=0;
bio(260).dim=[1,1];
bio(260).sigWidth=1;
bio(260).sigAddress='&StateFlowFinal_B.pos_A_conv_c';
bio(260).ndims=2;
bio(260).size=[];
bio(260).isStruct=false;

bio(261).blkName='Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v';
bio(261).sigName='';
bio(261).portIdx=0;
bio(261).dim=[1,1];
bio(261).sigWidth=1;
bio(261).sigAddress='&StateFlowFinal_B.pos_B_conv_v';
bio(261).ndims=2;
bio(261).size=[];
bio(261).isStruct=false;

bio(262).blkName='Sistema Vite/Actual A/Posizione attuale Vite A/Sum5';
bio(262).sigName='';
bio(262).portIdx=0;
bio(262).dim=[1,1];
bio(262).sigWidth=1;
bio(262).sigAddress='&StateFlowFinal_B.Sum5';
bio(262).ndims=2;
bio(262).size=[];
bio(262).isStruct=false;

bio(263).blkName='Sistema_braccia/Kalman Filter1/CalculateYhat/Product';
bio(263).sigName='';
bio(263).portIdx=0;
bio(263).dim=[1,1];
bio(263).sigWidth=1;
bio(263).sigAddress='&StateFlowFinal_B.Product';
bio(263).ndims=2;
bio(263).size=[];
bio(263).isStruct=false;

bio(264).blkName='Sistema_braccia/Kalman Filter1/CalculateYhat/Product1';
bio(264).sigName='';
bio(264).portIdx=0;
bio(264).dim=[1,1];
bio(264).sigWidth=1;
bio(264).sigAddress='&StateFlowFinal_B.Product1';
bio(264).ndims=2;
bio(264).size=[];
bio(264).isStruct=false;

bio(265).blkName='Sistema_braccia/Kalman Filter1/CalculateYhat/Add1';
bio(265).sigName='';
bio(265).portIdx=0;
bio(265).dim=[1,1];
bio(265).sigWidth=1;
bio(265).sigAddress='&StateFlowFinal_B.Add1';
bio(265).ndims=2;
bio(265).size=[];
bio(265).isStruct=false;

bio(266).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionA/Conversion';
bio(266).sigName='';
bio(266).portIdx=0;
bio(266).dim=[2,2];
bio(266).sigWidth=4;
bio(266).sigAddress='&StateFlowFinal_B.Conversion_d[0]';
bio(266).ndims=2;
bio(266).size=[];
bio(266).isStruct=false;

bio(267).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionB/Conversion';
bio(267).sigName='';
bio(267).portIdx=0;
bio(267).dim=[2,1];
bio(267).sigWidth=2;
bio(267).sigAddress='&StateFlowFinal_B.Conversion_me[0]';
bio(267).ndims=2;
bio(267).size=[];
bio(267).isStruct=false;

bio(268).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionC/Conversion';
bio(268).sigName='';
bio(268).portIdx=0;
bio(268).dim=[1,2];
bio(268).sigWidth=2;
bio(268).sigAddress='&StateFlowFinal_B.Conversion_g[0]';
bio(268).ndims=2;
bio(268).size=[];
bio(268).isStruct=false;

bio(269).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionD/Conversion';
bio(269).sigName='';
bio(269).portIdx=0;
bio(269).dim=[1,1];
bio(269).sigWidth=1;
bio(269).sigAddress='&StateFlowFinal_B.Conversion_n';
bio(269).ndims=2;
bio(269).size=[];
bio(269).isStruct=false;

bio(270).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionG/Conversion';
bio(270).sigName='';
bio(270).portIdx=0;
bio(270).dim=[2,2];
bio(270).sigWidth=4;
bio(270).sigAddress='&StateFlowFinal_B.Conversion_l[0]';
bio(270).ndims=2;
bio(270).size=[];
bio(270).isStruct=false;

bio(271).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionH/Conversion';
bio(271).sigName='';
bio(271).portIdx=0;
bio(271).dim=[1,2];
bio(271).sigWidth=2;
bio(271).sigAddress='&StateFlowFinal_B.Conversion_pk[0]';
bio(271).ndims=2;
bio(271).size=[];
bio(271).isStruct=false;

bio(272).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionN/Conversion';
bio(272).sigName='';
bio(272).portIdx=0;
bio(272).dim=[2,1];
bio(272).sigWidth=2;
bio(272).sigAddress='&StateFlowFinal_B.Conversion_cs[0]';
bio(272).ndims=2;
bio(272).size=[];
bio(272).isStruct=false;

bio(273).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionP/Conversion';
bio(273).sigName='';
bio(273).portIdx=0;
bio(273).dim=[2,2];
bio(273).sigWidth=4;
bio(273).sigAddress='&StateFlowFinal_B.Conversion_ks[0]';
bio(273).ndims=2;
bio(273).size=[];
bio(273).isStruct=false;

bio(274).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionP0/Conversion';
bio(274).sigName='';
bio(274).portIdx=0;
bio(274).dim=[2,2];
bio(274).sigWidth=4;
bio(274).sigAddress='&StateFlowFinal_B.Conversion_kg[0]';
bio(274).ndims=2;
bio(274).size=[];
bio(274).isStruct=false;

bio(275).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionQ/Conversion';
bio(275).sigName='';
bio(275).portIdx=0;
bio(275).dim=[2,2];
bio(275).sigWidth=4;
bio(275).sigAddress='&StateFlowFinal_B.Conversion_px[0]';
bio(275).ndims=2;
bio(275).size=[];
bio(275).isStruct=false;

bio(276).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionR/Conversion';
bio(276).sigName='';
bio(276).portIdx=0;
bio(276).dim=[1,1];
bio(276).sigWidth=1;
bio(276).sigAddress='&StateFlowFinal_B.Conversion_h';
bio(276).ndims=2;
bio(276).size=[];
bio(276).isStruct=false;

bio(277).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionReset/Conversion';
bio(277).sigName='';
bio(277).portIdx=0;
bio(277).dim=[1,1];
bio(277).sigWidth=1;
bio(277).sigAddress='&StateFlowFinal_B.Conversion_n2';
bio(277).ndims=2;
bio(277).size=[];
bio(277).isStruct=false;

bio(278).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionX/Conversion';
bio(278).sigName='';
bio(278).portIdx=0;
bio(278).dim=[2,1];
bio(278).sigWidth=2;
bio(278).sigAddress='&StateFlowFinal_B.Conversion_i[0]';
bio(278).ndims=2;
bio(278).size=[];
bio(278).isStruct=false;

bio(279).blkName='Sistema_braccia/Kalman Filter1/DataTypeConversionX0/Conversion';
bio(279).sigName='';
bio(279).portIdx=0;
bio(279).dim=[2,1];
bio(279).sigWidth=2;
bio(279).sigAddress='&StateFlowFinal_B.Conversion_m[0]';
bio(279).ndims=2;
bio(279).size=[];
bio(279).isStruct=false;

bio(280).blkName='Sistema_braccia/Kalman Filter1/Observer/A[k]*xhat[k|k-1]';
bio(280).sigName='';
bio(280).portIdx=0;
bio(280).dim=[2,1];
bio(280).sigWidth=2;
bio(280).sigAddress='&StateFlowFinal_B.Akxhatkk1[0]';
bio(280).ndims=2;
bio(280).size=[];
bio(280).isStruct=false;

bio(281).blkName='Sistema_braccia/Kalman Filter1/Observer/B[k]*u[k]';
bio(281).sigName='';
bio(281).portIdx=0;
bio(281).dim=[2,1];
bio(281).sigWidth=2;
bio(281).sigAddress='&StateFlowFinal_B.Bkuk[0]';
bio(281).ndims=2;
bio(281).size=[];
bio(281).isStruct=false;

bio(282).blkName='Sistema_braccia/Kalman Filter1/Observer/Reshape';
bio(282).sigName='';
bio(282).portIdx=0;
bio(282).dim=[2,1];
bio(282).sigWidth=2;
bio(282).sigAddress='&StateFlowFinal_B.Reshape[0]';
bio(282).ndims=2;
bio(282).size=[];
bio(282).isStruct=false;

bio(283).blkName='Sistema_braccia/Kalman Filter1/Observer/Add';
bio(283).sigName='';
bio(283).portIdx=0;
bio(283).dim=[2,1];
bio(283).sigWidth=2;
bio(283).sigAddress='&StateFlowFinal_B.Add[0]';
bio(283).ndims=2;
bio(283).size=[];
bio(283).isStruct=false;

bio(284).blkName='Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Add';
bio(284).sigName='';
bio(284).portIdx=0;
bio(284).dim=[2,1];
bio(284).sigWidth=2;
bio(284).sigAddress='&StateFlowFinal_B.UseCurrentEstimator_e.Add[0]';
bio(284).ndims=2;
bio(284).size=[];
bio(284).isStruct=false;

bio(285).blkName='Sistema_braccia/Kalman Filter2/CalculateYhat/Product';
bio(285).sigName='';
bio(285).portIdx=0;
bio(285).dim=[1,1];
bio(285).sigWidth=1;
bio(285).sigAddress='&StateFlowFinal_B.Product_m';
bio(285).ndims=2;
bio(285).size=[];
bio(285).isStruct=false;

bio(286).blkName='Sistema_braccia/Kalman Filter2/CalculateYhat/Product1';
bio(286).sigName='';
bio(286).portIdx=0;
bio(286).dim=[1,1];
bio(286).sigWidth=1;
bio(286).sigAddress='&StateFlowFinal_B.Product1_l';
bio(286).ndims=2;
bio(286).size=[];
bio(286).isStruct=false;

bio(287).blkName='Sistema_braccia/Kalman Filter2/CalculateYhat/Add1';
bio(287).sigName='';
bio(287).portIdx=0;
bio(287).dim=[1,1];
bio(287).sigWidth=1;
bio(287).sigAddress='&StateFlowFinal_B.Add1_a';
bio(287).ndims=2;
bio(287).size=[];
bio(287).isStruct=false;

bio(288).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionA/Conversion';
bio(288).sigName='';
bio(288).portIdx=0;
bio(288).dim=[2,2];
bio(288).sigWidth=4;
bio(288).sigAddress='&StateFlowFinal_B.Conversion_b[0]';
bio(288).ndims=2;
bio(288).size=[];
bio(288).isStruct=false;

bio(289).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionB/Conversion';
bio(289).sigName='';
bio(289).portIdx=0;
bio(289).dim=[2,1];
bio(289).sigWidth=2;
bio(289).sigAddress='&StateFlowFinal_B.Conversion_pt[0]';
bio(289).ndims=2;
bio(289).size=[];
bio(289).isStruct=false;

bio(290).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionC/Conversion';
bio(290).sigName='';
bio(290).portIdx=0;
bio(290).dim=[1,2];
bio(290).sigWidth=2;
bio(290).sigAddress='&StateFlowFinal_B.Conversion_f[0]';
bio(290).ndims=2;
bio(290).size=[];
bio(290).isStruct=false;

bio(291).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionD/Conversion';
bio(291).sigName='';
bio(291).portIdx=0;
bio(291).dim=[1,1];
bio(291).sigWidth=1;
bio(291).sigAddress='&StateFlowFinal_B.Conversion_a';
bio(291).ndims=2;
bio(291).size=[];
bio(291).isStruct=false;

bio(292).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionG/Conversion';
bio(292).sigName='';
bio(292).portIdx=0;
bio(292).dim=[2,2];
bio(292).sigWidth=4;
bio(292).sigAddress='&StateFlowFinal_B.Conversion_i1[0]';
bio(292).ndims=2;
bio(292).size=[];
bio(292).isStruct=false;

bio(293).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionH/Conversion';
bio(293).sigName='';
bio(293).portIdx=0;
bio(293).dim=[1,2];
bio(293).sigWidth=2;
bio(293).sigAddress='&StateFlowFinal_B.Conversion_g3[0]';
bio(293).ndims=2;
bio(293).size=[];
bio(293).isStruct=false;

bio(294).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionN/Conversion';
bio(294).sigName='';
bio(294).portIdx=0;
bio(294).dim=[2,1];
bio(294).sigWidth=2;
bio(294).sigAddress='&StateFlowFinal_B.Conversion_jd[0]';
bio(294).ndims=2;
bio(294).size=[];
bio(294).isStruct=false;

bio(295).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionP/Conversion';
bio(295).sigName='';
bio(295).portIdx=0;
bio(295).dim=[2,2];
bio(295).sigWidth=4;
bio(295).sigAddress='&StateFlowFinal_B.Conversion_gp[0]';
bio(295).ndims=2;
bio(295).size=[];
bio(295).isStruct=false;

bio(296).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionP0/Conversion';
bio(296).sigName='';
bio(296).portIdx=0;
bio(296).dim=[2,2];
bio(296).sigWidth=4;
bio(296).sigAddress='&StateFlowFinal_B.Conversion_pv[0]';
bio(296).ndims=2;
bio(296).size=[];
bio(296).isStruct=false;

bio(297).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionQ/Conversion';
bio(297).sigName='';
bio(297).portIdx=0;
bio(297).dim=[2,2];
bio(297).sigWidth=4;
bio(297).sigAddress='&StateFlowFinal_B.Conversion_d0[0]';
bio(297).ndims=2;
bio(297).size=[];
bio(297).isStruct=false;

bio(298).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionR/Conversion';
bio(298).sigName='';
bio(298).portIdx=0;
bio(298).dim=[1,1];
bio(298).sigWidth=1;
bio(298).sigAddress='&StateFlowFinal_B.Conversion_o';
bio(298).ndims=2;
bio(298).size=[];
bio(298).isStruct=false;

bio(299).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionReset/Conversion';
bio(299).sigName='';
bio(299).portIdx=0;
bio(299).dim=[1,1];
bio(299).sigWidth=1;
bio(299).sigAddress='&StateFlowFinal_B.Conversion_dw';
bio(299).ndims=2;
bio(299).size=[];
bio(299).isStruct=false;

bio(300).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionX/Conversion';
bio(300).sigName='';
bio(300).portIdx=0;
bio(300).dim=[2,1];
bio(300).sigWidth=2;
bio(300).sigAddress='&StateFlowFinal_B.Conversion_pc[0]';
bio(300).ndims=2;
bio(300).size=[];
bio(300).isStruct=false;

bio(301).blkName='Sistema_braccia/Kalman Filter2/DataTypeConversionX0/Conversion';
bio(301).sigName='';
bio(301).portIdx=0;
bio(301).dim=[2,1];
bio(301).sigWidth=2;
bio(301).sigAddress='&StateFlowFinal_B.Conversion_p[0]';
bio(301).ndims=2;
bio(301).size=[];
bio(301).isStruct=false;

bio(302).blkName='Sistema_braccia/Kalman Filter2/Observer/A[k]*xhat[k|k-1]';
bio(302).sigName='';
bio(302).portIdx=0;
bio(302).dim=[2,1];
bio(302).sigWidth=2;
bio(302).sigAddress='&StateFlowFinal_B.Akxhatkk1_b[0]';
bio(302).ndims=2;
bio(302).size=[];
bio(302).isStruct=false;

bio(303).blkName='Sistema_braccia/Kalman Filter2/Observer/B[k]*u[k]';
bio(303).sigName='';
bio(303).portIdx=0;
bio(303).dim=[2,1];
bio(303).sigWidth=2;
bio(303).sigAddress='&StateFlowFinal_B.Bkuk_b[0]';
bio(303).ndims=2;
bio(303).size=[];
bio(303).isStruct=false;

bio(304).blkName='Sistema_braccia/Kalman Filter2/Observer/Reshape';
bio(304).sigName='';
bio(304).portIdx=0;
bio(304).dim=[2,1];
bio(304).sigWidth=2;
bio(304).sigAddress='&StateFlowFinal_B.Reshape_c[0]';
bio(304).ndims=2;
bio(304).size=[];
bio(304).isStruct=false;

bio(305).blkName='Sistema_braccia/Kalman Filter2/Observer/Add';
bio(305).sigName='';
bio(305).portIdx=0;
bio(305).dim=[2,1];
bio(305).sigWidth=2;
bio(305).sigAddress='&StateFlowFinal_B.Add_f[0]';
bio(305).ndims=2;
bio(305).size=[];
bio(305).isStruct=false;

bio(306).blkName='Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Add';
bio(306).sigName='';
bio(306).portIdx=0;
bio(306).dim=[2,1];
bio(306).sigWidth=2;
bio(306).sigAddress='&StateFlowFinal_B.UseCurrentEstimator.Add[0]';
bio(306).ndims=2;
bio(306).size=[];
bio(306).isStruct=false;

bio(307).blkName='Sistema_braccia/Posizioni/Discrete Derivative B/Diff';
bio(307).sigName='';
bio(307).portIdx=0;
bio(307).dim=[1,1];
bio(307).sigWidth=1;
bio(307).sigAddress='&StateFlowFinal_B.Diff_i';
bio(307).ndims=2;
bio(307).size=[];
bio(307).isStruct=false;

bio(308).blkName='Sistema_braccia/Posizioni/Discrete Derivative B/TSamp';
bio(308).sigName='';
bio(308).portIdx=0;
bio(308).dim=[1,1];
bio(308).sigWidth=1;
bio(308).sigAddress='&StateFlowFinal_B.TSamp_n';
bio(308).ndims=2;
bio(308).size=[];
bio(308).isStruct=false;

bio(309).blkName='Sistema_braccia/Posizioni/Discrete Derivative B/UD';
bio(309).sigName='U(k-1)';
bio(309).portIdx=0;
bio(309).dim=[1,1];
bio(309).sigWidth=1;
bio(309).sigAddress='&StateFlowFinal_B.Uk1_d';
bio(309).ndims=2;
bio(309).size=[];
bio(309).isStruct=false;

bio(310).blkName='Sistema_braccia/Posizioni/Discrete Derivative B1/Diff';
bio(310).sigName='';
bio(310).portIdx=0;
bio(310).dim=[1,1];
bio(310).sigWidth=1;
bio(310).sigAddress='&StateFlowFinal_B.Diff_d';
bio(310).ndims=2;
bio(310).size=[];
bio(310).isStruct=false;

bio(311).blkName='Sistema_braccia/Posizioni/Discrete Derivative B1/TSamp';
bio(311).sigName='';
bio(311).portIdx=0;
bio(311).dim=[1,1];
bio(311).sigWidth=1;
bio(311).sigAddress='&StateFlowFinal_B.TSamp_h';
bio(311).ndims=2;
bio(311).size=[];
bio(311).isStruct=false;

bio(312).blkName='Sistema_braccia/Posizioni/Discrete Derivative B1/UD';
bio(312).sigName='U(k-1)';
bio(312).portIdx=0;
bio(312).dim=[1,1];
bio(312).sigWidth=1;
bio(312).sigAddress='&StateFlowFinal_B.Uk1_b';
bio(312).ndims=2;
bio(312).size=[];
bio(312).isStruct=false;

bio(313).blkName='Sistema_braccia/Posizioni/Discrete Derivative B2/Diff';
bio(313).sigName='';
bio(313).portIdx=0;
bio(313).dim=[1,1];
bio(313).sigWidth=1;
bio(313).sigAddress='&StateFlowFinal_B.Diff_f';
bio(313).ndims=2;
bio(313).size=[];
bio(313).isStruct=false;

bio(314).blkName='Sistema_braccia/Posizioni/Discrete Derivative B2/TSamp';
bio(314).sigName='';
bio(314).portIdx=0;
bio(314).dim=[1,1];
bio(314).sigWidth=1;
bio(314).sigAddress='&StateFlowFinal_B.TSamp_e';
bio(314).ndims=2;
bio(314).size=[];
bio(314).isStruct=false;

bio(315).blkName='Sistema_braccia/Posizioni/Discrete Derivative B2/UD';
bio(315).sigName='U(k-1)';
bio(315).portIdx=0;
bio(315).dim=[1,1];
bio(315).sigWidth=1;
bio(315).sigAddress='&StateFlowFinal_B.Uk1_l';
bio(315).ndims=2;
bio(315).size=[];
bio(315).isStruct=false;

bio(316).blkName='Sistema_braccia/Posizioni/Discrete Derivative B3/Diff';
bio(316).sigName='';
bio(316).portIdx=0;
bio(316).dim=[1,1];
bio(316).sigWidth=1;
bio(316).sigAddress='&StateFlowFinal_B.Diff_n';
bio(316).ndims=2;
bio(316).size=[];
bio(316).isStruct=false;

bio(317).blkName='Sistema_braccia/Posizioni/Discrete Derivative B3/TSamp';
bio(317).sigName='';
bio(317).portIdx=0;
bio(317).dim=[1,1];
bio(317).sigWidth=1;
bio(317).sigAddress='&StateFlowFinal_B.TSamp_nd';
bio(317).ndims=2;
bio(317).size=[];
bio(317).isStruct=false;

bio(318).blkName='Sistema_braccia/Posizioni/Discrete Derivative B3/UD';
bio(318).sigName='U(k-1)';
bio(318).portIdx=0;
bio(318).dim=[1,1];
bio(318).sigWidth=1;
bio(318).sigAddress='&StateFlowFinal_B.Uk1_ll';
bio(318).ndims=2;
bio(318).size=[];
bio(318).isStruct=false;

bio(319).blkName='Sistema_braccia/Posizioni/Discrete Derivative B4/Diff';
bio(319).sigName='';
bio(319).portIdx=0;
bio(319).dim=[1,1];
bio(319).sigWidth=1;
bio(319).sigAddress='&StateFlowFinal_B.Diff_b';
bio(319).ndims=2;
bio(319).size=[];
bio(319).isStruct=false;

bio(320).blkName='Sistema_braccia/Posizioni/Discrete Derivative B4/TSamp';
bio(320).sigName='';
bio(320).portIdx=0;
bio(320).dim=[1,1];
bio(320).sigWidth=1;
bio(320).sigAddress='&StateFlowFinal_B.TSamp_f';
bio(320).ndims=2;
bio(320).size=[];
bio(320).isStruct=false;

bio(321).blkName='Sistema_braccia/Posizioni/Discrete Derivative B4/UD';
bio(321).sigName='U(k-1)';
bio(321).portIdx=0;
bio(321).dim=[1,1];
bio(321).sigWidth=1;
bio(321).sigAddress='&StateFlowFinal_B.Uk1_j';
bio(321).ndims=2;
bio(321).size=[];
bio(321).isStruct=false;

bio(322).blkName='Sistema_braccia/Posizioni/Discrete Derivative B5/Diff';
bio(322).sigName='';
bio(322).portIdx=0;
bio(322).dim=[1,1];
bio(322).sigWidth=1;
bio(322).sigAddress='&StateFlowFinal_B.Diff_bt';
bio(322).ndims=2;
bio(322).size=[];
bio(322).isStruct=false;

bio(323).blkName='Sistema_braccia/Posizioni/Discrete Derivative B5/TSamp';
bio(323).sigName='';
bio(323).portIdx=0;
bio(323).dim=[1,1];
bio(323).sigWidth=1;
bio(323).sigAddress='&StateFlowFinal_B.TSamp_iq';
bio(323).ndims=2;
bio(323).size=[];
bio(323).isStruct=false;

bio(324).blkName='Sistema_braccia/Posizioni/Discrete Derivative B5/UD';
bio(324).sigName='U(k-1)';
bio(324).portIdx=0;
bio(324).dim=[1,1];
bio(324).sigWidth=1;
bio(324).sigAddress='&StateFlowFinal_B.Uk1_bl';
bio(324).ndims=2;
bio(324).size=[];
bio(324).isStruct=false;

bio(325).blkName='Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionL/Conversion';
bio(325).sigName='';
bio(325).portIdx=0;
bio(325).dim=[2,1];
bio(325).sigWidth=2;
bio(325).sigAddress='&StateFlowFinal_B.Conversion_c[0]';
bio(325).ndims=2;
bio(325).size=[];
bio(325).isStruct=false;

bio(326).blkName='Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionM/Conversion';
bio(326).sigName='';
bio(326).portIdx=0;
bio(326).dim=[2,1];
bio(326).sigWidth=2;
bio(326).sigAddress='&StateFlowFinal_B.Conversion_j[0]';
bio(326).ndims=2;
bio(326).size=[];
bio(326).isStruct=false;

bio(327).blkName='Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionP/Conversion';
bio(327).sigName='';
bio(327).portIdx=0;
bio(327).dim=[1,1];
bio(327).sigWidth=1;
bio(327).sigAddress='&StateFlowFinal_B.Conversion_j0';
bio(327).ndims=2;
bio(327).size=[];
bio(327).isStruct=false;

bio(328).blkName='Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionZ/Conversion';
bio(328).sigName='';
bio(328).portIdx=0;
bio(328).dim=[2,2];
bio(328).sigWidth=4;
bio(328).sigAddress='&StateFlowFinal_B.Conversion_k[0]';
bio(328).ndims=2;
bio(328).size=[];
bio(328).isStruct=false;

bio(329).blkName='Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/C[k]*xhat[k|k-1]';
bio(329).sigName='';
bio(329).portIdx=0;
bio(329).dim=[1,1];
bio(329).sigWidth=1;
bio(329).sigAddress='&StateFlowFinal_B.MeasurementUpdate.Ckxhatkk1';
bio(329).ndims=2;
bio(329).size=[];
bio(329).isStruct=false;

bio(330).blkName='Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/D[k]*u[k]';
bio(330).sigName='';
bio(330).portIdx=0;
bio(330).dim=[1,1];
bio(330).sigWidth=1;
bio(330).sigAddress='&StateFlowFinal_B.MeasurementUpdate.Dkuk';
bio(330).ndims=2;
bio(330).size=[];
bio(330).isStruct=false;

bio(331).blkName='Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/Product3';
bio(331).sigName='';
bio(331).portIdx=0;
bio(331).dim=[2,1];
bio(331).sigWidth=2;
bio(331).sigAddress='&StateFlowFinal_B.MeasurementUpdate.Product3[0]';
bio(331).ndims=2;
bio(331).size=[];
bio(331).isStruct=false;

bio(332).blkName='Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/Add1';
bio(332).sigName='yhat[k|k-1]';
bio(332).portIdx=0;
bio(332).dim=[1,1];
bio(332).sigWidth=1;
bio(332).sigAddress='&StateFlowFinal_B.MeasurementUpdate.yhatkk1';
bio(332).ndims=2;
bio(332).size=[];
bio(332).isStruct=false;

bio(333).blkName='Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/Sum';
bio(333).sigName='';
bio(333).portIdx=0;
bio(333).dim=[1,1];
bio(333).sigWidth=1;
bio(333).sigAddress='&StateFlowFinal_B.MeasurementUpdate.Sum';
bio(333).ndims=2;
bio(333).size=[];
bio(333).isStruct=false;

bio(334).blkName='Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem/Product';
bio(334).sigName='';
bio(334).portIdx=0;
bio(334).dim=[1,1];
bio(334).sigWidth=1;
bio(334).sigAddress='&StateFlowFinal_B.UseCurrentEstimator_e.Product';
bio(334).ndims=2;
bio(334).size=[];
bio(334).isStruct=false;

bio(335).blkName='Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem/Product1';
bio(335).sigName='';
bio(335).portIdx=0;
bio(335).dim=[1,1];
bio(335).sigWidth=1;
bio(335).sigAddress='&StateFlowFinal_B.UseCurrentEstimator_e.Product1';
bio(335).ndims=2;
bio(335).size=[];
bio(335).isStruct=false;

bio(336).blkName='Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem/Product2';
bio(336).sigName='';
bio(336).portIdx=0;
bio(336).dim=[2,1];
bio(336).sigWidth=2;
bio(336).sigAddress='&StateFlowFinal_B.UseCurrentEstimator_e.Product2[0]';
bio(336).ndims=2;
bio(336).size=[];
bio(336).isStruct=false;

bio(337).blkName='Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem/Add1';
bio(337).sigName='';
bio(337).portIdx=0;
bio(337).dim=[1,1];
bio(337).sigWidth=1;
bio(337).sigAddress='&StateFlowFinal_B.UseCurrentEstimator_e.Add1';
bio(337).ndims=2;
bio(337).size=[];
bio(337).isStruct=false;

bio(338).blkName='Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionL/Conversion';
bio(338).sigName='';
bio(338).portIdx=0;
bio(338).dim=[2,1];
bio(338).sigWidth=2;
bio(338).sigAddress='&StateFlowFinal_B.Conversion_ky[0]';
bio(338).ndims=2;
bio(338).size=[];
bio(338).isStruct=false;

bio(339).blkName='Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionM/Conversion';
bio(339).sigName='';
bio(339).portIdx=0;
bio(339).dim=[2,1];
bio(339).sigWidth=2;
bio(339).sigAddress='&StateFlowFinal_B.Conversion[0]';
bio(339).ndims=2;
bio(339).size=[];
bio(339).isStruct=false;

bio(340).blkName='Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionP/Conversion';
bio(340).sigName='';
bio(340).portIdx=0;
bio(340).dim=[1,1];
bio(340).sigWidth=1;
bio(340).sigAddress='&StateFlowFinal_B.Conversion_pq';
bio(340).ndims=2;
bio(340).size=[];
bio(340).isStruct=false;

bio(341).blkName='Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionZ/Conversion';
bio(341).sigName='';
bio(341).portIdx=0;
bio(341).dim=[2,2];
bio(341).sigWidth=4;
bio(341).sigAddress='&StateFlowFinal_B.Conversion_f1[0]';
bio(341).ndims=2;
bio(341).size=[];
bio(341).isStruct=false;

bio(342).blkName='Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/C[k]*xhat[k|k-1]';
bio(342).sigName='';
bio(342).portIdx=0;
bio(342).dim=[1,1];
bio(342).sigWidth=1;
bio(342).sigAddress='&StateFlowFinal_B.MeasurementUpdate_a.Ckxhatkk1';
bio(342).ndims=2;
bio(342).size=[];
bio(342).isStruct=false;

bio(343).blkName='Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/D[k]*u[k]';
bio(343).sigName='';
bio(343).portIdx=0;
bio(343).dim=[1,1];
bio(343).sigWidth=1;
bio(343).sigAddress='&StateFlowFinal_B.MeasurementUpdate_a.Dkuk';
bio(343).ndims=2;
bio(343).size=[];
bio(343).isStruct=false;

bio(344).blkName='Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/Product3';
bio(344).sigName='';
bio(344).portIdx=0;
bio(344).dim=[2,1];
bio(344).sigWidth=2;
bio(344).sigAddress='&StateFlowFinal_B.MeasurementUpdate_a.Product3[0]';
bio(344).ndims=2;
bio(344).size=[];
bio(344).isStruct=false;

bio(345).blkName='Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/Add1';
bio(345).sigName='yhat[k|k-1]';
bio(345).portIdx=0;
bio(345).dim=[1,1];
bio(345).sigWidth=1;
bio(345).sigAddress='&StateFlowFinal_B.MeasurementUpdate_a.yhatkk1';
bio(345).ndims=2;
bio(345).size=[];
bio(345).isStruct=false;

bio(346).blkName='Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/Sum';
bio(346).sigName='';
bio(346).portIdx=0;
bio(346).dim=[1,1];
bio(346).sigWidth=1;
bio(346).sigAddress='&StateFlowFinal_B.MeasurementUpdate_a.Sum';
bio(346).ndims=2;
bio(346).size=[];
bio(346).isStruct=false;

bio(347).blkName='Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem/Product';
bio(347).sigName='';
bio(347).portIdx=0;
bio(347).dim=[1,1];
bio(347).sigWidth=1;
bio(347).sigAddress='&StateFlowFinal_B.UseCurrentEstimator.Product';
bio(347).ndims=2;
bio(347).size=[];
bio(347).isStruct=false;

bio(348).blkName='Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem/Product1';
bio(348).sigName='';
bio(348).portIdx=0;
bio(348).dim=[1,1];
bio(348).sigWidth=1;
bio(348).sigAddress='&StateFlowFinal_B.UseCurrentEstimator.Product1';
bio(348).ndims=2;
bio(348).size=[];
bio(348).isStruct=false;

bio(349).blkName='Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem/Product2';
bio(349).sigName='';
bio(349).portIdx=0;
bio(349).dim=[2,1];
bio(349).sigWidth=2;
bio(349).sigAddress='&StateFlowFinal_B.UseCurrentEstimator.Product2[0]';
bio(349).ndims=2;
bio(349).size=[];
bio(349).isStruct=false;

bio(350).blkName='Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem/Add1';
bio(350).sigName='';
bio(350).portIdx=0;
bio(350).dim=[1,1];
bio(350).sigWidth=1;
bio(350).sigAddress='&StateFlowFinal_B.UseCurrentEstimator.Add1';
bio(350).ndims=2;
bio(350).size=[];
bio(350).isStruct=false;

bio(351).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/D*u(k)';
bio(351).sigName='';
bio(351).portIdx=0;
bio(351).dim=[1,1];
bio(351).sigWidth=1;
bio(351).sigAddress='&StateFlowFinal_B.Duk_h';
bio(351).ndims=2;
bio(351).size=[];
bio(351).isStruct=false;

bio(352).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x1(k) + B*u1(k) ';
bio(352).sigName='x1(k+1)';
bio(352).portIdx=0;
bio(352).dim=[1,1];
bio(352).sigWidth=1;
bio(352).sigAddress='&StateFlowFinal_B.x1k1_g';
bio(352).ndims=2;
bio(352).size=[];
bio(352).isStruct=false;

bio(353).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x2(k) + B*u2(k)';
bio(353).sigName='x2(k+1)';
bio(353).portIdx=0;
bio(353).dim=[1,1];
bio(353).sigWidth=1;
bio(353).sigAddress='&StateFlowFinal_B.x2k1_n';
bio(353).ndims=2;
bio(353).size=[];
bio(353).isStruct=false;

bio(354).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/C*X(k)+D*u(k)';
bio(354).sigName='y(k)';
bio(354).portIdx=0;
bio(354).dim=[1,1];
bio(354).sigWidth=1;
bio(354).sigAddress='&StateFlowFinal_B.yk_i';
bio(354).ndims=2;
bio(354).size=[];
bio(354).isStruct=false;

bio(355).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x1';
bio(355).sigName='x1(k)';
bio(355).portIdx=0;
bio(355).dim=[1,1];
bio(355).sigWidth=1;
bio(355).sigAddress='&StateFlowFinal_B.x1k_a';
bio(355).ndims=2;
bio(355).size=[];
bio(355).isStruct=false;

bio(356).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x2';
bio(356).sigName='x2(k)';
bio(356).portIdx=0;
bio(356).dim=[1,1];
bio(356).sigWidth=1;
bio(356).sigAddress='&StateFlowFinal_B.x2k_g';
bio(356).ndims=2;
bio(356).size=[];
bio(356).isStruct=false;

bio(357).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/D*u(k)';
bio(357).sigName='';
bio(357).portIdx=0;
bio(357).dim=[1,1];
bio(357).sigWidth=1;
bio(357).sigAddress='&StateFlowFinal_B.Duk';
bio(357).ndims=2;
bio(357).size=[];
bio(357).isStruct=false;

bio(358).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x1(k) + B*u1(k) ';
bio(358).sigName='x1(k+1)';
bio(358).portIdx=0;
bio(358).dim=[1,1];
bio(358).sigWidth=1;
bio(358).sigAddress='&StateFlowFinal_B.x1k1';
bio(358).ndims=2;
bio(358).size=[];
bio(358).isStruct=false;

bio(359).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x2(k) + B*u2(k)';
bio(359).sigName='x2(k+1)';
bio(359).portIdx=0;
bio(359).dim=[1,1];
bio(359).sigWidth=1;
bio(359).sigAddress='&StateFlowFinal_B.x2k1';
bio(359).ndims=2;
bio(359).size=[];
bio(359).isStruct=false;

bio(360).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*X(k)+D*u(k)';
bio(360).sigName='y(k)';
bio(360).portIdx=0;
bio(360).dim=[1,1];
bio(360).sigWidth=1;
bio(360).sigAddress='&StateFlowFinal_B.yk';
bio(360).ndims=2;
bio(360).size=[];
bio(360).isStruct=false;

bio(361).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x1';
bio(361).sigName='x1(k)';
bio(361).portIdx=0;
bio(361).dim=[1,1];
bio(361).sigWidth=1;
bio(361).sigAddress='&StateFlowFinal_B.x1k';
bio(361).ndims=2;
bio(361).size=[];
bio(361).isStruct=false;

bio(362).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x2';
bio(362).sigName='x2(k)';
bio(362).portIdx=0;
bio(362).dim=[1,1];
bio(362).sigWidth=1;
bio(362).sigAddress='&StateFlowFinal_B.x2k';
bio(362).ndims=2;
bio(362).size=[];
bio(362).isStruct=false;

bio(363).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/D*u(k)';
bio(363).sigName='';
bio(363).portIdx=0;
bio(363).dim=[1,1];
bio(363).sigWidth=1;
bio(363).sigAddress='&StateFlowFinal_B.Duk_n';
bio(363).ndims=2;
bio(363).size=[];
bio(363).isStruct=false;

bio(364).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x1(k) + B*u1(k) ';
bio(364).sigName='x1(k+1)';
bio(364).portIdx=0;
bio(364).dim=[1,1];
bio(364).sigWidth=1;
bio(364).sigAddress='&StateFlowFinal_B.x1k1_h';
bio(364).ndims=2;
bio(364).size=[];
bio(364).isStruct=false;

bio(365).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x2(k) + B*u2(k)';
bio(365).sigName='x2(k+1)';
bio(365).portIdx=0;
bio(365).dim=[1,1];
bio(365).sigWidth=1;
bio(365).sigAddress='&StateFlowFinal_B.x2k1_h';
bio(365).ndims=2;
bio(365).size=[];
bio(365).isStruct=false;

bio(366).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*X(k)+D*u(k)';
bio(366).sigName='y(k)';
bio(366).portIdx=0;
bio(366).dim=[1,1];
bio(366).sigWidth=1;
bio(366).sigAddress='&StateFlowFinal_B.yk_m';
bio(366).ndims=2;
bio(366).size=[];
bio(366).isStruct=false;

bio(367).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x1';
bio(367).sigName='x1(k)';
bio(367).portIdx=0;
bio(367).dim=[1,1];
bio(367).sigWidth=1;
bio(367).sigAddress='&StateFlowFinal_B.x1k_i';
bio(367).ndims=2;
bio(367).size=[];
bio(367).isStruct=false;

bio(368).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x2';
bio(368).sigName='x2(k)';
bio(368).portIdx=0;
bio(368).dim=[1,1];
bio(368).sigWidth=1;
bio(368).sigAddress='&StateFlowFinal_B.x2k_d';
bio(368).ndims=2;
bio(368).size=[];
bio(368).isStruct=false;

bio(369).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11';
bio(369).sigName='';
bio(369).portIdx=0;
bio(369).dim=[1,1];
bio(369).sigWidth=1;
bio(369).sigAddress='&StateFlowFinal_B.A11_p';
bio(369).ndims=2;
bio(369).size=[];
bio(369).isStruct=false;

bio(370).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12';
bio(370).sigName='';
bio(370).portIdx=0;
bio(370).dim=[1,1];
bio(370).sigWidth=1;
bio(370).sigAddress='&StateFlowFinal_B.A12_c';
bio(370).ndims=2;
bio(370).size=[];
bio(370).isStruct=false;

bio(371).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21';
bio(371).sigName='';
bio(371).portIdx=0;
bio(371).dim=[1,1];
bio(371).sigWidth=1;
bio(371).sigAddress='&StateFlowFinal_B.A21_h';
bio(371).ndims=2;
bio(371).size=[];
bio(371).isStruct=false;

bio(372).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22';
bio(372).sigName='';
bio(372).portIdx=0;
bio(372).dim=[1,1];
bio(372).sigWidth=1;
bio(372).sigAddress='&StateFlowFinal_B.A22_d';
bio(372).ndims=2;
bio(372).size=[];
bio(372).isStruct=false;

bio(373).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum2';
bio(373).sigName='';
bio(373).portIdx=0;
bio(373).dim=[1,1];
bio(373).sigWidth=1;
bio(373).sigAddress='&StateFlowFinal_B.sum2_nk';
bio(373).ndims=2;
bio(373).size=[];
bio(373).isStruct=false;

bio(374).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum3';
bio(374).sigName='';
bio(374).portIdx=0;
bio(374).dim=[1,1];
bio(374).sigWidth=1;
bio(374).sigAddress='&StateFlowFinal_B.sum3_e';
bio(374).ndims=2;
bio(374).size=[];
bio(374).isStruct=false;

bio(375).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11';
bio(375).sigName='';
bio(375).portIdx=0;
bio(375).dim=[1,1];
bio(375).sigWidth=1;
bio(375).sigAddress='&StateFlowFinal_B.B11_k';
bio(375).ndims=2;
bio(375).size=[];
bio(375).isStruct=false;

bio(376).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21';
bio(376).sigName='';
bio(376).portIdx=0;
bio(376).dim=[1,1];
bio(376).sigWidth=1;
bio(376).sigAddress='&StateFlowFinal_B.B21_l';
bio(376).ndims=2;
bio(376).size=[];
bio(376).isStruct=false;

bio(377).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C11';
bio(377).sigName='';
bio(377).portIdx=0;
bio(377).dim=[1,1];
bio(377).sigWidth=1;
bio(377).sigAddress='&StateFlowFinal_B.C11_h';
bio(377).ndims=2;
bio(377).size=[];
bio(377).isStruct=false;

bio(378).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C12';
bio(378).sigName='';
bio(378).portIdx=0;
bio(378).dim=[1,1];
bio(378).sigWidth=1;
bio(378).sigAddress='&StateFlowFinal_B.C12_e';
bio(378).ndims=2;
bio(378).size=[];
bio(378).isStruct=false;

bio(379).blkName='Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/sum2';
bio(379).sigName='';
bio(379).portIdx=0;
bio(379).dim=[1,1];
bio(379).sigWidth=1;
bio(379).sigAddress='&StateFlowFinal_B.sum2_k';
bio(379).ndims=2;
bio(379).size=[];
bio(379).isStruct=false;

bio(380).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11';
bio(380).sigName='';
bio(380).portIdx=0;
bio(380).dim=[1,1];
bio(380).sigWidth=1;
bio(380).sigAddress='&StateFlowFinal_B.A11';
bio(380).ndims=2;
bio(380).size=[];
bio(380).isStruct=false;

bio(381).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12';
bio(381).sigName='';
bio(381).portIdx=0;
bio(381).dim=[1,1];
bio(381).sigWidth=1;
bio(381).sigAddress='&StateFlowFinal_B.A12';
bio(381).ndims=2;
bio(381).size=[];
bio(381).isStruct=false;

bio(382).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21';
bio(382).sigName='';
bio(382).portIdx=0;
bio(382).dim=[1,1];
bio(382).sigWidth=1;
bio(382).sigAddress='&StateFlowFinal_B.A21';
bio(382).ndims=2;
bio(382).size=[];
bio(382).isStruct=false;

bio(383).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22';
bio(383).sigName='';
bio(383).portIdx=0;
bio(383).dim=[1,1];
bio(383).sigWidth=1;
bio(383).sigAddress='&StateFlowFinal_B.A22';
bio(383).ndims=2;
bio(383).size=[];
bio(383).isStruct=false;

bio(384).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum2';
bio(384).sigName='';
bio(384).portIdx=0;
bio(384).dim=[1,1];
bio(384).sigWidth=1;
bio(384).sigAddress='&StateFlowFinal_B.sum2_n';
bio(384).ndims=2;
bio(384).size=[];
bio(384).isStruct=false;

bio(385).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum3';
bio(385).sigName='';
bio(385).portIdx=0;
bio(385).dim=[1,1];
bio(385).sigWidth=1;
bio(385).sigAddress='&StateFlowFinal_B.sum3';
bio(385).ndims=2;
bio(385).size=[];
bio(385).isStruct=false;

bio(386).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11';
bio(386).sigName='';
bio(386).portIdx=0;
bio(386).dim=[1,1];
bio(386).sigWidth=1;
bio(386).sigAddress='&StateFlowFinal_B.B11';
bio(386).ndims=2;
bio(386).size=[];
bio(386).isStruct=false;

bio(387).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21';
bio(387).sigName='';
bio(387).portIdx=0;
bio(387).dim=[1,1];
bio(387).sigWidth=1;
bio(387).sigAddress='&StateFlowFinal_B.B21';
bio(387).ndims=2;
bio(387).size=[];
bio(387).isStruct=false;

bio(388).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C11';
bio(388).sigName='';
bio(388).portIdx=0;
bio(388).dim=[1,1];
bio(388).sigWidth=1;
bio(388).sigAddress='&StateFlowFinal_B.C11';
bio(388).ndims=2;
bio(388).size=[];
bio(388).isStruct=false;

bio(389).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C12';
bio(389).sigName='';
bio(389).portIdx=0;
bio(389).dim=[1,1];
bio(389).sigWidth=1;
bio(389).sigAddress='&StateFlowFinal_B.C12';
bio(389).ndims=2;
bio(389).size=[];
bio(389).isStruct=false;

bio(390).blkName='Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/sum2';
bio(390).sigName='';
bio(390).portIdx=0;
bio(390).dim=[1,1];
bio(390).sigWidth=1;
bio(390).sigAddress='&StateFlowFinal_B.sum2';
bio(390).ndims=2;
bio(390).size=[];
bio(390).isStruct=false;

bio(391).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11';
bio(391).sigName='';
bio(391).portIdx=0;
bio(391).dim=[1,1];
bio(391).sigWidth=1;
bio(391).sigAddress='&StateFlowFinal_B.A11_h';
bio(391).ndims=2;
bio(391).size=[];
bio(391).isStruct=false;

bio(392).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12';
bio(392).sigName='';
bio(392).portIdx=0;
bio(392).dim=[1,1];
bio(392).sigWidth=1;
bio(392).sigAddress='&StateFlowFinal_B.A12_g';
bio(392).ndims=2;
bio(392).size=[];
bio(392).isStruct=false;

bio(393).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21';
bio(393).sigName='';
bio(393).portIdx=0;
bio(393).dim=[1,1];
bio(393).sigWidth=1;
bio(393).sigAddress='&StateFlowFinal_B.A21_p';
bio(393).ndims=2;
bio(393).size=[];
bio(393).isStruct=false;

bio(394).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22';
bio(394).sigName='';
bio(394).portIdx=0;
bio(394).dim=[1,1];
bio(394).sigWidth=1;
bio(394).sigAddress='&StateFlowFinal_B.A22_j';
bio(394).ndims=2;
bio(394).size=[];
bio(394).isStruct=false;

bio(395).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum2';
bio(395).sigName='';
bio(395).portIdx=0;
bio(395).dim=[1,1];
bio(395).sigWidth=1;
bio(395).sigAddress='&StateFlowFinal_B.sum2_e';
bio(395).ndims=2;
bio(395).size=[];
bio(395).isStruct=false;

bio(396).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum3';
bio(396).sigName='';
bio(396).portIdx=0;
bio(396).dim=[1,1];
bio(396).sigWidth=1;
bio(396).sigAddress='&StateFlowFinal_B.sum3_b';
bio(396).ndims=2;
bio(396).size=[];
bio(396).isStruct=false;

bio(397).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11';
bio(397).sigName='';
bio(397).portIdx=0;
bio(397).dim=[1,1];
bio(397).sigWidth=1;
bio(397).sigAddress='&StateFlowFinal_B.B11_d';
bio(397).ndims=2;
bio(397).size=[];
bio(397).isStruct=false;

bio(398).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21';
bio(398).sigName='';
bio(398).portIdx=0;
bio(398).dim=[1,1];
bio(398).sigWidth=1;
bio(398).sigAddress='&StateFlowFinal_B.B21_h';
bio(398).ndims=2;
bio(398).size=[];
bio(398).isStruct=false;

bio(399).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C11';
bio(399).sigName='';
bio(399).portIdx=0;
bio(399).dim=[1,1];
bio(399).sigWidth=1;
bio(399).sigAddress='&StateFlowFinal_B.C11_e';
bio(399).ndims=2;
bio(399).size=[];
bio(399).isStruct=false;

bio(400).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C12';
bio(400).sigName='';
bio(400).portIdx=0;
bio(400).dim=[1,1];
bio(400).sigWidth=1;
bio(400).sigAddress='&StateFlowFinal_B.C12_m';
bio(400).ndims=2;
bio(400).size=[];
bio(400).isStruct=false;

bio(401).blkName='Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/sum2';
bio(401).sigName='';
bio(401).portIdx=0;
bio(401).dim=[1,1];
bio(401).sigWidth=1;
bio(401).sigAddress='&StateFlowFinal_B.sum2_ka';
bio(401).ndims=2;
bio(401).size=[];
bio(401).isStruct=false;

function len = getlenBIO
len = 401;

