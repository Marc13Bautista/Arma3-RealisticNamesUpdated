class CfgPatches
{
	class real_names_2035_bohemia_compat
	{
		addonRootClass="real_names_2035_base"; //Replace this with fisch's config name
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
// Vanilla Assets by Bohemia Interactive 
// SECONDARY ATTACHMENTS
// Renamed to be uniform with Ace's edits.
// "MRD" -> "EOTech MRDS"
	class ItemCore;
	class optic_MRD: ItemCore
	{
		displayName="EOTech MRDS";
	}
// Apex DLC by Bohemia Interactive 
// PRIMARY WEAPONS
// Removed the 6.5 mm to be uniform with other weapon naming. 
// "Type 115 6.5 mm (Black)" -> "Type 115 (Black)"
	class arifle_ARX_base_F;
	class arifle_ARX_blk_F: arifle_ARX_base_F
	{
		displayName="Type 115 (Black)";
	}
// "Type 115 6.5 mm (Green Hex)" -> "Type 115 (Green Hex)"
	class arifle_ARX_ghex_F: arifle_ARX_base_F
	{
		displayName="Type 115 (Green Hex)";
	}
// "Type 115 6.5 mm (Hex)" -> "Type 115 (Hex)"
	class arifle_ARX_hex_F: arifle_ARX_base_F
	{
		displayName="Type 115 (Hex)";
	}
// Contact DLC by Bohemia Interactive
// PRIMARY WEAPONS
// Renamed Baretta DT11 to CZ 581 (including the sawed off). Hard to distinguish both shotguns. Changed to CZ 581 since Contact Livonia takes place in the Czech Republic.
// "Kozlice 12G" -> "CZ 581"
	class sgun_HunterShotgun_01_base_F;
	class sgun_HunterShotgun_01_F: sgun_HunterShotgun_01_base_F
	{
		displayName="CZ 581";
	}
// "Kozlice 12G (Sawed-Off)" -> "CZ 581 (Sawed-Off)"
    class sgun_HunterShotgun_01_sawedoff_base_F;
    class sgun_HunterShotgun_01_sawedoff_F: sgun_HunterShotgun_01_sawedoff_base_F
	{
		displayName="CZ 581 (Sawed-Off)";
	}
// Contact DLC by Bohemia Interactive
// PRIMARY ATTACHMENTS
// Renamed PMS (Promet Modular Sight) variants to Grot Modular Sight. The PMS is inspired by the integrated 1.5X telescope sight for the VHS D2 Assault Rifle. In-game, it's a non-integrated sight for the MSBS Grot (translated: Modular Firearm System "Spearhead") series however. Simply renaming it as the Spearhead Modular Sight would be the middleground. 
// "Promet Modular Sight" -> "Grot Modular Sight"
	class optic_ico_01_base_f;
	class optic_ico_01_f: optic_ico_01_base_f
	{
		displayName="Grot Modular Sight";
	}
// "Promet Modular Sight (Black)" -> "Grot Modular Sight (Black)"
	class optic_ico_01_black_f: optic_ico_01_base_f
	{
		displayName="Grot Modular Sight (Black)";
	}
// "Promet Modular Sight (Sand)" -> "Grot Modular Sight (Sand)"
	class optic_ico_01_sand_f: optic_ico_01_base_f
	{
		displayName="Grot Modular Sight (Sand)";
	}
// "Promet Modular Sight (Camo)" -> "Grot Modular Sight (Camo)"
	class optic_ico_01_camo_f: optic_ico_01_base_f
	{
		displayName="Grot Modular Sight (Camo)";
	}
// Contact DLC by Bohemia Interactive
// SECONDARY ATTACHMENTS
// "MRD (Black)" -> "EOTech MRDS (Black)"
	class optic_MRD_black: optic_MRD
	{
		displayName="EOTech MRDS (Black)";
	}
};

class cfgVehicles
{
// Apex DLC by Bohemia Interactive 
// VEHICLES
// Ace3 team forgot to edit these from their module.
// "Zamak Ammo" -> "KamAZ Ammo" [OPFOR- CSAT (Pacific)]
	class Truck_02_ammo_base_F;
	class O_T_Truck_02_Ammo_F: Truck_02_ammo_base_F
	{
		displayName="KamAZ Ammo";
	}
// "Zamak Fuel" -> "KamAZ Fuel" [OPFOR- CSAT (Pacific)]
	class Truck_02_fuel_base_F;
	class O_T_Truck_02_fuel_F: Truck_02_fuel_base_F
	{
		displayName="KamAZ Fuel";
	}
// "Zamak Medical" -> "KamAZ Medical" [OPFOR- CSAT (Pacific)]
	class Truck_02_medical_base_F;
	class O_T_Truck_02_Medical_F: Truck_02_medical_base_F
	{
		displayName="KamAZ Medical";
	}
// "Zamak Repair" -> "KamAZ Repair" [OPFOR- CSAT (Pacific)]
	class Truck_02_box_base_F;
	class O_T_Truck_02_Box_F: Truck_02_box_base_F
	{
		displayName="KamAZ Repair";
	}
// "Zamak Transport" -> "KamAZ Transport" [OPFOR- CSAT (Pacific)]
	class Truck_02_transport_base_F;
	class O_T_Truck_02_transport_F: Truck_02_transport_base_F
	{
		displayName="KamAZ Transport";
	}
// "Zamak Transport (Covered)" -> "KamAZ Transport (Covered)" [OPFOR- CSAT (Pacific)]
	class Truck_02_base_F;
	class O_T_Truck_02_F: Truck_02_base_F
	{
		displayName="KamAZ Transport (Covered)";
	}
// Contact DLC by Bohemia Interactive
// VEHICLES
// Ace3 team forgot to edit these from their module.
// "FV-720 Odyniec" -> "FV510 Warrior" [Independent- LDF]
	class I_E_APC_tracked_03_base_F;
	class I_E_APC_tracked_03_cannon_F: I_E_APC_tracked_03_base_F
	{
		displayName="FV510 Warrior";
	}
// "Zamak MRL" -> "KamAZ MRL" [Independent- LDF]
	class Truck_02_MRL_base_F;
	class I_E_Truck_02_MRL_F: Truck_02_MRL_base_F
	{
		displayName="KamAZ MRL";
	}
// "Zamak Ammo" -> "KamAZ Ammo" [Independent- LDF]
	class I_E_Truck_02_Ammo_F: Truck_02_ammo_base_F
	{
		displayName="KamAZ Ammo";
	}
// "Zamak Fuel" -> "KamAZ Fuel" [Independent- LDF]
	class I_E_Truck_02_fuel_F: Truck_02_fuel_base_F
	{
		displayName="KamAZ Fuel";
	}
// "Zamak Medical" -> "KamAZ Medical" [Independent- LDF]
	class I_E_Truck_02_Medical_F: Truck_02_medical_base_F
	{
		displayName="KamAZ Medical";
	}
// "Zamak Repair" -> "KamAZ Repair" [Independent- LDF]
	class I_E_Truck_02_Box_F: Truck_02_box_base_F
	{
		displayName="KamAZ Repair";
	}
// "Zamak Transport" -> "KamAZ Transport" [Independent- LDF]
	class I_E_Truck_02_transport_F: Truck_02_transport_base_F
	{
		displayName="KamAZ Transport";
	}
// "Zamak Transport (Covered)" -> "KamAZ Transport (Covered)" [Independent- LDF]
	class I_E_Truck_02_F: Truck_02_base_F
	{
		displayName="KamAZ Transport (Covered)";
	}
// "WY-55 Czapla" -> "AW159 Wildcat" [Independent- LDF]
	class Heli_light_03_dynamicLoadout_base_F;
	class I_E_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
		displayName="AW159 Wildcat";
	}
// "WY-55 Czapla (Unarmed)" -> "AW159 Wildcat (Unarmed)" [Independent- LDF]
	class Heli_light_03_unarmed_base_F;
	class I_E_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
	{
		displayName="AW159 Wildcat (Unarmed)";
	}
// "Static Titan Launcher (AA) [LDF]" -> "Mini-Spike Launcher (AA)" [Independent- LDF]
	class I_static_AA_F;
	class I_E_Static_AA_F: I_static_AA_F
	{
		displayName="Mini-Spike Launcher (AA)";
	}
// "Static Titan Launcher (AT) [LDF]" -> "Mini-Spike Launcher (AT)" [Independent- LDF]
	class I_static_AT_F;
	class I_E_Static_AT_F: I_static_AT_F
	{
		displayName="Mini-Spike Launcher (AT)";
	}
// Laws of War DLC by Bohemia Interactive
// VEHICLES
// Ace3 team forgot to edit these from their module.
// "Zamak Transport" -> "KamAZ Transport" [Civilians- IDAP]
	class C_IDAP_Truck_02_transport_F: Truck_02_transport_base_F
	{
		displayName="KamAZ Transport";
	}
// "Zamak Transport (Covered)" -> "KamAZ Transport (Covered)" [Civilians- IDAP]
	class C_IDAP_Truck_02_F: Truck_02_base_F
	{
		displayName="KamAZ Transport (Covered)";
	}
// "Zamak Water" -> "KamAZ Water" [Civilians- IDAP]
	class Truck_02_water_base_F;
	class C_IDAP_Truck_02_water_F: Truck_02_water_base_F
	{
		displayName="KamAZ Water";
	}
// "EH302" -> "EH101 Heliliner" [Civilians- IDAP]
	class Heli_Transport_02_base_F;
	class C_IDAP_Heli_Transport_02_F: Heli_Transport_02_base_F
	{
		displayName="EH101 Heliliner";
	}
// For Vanilla and Expansion Content by Bohemia Interactive
// VEHICLES
// Renamed "T-100X Futura" to "T-100X Black Eagle (Futura)". Same resemblance as with the standard "T-100" to the Black Eagle tank and turret, but this special variant comes with the fictional Railgun (designated by the "X" and "Futura").
// "T-100X Futura" -> "T-100X Black Eagle (Futura) [OPFOR- CSAT, CSAT (Pacific)]"
	class O_MBT_02_railgun_base_F;
	class O_MBT_02_railgun_F: O_MBT_02_railgun_base_F
	{
		displayName="T-100X Black Eagle (Futura)";
	}
	class O_T_MBT_02_railgun_ghex_F: O_MBT_02_railgun_base_F
	{
		displayName="T-100X Black Eagle (Futura)";
	}
// (06/01/24) Vanilla, Apex, Contact, Jets, Laws of War Assets by Bohemia Interactive
// VEHICLES
// Renamed "Van Transport" to "Sprinter Transit". A fusion between two real vans, the Ford Transit (front, specifically the headlights- not the curved roof) and the Mercedes-Benz Sprinter (back/roof).
// "Van Transport" -> "Sprinter Transit" [BLUFOR- FIA, Gendarmerie / OPFOR- FIA / Independent- FIA, LDF, Syndikat / Civilian- Civilians, IDAP]
	class Van_02_transport_base_F;
	class B_G_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	}
	class B_GEN_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	}
	class O_G_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	}
	class I_G_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	}
	class I_E_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	}
	class I_C_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	}
	class C_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	}
	class C_IDAP_Van_02_transport_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit";
	}
