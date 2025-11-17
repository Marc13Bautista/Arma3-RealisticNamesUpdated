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
class cfgWeapons
{
	class Aegis_arifle_SPAR_02_inf_blk_F;
	class Athena_arifle_SPAR_65_inf_blk_F: Aegis_arifle_SPAR_02_inf_blk_F
	{
		displayName="HK416A5 14.5 "" CL/FG (Black)";
	};
	class arifle_SPAR_01_GL_blk_F;
	class Athena_arifle_SPAR_65_gl_inf_blk_F: arifle_SPAR_01_GL_blk_F
	{
		displayName="HK416A5 11 "" CL/GL (Black)";
	};
};
class cfgVehicles
{
	class HMG_02_base_F;
	class Athena_B_G_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	};
	class HMG_02_high_base_F;
	class Athena_B_G_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	};
	class zu23_base_lxWS;
	class Athena_B_G_ZU23_lxWS_F: zu23_base_lxWS
	{
		displayname="ZU-23-2";
	};
	class B_APC_Tracked_01_rcws_F;
	class Athena_B_G_APC_Tracked_01_rcws_F: B_APC_Tracked_01_rcws_F
	{
		displayname="Namer";
	};
	class Boat_Armed_01_base_F;
	class Athena_B_G_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
	{
		displayname="SOC-Riverine X (XM312)";
	};
	class Athena_O_T_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
	{
		displayname="SOC-Riverine X (XM312)";
	};
	class Athena_B_G_MBT_03_base_F;
	class Athena_B_G_MBT_03_cannon_F: Athena_B_G_MBT_03_base_F
	{
		displayname="Leopard 2SG";
	};
	class Athena_O_T_MBT_03_base_F;
	class Athena_O_T_MBT_03_cannon_F: Athena_O_T_MBT_03_base_F
	{
		displayname="Leopard 2SG";
	};
	class UAV_02_dynamicLoadout_base_F;
	class Athena_O_T_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F
	{
		displayname="MQ-9X Dragonfly";
	};
	class UGV_01_base_F;
	class Athena_O_T_UGV_01_F: UGV_01_base_F
	{
		displayname="Crusher UGCV";
	};
	class UGV_01_rcws_base_F;
	class Athena_O_T_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayname="Crusher UGCV (RCWS)";
	};
	class MRAP_03_base_F;
	class Athena_O_T_MRAP_03_F: MRAP_03_base_F
	{
		displayname="Fennek";
	};
	class MRAP_03_gmg_base_F;
	class Athena_O_T_MRAP_03_gmg_F: MRAP_03_gmg_base_F
	{
		displayname="Fennek (GMG)";
	};
	class MRAP_03_hmg_base_F;
	class Athena_O_T_MRAP_03_hmg_F: MRAP_03_hmg_base_F
	{
		displayname="Fennek (HMG)";
	};
	class APC_Wheeled_02_base_v2_F;
	class Athena_O_T_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
	{
		displayname="Otokar ARMA";
	};
	class Heli_Transport_01_base_F;
	class Athena_O_T_Heli_Transport_01_F: Heli_Transport_01_base_F
	{
		displayname="UH-80 Ghost Hawk";
	};
};
