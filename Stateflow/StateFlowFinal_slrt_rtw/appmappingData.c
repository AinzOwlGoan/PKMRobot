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
			{0,336},
			281,
		},
		{ /* ParamMapInfo */
			StateFlowFinal_PTIDSMAP,
			StateFlowFinal_PTNAMESMAP,
			StateFlowFinal_SPTMAP,
			{0,312},
			313,
		},
		"StateFlowFinal",
		"",
		"StateFlowFinal",
		6,
		StateFlowFinal_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}