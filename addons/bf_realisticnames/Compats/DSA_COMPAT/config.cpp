class CfgPatches
{
	class real_names_2035_dsa_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"DSA_Spooks"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class arifle_MSBS65_black_F;
	class DSA_XTS: arifle_MSBS65_black_F
	{
		displayName="MSBS Grot (XTS)";
	};
	class hgun_P07_F;
	class DSA_MachinePistol9mm: hgun_P07_F
	{
		displayName="P99 (XTS)";
	};
	class hgun_Pistol_heavy_01_F;
	class DSA_MachinePistol45: hgun_Pistol_heavy_01_F
	{
		displayName="FNX-45 Tactical (XTS)";
	};
};
