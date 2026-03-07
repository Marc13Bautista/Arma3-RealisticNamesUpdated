class CfgPatches
{
	class real_names_2035_aegis_compat
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Aegis_Data_F_Aegis_Loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class Aegis_arifle_SPAR_02_Inf_base_F;
	class Aegis_arifle_SPAR_02_inf_blk_F: Aegis_arifle_SPAR_02_Inf_base_F
	{
		displayName="HK416A5 14.5 "" FG (Black)";
	};
	class Aegis_arifle_SPAR_02_inf_khk_F: Aegis_arifle_SPAR_02_Inf_base_F
	{
		displayName="HK416A5 14.5 "" FG (Khaki)";
	};
	class Aegis_arifle_SPAR_02_inf_snd_F: Aegis_arifle_SPAR_02_Inf_base_F
	{
		displayName="HK416A5 14.5 "" FG (Sand)";
	};
	class sgun_aa40_base_lxWS;
	class Aegis_sgun_aa40_khk_lxWS: sgun_aa40_base_lxWS
	{
		displayName="AA-12 (Khaki)";
	};
	class glaunch_GLX_base_lxWS;
	class glaunch_GLX_olive_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX 160 (Olive)";
	};
	class srifle_LRR_F;
	class Aegis_srifle_LRR_sand_F: srifle_LRR_F
	{
		displayName="M200 Intervention (Sand)";
	};
	class Aegis_srifle_LRR_olive_F: Aegis_srifle_LRR_sand_F
	{
		displayName="M200 Intervention (Olive)";
	};
	class arifle_Velko_base_lxWS;
	class Aegis_arifle_Velko_sand: arifle_Velko_base_lxWS
	{
		displayName="Vektor R4 (Sand)";
	};
	class Aegis_arifle_Velko_oak: arifle_Velko_base_lxWS
	{
		displayName="Vektor R4 (Wood)";
	};
	class arifle_VelkoR5_lxWS;
	class Aegis_arifle_VelkoR5_sand: arifle_VelkoR5_lxWS
	{
		displayName="Vektor R5 Carbine (Sand)";
	};
	class Aegis_arifle_VelkoR5_oak: arifle_VelkoR5_lxWS
	{
		displayName="Vektor R5 Carbine (Wood)";
	};
	class ItemCore;
	class optic_tws_sniper: ItemCore
	{
		displayname="LILY-L TWS";
	};
};
class cfgVehicles
{
	class Rubber_duck_base_F;
	class B_A_Boat_Transport_01_F: Rubber_duck_base_F
	{
		displayname="Zodiac F470 CCRC";
	};
	class B_A_Boat_Transport_01_tna_F: B_A_Boat_Transport_01_F
	{
		displayname="Zodiac F470 CCRC";
	};
	class O_R_Boat_Transport_01_F;
	class O_R_Boat_Transport_01_ard_F: O_R_Boat_Transport_01_F
	{
		displayname="Zodiac F470 CCRC";
	};
	class Rescue_duck_base_F;
	class B_A_Lifeboat: Rescue_duck_base_F
	{
		displayname="Zodiac F470 CCRC (Rescue)";
	};
	class B_A_Lifeboat_tna_F: B_A_Lifeboat
	{
		displayname="Zodiac F470 CCRC (Rescue)";
	};
	class O_R_Lifeboat;
	class O_R_Lifeboat_ard_F: O_R_Lifeboat
	{
		displayname="Zodiac F470 CCRC (Rescue)";
	};
	class Boat_Armed_01_base_F;
	class B_A_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
	{
		displayname="SOC-Riverine X (XM312)";
	};
	class B_A_Boat_Armed_01_hmg_tna_F: B_A_Boat_Armed_01_hmg_F
	{
		displayname="SOC-Riverine X (XM312)";
	};
	class O_R_Boat_Armed_01_hmg_F;
	class O_R_Boat_Armed_01_hmg_ard_F: O_R_Boat_Armed_01_hmg_F
	{
		displayname="SOC-Riverine X (XM312)";
	};
	class UGV_01_base_F;
	class B_A_UGV_01_F: UGV_01_base_F
	{
		displayname="Crusher UGCV";
	};
	class B_A_UGV_01_tna_F: B_A_UGV_01_F
	{
		displayname="Crusher UGCV";
	};
	class B_A_UGV_01_wdl_F: B_A_UGV_01_F
	{
		displayname="Crusher UGCV";
	};
	class Aegis_B_ION_UGV_01_F: UGV_01_base_F
	{
		displayname="Crusher UGCV";
	};
	class B_W_UGV_01_F: UGV_01_base_F
	{
		displayname="Crusher UGCV";
	};
	class UGV_01_rcws_base_F;
	class B_A_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayname="Crusher UGCV (RCWS)";
	};
	class B_A_UGV_01_rcws_tna_F: B_A_UGV_01_rcws_F
	{
		displayname="Crusher UGCV (RCWS)";
	};
	class B_A_UGV_01_rcws_wdl_F: B_A_UGV_01_rcws_F
	{
		displayname="Crusher UGCV (RCWS)";
	};
	class Aegis_B_ION_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayname="Crusher UGCV (RCWS)";
	};
	class B_W_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayname="Crusher UGCV (RCWS)";
	};
	class Aegis_I_C_UGV_01_F: UGV_01_base_F
	{
		displayname="Crusher UGCV";
	};
	class Aegis_I_C_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayname="Crusher UGCV (RCWS)";
	};
	class Heli_light_03_dynamicLoadout_base_F;
	class B_A_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
		displayname="AW159 Wildcat";
	};
	class B_A_Heli_light_03_dynamicLoadout_tna_F: B_A_Heli_light_03_dynamicLoadout_F
	{
		displayname="AW159 Wildcat";
	};
	class B_A_Heli_light_03_dynamicLoadout_wdl_F: B_A_Heli_light_03_dynamicLoadout_F
	{
		displayname="AW159 Wildcat";
	};
	class Heli_light_03_unarmed_base_F;
	class B_A_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
	{
		displayname="AW159 Wildcat (Unarmed)";
	};
	class B_A_Heli_light_03_unarmed_tna_F: B_A_Heli_light_03_unarmed_F
	{
		displayname="AW159 Wildcat (Unarmed)";
	};
	class B_A_Heli_light_03_unarmed_wdl_F: B_A_Heli_light_03_unarmed_F
	{
		displayname="AW159 Wildcat (Unarmed)";
	};
	class SDV_01_base_F;
	class B_A_SDV_01_F: SDV_01_base_F
	{
		displayname="Mk VIII Mod 1 SDV";
	};
	class B_A_SDV_01_tna_F: B_A_SDV_01_F
	{
		displayname="Mk VIII Mod 1 SDV";
	};
	class B_T_SDV_01_F: SDV_01_base_F
	{
		displayname="Mk VIII Mod 1 SDV";
	};
	class O_T_SDV_01_F: SDV_01_base_F
	{
		displayname="Mk VIII Mod 1 SDV";
	};
	class O_R_SDV_01_F: SDV_01_base_F
	{
		displayname="Mk VIII Mod 1 SDV";
	};
	class O_R_SDV_01_ard_F: O_R_SDV_01_F
	{
		displayname="Mk VIII Mod 1 SDV";
	};
	class Radar_System_01_base_F;
	class B_A_Radar_System_01_F: Radar_System_01_base_F
	{
		displayname="AN/MPQ-53 Radar";
	};
	class B_A_Radar_System_01_tna_F: B_A_Radar_System_01_F
	{
		displayname="AN/MPQ-53 Radar";
	};
	class B_A_Radar_System_01_wdl_F: B_A_Radar_System_01_F
	{
		displayname="AN/MPQ-53 Radar";
	};
	class Aegis_B_D_Radar_System_01_F: Radar_System_01_base_F
	{
		displayname="AN/MPQ-53 Radar";
	};
	class B_T_Radar_System_01_F: Radar_System_01_base_F
	{
		displayname="AN/MPQ-53 Radar";
	};
	class B_W_Radar_System_01_F: Radar_System_01_base_F
	{
		displayname="AN/MPQ-53 Radar";
	};
	class SAM_System_03_base_F;
	class B_A_SAM_System_03_F: SAM_System_03_base_F
	{
		displayname="MIM-104 Patriot";
	};
	class B_A_SAM_System_03_tna_F: B_A_SAM_System_03_F
	{
		displayname="MIM-104 Patriot";
	};
	class B_A_SAM_System_03_wdl_F: B_A_SAM_System_03_F
	{
		displayname="MIM-104 Patriot";
	};
	class Aegis_B_D_SAM_System_03_F: SAM_System_03_base_F
	{
		displayname="MIM-104 Patriot";
	};
	class B_T_SAM_System_03_F: SAM_System_03_base_F
	{
		displayname="MIM-104 Patriot";
	};
	class B_W_SAM_System_03_F: SAM_System_03_base_F
	{
		displayname="MIM-104 Patriot";
	};
	class HMG_02_base_F;
	class B_A_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	};
	class B_A_HMG_02_tna_F: B_A_HMG_02_F
	{
		displayname="M2HB";
	};
	class B_A_HMG_02_wdl_F: B_A_HMG_02_F
	{
		displayname="M2HB";
	};
	class B_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	};
	class B_T_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	};
	class B_W_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	};
	class O_A_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	};
	class O_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	};
	class HMG_02_high_base_F;
	class B_A_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	};
	class B_A_HMG_02_high_tna_F: B_A_HMG_02_high_F
	{
		displayname="M2HB (Raised)";
	};
	class B_A_HMG_02_high_wdl_F: B_A_HMG_02_high_F
	{
		displayname="M2HB (Raised)";
	};
	class B_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	};
	class B_T_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	};
	class B_W_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	};
	class O_A_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	};
	class O_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	};
	class zu23_base_lxWS;
	class Aegis_B_G_ZU23_lxWS_F: zu23_base_lxWS
	{
		displayname="ZU-23-2 ";
	};
	class Aegis_O_A_ZU23_lxWS_F: zu23_base_lxWS
	{
		displayname="ZU-23-2 ";
	};
	class Aegis_O_G_ZU23_lxWS_F: Aegis_B_G_ZU23_lxWS_F
	{
		displayname="ZU-23-2 ";
	};
	class Aegis_I_G_ZU23_lxWS_F: Aegis_B_G_ZU23_lxWS_F
	{
		displayname="ZU-23-2 ";
	};
	class Aegis_I_C_ZU23_lxWS_F: zu23_base_lxWS
	{
		displayname="ZU-23-2 ";
	};
	class Boat_Transport_02_base_F;
	class B_GEN_Boat_Transport_02_F: Boat_Transport_02_base_F
	{
		displayname="Sea Force 700 RHIB";
	};
	class Quadbike_01_base_F;
	class B_GEN_Quadbike_01_F: Quadbike_01_base_F
	{
		displayname="Grizzly 450 ATV";
	};
	class O_A_Quadbike_01_F: Quadbike_01_base_F
	{
		displayname="Grizzly 450 ATV";
	};
	class I_C_Quadbike_01_F: Quadbike_01_base_F
	{
		displayname="Grizzly 450 ATV";
	};
	class APC_Tracked_03_base_v2_F;
	class I_E_APC_tracked_03_cannon_v2_F: APC_Tracked_03_base_v2_F
	{
		displayname="FV510 Warrior";
	};
	class I_APC_tracked_03_cannon_v2_F: APC_Tracked_03_base_v2_F
	{
		displayname="FV510 Warrior";
	};
	class Offroad_01_armed_base_F;
	class I_E_Offroad_01_armed_F: Offroad_01_armed_base_F
	{
		displayname="Q7/F-150 Offroad (M2HB)";
	};
	class Aegis_B_E_Offroad_01_armed_F: I_E_Offroad_01_armed_F
	{
		displayname="Q7/F-150 Offroad (M2HB)";
	};
	class APC_Wheeled_01_base_v2_F;
	class B_APC_Wheeled_01_cannon_v2_F: APC_Wheeled_01_base_v2_F
	{
		displayname="Badger IFV";
	};
	class B_D_APC_Wheeled_01_cannon_lxWS_v2: B_APC_Wheeled_01_cannon_v2_F
	{
		displayname="Badger IFV";
	};
	class B_T_APC_Wheeled_01_cannon_v2_F: APC_Wheeled_01_base_v2_F
	{
		displayname="Badger IFV";
	};
	class B_W_APC_Wheeled_01_cannon_v2_F: APC_Wheeled_01_base_v2_F
	{
		displayname="Badger IFV";
	};
	class APC_Wheeled_01_atgm_base_v2;
	class B_APC_Wheeled_01_atgm_lxWS_v2: APC_Wheeled_01_atgm_base_v2
	{
		displayname="Badger IFV (ATGM)";
	};
	class B_D_APC_Wheeled_01_atgm_lxWS_v2: APC_Wheeled_01_atgm_base_v2
	{
		displayname="Badger IFV (ATGM)";
	};
	class B_T_APC_Wheeled_01_atgm_lxWS_v2: APC_Wheeled_01_atgm_base_v2
	{
		displayname="Badger IFV (ATGM)";
	};
	class B_W_APC_Wheeled_01_atgm_lxWS_v2: B_T_APC_Wheeled_01_atgm_lxWS_v2
	{
		displayname="Badger IFV (ATGM)";
	};
	class UAV_03_dynamicLoadout_base_F;
	class B_UAV_03_dynamicLoadout_F: UAV_03_dynamicLoadout_base_F
	{
		displayname="MQ-8X Fire Snark";
	};
	class Aegis_B_D_UAV_03_dynamicLoadout_F: UAV_03_dynamicLoadout_base_F
	{
		displayname="MQ-8X Fire Snark";
	};
	class B_W_UAV_03_dynamicLoadout_F: UAV_03_dynamicLoadout_base_F
	{
		displayname="MQ-8X Fire Snark";
	};
	class AFV_Wheeled_01_base_F;
	class B_W_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F
	{
		displayname="Rooikat 120";
	};
	class Aegis_O_SFIA_AFV_Wheeled_01: AFV_Wheeled_01_base_F
	{
		displayname="Rooikat 120";
	};
	class AFV_Wheeled_01_up_base_F;
	class B_W_AFV_Wheeled_01_up_cannon_F: AFV_Wheeled_01_up_base_F
	{
		displayname="Rooikat 120 UP";
	};
	class APC_Wheeled_02_base_v2_F;
	class O_A_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
	{
		displayname="Otokar ARMA";
	};
	class O_Plane_Fighter_03_dynamicLoadout_F;
	class O_A_Plane_Fighter_03_dynamicLoadout_F: O_Plane_Fighter_03_dynamicLoadout_F
	{
		displayname="L-159 ALCA";
	};
	class Truck_02_MRL_base_F;
	class O_T_Truck_02_MRL_F: Truck_02_MRL_base_F
	{
		displayname="KamAZ MRL";
	};
	class O_Truck_02_MRL_F: Truck_02_MRL_base_F
	{
		displayname="KamAZ MRL";
	};
	class O_R_Truck_02_MRL_F: O_Truck_02_MRL_F
	{
		displayname="KamAZ MRL";
	};
	class O_R_Truck_02_MRL_ard_F: O_R_Truck_02_MRL_F
	{
		displayname="KamAZ MRL";
	};
	class Radar_System_02_base_F;
	class O_T_Radar_System_02_F: Radar_System_02_base_F
	{
		displayname="92N6A Radar";
	};
	class O_R_Radar_System_02_F: Radar_System_02_base_F
	{
		displayname="92N6A Radar";
	};
	class O_R_Radar_System_02_ard_F: O_R_Radar_System_02_F
	{
		displayname="92N6A Radar";
	};
	class SAM_System_04_base_F;
	class O_T_SAM_System_04_F: SAM_System_04_base_F
	{
		displayname="S-400 Triumf";
	};
	class O_R_SAM_System_04_F: SAM_System_04_base_F
	{
		displayname="S-400 Triumf";
	};
	class O_R_SAM_System_04_ard_F: O_R_SAM_System_04_F
	{
		displayname="S-400 Triumf";
	};
	class UAV_02_IED_Base_lxWS;
	class Aegis_I_C_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	};
	class O_MBT_02_railgun_base_F;
	class Aegis_O_R_MBT_02_Railgun_F: O_MBT_02_railgun_base_F
	{
		displayname="T-100X Black Eagle (Futura)";
	};
	class Aegis_O_R_MBT_02_Railgun_ard_F: Aegis_O_R_MBT_02_Railgun_F
	{
		displayname="T-100X Black Eagle (Futura)";
	};
	class VTOL_01_infantry_base_F;
	class B_A_VTOL_01_infantry_F: VTOL_01_infantry_base_F
	{
		displayname="CV-44 Blackfish (Infantry Transport)";
	};
	class B_A_VTOL_01_infantry_tna_F: VTOL_01_infantry_base_F
	{
		displayname="CV-44 Blackfish (Infantry Transport)";
	};
	class B_A_VTOL_01_infantry_wdl_F: VTOL_01_infantry_base_F
	{
		displayname="CV-44 Blackfish (Infantry Transport)";
	};
	class B_VTOL_01_infantry_F: VTOL_01_infantry_base_F
	{
		displayname="CV-44 Blackfish (Infantry Transport)";
	};
	class B_D_VTOL_01_infantry_F: VTOL_01_infantry_base_F
	{
		displayname="CV-44 Blackfish (Infantry Transport)";
	};
	class B_W_VTOL_01_infantry_F: VTOL_01_infantry_base_F
	{
		displayname="CV-44 Blackfish (Infantry Transport)";
	};
	class VTOL_01_vehicle_base_F;
	class B_A_VTOL_01_vehicle_F: VTOL_01_vehicle_base_F
	{
		displayname="CV-44 Blackfish (Vehicle Transport)";
	};
	class B_A_VTOL_01_vehicle_tna_F: VTOL_01_vehicle_base_F
	{
		displayname="CV-44 Blackfish (Vehicle Transport)";
	};
	class B_A_VTOL_01_vehicle_wdl_F: VTOL_01_vehicle_base_F
	{
		displayname="CV-44 Blackfish (Vehicle Transport)";
	};
	class B_VTOL_01_vehicle_F: VTOL_01_vehicle_base_F
	{
		displayname="CV-44 Blackfish (Vehicle Transport)";
	};
	class B_D_VTOL_01_vehicle_F: VTOL_01_vehicle_base_F
	{
		displayname="CV-44 Blackfish (Vehicle Transport)";
	};
	class B_W_VTOL_01_vehicle_F: VTOL_01_vehicle_base_F
	{
		displayname="CV-44 Blackfish (Vehicle Transport)";
	};
	class APC_Tracked_02_medical_base_F;
	class O_R_APC_Tracked_02_medical_F: APC_Tracked_02_medical_base_F
	{
		displayname="BM-2T Stalker (Medical)";
	};
	class O_R_APC_Tracked_02_medical_ard_F: O_R_APC_Tracked_02_medical_F
	{
		displayname="BM-2T Stalker (Medical)";
	};
	class B_APC_Wheeled_01_base_F;
	class B_APC_Wheeled_01_medical_F: B_APC_Wheeled_01_base_F
	{
		displayname="Badger IFV (Medical)";
	};
	class B_T_APC_Wheeled_01_medical_F: B_APC_Wheeled_01_medical_F
	{
		displayname="Badger IFV (Medical)";
	};
	class B_W_APC_Wheeled_01_medical_F: B_APC_Wheeled_01_medical_F
	{
		displayname="Badger IFV (Medical)";
	};
	class MBT_04_cannon_base_F;
	class O_R_MBT_04_cannon_F: MBT_04_cannon_base_F
	{
		displayname="T-14 Armata";
	};
	class O_R_MBT_04_cannon_ard_F: O_R_MBT_04_cannon_F
	{
		displayname="T-14 Armata";
	};
	class MBT_04_command_base_F;
	class O_R_MBT_04_command_F: MBT_04_command_base_F
	{
		displayname="T-14K Armata";
	};
	class O_R_MBT_04_command_ard_F: O_R_MBT_04_command_F
	{
		displayname="T-14K Armata";
	};
	class Pickup_01_minigun_base_rf;
	class Aegis_B_ION_Pickup_Minigun_RF: Pickup_01_minigun_base_rf
	{
		displayname="Ram 1500 (M134)";
	};
	class Aegis_O_SFIA_APC_Wheeled_04_export_F;
	class Aegis_B_Tura_APC_Wheeled_04_export_F: Aegis_O_SFIA_APC_Wheeled_04_export_F
	{
		displayname="BTR-90A";
	};
	class APC_Wheeled_04_export_base_F;
	class Aegis_O_A_APC_Wheeled_04_export_F: APC_Wheeled_04_export_base_F
	{
		displayname="BTR-90A";
	};
	class Aegis_O_Tura_APC_Wheeled_04_export_F: Aegis_B_Tura_APC_Wheeled_04_export_F
	{
		displayname="BTR-90A";
	};
	class Aegis_I_Tura_APC_Wheeled_04_export_F: Aegis_B_Tura_APC_Wheeled_04_export_F
	{
		displayname="BTR-90A";
	};
	class Heli_EC_01A_military_base_RF;
	class Aegis_O_A_Heli_EC_01A_military_RF: Heli_EC_01A_military_base_RF
	{
		displayname="H225M Super Cougar HADR";
	};
	class Heli_EC_02_base_RF;
	class Aegis_O_A_Heli_EC_02_RF: Heli_EC_02_base_RF
	{
		displayname="H225M Super Cougar SOCAT";
	};
	class C_Van_02_medevac_F;
	class Aegis_C_Van_02_medevac_Argana_F: C_Van_02_medevac_F
	{
		displayname="Sprinter Transit (Ambulance)";
	};
	class Aegis_C_Van_02_medevac_Tanoa_F: C_Van_02_medevac_F
	{
		displayname="Sprinter Transit (Ambulance)";
	};
	class Aegis_C_Van_02_medevac_Livonia_F: C_Van_02_medevac_F
	{
		displayname="Sprinter Transit (Ambulance)";
	};
	class Aegis_C_Van_02_medevac_Malden_F: C_Van_02_medevac_F
	{
		displayname="Sprinter Transit (Ambulance)";
	};
};
