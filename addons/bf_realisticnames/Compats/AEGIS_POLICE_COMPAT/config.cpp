class CfgPatches
{
	class real_names_2035_aegispolice_compat
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Police_Data_F_Police_Loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgVehicles
{
	class Boat_Civil_01_base_F;
	class Police_I_P_Boat_Civil_01_police_F: Boat_Civil_01_base_F
	{
		displayname="Chris Craft 245L (Police)";
	};
	class Offroad_01_civil_base_F;
	class Police_I_P_Offroad_01_police_F: Offroad_01_civil_base_F
	{
		displayname="Q7/F-150 Offroad";
	};
	class Offroad_01_military_comms_base_F;
	class Police_I_P_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		displayname="Q7/F-150 Offroad (Comms)";
	};
	class Offroad_01_military_covered_base_F;
	class Police_I_P_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		displayname="Q7/F-150 Offroad (Covered)";
	};
	class Quadbike_01_base_F;
	class Police_I_P_Quadbike_01_F: Quadbike_01_base_F
	{
		displayname="Grizzly 450 ATV";
	};
	class UGV_02_Demining_Base_F;
	class Police_I_P_UGV_02_Demining_F: UGV_02_Demining_Base_F
	{
		displayname="ED-1D-EOD";
	};
};
