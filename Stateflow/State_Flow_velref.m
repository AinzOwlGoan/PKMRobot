function sys=State_Flow_velref
sys = [];
sys.child = [];
sys.NumDataTypes = 6; 
sys.DataTypes = [];
temp.EnumNames='';
temp.EnumValues = [];
temp.Name = '';
sys.DataTypes = repmat(temp,1,6);
sys.DataTypes(1).Name = 'real_T';
sys.DataTypes(2).Name = 'int8_T';
sys.DataTypes(3).Name = 'int32_T';
sys.DataTypes(4).Name = 'uint16_T';
sys.DataTypes(5).Name = 'boolean_T';
sys.DataTypes(6).Name = 'int16_T';