// "Van (Cargo)" -> "Sprinter Transit (Cargo)" [BLUFOR- FIA, Gendarmerie / OPFOR- FIA / Independent- FIA, LDF, Syndikat / Civilian- Civilians, IDAP]
	class Van_02_vehicle_base_F;
	class B_G_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	}
	class B_GEN_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	}
	class O_G_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	}
	class I_G_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	}
	class I_E_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	}
	class I_C_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	}
	class C_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	}
	class C_IDAP_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		displayName="Sprinter Transit (Cargo)";
	}
// "Van (Ambulance)" -> "Sprinter Transit (Ambulance)" [Independent- LDF / Civilian- Civilians, IDAP]
	class Van_02_medevac_base_F;
	class I_E_Van_02_medevac_F: Van_02_medevac_base_F
	{
		displayName="Sprinter Transit (Ambulance)";
	}
	class C_Van_02_medevac_F: Van_02_medevac_base_F
	{
		displayName="Sprinter Transit (Ambulance)";
	}
	class C_IDAP_Van_02_medevac_F: Van_02_medevac_base_F
	{
		displayName="Sprinter Transit (Ambulance)";
	}
// "Van Transport (MP)" -> "Sprinter Transit (MP)" [Independent- LDF]
	class I_E_Van_02_transport_MP_F: Van_02_transport_base_F
	{
		displayName="Sprinter Transit (MP)";
	}
