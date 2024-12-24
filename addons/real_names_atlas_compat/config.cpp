class CfgPatches
{
	class real_names_2035_atlas_compat
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Atlas_Data_F_Atlas_Loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};

class cfgVehicles
{
// VEHICLES
// Quad Bike > Grizzly 450 ATV
//[BLUFOR- Bundeswehr, HIMF, Legionnaires]
//[OPFOR- Belarus, Takistan]
//[Independent- Israel]
	class Quadbike_01_base_F;
	class Atlas_B_G_Quadbike_01_F: Quadbike_01_base_F
	{
		displayname="Grizzly 450 ATV";
	}
	class Atlas_B_H_Quadbike_01_F: Quadbike_01_base_F
	{
		displayname="Grizzly 450 ATV";
	}
	class Atlas_B_L_Quadbike_01_F: Quadbike_01_base_F
	{
		displayname="Grizzly 450 ATV";
	}
	class Atlas_O_W_Quadbike_01_F: Quadbike_01_base_F
	{
		displayname="Grizzly 450 ATV";
	}
	class Atlas_O_T_Quadbike_01_F: Quadbike_01_base_F
	{
		displayname="Grizzly 450 ATV";
	}
	class Atlas_I_I_Quadbike_01_F: Quadbike_01_base_F
	{
		displayname="Grizzly 450 ATV";
	}
// M2 HMG .50 > M2HB
// [BLUFOR- ADF, ADF (Arid), ADF (Pacific), Bundeswehr, Bundeswehr (Arid), HIMF, Legionnaires]
// [OPFOR- Takistan]
// [Independent- Israel]
	class HMG_02_base_F;
	class Atlas_B_A_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	}
	class Atlas_B_A_HMG_02_ard_F: Atlas_B_A_HMG_02_F
	{
		displayname="M2HB";
	}
	class Atlas_B_A_HMG_02_trp_F: Atlas_B_A_HMG_02_F
	{
		displayname="M2HB";
	}
	class Atlas_B_G_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	}
	class Atlas_B_G_HMG_02_ard_F: HMG_02_base_F
	{
		displayname="M2HB";
	}
	class Atlas_B_H_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	}
	class Atlas_B_L_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	}
	class Atlas_O_T_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	}
	class Atlas_I_I_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	}
// M2 HMG .50 (Raised) > M2HB (Raised)
// [BLUFOR- ADF, ADF (Arid), ADF (Pacific), Bundeswehr, Bundeswehr (Arid), HIMF, Legionnaires]
// [OPFOR- Takistan]
// [Independent- Israel]
	class HMG_02_high_base_F;
	class Atlas_B_A_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	}
	class Atlas_B_A_HMG_02_high_ard_F: Atlas_B_A_HMG_02_high_F
	{
		displayname="M2HB (Raised)";
	}
	class Atlas_B_A_HMG_02_high_trp_F: Atlas_B_A_HMG_02_high_F
	{
		displayname="M2HB (Raised)";
	}
	class Atlas_B_G_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	}
	class Atlas_B_G_HMG_02_high_ard_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	}
	class Atlas_B_H_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	}
	class Atlas_B_L_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	}
	class Atlas_O_T_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	}
	class Atlas_I_I_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	}
// AMV-7 Marshall > Badger IFV
// [BLUFOR- ADF, ADF (Arid), ADF (Pacific)]
	class APC_Wheeled_01_base_v2_F;
	class Atlas_B_A_APC_Wheeled_01_cannon_v2_F: APC_Wheeled_01_base_v2_F
	{
		displayname="Badger IFV";
	}
	class Atlas_B_A_APC_Wheeled_01_cannon_v2_ard_F: Atlas_B_A_APC_Wheeled_01_cannon_v2_F
	{
		displayname="Badger IFV";
	}
	class Atlas_B_A_APC_Wheeled_01_cannon_v2_trp_F: Atlas_B_A_APC_Wheeled_01_cannon_v2_F
	{
		displayname="Badger IFV";
	}
// AMV-7 Marshall (ATGM) > Badger IFV (ATGM)
// [BLUFOR- ADF, ADF (Arid), ADF (Pacific)]
	class APC_Wheeled_01_atgm_base_v2;
	class Atlas_B_A_APC_Wheeled_01_atgm_v2: APC_Wheeled_01_atgm_base_v2
	{
		displayname="Badger IFV (ATGM)";
	}
	class Atlas_B_A_APC_Wheeled_01_atgm_ard_v2: Atlas_B_A_APC_Wheeled_01_atgm_v2
	{
		displayname="Badger IFV (ATGM)";
	}
	class Atlas_B_A_APC_Wheeled_01_atgm_trp_v2: Atlas_B_A_APC_Wheeled_01_atgm_v2
	{
		displayname="Badger IFV (ATGM)";
	}
