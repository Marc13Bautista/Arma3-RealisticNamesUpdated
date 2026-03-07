class CfgPatches
{
	class real_names_2035_ionravenaegis_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"Mills_ION_units"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgVehicles
{
	class Quadbike_01_base_F;
	class Mills_O_Raven_Quadbike_01_f: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	};
	class Mills_I_Raven_Quadbike_01_f: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	};
};