// "Van Transport (Service)" -> "Sprinter Transit (Service)" [Civilian- Civilians]
	class Van_02_service_base_F;
	class C_Van_02_service_F: Van_02_service_base_F
	{
		displayName="Sprinter Transit (Service)";
	}
// Renamed "Truck" variants to "Iveco Daily". The truck is modelled after the Iveco Daily. 
// "Truck" -> "Iveco Daily" [BLUFOR- FIA / OPFOR- FIA / Independent- FIA, Syndikat / Civilian- Civilians]
	class Van_01_transport_base_F;
	class I_G_Van_01_transport_F: Van_01_transport_base_F
	{
		displayName="Iveco Daily";
	}
	class B_G_Van_01_transport_F: I_G_Van_01_transport_F
	{
		displayName="Iveco Daily";
	}
	class O_G_Van_01_transport_F: I_G_Van_01_transport_F
	{
		displayName="Iveco Daily";
	}
	class I_C_Van_01_transport_F: Van_01_transport_base_F
	{
		displayName="Iveco Daily";
	}
	class C_Van_01_transport_F: Van_01_transport_base_F
	{
		displayName="Iveco Daily";
	}
// "Fuel Truck" -> "Iveco Daily Fuel" [BLUFOR- FIA / OPFOR- FIA / Independent- FIA / Civilian- Civilians]
	class Van_01_fuel_base_F;
	class I_G_Van_01_fuel_F: Van_01_fuel_base_F
	{
		displayName="Iveco Daily Fuel";
	}
	class C_Van_01_fuel_F: Van_01_fuel_base_F
	{
		displayName="Iveco Daily Fuel";
	}
	class I_G_Van_01_fuel_F;
	class B_G_Van_01_fuel_F: I_G_Van_01_fuel_F
	{
		displayName="Iveco Daily Fuel";
	}
	class O_G_Van_01_fuel_F: I_G_Van_01_fuel_F
	{
		displayName="Iveco Daily Fuel";
	}
// "Truck Boxer" -> "Iveco Daily Boxer" [Civilian- Civilians]
	class Van_01_box_base_F;
	class C_Van_01_box_F: Van_01_box_base_F
	{
		displayName="Iveco Daily Boxer";
	}
// Renamed "Offroad" variants to "Q7/F-150 Offroad". The Offroad is modelled after two real vehicles, the Audi Q7 (front) and the Ford F-150 (rear). 
// "Offroad" -> "Q7/F-150 Offroad" [BLUFOR- FIA, Gendarmerie / OPFOR- FIA / Independent- FIA, LDF / Civilian- Civilians, IDAP]
	class Offroad_01_military_base_F;
	class Offroad_01_civil_base_F;
	class I_G_Offroad_01_F: Offroad_01_military_base_F
	{
		displayName="Q7/F-150 Offroad";
	}
	class B_G_Offroad_01_F: I_G_Offroad_01_F
	{
		displayName="Q7/F-150 Offroad";
	}
	class B_GEN_Offroad_01_gen_F: Offroad_01_civil_base_F
	{
		displayName="Q7/F-150 Offroad";
	}
	class O_G_Offroad_01_F: I_G_Offroad_01_F
	{
		displayName="Q7/F-150 Offroad";
	}
	class I_E_Offroad_01_F: Offroad_01_military_base_F
	{
		displayName="Q7/F-150 Offroad";
	}
	class C_Offroad_01_F: Offroad_01_civil_base_F
	{
		displayName="Q7/F-150 Offroad";
	}
	class C_IDAP_Offroad_01_F: Offroad_01_civil_base_F
	{
		displayName="Q7/F-150 Offroad";
	}