// Strider > Fennek
// [BLUFOR- ADF, ADF (Arid), ADF (Pacific), Bundeswehr, Bundeswehr (Arid), Legionnaires]
	class MRAP_03_base_F;
	class Atlas_B_A_MRAP_03_F: MRAP_03_base_F
	{
		displayname="Fennek";
	}
	class Atlas_B_A_MRAP_03_ard_F: Atlas_B_A_MRAP_03_F
	{
		displayname="Fennek";
	}
	class Atlas_B_A_MRAP_03_trp_F: Atlas_B_A_MRAP_03_F
	{
		displayname="Fennek";
	}
	class Atlas_B_G_MRAP_03_F: MRAP_03_base_F
	{
		displayname="Fennek";
	}
	class Atlas_B_G_MRAP_03_ard_F: Atlas_B_G_MRAP_03_F
	{
		displayname="Fennek";
	}
	class Atlas_B_L_MRAP_03_F: MRAP_03_base_F
	{
		displayname="Fennek";
	}
// Strider GMG > Fennek (GMG)
// [BLUFOR- ADF, ADF (Arid), ADF (Pacific), Bundeswehr, Bundeswehr (Arid), Legionnaires]
	class MRAP_03_gmg_base_F;
	class Atlas_B_A_MRAP_03_gmg_F: MRAP_03_gmg_base_F
	{
		displayname="Fennek (GMG)";
	}
	class Atlas_B_A_MRAP_03_gmg_ard_F: Atlas_B_A_MRAP_03_gmg_F
	{
		displayname="Fennek (GMG)";
	}
	class Atlas_B_A_MRAP_03_gmg_trp_F: Atlas_B_A_MRAP_03_gmg_F
	{
		displayname="Fennek (GMG)";
	}
	class Atlas_B_G_MRAP_03_gmg_F: MRAP_03_gmg_base_F
	{
		displayname="Fennek (GMG)";
	}
	class Atlas_B_G_MRAP_03_gmg_ard_F: Atlas_B_G_MRAP_03_gmg_F
	{
		displayname="Fennek (GMG)";
	}
	class Atlas_B_L_MRAP_03_hmg_F: MRAP_03_gmg_base_F
	{
		displayname="Fennek (GMG)";
	}
// Strider HMG > Fennek (HMG)
// [BLUFOR- ADF, ADF (Arid), ADF (Pacific), Bundeswehr, Bundeswehr (Arid), Legionnaires]
	class MRAP_03_hmg_base_F;
	class Atlas_B_A_MRAP_03_hmg_F: MRAP_03_hmg_base_F
	{
		displayname="Fennek (HMG)";
	}
	class Atlas_B_A_MRAP_03_hmg_ard_F: Atlas_B_A_MRAP_03_hmg_F
	{
		displayname="Fennek (HMG)";
	}
	class Atlas_B_A_MRAP_03_hmg_trp_F: Atlas_B_A_MRAP_03_hmg_F
	{
		displayname="Fennek (HMG)";
	}
	class Atlas_B_G_MRAP_03_hmg_F: MRAP_03_hmg_base_F
	{
		displayname="Fennek (HMG)";
	}
	class Atlas_B_G_MRAP_03_hmg_ard_F: Atlas_B_G_MRAP_03_hmg_F
	{
		displayname="Fennek (HMG)";
	}
	class Atlas_B_L_MRAP_03_gmg_F: MRAP_03_hmg_base_F
	{
		displayname="Fennek (HMG)";
	}
// AWC 302 Nyx (AA) > Wiesel 2 Ozelot (ASRAD/AA)
// [BLUFOR- Bundeswehr, Bundeswehr (Arid)]
	class LT_01_AA_base_F;
	class Atlas_B_G_LT_01_AA_F: LT_01_AA_base_F
	{
		displayname="Wiesel 2 Ozelot (ASRAD/AA)";
	}
	class Atlas_B_G_LT_01_AA_ard_F: Atlas_B_G_LT_01_AA_F
	{
		displayname="Wiesel 2 Ozelot (ASRAD/AA)";
	}
