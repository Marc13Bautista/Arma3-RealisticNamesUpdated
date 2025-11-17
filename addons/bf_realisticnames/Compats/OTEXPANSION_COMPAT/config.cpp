class CfgPatches
{
	class real_names_2035_otexpansion_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"Weapons_Globe_ACC",
			"A3_Armor_F_expEden",
			"A3_Soft_F_expEden",
			"Air_Globe"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class arifle_AKM_F;
	class arifle_AKM_FL_F: arifle_AKM_F
	{
		displayName="AKM (Flashlight)";
	};
	class SMG_01_9mm_Base;
	class SMG_01_9mm: SMG_01_9mm_Base
	{
		displayName="Vector SMG (Modified)";
	};
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class optic_SRS: ItemCore
	{
		displayName="Trijicon SRS";
	};
	class optic_dcl120: ItemCore
	{
		displayName="DCL-120";
	};
	class optic_DMS;
	class optic_DMS_s: optic_DMS
	{
		displayName="Burris XTR II (Shashka)";
	};
	class launch_RPG32_F;
	class launch_RPG32A1_hex: launch_RPG32_F
	{
		displayName="RPG-32 (LRF)";
	};
	class M134_minigun_Globe;
	class M134_minigun_LSV_02_Globe: M134_minigun_Globe
	{
		displayName="M134 Minigun";
	};
};
class CfgVehicles
{
	class B_APC_Wheeled_03_base_F;
	class B_APC_Wheeled_03_cannon_F: B_APC_Wheeled_03_base_F
	{
		displayName="Pandur II (Guerilla 1)";
	};
	class B_APC_Wheeled_03_cannon_2_F: B_APC_Wheeled_03_cannon_F
	{
		displayName="Pandur II (Guerilla 2)";
	};
	class B_APC_Wheeled_03_cannon_3_F: B_APC_Wheeled_03_cannon_F
	{
		displayName="Pandur II (Guerilla 3)";
	};
	class O_Truck_03_ammo_F;
	class O_T_Truck_03_science_containers_ghex_F: O_Truck_03_ammo_F
	{
		displayName="Typhoon ""Atrox"" Counteragent";
	};
	class Heli_Light_02_dynamicLoadout_base_F;
	class I_Heli_Light_02_dynamicLoadout: Heli_Light_02_dynamicLoadout_base_F
	{
		displayName="Ka-60 Kasatka";
	};
	class Heli_Light_02_unarmed_base_F;
	class I_Heli_Light_02_unarmed: Heli_Light_02_unarmed_base_F
	{
		displayName="Ka-60 Kasatka (Unarmed)";
	};
	class C_Heli_Light_02: Heli_Light_02_unarmed_base_F
	{
		displayName="Ka-60 Kasatka (Unarmed)";
	};
	class Heli_Transport_02_base_F;
	class C_Heli_Transport_02: Heli_Transport_02_base_F
	{
		displayName="EH101 Heliliner";
	};
	class B_MBT_01_mlrs_F;
	class B_MBT_01_mlrs_cluster: B_MBT_01_mlrs_F
	{
		displayName="Seara (Cluster)";
	};
	class B_T_MBT_01_mlrs_F;
	class B_T_MBT_01_mlrs_cluster: B_T_MBT_01_mlrs_F
	{
		displayName="Seara (Cluster)";
	};
	class I_Truck_02_MRL_F;
	class I_Truck_02_MRL_cluster: I_Truck_02_MRL_F
	{
		displayName="KamAZ MRL (Cluster)";
	};
	class I_E_Truck_02_MRL_F;
	class I_E_Truck_02_MRL_cluster: I_E_Truck_02_MRL_F
	{
		displayName="KamAZ MRL (Cluster)";
	};
	class LSV_02_armed762_base_F;
	class O_LSV_02_armed762: LSV_02_armed762_base_F
	{
		displayName="LSV Mk II (M134)";
	};
	class Boat_Armed_01_base_F;
	class B_Boat_Armed_01_hmg: Boat_Armed_01_base_F
	{
		displayName="SOC-Riverine X (XM312)";
	};
	class I_Boat_Armed_01_hmg: Boat_Armed_01_base_F
	{
		displayName="SOC-Riverine X (XM312)";
	};
	class Boat_Armed_01_minigun_base_F;
	class O_Boat_Armed_01_minigun: Boat_Armed_01_minigun_base_F
	{
		displayName="SOC-Riverine X (M134)";
	};
	class SAM_System_03_base_VLS;
	class B_SAM_System_03_VLS: SAM_System_03_base_VLS
	{
		displayName="MIM-104 Patriot (SSM)";
	};
	class SAM_System_04_base_VLS;
	class O_SAM_System_04_VLS: SAM_System_04_base_VLS
	{
		displayName="S-400 Triumpf (SSM)";
	};
	class Plane_Fighter_03_dynamicLoadout_base_F;
	class O_Plane_Fighter_03_dynamicLoadout: Plane_Fighter_03_dynamicLoadout_base_F
	{
		displayName="L-159 ALCA";
	};
	class I_Heli_Transport_02_unarmed: Heli_Transport_02_base_F
	{
		displayName="AW101 Merlin (Open)";
	};
	class Land_Pod_Heli_Transport_04_medevac_F;
	class Land_Pod_Heli_Transport_04_science_F: Land_Pod_Heli_Transport_04_medevac_F
	{
		displayName="Taru Scientists Pod";
	};
};
