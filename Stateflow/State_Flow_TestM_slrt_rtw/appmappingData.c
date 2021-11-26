#include "slrtappmapping.h"
#include "./maps/State_Flow_TestM.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <State_Flow_TestM> */
		{ /* SignalMapInfo */
			State_Flow_TestM_BIOMAP,
			State_Flow_TestM_LBLMAP,
			State_Flow_TestM_SIDMAP,
			State_Flow_TestM_SBIO,
			State_Flow_TestM_SLBL,
			{0,372},
			316,
		},
		{ /* ParamMapInfo */
			State_Flow_TestM_PTIDSMAP,
			State_Flow_TestM_PTNAMESMAP,
			State_Flow_TestM_SPTMAP,
			{0,341},
			342,
		},
		"State_Flow_TestM",
		"",
		"State_Flow_TestM",
		6,
		State_Flow_TestM_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}