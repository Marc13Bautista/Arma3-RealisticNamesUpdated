class CfgPatches
{
	class real_names_2035_axleeaegisrussialoadouts_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"ax_weapons_f_russia_grfu"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class srifle_DMR_04_F;
	class srifle_DMR_04_green_F: srifle_DMR_04_F
	{
		displayName="ASP-1 Kir (Lush)";
	};
};