// AWC 301 Nyx (AT) > Wiesel 2 (ATGM)
// [BLUFOR- Bundeswehr, Bundeswehr (Arid)]
	class LT_01_AT_base_F;
	class Atlas_B_G_LT_01_AT_F: LT_01_AT_base_F
	{
		displayname="Wiesel 2 (ATGM)";
	}
	class Atlas_B_G_LT_01_AT_ard_F: Atlas_B_G_LT_01_AT_F
	{
		displayname="Wiesel 2 (ATGM)";
	}
// AWC 303 Nyx (Recon) > Wiesel 2 RFCV (Radar)
// [BLUFOR- Bundeswehr, Bundeswehr (Arid)]
	class LT_01_scout_base_F;
	class Atlas_B_G_LT_01_scout_F: LT_01_scout_base_F
	{
		displayname="Wiesel 2 RFCV (Radar)";
	}
	class Atlas_B_G_LT_01_scout_ard_F: Atlas_B_G_LT_01_scout_F
	{
		displayname="Wiesel 2 RFCV (Radar)";
	}
// AWC 304 Nyx (Autocannon) >  Wiesel 2 (MK20)
// [BLUFOR- Bundeswehr, Bundeswehr (Arid)]
	class LT_01_cannon_base_F;
	class Atlas_B_G_LT_01_cannon_F: LT_01_cannon_base_F
	{
		displayname="Wiesel 2 (MK20)";
	}
	class Atlas_B_G_LT_01_cannon_ard_F: Atlas_B_G_LT_01_cannon_F
	{
		displayname="Wiesel 2 (MK20)";
	}
// UGV Stomper > Crusher UGCV
// [BLUFOR- Bundeswehr, Bundeswehr (Arid), Legionnaires]
// [Independent- Israel]
	class UGV_01_base_F;
	class Atlas_B_G_UGV_01_F: UGV_01_base_F
	{
		displayname="Crusher UGCV";
	}
	class Atlas_B_G_UGV_01_ard_F: Atlas_B_G_UGV_01_F
	{
		displayname="Crusher UGCV";
	}
	class Atlas_B_L_UGV_01_F: UGV_01_base_F
	{
		displayname="Crusher UGCV";
	}
	class Atlas_I_I_UGV_01_F: UGV_01_base_F
	{
		displayname="Crusher UGCV";
	}
// UGV Stomper RCWS > Crusher UGCV (RCWS)
// [BLUFOR- Bundeswehr, Bundeswehr (Arid), Legionnaires]
// [Independent- Israel]
	class UGV_01_rcws_base_F;
	class Atlas_B_G_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayname="Crusher UGCV (RCWS)";
	}
	class Atlas_B_G_UGV_01_rcws_ard_F: Atlas_B_G_UGV_01_rcws_F
	{
		displayname="Crusher UGCV (RCWS)";
	}
	class Atlas_B_L_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayname="Crusher UGCV (RCWS)";
	}
	class Atlas_I_I_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayname="Crusher UGCV (RCWS)";
	}
// CH-49 Mohawk > AW101 Merlin
// [BLUFOR- Bundeswehr, Bundeswehr (Arid)]
	class Heli_Transport_02_base_F;
	class Atlas_B_G_Heli_Transport_02_F: Heli_Transport_02_base_F
	{
		displayname="AW101 Merlin";
	}
	class Atlas_B_G_Heli_Transport_02_ard_F: Atlas_B_G_Heli_Transport_02_F
	{
		displayname="AW101 Merlin";
	}
// AN/MPQ-105 Radar > AN/MPQ-53 Radar
// [BLUFOR- Bundeswehr, Bundeswehr (Arid)]
// [Independent- Israel]
	class Radar_System_01_base_F;
	class Atlas_B_G_Radar_System_01_F: Radar_System_01_base_F
	{
		displayname="AN/MPQ-53 Radar";
	}
	class Atlas_B_G_Radar_System_01_ard_F: Atlas_B_G_Radar_System_01_F
	{
		displayname="AN/MPQ-53 Radar";
	}
	class Atlas_I_I_Radar_System_01_F: Radar_System_01_base_F
	{
		displayname="AN/MPQ-53 Radar";
	}
