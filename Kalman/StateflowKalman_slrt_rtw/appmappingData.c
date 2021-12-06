#include "slrtappmapping.h"
#include "./maps/StateflowKalman.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <StateflowKalman> */
		{ /* SignalMapInfo */
			StateflowKalman_BIOMAP,
			StateflowKalman_LBLMAP,
			StateflowKalman_SIDMAP,
			StateflowKalman_SBIO,
			StateflowKalman_SLBL,
			{0,623},
			402,
		},
		{ /* ParamMapInfo */
			StateflowKalman_PTIDSMAP,
			StateflowKalman_PTNAMESMAP,
			StateflowKalman_SPTMAP,
			{0,418},
			419,
		},
		"StateflowKalman",
		"",
		"StateflowKalman",
		9,
		StateflowKalman_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}