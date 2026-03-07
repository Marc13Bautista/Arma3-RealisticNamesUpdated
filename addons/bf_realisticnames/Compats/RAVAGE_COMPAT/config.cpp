class CfgPatches
{
	class real_names_2035_ravage_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"rvg_weapons"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class srifle_DMR_02_F;
	class Rusty_srifle_DMR_02_F: srifle_DMR_02_F
	{
		displayName="Noreen ""Bad News"" ULR (Rusty)";
	};
	class srifle_DMR_03_F;
	class Rusty_srifle_DMR_03_F: srifle_DMR_03_F
	{
		displayName="SIG 556 (Rusty)";
	};
	class srifle_DMR_04_F;
	class Rusty_srifle_DMR_04_F: srifle_DMR_04_F
	{
		displayName="ASP-1 Kir (Rusty)";
	};
	class srifle_DMR_05_blk_F;
	class Rusty_DMR_05_base_F: srifle_DMR_05_blk_F
	{
		displayName="Cyrus (Rusty)";
	};
	class srifle_EBR_F;
	class Rusty_srifle_EBR_F: srifle_EBR_F
	{
		displayName="Mk14 Mod 1 EBR (Rusty)";
	};
	class MMG_01_tan_F;
	class Rusty_MMG_01_tan_F: MMG_01_tan_F
	{
		displayName="HK121 (Rusty)";
	};
	class MMG_02_black_F;
	class Rusty_MMG_02_black_F: MMG_02_black_F
	{
		displayName="LWMMG (Rusty)";
	};
	class LMG_Zafir_F;
	class Rusty_LMG_Zafir_F: LMG_Zafir_F
	{
		displayName="Negev NG7 (Rusty)";
	};
};