// MIM-145 Defender > MIM-104 Patriot
// [BLUFOR- Bundeswehr, Bundeswehr (Arid)]
// [Independent- Israel]
	class SAM_System_03_base_F;
	class Atlas_B_G_SAM_System_03_F: SAM_System_03_base_F
	{
		displayname="MIM-104 Patriot";
	}
	class Atlas_B_G_SAM_System_03_ard_F: Atlas_B_G_SAM_System_03_F
	{
		displayname="MIM-104 Patriot";
	}
	class Atlas_I_I_SAM_System_03_F: SAM_System_03_base_F
	{
		displayname="MIM-104 Patriot";
	}
// RHIB > Sea Force 700 RHIB
//[BLUFOR- HIMF]
	class Boat_Transport_02_base_F;
	class Atlas_B_H_Boat_Transport_02_F: Boat_Transport_02_base_F
	{
		displayname="Sea Force 700 RHIB";
	}
// MB 4WD (AT) > Jeep Wrangler (SPG-9)
// [BLUFOR- HIMF]
	class Offroad_02_AT_base_F;
	class Atlas_B_H_Offroad_02_AT_F: Offroad_02_AT_base_F
	{
		displayname="Jeep Wrangler (SPG-9)";
	}
// MB 4WD (LMG) > Jeep Wrangler (FN Minimi SPW)
// [BLUFOR- HIMF]
	class Offroad_02_LMG_base_F;
	class Atlas_B_H_Offroad_02_LMG_F: Offroad_02_LMG_base_F
	{
		displayname="Jeep Wrangler (FN Minimi SPW)";
	}
// WY-55 Hellcat > AW159 Wildcat
// [BLUFOR- Legionnaires]
	class Heli_light_03_dynamicLoadout_base_F;
	class Atlas_B_L_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
		displayname="AW159 Wildcat";
	}
// WY-55 Hellcat (Unarmed) > AW159 Wildcat (Unarmed)
// [BLUFOR- Legionnaires]
	class Heli_light_03_unarmed_base_F;
	class Atlas_B_L_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
	{
		displayname="AW159 Wildcat (Unarmed)";
	}
// Rhino MGS > Rooikat 120
// [BLUFOR- Legionnaires]
	class AFV_Wheeled_01_base_F;
	class Atlas_B_L_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F
	{
		displayname="Rooikat 120";
	}
// Rhino MGS UP > Rooikat 120 UP
// [BLUFOR- Legionnaires]
	class AFV_Wheeled_01_up_base_F;
	class Atlas_B_L_AFV_Wheeled_01_up_cannon_F: AFV_Wheeled_01_up_base_F
	{
		displayname="Rooikat 120 UP";
	}
// Hunter > M-ATV
// [BLUFOR- Marar]
// [Independent- UNO, UNO (Woodland)]
	class MRAP_01_base_F;
	class Atlas_B_M_MRAP_01_F: MRAP_01_base_F
	{
		displayname="M-ATV";
	}
	class Atlas_I_UNO_MRAP_01_F: MRAP_01_base_F
	{
		displayname="M-ATV";
	}
	class Atlas_I_UNO_wdl_MRAP_01_F: Atlas_I_UNO_MRAP_01_F
	{
		displayname="M-ATV";
	}
// Hunter GMG > M-ATV (GMG)
// [BLUFOR- Marar]
// [Independent- UNO, UNO (Woodland)]
	class MRAP_01_gmg_base_F;
	class Atlas_B_M_MRAP_01_gmg_F: MRAP_01_gmg_base_F
	{
		displayname="M-ATV (GMG)";
	}
	class Atlas_I_UNO_MRAP_01_gmg_F: MRAP_01_gmg_base_F
	{
		displayname="M-ATV (GMG)";
	}
	class Atlas_I_UNO_wdl_MRAP_01_gmg_F: Atlas_I_UNO_MRAP_01_gmg_F
	{
		displayname="M-ATV (GMG)";
	}
// Hunter HMG > M-ATV (HMG)
// [BLUFOR- Marar]
// [Independent- UNO, UNO (Woodland)]
	class MRAP_01_hmg_base_F;
	class Atlas_B_M_MRAP_01_hmg_F: MRAP_01_hmg_base_F
	{
		displayname="M-ATV (HMG)";
	}
	class Atlas_I_UNO_MRAP_01_hmg_F: MRAP_01_hmg_base_F
	{
		displayname="M-ATV (HMG)";
	}
	class Atlas_I_UNO_wdl_MRAP_01_hmg_F: Atlas_I_UNO_MRAP_01_hmg_F
	{
		displayname="M-ATV (HMG)";
	}
