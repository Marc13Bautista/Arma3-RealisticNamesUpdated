class CfgPatches
{
	class real_names_2035_axleeaegisasiansurplus_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"ax_weapons_f_china_grfu"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class hgun_Rook40_F;
	class AX_hgun_QSZ92_F: hgun_Rook40_F
	{
		displayName="CF-98A";
	};
	class launch_RPG32_green_F;
	class AX_launch_RPG32_drkgrn_F: launch_RPG32_green_F
	{
		displayName="RPG-32 (Green)";
	};
	class launch_RPG32_F;
	class AX_launch_RPG32_tan_F: launch_RPG32_F
	{
		displayName="RPG-32 (Tan)";
	};
	class launch_O_Titan_F;
	class AX_launch_Titan_grn_F: launch_O_Titan_F
	{
		displayName="Titan MPRL (Green)";
	};
	class launch_O_Titan_short_F;
	class AX_launch_Titan_short_grn_F: launch_O_Titan_short_F
	{
		displayName="Titan MPRL Compact (Green)";
	};
};
