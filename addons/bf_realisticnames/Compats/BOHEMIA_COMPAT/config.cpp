class CfgPatches
{
	class real_names_2035_bohemia_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class ItemCore;
	class optic_MRD: ItemCore
	{
		displayName="EOTech MRDS";
	};
	class arifle_ARX_base_F;
	class arifle_ARX_blk_F: arifle_ARX_base_F
	{
		displayName="Type 115 (Black)";
	};
	class arifle_ARX_ghex_F: arifle_ARX_base_F
	{
		displayName="Type 115 (Green Hex)";
	};
	class arifle_ARX_hex_F: arifle_ARX_base_F
	{
		displayName="Type 115 (Hex)";
	};
	class sgun_HunterShotgun_01_base_F;
	class sgun_HunterShotgun_01_F: sgun_HunterShotgun_01_base_F
	{
		displayName="CZ/DT11 Drake";
	};
	class sgun_HunterShotgun_01_sawedoff_base_F;
	class sgun_HunterShotgun_01_sawedoff_F: sgun_HunterShotgun_01_sawedoff_base_F
	{
		displayName="CZ/DT11 Drake (Sawed-Off)";
	};
	class arifle_RPK12_base_F;
	class arifle_RPK12_F: arifle_RPK12_base_F
	{
		displayName="RPK-15";
	};
	class arifle_RPK12_arid_F: arifle_RPK12_base_F
	{
		displayName="RPK-15";
	};
	class arifle_RPK12_lush_F: arifle_RPK12_base_F
	{
		displayName="RPK-15";
	};
	class optic_tws: ItemCore
	{
		displayName="LILY-S TWS";
	};
	class optic_tws_mg: ItemCore
	{
		displayName="LILY-M TWS";
	};
	class optic_ico_01_base_f;
	class optic_ico_01_f: optic_ico_01_base_f
	{
		displayName="Grot Modular Sight";
	};
	class optic_ico_01_black_f: optic_ico_01_base_f
	{
		displayName="Grot Modular Sight (Black)";
	};
	class optic_ico_01_sand_f: optic_ico_01_base_f
	{
		displayName="Grot Modular Sight (Sand)";
	};
	class optic_ico_01_camo_f: optic_ico_01_base_f
	{
		displayName="Grot Modular Sight (Camo)";
	};
	class optic_MRD_black: optic_MRD
	{
		displayName="EOTech MRDS (Black)";
	};
	class launch_RPG32_F;
	class launch_RPG32_camo_F: launch_RPG32_F
	{
		displayName="RPG-32 (Camo)";
	};
	class launch_RPG32_green_F: launch_RPG32_F
	{
		displayName="RPG-32 (Green)";
	};
};
class cfgVehicles
{
	class Truck_02_ammo_base_F;
	class O_T_Truck_02_Ammo_F: Truck_02_ammo_base_F
	{
		displayName="KamAZ Ammo";
	};
	class Truck_02_fuel_base_F;
	class O_T_Truck_02_fuel_F: Truck_02_fuel_base_F
	{
		displayName="KamAZ Fuel";
	};
	class Truck_02_medical_base_F;
	class O_T_Truck_02_Medical_F: Truck_02_medical_base_F
	{
		displayName="KamAZ Medical";
	};
	class Truck_02_box_base_F;
	class O_T_Truck_02_Box_F: Truck_02_box_base_F
	{
		displayName="KamAZ Repair";
	};
	class Truck_02_transport_base_F;
	class O_T_Truck_02_transport_F: Truck_02_transport_base_F
	{
		displayName="KamAZ Transport";
	};
	class Truck_02_base_F;
	class O_T_Truck_02_F: Truck_02_base_F
	{
		displayName="KamAZ Transport (Covered)";
	};
	class VTOL_01_armed_base_F;
	class B_T_VTOL_01_armed_F: VTOL_01_armed_base_F
	{
		displayName="ACV-44 Blackfish";
	};
	class VTOL_01_infantry_base_F;
	class B_T_VTOL_01_infantry_F: VTOL_01_infantry_base_F
	{
		displayName="CV-44 Blackfish (Infantry Transport)";
	};
	class VTOL_01_vehicle_base_F;
	class B_T_VTOL_01_vehicle_F: VTOL_01_vehicle_base_F
	{
		displayName="CV-44 Blackfish (Vehicle Transport)";
	};
	class I_E_APC_tracked_03_base_F;
	class I_E_APC_tracked_03_cannon_F: I_E_APC_tracked_03_base_F
	{
		displayName="FV510 Warrior";
	};
	class Truck_02_MRL_base_F;
	class I_E_Truck_02_MRL_F: Truck_02_MRL_base_F
	{
		displayName="KamAZ MRL";
	};
	class I_E_Truck_02_Ammo_F: Truck_02_ammo_base_F
	{
		displayName="KamAZ Ammo";
	};
	class I_E_Truck_02_fuel_F: Truck_02_fuel_base_F
	{
		displayName="KamAZ Fuel";
	};
	class I_E_Truck_02_Medical_F: Truck_02_medical_base_F
	{
		displayName="KamAZ Medical";
	};
	class I_E_Truck_02_Box_F: Truck_02_box_base_F
	{
		displayName="KamAZ Repair";
	};
	class I_E_Truck_02_transport_F: Truck_02_transport_base_F
	{
		displayName="KamAZ Transport";
	};
	class I_E_Truck_02_F: Truck_02_base_F
	{
		displayName="KamAZ Transport (Covered)";
	};
	class Heli_light_03_dynamicLoadout_base_F;
	class I_E_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
		displayName="AW159 Wildcat";
	};
	class Heli_light_03_unarmed_base_F;
	class I_E_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
	{
		displayName="AW159 Wildcat (Unarmed)";
	};
	class I_static_AA_F;
	class I_E_Static_AA_F: I_static_AA_F
	{
		displayName="Mini-Spike Launcher (AA)";
	};
	class I_static_AT_F;
	class I_E_Static_AT_F: I_static_AT_F
	{
		displayName="Mini-Spike Launcher (AT)";
	};
	class C_IDAP_Truck_02_transport_F: Truck_02_transport_base_F
	{
		displayName="KamAZ Transport";
	};
	class C_IDAP_Truck_02_F: Truck_02_base_F
	{
		displayName="KamAZ Transport (Covered)";
	};
	class Truck_02_water_base_F;
	class C_IDAP_Truck_02_water_F: Truck_02_water_base_F
	{
		displayName="KamAZ Water";
	};
	class Heli_Transport_02_base_F;
	class C_IDAP_Heli_Transport_02_F: Heli_Transport_02_base_F
	{
		displayName="EH101 Heliliner";
	};
	class O_MBT_02_railgun_base_F;
	class O_MBT_02_railgun_F: O_MBT_02_railgun_base_F
	{
		displayName="T-100X Black Eagle (Futura)";
	};
	class O_T_MBT_02_railgun_ghex_F: O_MBT_02_railgun_base_F
	{
		displayName="T-100X Black Eagle (Futura)";
	};
	class Van_02_transport_base_F;
	class B_G_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	};
	class B_GEN_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	};
	class O_G_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	};
	class I_G_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	};
	class I_E_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	};
	class I_C_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	};
	class C_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	};
	class C_IDAP_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	};
	class Van_02_vehicle_base_F;
	class B_G_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	};
	class B_GEN_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	};
	class O_G_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	};
	class I_G_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	};
	class I_E_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	};
	class I_C_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	};
	class C_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	};
	class C_IDAP_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	};
	class Van_02_medevac_base_F;
	class I_E_Van_02_medevac_F: Van_02_medevac_base_F
	{
		displayName="Sprinter Transit (Ambulance)";
	};
	class C_Van_02_medevac_F: Van_02_medevac_base_F
	{
		displayName="Sprinter Transit (Ambulance)";
	};
	class C_IDAP_Van_02_medevac_F: Van_02_medevac_base_F
	{
		displayName="Sprinter Transit (Ambulance)";
	};
	class I_E_Van_02_transport_MP_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit (MP)";
	};
	class Van_02_service_base_F;
	class C_Van_02_service_F: Van_02_service_base_F
	{
		displayName="Sprinter Transit (Service)";
	};
	class Van_01_transport_base_F;
	class I_G_Van_01_transport_F: Van_01_transport_base_F
	{
		displayName="Iveco Daily";
	};
	class B_G_Van_01_transport_F: I_G_Van_01_transport_F
	{
		displayName="Iveco Daily";
	};
	class O_G_Van_01_transport_F: I_G_Van_01_transport_F
	{
		displayName="Iveco Daily";
	};
	class I_C_Van_01_transport_F: Van_01_transport_base_F
	{
		displayName="Iveco Daily";
	};
	class C_Van_01_transport_F: Van_01_transport_base_F
	{
		displayName="Iveco Daily";
	};
	class Van_01_fuel_base_F;
	class I_G_Van_01_fuel_F: Van_01_fuel_base_F
	{
		displayName="Iveco Daily Fuel";
	};
	class C_Van_01_fuel_F: Van_01_fuel_base_F
	{
		displayName="Iveco Daily Fuel";
	};
	class B_G_Van_01_fuel_F: I_G_Van_01_fuel_F
	{
		displayName="Iveco Daily Fuel";
	};
	class O_G_Van_01_fuel_F: I_G_Van_01_fuel_F
	{
		displayName="Iveco Daily Fuel";
	};
	class Van_01_box_base_F;
	class C_Van_01_box_F: Van_01_box_base_F
	{
		displayName="Iveco Daily Boxer";
	};
	class Offroad_01_military_base_F;
	class Offroad_01_civil_base_F;
	class I_G_Offroad_01_F: Offroad_01_military_base_F
	{
		displayName="Q7/F-150 Offroad";
	};
	class B_G_Offroad_01_F: I_G_Offroad_01_F
	{
		displayName="Q7/F-150 Offroad";
	};
	class B_GEN_Offroad_01_gen_F: Offroad_01_civil_base_F
	{
		displayName="Q7/F-150 Offroad";
	};
	class O_G_Offroad_01_F: I_G_Offroad_01_F
	{
		displayName="Q7/F-150 Offroad";
	};
	class I_E_Offroad_01_F: Offroad_01_military_base_F
	{
		displayName="Q7/F-150 Offroad";
	};
	class C_Offroad_01_F: Offroad_01_civil_base_F
	{
		displayName="Q7/F-150 Offroad";
	};
	class C_IDAP_Offroad_01_F: Offroad_01_civil_base_F
	{
		displayName="Q7/F-150 Offroad";
	};
	class Offroad_01_AT_base_F;
	class I_G_Offroad_01_AT_F: Offroad_01_AT_base_F
	{
		displayName="Q7/F-150 Offroad (SPG-9)";
	};
	class B_G_Offroad_01_AT_F: I_G_Offroad_01_AT_F
	{
		displayName="Q7/F-150 Offroad (SPG-9)";
	};
	class O_G_Offroad_01_AT_F: I_G_Offroad_01_AT_F
	{
		displayName="Q7/F-150 Offroad (SPG-9)";
	};
	class Offroad_01_armed_base_F;
	class I_G_Offroad_01_armed_F: Offroad_01_armed_base_F
	{
		displayName="Q7/F-150 Offroad (M2HB)";
	};
	class B_G_Offroad_01_armed_F: I_G_Offroad_01_armed_F
	{
		displayName="Q7/F-150 Offroad (M2HB)";
	};
	class O_G_Offroad_01_armed_F: I_G_Offroad_01_armed_F
	{
		displayName="Q7/F-150 Offroad (M2HB)";
	};
	class Offroad_01_repair_military_base_F;
	class I_G_Offroad_01_repair_F: Offroad_01_repair_military_base_F
	{
		displayName="Q7/F-150 Offroad (Repair)";
	};
	class B_G_Offroad_01_repair_F: Offroad_01_repair_military_base_F
	{
		displayName="Q7/F-150 Offroad (Repair)";
	};
	class O_G_Offroad_01_repair_F: Offroad_01_repair_military_base_F
	{
		displayName="Q7/F-150 Offroad (Repair)";
	};
	class Offroad_01_military_comms_base_F;
	class B_GEN_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		displayName="Q7/F-150 Offroad (Comms)";
	};
	class I_E_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		displayName="Q7/F-150 Offroad (Comms)";
	};
	class C_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		displayName="Q7/F-150 Offroad (Comms)";
	};
	class Offroad_01_military_covered_base_F;
	class B_GEN_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		displayName="Q7/F-150 Offroad (Covered)";
	};
	class I_E_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		displayName="Q7/F-150 Offroad (Covered)";
	};
	class C_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		displayName="Q7/F-150 Offroad (Covered)";
	};
	class Offroad_01_repair_base_F;
	class C_Offroad_01_repair_F: Offroad_01_repair_base_F
	{
		displayName="Q7/F-150 Offroad (Services)";
	};
	class Quadbike_01_base_F;
	class I_G_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	};
	class B_G_Quadbike_01_F: I_G_Quadbike_01_F
	{
		displayName="Grizzly 450 ATV";
	};
	class B_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	};
	class B_T_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	};
	class O_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	};
	class O_T_Quadbike_01_ghex_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	};
	class O_G_Quadbike_01_F: I_G_Quadbike_01_F
	{
		displayName="Grizzly 450 ATV";
	};
	class I_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	};
	class I_E_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	};
	class C_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	};
	class Rubber_duck_base_F;
	class I_G_Boat_Transport_01_F: Rubber_duck_base_F
	{
		displayName="Zodiac F470 CCRC";
	};
	class B_G_Boat_Transport_01_F: I_G_Boat_Transport_01_F
	{
		displayName="Zodiac F470 CCRC";
	};
	class B_Boat_Transport_01_F: Rubber_duck_base_F
	{
		displayName="Zodiac F470 CCRC";
	};
	class B_T_Boat_Transport_01_F: B_Boat_Transport_01_F
	{
		displayName="Zodiac F470 CCRC";
	};
	class O_Boat_Transport_01_F: Rubber_duck_base_F
	{
		displayName="Zodiac F470 CCRC";
	};
	class O_T_Boat_Transport_01_F: Rubber_duck_base_F
	{
		displayName="Zodiac F470 CCRC";
	};
	class O_G_Boat_Transport_01_F: I_G_Boat_Transport_01_F
	{
		displayName="Zodiac F470 CCRC";
	};
	class I_Boat_Transport_01_F: Rubber_duck_base_F
	{
		displayName="Zodiac F470 CCRC";
	};
	class I_C_Boat_Transport_01_F: Rubber_duck_base_F
	{
		displayName="Zodiac F470 CCRC";
	};
	class Rescue_duck_base_F;
	class B_Lifeboat: Rescue_duck_base_F
	{
		displayName="Zodiac F470 CCRC (Rescue)";
	};
	class B_T_Lifeboat: B_Lifeboat
	{
		displayName="Zodiac F470 CCRC (Rescue)";
	};
	class O_Lifeboat: Rescue_duck_base_F
	{
		displayName="Zodiac F470 CCRC (Rescue)";
	};
	class O_T_Lifeboat: O_Lifeboat
	{
		displayName="Zodiac F470 CCRC (Rescue)";
	};
	class C_Rubberboat: Rescue_duck_base_F
	{
		displayName="Zodiac F470 CCRC (Rescue)";
	};
	class Boat_Armed_01_minigun_base_F;
	class B_Boat_Armed_01_minigun_F: Boat_Armed_01_minigun_base_F
	{
		displayName="SOC-Riverine X (M134)";
	};
	class B_T_Boat_Armed_01_minigun_F: B_Boat_Armed_01_minigun_F
	{
		displayName="SOC-Riverine X (M134)";
	};
	class I_Boat_Armed_01_minigun_F: Boat_Armed_01_minigun_base_F
	{
		displayName="SOC-Riverine X (M134)";
	};
	class Boat_Armed_01_base_F;
	class O_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
	{
		displayName="SOC-Riverine X (XM312)";
	};
	class O_T_Boat_Armed_01_hmg_F: O_Boat_Armed_01_hmg_F
	{
		displayName="SOC-Riverine X (XM312)";
	};
	class SDV_01_base_F;
	class B_SDV_01_F: SDV_01_base_F
	{
		displayName="Mk VIII Mod 1 SDV";
	};
	class O_SDV_01_F: SDV_01_base_F
	{
		displayName="Mk VIII Mod 1 SDV";
	};
	class I_SDV_01_F: SDV_01_base_F
	{
		displayName="Mk VIII Mod 1 SDV";
	};
	class Boat_Transport_02_base_F;
	class I_C_Boat_Transport_02_F: Boat_Transport_02_base_F
	{
		displayName="Sea Force 700 RHIB";
	};
	class C_Boat_Transport_02_F: Boat_Transport_02_base_F
	{
		displayName="Sea Force 700 RHIB";
	};
	class Boat_Civil_01_base_F;
	class C_Boat_Civil_01_F: Boat_Civil_01_base_F
	{
		displayName="Chris Craft 245L";
	};
	class C_Boat_Civil_01_police_F: Boat_Civil_01_base_F
	{
		displayName="Chris Craft 245L (Police)";
	};
	class C_Boat_Civil_01_rescue_F: Boat_Civil_01_base_F
	{
		displayName="Chris Craft 245L (Rescue)";
	};
	class Scooter_Transport_01_base_F;
	class C_Scooter_Transport_01_F: Scooter_Transport_01_base_F
	{
		displayName="Yamaha WaveRunner VXR";
	};
	class Hatchback_01_base_F;
	class C_Hatchback_01_F: Hatchback_01_base_F
	{
		displayName="Hyundai I-Blue";
	};
	class Hatchback_01_sport_base_F;
	class C_Hatchback_01_sport_F: Hatchback_01_sport_base_F
	{
		displayName="Hyundai I-Blue (Sport)";
	};
	class C_Kart_01_F_Base;
	class C_Kart_01_F: C_Kart_01_F_Base
	{
		displayName="Kosmic Kart";
	};
	class C_Kart_01_Blu_F: C_Kart_01_F_Base
	{
		displayName="Kosmic Kart (Bluking)";
	};
	class C_Kart_01_Fuel_F: C_Kart_01_F_Base
	{
		displayName="Kosmic Kart (Fuel)";
	};
	class C_Kart_01_Red_F: C_Kart_01_F_Base
	{
		displayName="Kosmic Kart (Redstone)";
	};
	class C_Kart_01_Vrana_F: C_Kart_01_F_Base
	{
		displayName="Kosmic Kart (Vrana)";
	};
	class SUV_01_base_F;
	class C_SUV_01_F: SUV_01_base_F
	{
		displayName="Stelvio X6 SUV";
	};
	class Tractor_01_base_F;
	class C_Tractor_01_F: Tractor_01_base_F
	{
		displayName="Zetor 6945";
	};
	class UGV_01_base_F;
	class B_UGV_01_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	};
	class B_T_UGV_01_olive_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	};
	class I_UGV_01_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	};
	class I_E_UGV_01_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	};
	class O_UGV_01_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	};
	class O_T_UGV_01_ghex_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	};
	class C_IDAP_UGV_01_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	};
	class UGV_01_rcws_base_F;
	class B_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayName="Crusher UGCV (RCWS)";
	};
	class B_T_UGV_01_rcws_olive_F: UGV_01_rcws_base_F
	{
		displayName="Crusher UGCV (RCWS)";
	};
	class I_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayName="Crusher UGCV (RCWS)";
	};
	class I_E_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayName="Crusher UGCV (RCWS)";
	};
	class O_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayName="Crusher UGCV (RCWS)";
	};
	class O_T_UGV_01_rcws_ghex_F: UGV_01_rcws_base_F
	{
		displayName="Crusher UGCV (RCWS)";
	};
	class UAV_03_dynamicLoadout_base_F;
	class B_T_UAV_03_dynamicLoadout_F: UAV_03_dynamicLoadout_base_F
	{
		displayName="MQ-8X Fire Snark";
	};
	class UAV_05_Base_F;
	class B_UAV_05_F: UAV_05_Base_F
	{
		displayName="X-47B UCAS";
	};
	class UGV_02_Demining_Base_F;
	class C_IDAP_UGV_02_Demining_F: UGV_02_Demining_Base_F
	{
		displayName="ED-1D-EOD";
	};
	class UAV_01_base_F;
	class C_IDAP_UAV_01_F: UAV_01_base_F
	{
		displayName="AR-2U Darter";
	};
	class UAV_06_antimine_base_F;
	class C_IDAP_UAV_06_antimine_F: UAV_06_antimine_base_F
	{
		displayName="AL-6X Pelican (EOD)";
	};
	class UAV_06_base_F;
	class C_IDAP_UAV_06_F: UAV_06_base_F
	{
		displayName="AL-6U Pelican";
	};
	class C_UAV_06_F: UAV_06_base_F
	{
		displayName="AL-6U Pelican";
	};
	class UAV_06_medical_base_F;
	class C_IDAP_UAV_06_medical_F: UAV_06_medical_base_F
	{
		displayName="AL-6U Pelican (Medical)";
	};
	class C_UAV_06_medical_F: UAV_06_medical_base_F
	{
		displayName="AL-6U Pelican (Medical)";
	};
	class Radar_System_01_base_F;
	class B_Radar_System_01_F: Radar_System_01_base_F
	{
		displayName="AN/MPQ-53 Radar";
	};
	class I_E_Radar_System_01_F: Radar_System_01_base_F
	{
		displayName="AN/MPQ-53 Radar";
	};
	class SAM_System_03_base_F;
	class B_SAM_System_03_F: SAM_System_03_base_F
	{
		displayName="MIM-104 Patriot";
	};
	class I_E_SAM_System_03_F: SAM_System_03_base_F
	{
		displayName="MIM-104 Patriot";
	};
	class SAM_System_02_base_F;
	class B_SAM_System_02_F: SAM_System_02_base_F
	{
		displayName="Mk 29 (ESSM)";
	};
	class SAM_System_01_base_F;
	class B_SAM_System_01_F: SAM_System_01_base_F
	{
		displayName="Mk 31 (RAM)";
	};
	class B_Ship_Gun_01_base_F;
	class B_Ship_Gun_01_F: B_Ship_Gun_01_base_F
	{
		displayName="Mk 45 Hammer";
	};
	class B_Ship_MRLS_01_base_F;
	class B_Ship_MRLS_01_F: B_Ship_MRLS_01_base_F
	{
		displayName="Mk 41 VLS";
	};
	class AAA_System_01_base_F;
	class B_AAA_System_01_F: AAA_System_01_base_F
	{
		displayName="Mk 15 Phalanx CIWS";
	};
	class Radar_System_02_base_F;
	class O_Radar_System_02_F: Radar_System_02_base_F
	{
		displayName="92N6A Radar";
	};
	class SAM_System_04_base_F;
	class O_SAM_System_04_F: SAM_System_04_base_F
	{
		displayName="S-400 Triumf";
	};
	class HMG_02_base_F;
	class B_G_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	};
	class O_G_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	};
	class I_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	};
	class I_G_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	};
	class I_E_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	};
	class I_C_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	};
	class HMG_02_high_base_F;
	class B_G_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	};
	class O_G_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	};
	class I_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	};
	class I_G_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	};
	class I_E_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	};
	class I_C_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	};
	class Heli_Attack_01_pylons_dynamicLoadout_base_F;
	class B_Heli_Attack_01_pylons_dynamicLoadout_F: Heli_Attack_01_pylons_dynamicLoadout_base_F
	{
		displayName="RAH-66 Comanche (Stub Wings)";
	};
};