// A-149 Malaikah > JAS 39 Gripen
// [BLUFOR- Marar]
	class Plane_Fighter_04_Base_F;
	class Atlas_B_M_Plane_Fighter_04_F: Plane_Fighter_04_Base_F
	{
		displayname="JAS 39 Gripen";
	}
// BTR-K Medical > BM-2T Stalker (Medical)
// [OPFOR- Belarus]
	class APC_Tracked_02_medical_base_F;
	class Atlas_O_W_APC_Tracked_02_medical_F: APC_Tracked_02_medical_base_F
	{
		displayname="BM-2T Stalker (Medical)";
	}
// MSE-3 Marid > Otokar ARMA
// [OPFOR- Takistan]
	class APC_Wheeled_02_base_v2_F;
	class Atlas_O_T_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
	{
		displayname="Otokar ARMA";
	}
// A-143 Buzzard > L-159 ALCA
// [OPFOR- Takistan]
	class O_Plane_Fighter_03_dynamicLoadout_F;
	class Atlas_O_T_Plane_Fighter_03_dynamicLoadout_F: O_Plane_Fighter_03_dynamicLoadout_F
	{
		displayname="L-159 ALCA";
	}
// Goliath > M-ATV
// [Independent- Israel]
	class Atlas_I_I_MRAP_01_F: MRAP_01_base_F
	{
		displayname="M-ATV";
	}
// Goliath GMG > M-ATV (GMG)
// [Independent- Israel]
	class Atlas_I_I_MRAP_01_gmg_F: MRAP_01_gmg_base_F
	{
		displayname="M-ATV (GMG)";
	}
// Goliath HMG > M-ATV (HMG)
// [Independent- Israel]
	class Atlas_I_I_MRAP_01_hmg_F: MRAP_01_hmg_base_F
	{
		displayname="M-ATV (HMG)";
	}
// MQ-12 Gideon > MQ-8X Fire Snark
// [Independent- Israel]
	class UAV_03_dynamicLoadout_base_F;
	class Atlas_I_I_UAV_03_dynamicLoadout_F: UAV_03_dynamicLoadout_base_F
	{
		displayname="MQ-8X Fire Snark";
	}
// MQ-4A Greyhawk > MQ-9X Dragonfly
// [Independent- Israel]
	class UAV_02_dynamicLoadout_base_F;
	class Atlas_I_I_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F
	{
		displayname="MQ-9X Dragonfly";
	}
// AH-9 Pawnee > AH-6 Little Bird
// [Independent- Israel]
	class Heli_Light_01_dynamicLoadout_base_F;
	class Atlas_I_I_Heli_Light_01_dynamicLoadout_F: Heli_Light_01_dynamicLoadout_base_F
	{
		displayname="AH-6 Little Bird";
	}
// MH-9 Hummingbird > MH-6 Little Bird
// [Independent- Israel]
	class Heli_Light_01_unarmed_base_F;
	class Atlas_I_I_Heli_Light_01_F: Heli_Light_01_unarmed_base_F
	{
		displayname="MH-6 Little Bird";
	}
// Static Titan Launcher (AA) > Mini-Spike Launcher (AA)
// [Independent- Israel]
	class I_static_AA_F;
	class Atlas_I_I_Static_AA_F: I_static_AA_F
	{
		displayname="Mini-Spike Launcher (AA)";
	}
// Static Titan Launcher (AT) > Mini-Spike Launcher (AT)
// [Independent- Israel]
	class I_static_AT_F;
	class Atlas_I_I_Static_AT_F: I_static_AT_F
	{
		displayname="Mini-Spike Launcher (AT)";
	}
// Offroad (Comms) > Q7/F-150 Offroad (Comms)
// [Independent- UNO, UNO (Woodland)]
	class Offroad_01_military_comms_base_F;
	class Atlas_I_UNO_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		displayname="Q7/F-150 Offroad (Comms)";
	}
	class Atlas_I_UNO_wdl_Offroad_01_comms_F: Atlas_I_UNO_Offroad_01_comms_F
	{
		displayname="Q7/F-150 Offroad (Comms)";
	}
// Offroad (Covered) > Q7/F-150 Offroad (Covered)
// [Independent- UNO, UNO (Woodland)]
	class Offroad_01_military_covered_base_F;
	class Atlas_I_UNO_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		displayname="Q7/F-150 Offroad (Covered)";
	}
	class Atlas_I_UNO_wdl_Offroad_01_covered_F: Atlas_I_UNO_Offroad_01_covered_F
	{
		displayname="Q7/F-150 Offroad (Covered)";
	}
