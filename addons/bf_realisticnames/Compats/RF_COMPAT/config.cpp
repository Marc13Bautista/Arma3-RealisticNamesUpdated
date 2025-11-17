class CfgPatches
{
	class real_names_2035_rf_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"RF_Data_Loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class LMG_RCWS;
	class MMG_02_vehicle: LMG_RCWS
	{
		displayName="LWMMG";
	};
	class srifle_h6_base_rf;
	class srifle_h6_tan_rf: srifle_h6_base_rf
	{
		displayName="Hera H6 (Sand)";
	};
	class srifle_h6_blk_rf: srifle_h6_tan_rf
	{
		displayName="Hera H6";
	};
	class srifle_h6_digi_rf: srifle_h6_tan_rf
	{
		displayName="Hera H6 (Digital)";
	};
	class srifle_h6_gold_rf: srifle_h6_tan_rf
	{
		displayName="Hera H6 (Gold)";
	};
	class srifle_h6_oli_rf: srifle_h6_tan_rf
	{
		displayName="Hera H6 (Olive)";
	};
	class srifle_DMR_01_F;
	class srifle_DMR_01_black_RF: srifle_DMR_01_F
	{
		displayName="VS-121 (Black)";
	};
	class srifle_DMR_01_tan_RF: srifle_DMR_01_black_RF
	{
		displayName="VS-121 (Tan)";
	};
	class arifle_ash12_LR_base_RF;
	class arifle_ash12_LR_blk_RF: arifle_ash12_LR_base_RF
	{
		displayName="ASh-12 LR";
	};
	class arifle_ash12_LR_desert_RF: arifle_ash12_LR_blk_RF
	{
		displayName="ASh-12 LR (Desert)";
	};
	class arifle_ash12_LR_urban_RF: arifle_ash12_LR_blk_RF
	{
		displayName="ASh-12 LR (Urban)";
	};
	class arifle_ash12_LR_wood_RF: arifle_ash12_LR_blk_RF
	{
		displayName="ASh-12 LR (Wood)";
	};
	class arifle_ash12_base_RF;
	class arifle_ash12_blk_RF: arifle_ash12_base_RF
	{
		displayName="ASh-12";
	};
	class arifle_ash12_desert_RF: arifle_ash12_base_RF
	{
		displayName="ASh-12 (Desert)";
	};
	class arifle_ash12_urban_RF: arifle_ash12_base_RF
	{
		displayName="ASh-12 (Urban)";
	};
	class arifle_ash12_wood_RF: arifle_ash12_base_RF
	{
		displayName="ASh-12 (Wood)";
	};
	class arifle_ash12_GL_base_RF;
	class arifle_ash12_GL_blk_RF: arifle_ash12_GL_base_RF
	{
		displayName="ASh-12 GL";
	};
	class arifle_ash12_GL_desert_RF: arifle_ash12_GL_blk_RF
	{
		displayName="ASh-12 GL (Desert)";
	};
	class arifle_ash12_GL_urban_RF: arifle_ash12_GL_blk_RF
	{
		displayName="ASh-12 GL (Urban)";
	};
	class arifle_ash12_GL_wood_RF: arifle_ash12_GL_blk_RF
	{
		displayName="ASh-12 GL (Wood)";
	};
	class SMG_01_F;
	class SMG_01_black_RF: SMG_01_F
	{
		displayName="Vector SMG (Black)";
	};
	class Pistol_Base_F;
	class hgun_Glock19_RF: Pistol_Base_F
	{
		displayName="Glock 19X";
	};
	class hgun_Glock19_khk_RF: hgun_Glock19_RF
	{
		displayName="Glock 19X (Khaki)";
	};
	class hgun_Glock19_Tan_RF: hgun_Glock19_RF
	{
		displayName="Glock 19X (Sand)";
	};
	class hgun_Glock19_auto_RF: hgun_Glock19_RF
	{
		displayName="Glock 19X Auto";
	};
	class hgun_Glock19_auto_khk_RF: hgun_Glock19_auto_RF
	{
		displayName="Glock 19X Auto (Khaki)";
	};
	class hgun_Glock19_auto_Tan_RF: hgun_Glock19_auto_RF
	{
		displayName="Glock 19X Auto (Sand)";
	};
	class hgun_DEagle_RF: Pistol_Base_F
	{
		displayName="Desert Eagle Mark XIX L5";
	};
	class hgun_DEagle_bronze_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mark XIX L5 (Bronze)";
	};
	class hgun_DEagle_classic_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mark XIX L5 (Classic)";
	};
	class hgun_DEagle_copper_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mark XIX L5 (Copper)";
	};
	class hgun_DEagle_gold_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mark XIX L5 (Gold)";
	};
	class hgun_DEagle_camo_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mark XIX L5 (Stripes)";
	};
	class optic_ACO_grn;
	class optic_ACO_grn_desert_RF: optic_ACO_grn
	{
		displayName="C-More Railway (Green, Desert)";
	};
	class optic_ACO_grn_wood_RF: optic_ACO_grn
	{
		displayName="C-More Railway (Green, Wood)";
	};
	class optic_ACO_grn_camo_lxWS: optic_ACO_grn
	{
		displayName="C-More Railway (Green, Stripes)";
	};
	class optic_Aco;
	class optic_ACO_desert_RF: optic_Aco
	{
		displayName="C-More Railway (Red, Desert)";
	};
	class optic_ACO_wood_RF: optic_Aco
	{
		displayName="C-More Railway (Red, Wood)";
	};
	class optic_ACO_camo_lxWS: optic_Aco
	{
		displayName="C-More Railway (Green, Stripes)";
	};
	class ItemCore;
	class optic_VRCO_RF: ItemCore
	{
		displayName="Vortex Spitfire Prism (Black)";
	};
	class optic_VRCO_khk_RF: optic_VRCO_RF
	{
		displayName="Vortex Spitfire Prism (Khaki)";
	};
	class optic_VRCO_tan_RF: optic_VRCO_RF
	{
		displayName="Vortex Spitfire Prism (Sand)";
	};
	class optic_rds_RF: ItemCore
	{
		displayName="Aimpoint Micro R-1";
	};
	class optic_VRCO_pistol_RF: optic_VRCO_RF
	{
		displayName="Vortex Spitfire Prism Short";
	};
	class optic_MRD;
	class optic_MRD_khk_RF: optic_MRD
	{
		displayName="EOTech MRDS (Khaki)";
	};
	class optic_MRD_tan_RF: optic_MRD
	{
		displayName="EOTech MRDS (Sand)";
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 1Rnd_RC40_shell_RF: CA_Magazine
	{
		displayName="Drone40 Scout";
	};
	class 1Rnd_RC40_HE_shell_RF: 1Rnd_RC40_shell_RF
	{
		displayName="Drone40 HE";
	};
	class 1Rnd_RC40_SmokeBlue_shell_RF: 1Rnd_RC40_shell_RF
	{
		displayName="Drone40 Smoke (Blue)";
	};
	class 1Rnd_RC40_SmokeGreen_shell_RF: 1Rnd_RC40_shell_RF
	{
		displayName="Drone40 Smoke (Green)";
	};
	class 1Rnd_RC40_SmokeOrange_shell_RF: 1Rnd_RC40_shell_RF
	{
		displayName="Drone40 Smoke (Orange)";
	};
	class 1Rnd_RC40_SmokeRed_shell_RF: 1Rnd_RC40_shell_RF
	{
		displayName="Drone40 Smoke (Red)";
	};
	class 1Rnd_RC40_SmokeWhite_shell_RF: 1Rnd_RC40_shell_RF
	{
		displayName="Drone40 Smoke (White)";
	};
};
class cfgVehicles
{
	class Heli_EC_01_base_RF;
	class B_GEN_Heli_EC_01_RF: Heli_EC_01_base_RF
	{
		displayName="H225M Super Cougar Transport";
	};
	class Heli_light_03_dynamicLoadout_base_F;
	class B_Heli_light_03_dynamicLoadout_RF: Heli_light_03_dynamicLoadout_base_F
	{
		displayName="AW159 Wildcat (UP)";
	};
	class I_Heli_light_03_dynamicLoadout_RF: B_Heli_light_03_dynamicLoadout_RF
	{
		displayName="AW159 Wildcat (UP)";
	};
	class Heli_light_03_unarmed_base_F;
	class B_Heli_light_03_unarmed_RF: Heli_light_03_unarmed_base_F
	{
		displayName="AW159 Wildcat (UP, Unarmed)";
	};
	class I_Heli_light_03_unarmed_RF: B_Heli_light_03_unarmed_RF
	{
		displayName="AW159 Wildcat (UP, Unarmed)";
	};
	class Heli_EC_03_base_RF;
	class B_Heli_EC_03_RF: Heli_EC_03_base_RF
	{
		displayName="H225M Super Cougar CSAR";
	};
	class Heli_EC_04_military_base_RF;
	class B_Heli_EC_04_military_RF: Heli_EC_04_military_base_RF
	{
		displayName="H225M Super Cougar SAR";
	};
	class Heli_EC_01A_military_base_RF;
	class I_Heli_EC_01A_military_RF: Heli_EC_01A_military_base_RF
	{
		displayName="H225M Super Cougar HADR";
	};
	class I_E_Heli_EC_01A_military_RF: Heli_EC_01A_military_base_RF
	{
		displayName="H225M Super Cougar HADR";
	};
	class Heli_EC_02_base_RF;
	class I_Heli_EC_02_RF: Heli_EC_02_base_RF
	{
		displayName="H225M Super Cougar SOCAT";
	};
	class I_E_EC_02_RF: Heli_EC_02_base_RF
	{
		displayName="H225M Super Cougar SOCAT";
	};
	class B_Heli_EC_02_RF: Heli_EC_02_base_RF
	{
		displayName="H225M Super Cougar SOCAT";
	};
	class I_E_Heli_light_03_dynamicLoadout_RF: I_Heli_light_03_dynamicLoadout_RF
	{
		displayName="AW159 Wildcat (UP)";
	};
	class I_E_Heli_light_03_unarmed_RF: I_Heli_light_03_unarmed_RF
	{
		displayName="AW159 Wildcat (UP, Unarmed)";
	};
	class O_Truck_03_fuel_F;
	class C_Truck_03_water_rf: O_Truck_03_fuel_F
	{
		displayName="Typhoon Water";
	};
	class Heli_EC_01A_civ_base_RF;
	class C_Heli_EC_01A_civ_RF: Heli_EC_01A_civ_base_RF
	{
		displayName="H225 Super Puma Transport";
	};
	class C_IDAP_Heli_EC_01A_civ_RF: Heli_EC_01A_civ_base_RF
	{
		displayName="H225 Super Puma Transport";
	};
	class Heli_EC_01_civ_base_RF;
	class C_Heli_EC_01_civ_RF: Heli_EC_01_civ_base_RF
	{
		displayName="H225 Super Puma VIP";
	};
	class Heli_EC_04_rescue_base_RF;
	class C_Heli_EC_04_rescue_RF: Heli_EC_04_rescue_base_RF
	{
		displayname="H225 Super Puma SAR";
	};
	class Pickup_01_mrl_base_rf;
	class B_G_Pickup_mrl_rf: Pickup_01_mrl_base_rf
	{
		displayname="Ram 1500 (MRL)";
	};
	class O_G_Pickup_mrl_rf: B_G_Pickup_mrl_rf
	{
		displayname="Ram 1500 (MRL)";
	};
	class I_C_Pickup_mrl_rf: Pickup_01_mrl_base_rf
	{
		displayname="Ram 1500 (MRL)";
	};
	class Pickup_fuel_base_rf;
	class B_G_Pickup_fuel_rf: Pickup_fuel_base_rf
	{
		displayname="Ram 1500 (Fuel)";
	};
	class O_G_Pickup_fuel_rf: B_G_Pickup_fuel_rf
	{
		displayname="Ram 1500 (Fuel)";
	};
	class I_G_Pickup_fuel_rf: B_G_Pickup_fuel_rf
	{
		displayname="Ram 1500 (Fuel)";
	};
	class C_IDAP_Pickup_fuel_rf: Pickup_fuel_base_rf
	{
		displayname="Ram 1500 (Fuel)";
	};
	class Pickup_01_hmg_base_rf;
	class B_G_Pickup_hmg_rf: Pickup_01_hmg_base_rf
	{
		displayname="Ram 1500 (M2HB)";
	};
	class O_G_Pickup_hmg_rf: B_G_Pickup_hmg_rf
	{
		displayname="Ram 1500 (M2HB)";
	};
	class I_Pickup_hmg_rf: Pickup_01_hmg_base_rf
	{
		displayname="Ram 1500 (M2HB)";
	};
	class I_G_Pickup_hmg_rf: B_G_Pickup_hmg_rf
	{
		displayname="Ram 1500 (M2HB)";
	};
	class I_C_Pickup_hmg_rf: Pickup_01_hmg_base_rf
	{
		displayname="Ram 1500 (M2HB)";
	};
	class Pickup_repair_ig_base_rf;
	class B_G_Pickup_repair_rf: Pickup_repair_ig_base_rf
	{
		displayname="Ram 1500 (Repair)";
	};
	class O_G_Pickup_repair_rf: B_G_Pickup_repair_rf
	{
		displayname="Ram 1500 (Repair)";
	};
	class I_G_Pickup_repair_rf: B_G_Pickup_repair_rf
	{
		displayname="Ram 1500 (Repair)";
	};
	class Pickup_covered_base_rf;
	class B_GEN_Pickup_covered_rf: Pickup_covered_base_rf
	{
		displayname="Ram 1500 (Covered)";
	};
	class I_E_Pickup_Covered_rf: Pickup_covered_base_rf
	{
		displayname="Ram 1500 (Covered)";
	};
	class C_Pickup_covered_rf: Pickup_covered_base_rf
	{
		displayname="Ram 1500 (Covered)";
	};
	class C_IDAP_Pickup_covered_rf: Pickup_covered_base_rf
	{
		displayname="Ram 1500 (Covered)";
	};
	class Pickup_01_aat_base_rf;
	class B_Pickup_aat_rf: Pickup_01_aat_base_rf
	{
		displayname="Ram 1500 (VAMPIRE/AA)";
	};
	class B_T_Pickup_aat_rf: B_Pickup_aat_rf
	{
		displayname="Ram 1500 (VAMPIRE/AA)";
	};
	class I_Pickup_aat_rf: Pickup_01_aat_base_rf
	{
		displayname="Ram 1500 (VAMPIRE/AA)";
	};
	class Pickup_comms_base_rf;
	class B_Pickup_Comms_rf: Pickup_comms_base_rf
	{
		displayname="Ram 1500 (Comms)";
	};
	class B_T_Pickup_Comms_rf: B_Pickup_Comms_rf
	{
		displayname="Ram 1500 (Comms)";
	};
	class O_Pickup_Comms_rf: Pickup_comms_base_rf
	{
		displayname="Ram 1500 (Comms)";
	};
	class O_T_Pickup_Comms_rf: O_Pickup_Comms_rf
	{
		displayname="Ram 1500 (Comms)";
	};
	class I_Pickup_Comms_rf: Pickup_comms_base_rf
	{
		displayname="Ram 1500 (Comms)";
	};
	class I_E_Pickup_Comms_rf: Pickup_comms_base_rf
	{
		displayname="Ram 1500 (Comms)";
	};
	class Pickup_01_mmg_base_rf;
	class B_Pickup_mmg_rf: Pickup_01_mmg_base_rf
	{
		displayname="Ram 1500 (LWMMG)";
	};
	class B_T_Pickup_mmg_rf: B_Pickup_mmg_rf
	{
		displayname="Ram 1500 (LWMMG)";
	};
	class Pickup_01_base_rf;
	class B_G_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	};
	class B_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	};
	class B_T_Pickup_rf: B_Pickup_rf
	{
		displayname="Ram 1500";
	};
	class O_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	};
	class O_T_Pickup_rf: O_Pickup_rf
	{
		displayname="Ram 1500";
	};
	class O_G_Pickup_rf: B_G_Pickup_rf
	{
		displayname="Ram 1500";
	};
	class I_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	};
	class I_G_Pickup_rf: B_G_Pickup_rf
	{
		displayname="Ram 1500";
	};
	class I_E_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	};
	class I_C_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	};
	class C_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	};
	class C_IDAP_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	};
	class C_IDAP_Pickup_water_rf: C_IDAP_Pickup_rf
	{
		displayname="Ram 1500 (Water)";
	};
	class Pickup_repair_base_rf;
	class C_Pickup_repair_rf: Pickup_repair_base_rf
	{
		displayname="Ram 1500 (Services)";
	};
	class Pickup_01_rcws_base_rf;
	class O_Pickup_rcws_rf: Pickup_01_rcws_base_rf
	{
		displayname="Ram 1500 (M134/RCWS)";
	};
	class O_T_Pickup_rcws_rf: O_Pickup_rcws_rf
	{
		displayname="Ram 1500 (M134/RCWS)";
	};
	class I_Pickup_rcws_rf: Pickup_01_rcws_base_rf
	{
		displayname="Ram 1500 (M134/RCWS)";
	};
	class Pickup_01_Rocket_base_rf;
	class B_G_Pickup_Rocket_rf: Pickup_01_Rocket_base_rf
	{
		displayname="Ram 1500 (S-8)";
	};
	class O_G_Pickup_Rocket_rf: B_G_Pickup_Rocket_rf
	{
		displayname="Ram 1500 (S-8)";
	};
	class I_G_Pickup_Rocket_rf: B_G_Pickup_Rocket_rf
	{
		displayname="Ram 1500 (S-8)";
	};
	class O_Truck_03_transport_F;
	class O_Truck_03_cargo_RF: O_Truck_03_transport_F
	{
		displayname="Typhoon (Cargo)";
	};
	class O_T_Truck_03_cargo_RF: O_Truck_03_cargo_RF
	{
		displayname="Typhoon (Cargo)";
	};
	class C_Truck_01_water_rf;
	class C_Truck_01_FFT_rf: C_Truck_01_water_rf
	{
		displayname="HEMTT Firetruck";
	};
	class B_Truck_01_FFT_rf: C_Truck_01_FFT_rf
	{
		displayname="HEMTT Firetruck";
	};
	class B_T_Truck_01_FFT_rf: C_Truck_01_FFT_rf
	{
		displayname="HEMTT Firetruck";
	};
	class UAV_RC40_Base_Sensor_RF;
	class B_UAV_RC40_SENSOR_RF: UAV_RC40_Base_Sensor_RF
	{
		displayname="Drone40 Scout";
	};
	class O_UAV_RC40_SENSOR_RF: UAV_RC40_Base_Sensor_RF
	{
		displayname="Drone40 Scout";
	};
	class I_UAV_RC40_SENSOR_RF: UAV_RC40_Base_Sensor_RF
	{
		displayname="Drone40 Scout";
	};
	class UAV_RC40_Base_HE_RF;
	class B_UAV_RC40_HE_RF: UAV_RC40_Base_HE_RF
	{
		displayname="Drone40 HE";
	};
	class O_UAV_RC40_HE_RF: UAV_RC40_Base_HE_RF
	{
		displayname="Drone40 HE";
	};
	class I_UAV_RC40_HE_RF: UAV_RC40_Base_HE_RF
	{
		displayname="Drone40 HE";
	};
	class UAV_RC40_Base_SmokeBlue_RF;
	class B_UAV_RC40_SmokeBlue_RF: UAV_RC40_Base_SmokeBlue_RF
	{
		displayname="Drone40 Smoke (Blue)";
	};
	class O_UAV_RC40_SmokeBlue_RF: UAV_RC40_Base_SmokeBlue_RF
	{
		displayname="Drone40 Smoke (Blue)";
	};
	class I_UAV_RC40_SmokeBlue_RF: UAV_RC40_Base_SmokeBlue_RF
	{
		displayname="Drone40 Smoke (Blue)";
	};
	class UAV_RC40_Base_SmokeGreen_RF;
	class B_UAV_RC40_SmokeGreen_RF: UAV_RC40_Base_SmokeGreen_RF
	{
		displayname="Drone40 Smoke (Green)";
	};
	class O_UAV_RC40_SmokeGreen_RF: UAV_RC40_Base_SmokeGreen_RF
	{
		displayname="Drone40 Smoke (Green)";
	};
	class I_UAV_RC40_SmokeGreen_RF: UAV_RC40_Base_SmokeGreen_RF
	{
		displayname="Drone40 Smoke (Green)";
	};
	class UAV_RC40_Base_SmokeOrange_RF;
	class B_UAV_RC40_SmokeOrange_RF: UAV_RC40_Base_SmokeOrange_RF
	{
		displayname="Drone40 Smoke (Orange)";
	};
	class O_UAV_RC40_SmokeOrange_RF: UAV_RC40_Base_SmokeOrange_RF
	{
		displayname="Drone40 Smoke (Orange)";
	};
	class I_UAV_RC40_SmokeOrange_RF: UAV_RC40_Base_SmokeOrange_RF
	{
		displayname="Drone40 Smoke (Orange)";
	};
	class UAV_RC40_Base_SmokeRed_RF;
	class B_UAV_RC40_SmokeRed_RF: UAV_RC40_Base_SmokeRed_RF
	{
		displayname="Drone40 Smoke (Red)";
	};
	class O_UAV_RC40_SmokeRed_RF: UAV_RC40_Base_SmokeRed_RF
	{
		displayname="Drone40 Smoke (Red)";
	};
	class I_UAV_RC40_SmokeRed_RF: UAV_RC40_Base_SmokeRed_RF
	{
		displayname="Drone40 Smoke (Red)";
	};
	class UAV_RC40_Base_SmokeWhite_RF;
	class B_UAV_RC40_SmokeWhite_RF: UAV_RC40_Base_SmokeWhite_RF
	{
		displayname="Drone40 Smoke (White)";
	};
	class O_UAV_RC40_SmokeWhite_RF: UAV_RC40_Base_SmokeWhite_RF
	{
		displayname="Drone40 Smoke (White)";
	};
	class I_UAV_RC40_SmokeWhite_RF: UAV_RC40_Base_SmokeWhite_RF
	{
		displayname="Drone40 Smoke (White)";
	};
	class CommandoMortar_base_RF;
	class B_CommandoMortar_RF: CommandoMortar_base_RF
	{
		displayname="RSG60";
	};
	class B_G_CommandoMortar_RF: B_CommandoMortar_RF
	{
		displayname="RSG60";
	};
	class O_CommandoMortar_RF: B_CommandoMortar_RF
	{
		displayname="RSG60";
	};
	class O_G_CommandoMortar_RF: O_CommandoMortar_RF
	{
		displayname="RSG60";
	};
	class I_CommandoMortar_RF: B_CommandoMortar_RF
	{
		displayname="RSG60";
	};
	class I_G_CommandoMortar_RF: I_CommandoMortar_RF
	{
		displayname="RSG60";
	};
	class I_E_CommandoMortar_RF: I_CommandoMortar_RF
	{
		displayname="RSG60";
	};
	class TwinMortar_base_RF;
	class B_TwinMortar_RF: TwinMortar_base_RF
	{
		displayname="Patria AMOS Container";
	};
	class B_T_TwinMortar_RF: B_TwinMortar_RF
	{
		displayname="Patria AMOS Container";
	};
	class I_TwinMortar_RF: TwinMortar_base_RF
	{
		displayname="Patria AMOS Container";
	};
};
