class CfgPatches
{
	class real_names_2035_ravage_compat
	{
		addonRootClass="ADDON"; //Replace this with fisch's config name
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
// PRIMARY WEAPONS
// "Mar 10 .338 (Rusty)" -> "Noreen ""Bad News"" ULR (Rusty)"
	class srifle_DMR_02_F;
	class Rusty_srifle_DMR_02_F: srifle_DMR_02_F
	{
		displayName="Noreen ""Bad News"" ULR (Rusty)";
	};
// "Mk-I EMR 7.62 mm (Rusty)" -> "SIG 556 (Rusty)"
	class srifle_DMR_03_F;
	class Rusty_srifle_DMR_03_F: srifle_DMR_03_F
	{
		displayName="SIG 556 (Rusty)";
	};
// "Asp-1 Kir 12.7mm (Rusty)" -> "ASP-1 Kir (Rusty)"
// Fictional A3 Vanilla Combination Weapon of VKS and VSS Vintorez.
	class srifle_DMR_04_F;
	class Rusty_srifle_DMR_04_F: srifle_DMR_04_F
	{
		displayName="ASP-1 Kir (Rusty)";
	};
// "Cyrus 9.3 mm (Rusty)" -> "Cyrus (Rusty)"
// Fictional A3 Vanilla Combination Weapon Platforms of Dragonuv (SVDK) and Saiga.
	class srifle_DMR_05_blk_F;
	class Rusty_DMR_05_base_F: srifle_DMR_05_blk_F
	{
		displayName="Cyrus (Rusty)";
	};
// "Mk18 ABR 7.62Â mm (Rusty)" -> "Mk14 Mod 1 EBR (Rusty)"
	class srifle_EBR_F;
	class Rusty_srifle_EBR_F: srifle_EBR_F
	{
		displayName="Mk14 Mod 1 EBR (Rusty)";
	};
// "Navid 9.3mm (Rusty)" -> "HK121 (Rusty)"
	class MMG_01_tan_F;
	class Rusty_MMG_01_tan_F: MMG_01_tan_F
	{
		displayName="HK121 (Rusty)";
	};
// "SPMG .338 (Rusty)" -> "LWMMG (Rusty)"
	class MMG_02_black_F;
	class Rusty_MMG_02_black_F: MMG_02_black_F
	{
		displayName="LWMMG (Rusty)";
	};
// "Zafir (Rusty)" -> "Negev NG7 (Rusty)"
	class LMG_Zafir_F;
	class Rusty_LMG_Zafir_F: LMG_Zafir_F
	{
		displayName="Negev NG7 (Rusty)";
	};
};