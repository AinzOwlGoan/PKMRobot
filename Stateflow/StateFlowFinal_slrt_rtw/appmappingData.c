#include "slrtappmapping.h"
#include "./maps/StateFlowFinal.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <StateFlowFinal> */
		{ /* SignalMapInfo */
			StateFlowFinal_BIOMAP,
			StateFlowFinal_LBLMAP,
			StateFlowFinal_SIDMAP,
			StateFlowFinal_SBIO,
			StateFlowFinal_SLBL,
			{0,539},
			403,
		},
		{ /* ParamMapInfo */
			StateFlowFinal_PTIDSMAP,
			StateFlowFinal_PTNAMESMAP,
			StateFlowFinal_SPTMAP,
			{0,417},
			418,
		},
		"StateFlowFinal",
		"",
		"StateFlowFinal",
		9,
		StateFlowFinal_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}