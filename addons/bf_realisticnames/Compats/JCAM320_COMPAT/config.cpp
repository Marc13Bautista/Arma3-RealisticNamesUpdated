class CfgPatches
{
	class real_names_2035_jcam320_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"weapons_f_JCA_LRR_LongRangeRifles_M320"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class srifle_LRR_camo_F;
	class srifle_LRR_sand_F: srifle_LRR_camo_F
	{
		displayName="M200 Intervention (Sand)";
	};
};
class cfgVehicles
{
	class Weapon_Base_F;
	class weapon_srifle_LRR_sand_F: Weapon_Base_F
	{
		displayName="M200 Intervention (Sand)";
	};
	class weapon_srifle_LRR_sand_LRPS_snds_F: Weapon_Base_F
	{
		displayName="M200 Intervention (Sand, Attachments)";
	};
};
class CfgMagazines
{
	class 7Rnd_408_Mag;
	class 12Rnd_408_Mag: 7Rnd_408_Mag
	{
		descriptionShort="Caliber: .408<br />Rounds: 12<br />Used in: M200 Intervention";
	};
};
