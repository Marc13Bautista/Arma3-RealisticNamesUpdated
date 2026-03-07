class CfgPatches
{
	class real_names_2035_burnemredux_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"WBK_PhoenixTreal_FlamethrowerMOD"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class Flammenwerfer41_weapon_01_Base_F;
	class 41_Flammenwerfer_02_F: Flammenwerfer41_weapon_01_Base_F
	{
		displayName="Flammenwerfer 41";
	};
	class M2_weapon_01_Base_F;
	class M2_Flamethrower_01_F: M2_weapon_01_Base_F
	{
		displayName="M2 Flamethrower";
	};
	class arifle_MSBS65_UBS_sand_F;
	class arifle_MSBS65_UBS_sand_F_flame: arifle_MSBS65_UBS_sand_F
	{
		displayName="MSBS Grot Flamethrower (Sand)";
	};
};
