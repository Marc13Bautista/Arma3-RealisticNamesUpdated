class CfgPatches
{
	class real_names_2035_athena_compat
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_athena_Data_F_athena_Loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};

class cfgVehicles
{
// VEHICLES
// M2 HMG .50 > M2HB
// [BLUFOR- Greece]
	class HMG_02_base_F;
	class Athena_B_G_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	}
// M2 HMG .50 (Raised) > M2HB (Raised)
// [BLUFOR- Greece]
	class HMG_02_high_base_F;
	class Athena_B_G_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	}
// Zu-23-2 > ZU-23-2
// [BLUFOR- Greece]
	class zu23_base_lxWS;
	class Athena_B_G_ZU23_lxWS_F: zu23_base_lxWS
	{
		displayname="ZU-23-2";
	}
// Leonidas IV > Namer
// [BLUFOR- Greece]
	class B_APC_Tracked_01_rcws_F;
	class Athena_B_G_APC_Tracked_01_rcws_F: B_APC_Tracked_01_rcws_F
	{
		displayname="Namer";
	}
// Speedboat HMG > SOC-Riverine X (XM312)
// [BLUFOR- Greece]
// [OPFOR- Turkey]
	class Boat_Armed_01_base_F;
	class Athena_B_G_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
	{
		displayname="SOC-Riverine X (XM312)";
	}
	class Athena_O_T_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
	{
		displayname="SOC-Riverine X (XM312)";
	}
// MBT-52 Kuma > Leopard 2SG
// [BLUFOR- Greece]
	class Athena_B_G_MBT_03_base_F;
	class Athena_B_G_MBT_03_cannon_F: Athena_B_G_MBT_03_base_F
	{
		displayname="Leopard 2SG";
	}
// BMC Vasak 3 > Leopard 2SG
// [OPFOR- Turkey]
	class Athena_O_T_MBT_03_base_F;
	class Athena_O_T_MBT_03_cannon_F: Athena_O_T_MBT_03_base_F
	{
		displayname="Leopard 2SG";
	}
// MQ-4A Greyhawk > MQ-9X Dragonfly
// [OPFOR- Turkey]
	class UAV_02_dynamicLoadout_base_F;
	class Athena_O_T_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F
	{
		displayname="MQ-9X Dragonfly";
	}
// UGV Stomper > Crusher UGCV
// [OPFOR- Turkey]
	class UGV_01_base_F;
	class Athena_O_T_UGV_01_F: UGV_01_base_F
	{
		displayname="Crusher UGCV";
	}
// UGV Stomper RCWS > Crusher UGCV (RCWS)
// [OPFOR- Turkey]
	class UGV_01_rcws_base_F;
	class Athena_O_T_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayname="Crusher UGCV (RCWS)";
	}
// Strider > Fennek
// [OPFOR- Turkey]
	class MRAP_03_base_F;
	class Athena_O_T_MRAP_03_F: MRAP_03_base_F
	{
		displayname="Fennek";
	}
// Strider GMG > Fennek (GMG)
// [OPFOR- Turkey]
	class MRAP_03_gmg_base_F;
	class Athena_O_T_MRAP_03_gmg_F: MRAP_03_gmg_base_F
	{
		displayname="Fennek (GMG)";
	}
// Strider HMG > Fennek (HMG)
// [OPFOR- Turkey]
	class MRAP_03_hmg_base_F;
	class Athena_O_T_MRAP_03_hmg_F: MRAP_03_hmg_base_F
	{
		displayname="Fennek (HMG)";
	}
// MSE-3 Marid > Otokar ARMA
// [OPFOR- Turkey]
	class APC_Wheeled_02_base_v2_F;
	class Athena_O_T_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
	{
		displayname="Otokar ARMA";
	}
// S-70E5 > UH-80 Ghost Hawk
// [OPFOR- Turkey]
	class Heli_Transport_01_base_F;
	class Athena_O_T_Heli_Transport_01_F: Heli_Transport_01_base_F
	{
		displayname="UH-80 Ghost Hawk";
	}
};