// "Offroad (AT)" -> "Q7/F-150 Offroad (SPG-9)" [BLUFOR- FIA / OPFOR- FIA / Independent- FIA]
	class Offroad_01_AT_base_F;
	class I_G_Offroad_01_AT_F: Offroad_01_AT_base_F
	{
		displayName="Q7/F-150 Offroad (SPG-9)";
	}
	class B_G_Offroad_01_AT_F: I_G_Offroad_01_AT_F
	{
		displayName="Q7/F-150 Offroad (SPG-9)";
	}
	class O_G_Offroad_01_AT_F: I_G_Offroad_01_AT_F
	{
		displayName="Q7/F-150 Offroad (SPG-9)";
	}
// Renamed "Offroad (HMG)" to "Q7/F-150 Offroad (M2HB)" [BLUFOR- FIA / OPFOR- FIA / Independent- FIA]
// "Offroad (HMG)" -> "Q7/F-150 Offroad (M2HB)" [BLUFOR- FIA / OPFOR- FIA / Independent- FIA]
	class Offroad_01_armed_base_F;
	class I_G_Offroad_01_armed_F: Offroad_01_armed_base_F
	{
		displayName="Q7/F-150 Offroad (M2HB)";
	}
	class B_G_Offroad_01_armed_F: I_G_Offroad_01_armed_F
	{
		displayName="Q7/F-150 Offroad (M2HB)";
	}
	class O_G_Offroad_01_armed_F: I_G_Offroad_01_armed_F
	{
		displayName="Q7/F-150 Offroad (M2HB)";
	}
// "Offroad (Repair)" -> "Q7/F-150 Offroad (Repair)" [BLUFOR- FIA / OPFOR- FIA / Independent- FIA]
	class Offroad_01_repair_military_base_F;
	class I_G_Offroad_01_repair_F: Offroad_01_repair_military_base_F
	{
		displayName="Q7/F-150 Offroad (Repair)";
	}
	class B_G_Offroad_01_repair_F: Offroad_01_repair_military_base_F
	{
		displayName="Q7/F-150 Offroad (Repair)";
	}
	class O_G_Offroad_01_repair_F: Offroad_01_repair_military_base_F
	{
		displayName="Q7/F-150 Offroad (Repair)";
	}
// "Offroad (Comms)" -> "Q7/F-150 Offroad (Comms)" [BLUFOR- Gendarmerie / Independent- LDF / Civilian- Civilians]
	class Offroad_01_military_comms_base_F;
	class B_GEN_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		displayName="Q7/F-150 Offroad (Comms)";
	}
	class I_E_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		displayName="Q7/F-150 Offroad (Comms)";
	}
	class C_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		displayName="Q7/F-150 Offroad (Comms)";
	}
// "Offroad (Covered)" -> "Q7/F-150 Offroad (Covered)" [BLUFOR- Gendarmerie / Independent- LDF / Civilian- Civilians]
	class Offroad_01_military_covered_base_F;
	class B_GEN_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		displayName="Q7/F-150 Offroad (Covered)";
	}
	class I_E_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		displayName="Q7/F-150 Offroad (Covered)";
	}
	class C_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		displayName="Q7/F-150 Offroad (Covered)";
	}
// "Offroad (Services)" -> "Q7/F-150 Offroad (Services)" [Civilian- Civilians]
	class Offroad_01_repair_base_F;
	class C_Offroad_01_repair_F: Offroad_01_repair_base_F
	{
		displayName="Q7/F-150 Offroad (Services)";
	}
// Renamed "Quad Bike" to "Grizzly 450 ATV". The Quad Bike is modelled after the Yamaha Grizzly 450 ATV (all-terrain vehicle). Specifically not the newer 2022/2023/"EPS" ones with the extra headlamp in-between the handles. Also specifically the Grizzly variant and not the Kodiac.
// "Quad Bike" -> "Grizzly 450 ATV" [BLUFOR- FIA, NATO, NATO (Pacific) / OPFOR- CSAT, CSAT (Pacific), FIA / Independent- AAF, FIA, LDF / Civilian- Civilians]
	class Quadbike_01_base_F;
	class I_G_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	}
	class B_G_Quadbike_01_F: I_G_Quadbike_01_F
	{
		displayName="Grizzly 450 ATV";
	}
	class B_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	}
	class B_T_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	}
	class O_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	}
	class O_T_Quadbike_01_ghex_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	}
	class O_G_Quadbike_01_F: I_G_Quadbike_01_F
	{
		displayName="Grizzly 450 ATV";
	}
	class I_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	}
	class I_E_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	}
		class C_Quadbike_01_F: Quadbike_01_base_F
	{
		displayName="Grizzly 450 ATV";
	}
