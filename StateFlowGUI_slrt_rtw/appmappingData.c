#include "slrtappmapping.h"
#include "./maps/StateFlowGUI.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <StateFlowGUI> */
		{ /* SignalMapInfo */
			StateFlowGUI_BIOMAP,
			StateFlowGUI_LBLMAP,
			StateFlowGUI_SIDMAP,
			StateFlowGUI_SBIO,
			StateFlowGUI_SLBL,
			{0,384},
			329,
		},
		{ /* ParamMapInfo */
			StateFlowGUI_PTIDSMAP,
			StateFlowGUI_PTNAMESMAP,
			StateFlowGUI_SPTMAP,
			{0,346},
			347,
		},
		"StateFlowGUI",
		"",
		"StateFlowGUI",
		6,
		StateFlowGUI_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}