// Offroad (HMG) > Q7/F-150 Offroad (M2HB)
// [Independent- UNO, UNO (Woodland)]
	class Offroad_01_armed_base_F;
	class Atlas_I_UNO_Offroad_armed_01_F: Offroad_01_armed_base_F
	{
		displayname="Q7/F-150 Offroad (M2HB)";
	}
	class Atlas_I_UNO_wdl_Offroad_armed_01_F: Atlas_I_UNO_Offroad_armed_01_F
	{
		displayname="Q7/F-150 Offroad (M2HB)";
	}
// Zamak Transport > KamAZ Transport
// [BLUFOR- HIMF]
	class Truck_02_transport_base_F;
	class Atlas_B_H_Truck_02_transport_F: Truck_02_transport_base_F
	{
		displayname="KamAZ Transport";
	}
// Zamak Transport (Covered)> KamAZ Transport (Covered)
// [BLUFOR- HIMF]
	class Truck_02_base_F;
	class Atlas_B_H_Truck_02_F: Truck_02_base_F
	{
		displayname="KamAZ Transport (Covered)";
	}
// Zamak Flatbed > KamAZ Transport Flatbed
// [BLUFOR- HIMF]
	class Truck_02_flatbed_base_lxWS;
	class Atlas_B_H_Truck_02_flatbed_F: Truck_02_flatbed_base_lxWS
	{
		displayname="KamAZ Flatbed";
	}
// Zamak Fuel > KamAZ Fuel
// [BLUFOR- HIMF]
	class O_Truck_02_fuel_F;
	class Atlas_B_H_Truck_02_fuel_F: O_Truck_02_fuel_F
	{
		displayname="KamAZ Fuel";
	}
// Zamak Medical > KamAZ Medical
// [BLUFOR- HIMF]
	class O_Truck_02_medical_F;
	class Atlas_B_H_Truck_02_medical_F: O_Truck_02_medical_F
	{
		displayname="KamAZ Medical";
	}
// AH-9 Pawnee > AH-6 Little Bird
// [BLUFOR- HIMF]
	class Heli_Light_01_dynamicLoadout_base_F;
	class Atlas_B_H_Heli_Light_01_dynamicLoadout_F: Heli_Light_01_dynamicLoadout_base_F
	{
		displayname="AH-6 Little Bird";
	}
// Caesar BTT  > Cessna TTx
// [BLUFOR- HIMF]
	class Plane_Civil_01_base_F;
	class Plane_Civil_01_HIMF_F: Plane_Civil_01_base_F
	{
		displayname="Cessna TTx";
	}
// WY-55 Hellcat > AW159 Wildcat
// [BLUFOR- Karzeghistan]
	class Atlas_B_K_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
		displayname="AW159 Wildcat";
	}
// WY-55 Hellcat (Unarmed) > AW159 Wildcat (Unarmed)
// [BLUFOR- Karzeghistan]
	class Atlas_B_K_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
	{
		displayname="AW159 Wildcat (Unarmed)";
	}
// RAI-350M Cougar > H225M Super Cougar HADR
// [Independent- UNO]
	class Heli_EC_01A_military_base_RF;
	class Atlas_I_UNO_Heli_EC_01A_military_RF: Heli_EC_01A_military_base_RF
	{
		displayname="H225M Super Cougar HADR";
	}
// RAI-360M Cougar > H225M Super Cougar SOCAT
// [Independent- UNO]
	class Heli_EC_02_base_RF;
	class Atlas_I_UNO_Heli_EC_02_RF: Heli_EC_02_base_RF
	{
		displayname="H225M Super Cougar SOCAT";
	}
// MH-245 Cougar > H225M Super Cougar CSAR
// [BLUFOR- HIMF]
	class Heli_EC_03_base_RF;
	class Atlas_B_H_Heli_EC_03_RF: Heli_EC_03_base_RF
	{
		displayname="H225M Super Cougar CSAR";
	}
// MH-245 Cougar (Unarmed) > H225M Super Cougar SAR
// [BLUFOR- HIMF]
	class Heli_EC_04_military_base_RF;
	class Atlas_B_H_Heli_EC_04_military_RF: Heli_EC_04_military_base_RF
	{
		displayname="H225M Super Cougar SAR";
	}
};