// Renamed "Assault Boat" to "Zodiac F470 CCRC". Modelled after the the real Zodiac F470 CCRC (Combat Rubber Raiding Craft).
// "Assault Boat" -> "Zodiac F470 CCRC" [BLUFOR- FIA, NATO, NATO (Pacific) / OPFOR- CSAT, CSAT (Pacific), FIA / Independent- AAF, FIA, Syndikat]
	class Rubber_duck_base_F;
	class I_G_Boat_Transport_01_F: Rubber_duck_base_F
	{
		displayName="Zodiac F470 CCRC";
	}
	class B_G_Boat_Transport_01_F: I_G_Boat_Transport_01_F
	{
		displayName="Zodiac F470 CCRC";
	}
	class B_Boat_Transport_01_F: Rubber_duck_base_F
	{
		displayName="Zodiac F470 CCRC";
	}
	class B_T_Boat_Transport_01_F: B_Boat_Transport_01_F
	{
		displayName="Zodiac F470 CCRC";
	}
	class O_Boat_Transport_01_F: Rubber_duck_base_F
	{
		displayName="Zodiac F470 CCRC";
	}
	class O_T_Boat_Transport_01_F: Rubber_duck_base_F
	{
		displayName="Zodiac F470 CCRC";
	}
		class O_G_Boat_Transport_01_F: I_G_Boat_Transport_01_F
	{
		displayName="Zodiac F470 CCRC";
	}
	class I_Boat_Transport_01_F: Rubber_duck_base_F
	{
		displayName="Zodiac F470 CCRC";
	}
	class I_C_Boat_Transport_01_F: Rubber_duck_base_F
	{
		displayName="Zodiac F470 CCRC";
	}
// Renamed "Rescue Boat" to "Zodiac F470 CCRC (Rescue)". Rescue variant of the Zodiac F470 CCRC.
// "Rescue Boat" -> "Zodiac F470 CCRC (Rescue)" [BLUFOR- NATO, NATO (Pacific) / OPFOR- CSAT, CSAT (Pacific) / Civlian- Civilians]
	class Rescue_duck_base_F;
	class B_Lifeboat: Rescue_duck_base_F
	{
		displayName="Zodiac F470 CCRC (Rescue)";
	}
	class B_T_Lifeboat: B_Lifeboat
	{
		displayName="Zodiac F470 CCRC (Rescue)";
	}
	class O_Lifeboat: Rescue_duck_base_F
	{
		displayName="Zodiac F470 CCRC (Rescue)";
	}
	class O_T_Lifeboat: O_Lifeboat
	{
		displayName="Zodiac F470 CCRC (Rescue)";
	}
	class C_Rubberboat: Rescue_duck_base_F
	{
		displayName="Zodiac F470 CCRC (Rescue)";
	}
// Renamed "Speedboat Minigun" to "SOC-Riverine X (M134)". Based on the SOC-R (Special Operations Craft – Riverine) but with a very futuristic upgrade similar to that of the A3 Wipeout (A-10) and Huron (Chinook).
// "Speedboat Minigun" -> "SOC-Riverine X (M134)" [BLUFOR- NATO, NATO (Pacific) / Independent- AAF]
	class Boat_Armed_01_minigun_base_F;
	class B_Boat_Armed_01_minigun_F: Boat_Armed_01_minigun_base_F
	{
		displayName="SOC-Riverine X (M134)";
	}
	class B_T_Boat_Armed_01_minigun_F: B_Boat_Armed_01_minigun_F
	{
		displayName="SOC-Riverine X (M134)";
	}
	class I_Boat_Armed_01_minigun_F: Boat_Armed_01_minigun_base_F
	{
		displayName="SOC-Riverine X (M134)";
	}
// Renamed "Speedboat HMG" to "SOC-Riverine X (M134)". XM312 variant of the SOC-Riverine X (M134).
// "Speedboat HMG" -> "SOC-Riverine X (XM312)" [OPFOR- CSAT, CSAT (Pacific)]
	class Boat_Armed_01_base_F;
	class O_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
	{
		displayName="SOC-Riverine X (XM312)";
	}
	class O_T_Boat_Armed_01_hmg_F: O_Boat_Armed_01_hmg_F
	{
		displayName="SOC-Riverine X (XM312)";
	}
// Renamed "SDV" to "Mk VIII Mod 1 SDV". Based on the real-world Mark 8 Mod 1 SEAL Delivery Vehicle. 
// "SDV" -> "Mk VIII Mod 1 SDV" [BLUFOR- NATO / OPFOR- CSAT / Independent- AAF]
	class SDV_01_base_F;
	class B_SDV_01_F: SDV_01_base_F
	{
		displayName="Mk VIII Mod 1 SDV";
	}
	class O_SDV_01_F: SDV_01_base_F
	{
		displayName="Mk VIII Mod 1 SDV";
	}
	class I_SDV_01_F: SDV_01_base_F
	{
		displayName="Mk VIII Mod 1 SDV";
	}
// Renamed "RHIB" to "Sea Force 700 RHIB". Modelled after Willard Marine's Sea Force 700 RHIB (Rigid Hull Inflatable Boat).
// "RHIB" -> "Sea Force 700 RHIB" [Independent- AAF / Civilian- Civlians]
	class Boat_Transport_02_base_F;
	class I_C_Boat_Transport_02_F: Boat_Transport_02_base_F
	{
		displayName="Sea Force 700 RHIB";
	}
	class C_Boat_Transport_02_F: Boat_Transport_02_base_F
	{
		displayName="Sea Force 700 RHIB";
	}
// Renamed "Motorboat" variants to "Chris Craft 245L". Modelled after the Chris Craft 245, but also contains outboard engines that appear to be from Yamaha. Added "L" because of those custom added motors.
// "Motorboat" -> "Chris Craft 245L" [Civilian- Civilians]
	class Boat_Civil_01_base_F;
	class C_Boat_Civil_01_F: Boat_Civil_01_base_F
	{
		displayName="Chris Craft 245L";
	}
