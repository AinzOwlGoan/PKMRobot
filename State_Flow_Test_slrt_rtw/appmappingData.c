#include "slrtappmapping.h"
#include "./maps/State_Flow_Test.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <State_Flow_Test> */
		{ /* SignalMapInfo */
			State_Flow_Test_BIOMAP,
			State_Flow_Test_LBLMAP,
			State_Flow_Test_SIDMAP,
			State_Flow_Test_SBIO,
			State_Flow_Test_SLBL,
			{0,377},
			321,
		},
		{ /* ParamMapInfo */
			State_Flow_Test_PTIDSMAP,
			State_Flow_Test_PTNAMESMAP,
			State_Flow_Test_SPTMAP,
			{0,352},
			353,
		},
		"State_Flow_Test",
		"",
		"State_Flow_Test",
		6,
		State_Flow_Test_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}