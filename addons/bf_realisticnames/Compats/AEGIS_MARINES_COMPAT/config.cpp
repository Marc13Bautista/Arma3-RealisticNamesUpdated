class CfgPatches
{
	class real_names_2035_aegismarines_compat
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Marine_Data_F_Marine_Loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgVehicles
{
	class Boat_Transport_02_base_F;
	class Marine_B_USMC_Boat_Transport_02_F: Boat_Transport_02_base_F
	{
		displayname="Sea Force 700 RHIB";
	};
};