// "Motorboat (Police)" -> "Chris Craft 245L (Police)" [Civilian- Civilians]
	class C_Boat_Civil_01_police_F: Boat_Civil_01_base_F
	{
		displayName="Chris Craft 245L (Police)";
	}
// "Motorboat (Rescue)" -> "Chris Craft 245L (Rescue)" [Civilian- Civilians]
	class C_Boat_Civil_01_rescue_F: Boat_Civil_01_base_F
	{
		displayName="Chris Craft 245L (Rescue)";
	}
// Renamed "Water Scooter" to "Yamaha WaveRunner VXR". Modelled after the Yamaha Waverunner VXR, specifically the 2010 or 2011 deluxe version.
// "Water Scooter" -> "Yamaha WaveRunner VXR" [Civilian- Civilians]
	class Scooter_Transport_01_base_F;
	class C_Scooter_Transport_01_F: Scooter_Transport_01_base_F
	{
		displayName="Yamaha WaveRunner VXR";
	}
// Renamed "Hatchback" variants to "Hyundai I-Blue". Modelled after the "Hyundai I-Blue" concept car.
// "Hatchback" -> "Hyundai I-Blue" [Civilian- Civilians]
	class Hatchback_01_base_F;
	class C_Hatchback_01_F: Hatchback_01_base_F
	{
		displayName="Hyundai I-Blue";
	}
// "Hatchback (Sport)" -> "Hyundai I-Blue (Sport)" [Civilian- Civilians]
	class Hatchback_01_sport_base_F;
	class C_Hatchback_01_sport_F: Hatchback_01_sport_base_F
	{
		displayName="Hyundai I-Blue (Sport)";
	}
// Renamed "Kart" variants to "Kosmic Kart". Research points to it being called a "Kosmic Kart". Though there isn't much on specific make or model, just that chassis.
// "Kart" -> "Kosmic Kart" [Civilian- Civilians]
	class C_Kart_01_F_Base;
	class C_Kart_01_F: C_Kart_01_F_Base
	{
		displayName="Kosmic Kart";
	}
// "Kart (Bluking)" -> "Kosmic Kart (Bluking)" [Civilian- Civilians]
	class C_Kart_01_Blu_F: C_Kart_01_F_Base
	{
		displayName="Kosmic Kart (Bluking)";
	}
// "Kart (Fuel)" -> "Kosmic Kart (Fuel)" [Civilian- Civilians]
	class C_Kart_01_Fuel_F: C_Kart_01_F_Base
	{
		displayName="Kosmic Kart (Fuel)";
	}
// "Kart (Redstone)" -> "Kosmic Kart (Redstone)" [Civilian- Civilians]
	class C_Kart_01_Red_F: C_Kart_01_F_Base
	{
		displayName="Kosmic Kart (Redstone)";
	}
// "Kart (Vrana)" -> "Kosmic Kart (Vrana)" [Civilian- Civilians]
	class C_Kart_01_Vrana_F: C_Kart_01_F_Base
	{
		displayName="Kosmic Kart (Vrana)";
	}
// Renamed "SUV" to "Stelvio X6 SUV". Modelled after two real vehicles, the Alpha Romeo Stelvio (front) and the BMW X6 (E71; 2008)(rear).
// "SUV" -> "Stelvio X6 SUV" [Civilian- Civilians]
	class SUV_01_base_F;
	class C_SUV_01_F: SUV_01_base_F
	{
		displayName="Stelvio X6 SUV";
	}
// Renamed "Tractor" to "Zetor 6945". // Modelled after the real world Zetor 6945 from Zetor, a Czech agricultural machinery manufacturer.
// "Tractor" -> "Zetor 6945" [Civilian- Civilians]
	class Tractor_01_base_F;
	class C_Tractor_01_F: Tractor_01_base_F
	{
		displayName="Zetor 6945";
	}
// DRONES
// Renamed "UGV Stomper" to "Crusher UGCV". Modelled after the real Crusher UGCV (Unmanned Ground Combat Vehicle), designed by researchers at the Carnegie Mellon University's National Robotics Engineering Center for DARPA.
// "UGV Stomper" -> "Crusher UGCV" [BLUFOR- NATO, NATO (Pacific) / Independent- AAF, LDF]
	class UGV_01_base_F;
	class B_UGV_01_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	}
	class B_T_UGV_01_olive_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	}
	class I_UGV_01_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	}
	class I_E_UGV_01_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	}
// Renamed "UGV Saif" to "Crusher UGCV". The OPFOR CSAT variant.
// "UGV Saif" -> "Crusher UGCV" [OPFOR- CSAT, CSAT (Pacific)]
	class O_UGV_01_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	}
	class O_T_UGV_01_ghex_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	}
// Renamed "UGV: to "Crusher UGCV". The IDAP variant.
// "UGV" -> "Crusher UGCV" [Civilian- IDAP]
	class C_IDAP_UGV_01_F: UGV_01_base_F
	{
		displayName="Crusher UGCV";
	}
