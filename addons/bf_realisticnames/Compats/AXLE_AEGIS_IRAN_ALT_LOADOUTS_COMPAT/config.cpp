class CfgPatches
{
	class real_names_2035_axleeaegisiranloadouts_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"ax_weapons_f_iran_grfu"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class launch_RPG32_F;
	class AX_launch_RPG32_cbr_F: launch_RPG32_F
	{
		displayName="RPG-32 (Coyote)";
	};
};
