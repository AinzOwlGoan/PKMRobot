#include "slrtappmapping.h"
#include "./maps/TestVite.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <TestVite> */
		{ /* SignalMapInfo */
			TestVite_BIOMAP,
			TestVite_LBLMAP,
			TestVite_SIDMAP,
			TestVite_SBIO,
			TestVite_SLBL,
			{0,13},
			9,
		},
		{ /* ParamMapInfo */
			TestVite_PTIDSMAP,
			TestVite_PTNAMESMAP,
			TestVite_SPTMAP,
			{0,26},
			27,
		},
		"TestVite",
		"",
		"TestVite",
		4,
		TestVite_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}