// Renamed "UGV Stomper RCWS" to "Crusher UGCV (RCWS)". The RCWS (Remote Controlled Weapon Station) variant of the Crusher UGCV.
// "UGV Stomper RCWS" -> "Crusher UGCV (RCWS)" [BLUFOR- NATO, NATO (Pacific) / Independent- AAF, LDF]
	class UGV_01_rcws_base_F;
	class B_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayName="Crusher UGCV (RCWS)";
	}
	class B_T_UGV_01_rcws_olive_F: UGV_01_rcws_base_F
	{
		displayName="Crusher UGCV (RCWS)";
	}
	class I_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayName="Crusher UGCV (RCWS)";
	}
	class I_E_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayName="Crusher UGCV (RCWS)";
	}
// "Renamed "UGV Saif RCWS" to "Crusher UGCV (RCWS)". The RCWS OPFOR CSAT variant of Crusher UGCV.
// "UGV Saif RCWS" -> "Crusher UGCV (RCWS)" [OPFOR- CSAT, CSAT (Pacific)]
	class O_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		displayName="Crusher UGCV (RCWS)";
	}
	class O_T_UGV_01_rcws_ghex_F: UGV_01_rcws_base_F
	{
		displayName="Crusher UGCV (RCWS)";
	}
// Renamed "MQ-12 Falcon" to "MQ-8X Fire Snark". Based on the American-made "MQ-8 Fire Scout" ((specifically the MQ-8B) designed by Northrop Grumman)) and the "Snark" UCAV prototype. Followed same naming rules as Greyhawk, "X" for experimental and "Fire Snark" since it's a heavily armed version (than a scout). Supported by the in-game manual for its use in close air support and deploying in the most dangerous zones thanks to its unmanned construction. 
// "MQ-12 Falcon" -> "MQ-8X Fire Snark" [BLUFOR- NATO]
	class UAV_03_dynamicLoadout_base_F;
	class B_T_UAV_03_dynamicLoadout_F: UAV_03_dynamicLoadout_base_F
	{
		displayName="MQ-8X Fire Snark";
	}
// Renamed "UCAV Sentinel" to "X-47B UCAS". Directly modelled after the "X-47B UCAS". A tailless, strike fighter-sized unmanned aircraft developed by Northrop Grumman as part of the U.S. Navy's Unmanned Combat Air System (UCAS). Altered to have a twin intake by altered with a twin intake by Bohemia Interactive.
// "UCAV Sentinel" -> "X-47B UCAS" [BLUFOR- NATO]
	class UAV_05_Base_F;
	class B_UAV_05_F: UAV_05_Base_F
	{
		displayName="X-47B UCAS";
	}
// Renamed "Demining UGV" to "ED-1D-EOD". Concept UGV from Bohemia Interactive. Renamed to make it match with the other ED-1D variants.
// "Demining UGV" -> "ED-1D-EOD" [Civilian- IDAP]
	class UGV_02_Demining_Base_F;
	class C_IDAP_UGV_02_Demining_F: UGV_02_Demining_Base_F
	{
		displayName="ED-1D-EOD";
	}
// Renamed "Drone" to "AR-2U Darter". Based on an enlarged version of the "Parrot AR.Drone Version 2.0" manufactured by Parrot SA of France. However, kept it as "AR-2U Darter" to make it consistent with the other AR-2 variants, and the naming is already close enough.
// "Drone" -> "AR-2U Darter" [Civilian- IDAP]
	class UAV_01_base_F;
	class C_IDAP_UAV_01_F: UAV_01_base_F
	{
		displayName="AR-2U Darter";
	}
// Renamed "Demining Drone" to "AL-6X Pelican (EOD)". Fictional concept hexacopter drone made by Bohemia Interactive. Renamed to match with the other AL-6 variants. Comes with "X" to designate it's an experimental/modified, as the in-game manual says IDAP took a standard Utility Drone and modified it for highly effective mine clearance operations. 
// "Demining Drone" -> "AL-6X Pelican (EOD)" [Civilian- IDAP]
	class UAV_06_antimine_base_F;
	class C_IDAP_UAV_06_antimine_F: UAV_06_antimine_base_F
	{
		displayName="AL-6X Pelican (EOD)";
	}
// Renamed "Utility Drone" to "AL-6U Pelican". Fictional concept hexacopter drone made by Bohemia Interactive. Renamed to match with the other AL-6 variants. Comes with "U" to designate it's a utility variant.
// "Utility Drone" -> "AL-6U Pelican" [Civilian- Civilians, IDAP]
	class UAV_06_base_F;
	class C_IDAP_UAV_06_F: UAV_06_base_F
	{
		displayName="AL-6U Pelican";
	}
	class C_UAV_06_F: UAV_06_base_F
	{
		displayName="AL-6U Pelican";
	}
// Renamed "Utility Drone (Medical)" to "AL-6U Pelican (Medical)". Medical variant of the AL-6U Pelican.
// "Utility Drone (Medical)" -> "AL-6U Pelican (Medical)" [Civilian- Civilians, IDAP]
	class UAV_06_medical_base_F;
	class C_IDAP_UAV_06_medical_F: UAV_06_medical_base_F
	{
		displayName="AL-6U Pelican (Medical)";
	}
	class C_UAV_06_medical_F: UAV_06_medical_base_F
	{
		displayName="AL-6U Pelican (Medical)";
	}
