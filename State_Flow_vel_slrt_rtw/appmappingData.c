#include "slrtappmapping.h"
#include "./maps/State_Flow_vel.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <State_Flow_vel> */
		{ /* SignalMapInfo */
			State_Flow_vel_BIOMAP,
			State_Flow_vel_LBLMAP,
			State_Flow_vel_SIDMAP,
			State_Flow_vel_SBIO,
			State_Flow_vel_SLBL,
			{0,210},
			176,
		},
		{ /* ParamMapInfo */
			State_Flow_vel_PTIDSMAP,
			State_Flow_vel_PTNAMESMAP,
			State_Flow_vel_SPTMAP,
			{0,266},
			267,
		},
		"State_Flow_vel",
		"",
		"State_Flow_vel",
		6,
		State_Flow_vel_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}