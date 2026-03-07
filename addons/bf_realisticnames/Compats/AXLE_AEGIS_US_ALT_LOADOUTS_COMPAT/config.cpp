class CfgPatches
{
	class real_names_2035_axleeaegisusloadouts_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"ax_weapons_f_us_grfu_ef_compat_replace_snds"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class srifle_DMR_03_tan_F;
	class AX_srifle_DMR_03_blksnd_F: srifle_DMR_03_tan_F
	{
		displayName="SIG 556 (Black/Sand)";
	};
};