// STATICS
// Renamed "AN/MPQ-105 Radar" to "AN/MPQ-53 Radar". The radar trailer's model is based on the Patriot system's "AN/MPQ-53" and "AN/MPQ-65" radar sets, however the circular (not cubic) shape of the radar closely resembles the AN/MPQ-53 than the cubic shaped AN/MPQ-65.
// "AN/MPQ-105 Radar" -> "AN/MPQ-53 Radar" [BLUFOR- NATO / Independent- LDF]
	class Radar_System_01_base_F;
	class B_Radar_System_01_F: Radar_System_01_base_F
	{
		displayName="AN/MPQ-53 Radar";
	}
	class I_E_Radar_System_01_F: Radar_System_01_base_F
	{
		displayName="AN/MPQ-53 Radar";
	}
// Renamed "MIM-145 Defender" to "MIM-104 Patriot". The model of the Defender's TEL and radar trailer are based on components of Raytheon's "MIM-104 Patriot" missile system.
// "MIM-145 Defender" -> "MIM-104 Patriot" [BLUFOR- NATO / Independent- LDF]
	class SAM_System_03_base_F;
	class B_SAM_System_03_F: SAM_System_03_base_F
	{
		displayName="MIM-104 Patriot";
	}
	class I_E_SAM_System_03_F: SAM_System_03_base_F
	{
		displayName="MIM-104 Patriot";
	}
// Renamed "Mk21 Centurion" to "Mk 29 (ESSM)". Based on the Mk 29 GMWS (Guided Missile Launching System) but fires RIM-162 Evolved Sea Sparrow Missiles (aka ESSM).
// "Mk21 Centurion" -> "Mk 29 (ESSM)" [BLUFOR- NATO]
	class SAM_System_02_base_F;
	class B_SAM_System_02_F: SAM_System_02_base_F
	{
		displayName="Mk 29 (ESSM)";
	}
// Renamed "Mk49 Spartan" to "Mk 31 (RAM)". Based on Mk 31 GMWS (Guided Missile Weapon System) but fires RIM-116 Rolling Airframe Missiles (aka RAM).
// "Mk49 Spartan" -> "Mk 31 (RAM)" [BLUFOR- NATO]
	class SAM_System_01_base_F;
	class B_SAM_System_01_F: SAM_System_01_base_F
	{
		displayName="Mk 31 (RAM)";
	}
// Renamed "Mk45 Hammer" to "Mk 45 Hammer". Not based on any specific naval cannon, may be pure fiction from Bohemia Interactive. Renamed to match with above naming rules.
// "Mk45 Hammer" -> "Mk 45 Hammer" [BLUFOR- NATO]
	class B_Ship_Gun_01_base_F;
	class B_Ship_Gun_01_F: B_Ship_Gun_01_base_F
	{
		displayName="Mk 45 Hammer";
	}
// Renamed "Mk41 VLS" to "Mk 41 VLS". Model seems to actually be based on the real Mk 41 VLS (Vertical Launching System). Although there isn't a real variant that holds 18/36 missiles. Renamed to match with above naming rules.
// "Mk41 VLS" -> "Mk 41 VLS" [BLUFOR- NATO]
	class B_Ship_MRLS_01_base_F;
	class B_Ship_MRLS_01_F: B_Ship_MRLS_01_base_F
	{
		displayName="Mk 41 VLS";
	}
// Renamed "Praetorian 1C" to "Mk 15 Phalanx CIWS". Model is based on the real Mk 15 Phalanx Close-In Weapon System (CIWS).
// "Praetorian 1C" -> "Mk 15 Phalanx CIWS" [BLUFOR- NATO]
	class AAA_System_01_base_F;
	class B_AAA_System_01_F: AAA_System_01_base_F
	{
		displayName="Mk 15 Phalanx CIWS";
	}
// Renamed "R-750 Cronus Radar" to "92N6A Radar". The model of the Cronus is based on the S-400's "92N6A" radar complex.
// "R-750 Cronus Radar" -> "92N6A Radar"
	class Radar_System_02_base_F;
	class O_Radar_System_02_F: Radar_System_02_base_F
	{
		displayName="92N6A Radar";
	}
// Renamed "S-750 Rhea" to "S-400 Triumf". The Rhea's launcher/trailer vehicle appears to be based on components used by the real Russian-made "S-400" missile system and the launcher itself is modelled after the S-400's "5P85SE2" launcher.
// "S-750 Rhea" -> "S-400 Triumf" [OPFOR- CSAT]
	class SAM_System_04_base_F;
	class O_SAM_System_04_F: SAM_System_04_base_F
	{
		displayName="S-400 Triumf";
	}
// Renamed "M2 HMG .50" turret variants to "M2HB".
// Renamed "M2 HMG .50" -> "M2HB".
// "M2 HMG .50" -> "M2HB" [BLUFOR- FIA / OPFOR- FIA / Independent- AAF, FIA, LDF, Syndikat]
	class HMG_02_base_F;
	class B_G_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	}
	class O_G_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	}
	class I_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	}
	class I_G_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	}
	class I_E_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	}
	class I_C_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	}
// Renamed "M2 HMG .50 (Raised)" -> "M2HB (Raised)".
// "M2 HMG .50 (Raised)" -> "M2HB (Raised)" [BLUFOR- FIA / OPFOR- FIA / Independent- AAF, FIA, LDF, Syndikat]
	class HMG_02_high_base_F;
	class B_G_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	}
	class O_G_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	}
	class I_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	}
	class I_G_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	}
	class I_E_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	}
	class I_C_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	}
};