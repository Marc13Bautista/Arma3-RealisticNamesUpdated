class CfgPatches
{
	class real_names_2035_cytech_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"Cytech_Weaponry"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class Rifle_Base_F;
	class Cytech_AK103: Rifle_Base_F
	{
		displayName="AK-103 (Worn)";
	};
	class Cytech_AK12M: Rifle_Base_F
	{
		displayName="AK-15 (Modified)";
	};
	class Cytech_AK12M_Broken: Cytech_AK12M
	{
		displayName="AK-15 (Broken)";
	};
	class Cytech_CZ805: Rifle_Base_F
	{
		displayName="CZ 805 Bren (Modified)";
	};
	class Cytech_M16M: Rifle_Base_F
	{
		displayName="M16A3 (Modified)";
	};
	class Cytech_Nailgun: Rifle_Base_F
	{
		displayName="Nailgun (Modified)";
	};
	class Cytech_PP91: Rifle_Base_F
	{
		displayName="PP-91 Kedr (Worn)";
	};
	class Cytech_Saiga: Rifle_Base_F
	{
		displayName="Saiga-12 (Modified)";
	};
	class Pistol_Base_F;
	class Cytech_Makeshift_APS: Pistol_Base_F
	{
		displayName="APS (Makeshift)";
	};
	class Cytech_Makeshift_Argument: Pistol_Base_F
	{
		displayName="Argument (Makeshift)";
	};
	class Cytech_Makeshift_Argument_Short: Cytech_Makeshift_Argument
	{
		displayName="Argument Short (Makeshift)";
	};
	class Cytech_Worn_Deagle: Pistol_Base_F
	{
		displayName="Desert Eagle Mark XIX (Worn)";
	};
	class Cytech_Makeshift_PM: Pistol_Base_F
	{
		displayName="Makarov PM (Makeshift)";
	};
};
