class CfgPatches
{
	class real_names_2035_rf_compat
	{
		addonRootClass="real_names_2035_base"; //Replace this with fisch's config name
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
// VEHICLE WEAPONS
// Renamed to change the "SPMG .338" turret mount for RF Pickup to "LWMMG".
// "SPMG .338" -> "LWMMG"
	class LMG_RCWS;
	class MMG_02_vehicle: LMG_RCWS
	{
		displayName="LWMMG";
	}
// PRIMARY WEAPONS
// Modelled after the real-world German/Austrian-made HERA H6 Rifle.
// Renamed "HERA H6" to "Hera H6".
// "HADES H6 5.56 mm (Sand)" -> "Hera H6 (Sand)"
	class srifle_h6_base_rf;
	class srifle_h6_tan_rf: srifle_h6_base_rf
	{
		displayName="Hera H6 (Sand)";
	}
// "HADES H6 5.56 mm" -> "Hera H6"
	class srifle_h6_blk_rf: srifle_h6_tan_rf
	{
		displayName="Hera H6";
	}
// "HADES H6 5.56 mm (Digital)" -> "Hera H6 (Digital)"
	class srifle_h6_digi_rf: srifle_h6_tan_rf
	{
		displayName="Hera H6 (Digital)";
	}
// "HADES H6 5.56 mm (Gold)" -> "Hera H6 (Gold)"
	class srifle_h6_gold_rf: srifle_h6_tan_rf
	{
		displayName="Hera H6 (Gold)";
	}
// "HADES H6 5.56 mm (Olive)" -> "Hera H6 (Olive)"
	class srifle_h6_oli_rf: srifle_h6_tan_rf
	{
		displayName="Hera H6 (Olive)";
	}
// Black and Tan camo variants of the VS-121 prototype sniper rifle developed by Kalashnikov Concern (formerly known as IZHMASH).
// "Rahim 7.62 mm (Black)" -> "VS-121 (Black)"
	class srifle_DMR_01_F;
	class srifle_DMR_01_black_RF: srifle_DMR_01_F
	{
		displayName="VS-121 (Black)";
	}
// "Rahim 7.62 mm (Tan)" -> "VS-121 (Tan)"
	class srifle_DMR_01_tan_RF: srifle_DMR_01_black_RF
	{
		displayName="VS-121 (Tan)";
	}
// Possibily fictional long barrel variant of the real Russian-made ASh-12.
// "Veles-S 12.7 mm" -> "ASh-12 LR"
	class arifle_ash12_LR_base_RF;
	class arifle_ash12_LR_blk_RF: arifle_ash12_LR_base_RF
	{
		displayName="ASh-12 LR";
	}
// "Veles-S 12.7 mm (Desert)" -> "ASh-12 LR (Desert)"
	class arifle_ash12_LR_desert_RF: arifle_ash12_LR_blk_RF
	{
		displayName="ASh-12 LR (Desert)";
	}
// "Veles-S 12.7 mm (Urban)" -> "ASh-12 LR (Urban)"
	class arifle_ash12_LR_urban_RF: arifle_ash12_LR_blk_RF
	{
		displayName="ASh-12 LR (Urban)";
	}
// "Veles-S 12.7 mm (Wood)" -> "ASh-12 LR (Wood)"
	class arifle_ash12_LR_wood_RF: arifle_ash12_LR_blk_RF
	{
		displayName="ASh-12 LR (Wood)";
	}
// Directly based on the Russian-made ASh-12.
// "Veles 12.7 mm" -> "ASh-12"
	class arifle_ash12_base_RF;
	class arifle_ash12_blk_RF: arifle_ash12_base_RF
	{
		displayName="ASh-12";
	}
// "Veles 12.7 mm (Desert)" -> "ASh-12 (Desert)"
	class arifle_ash12_desert_RF: arifle_ash12_base_RF
	{
		displayName="ASh-12 (Desert)";
	}
// "Veles 12.7 mm (Urban)" -> "ASh-12 (Urban)"
	class arifle_ash12_urban_RF: arifle_ash12_base_RF
	{
		displayName="ASh-12 (Urban)";
	}
// "Veles 12.7 mm (Wood)" -> "ASh-12 (Wood)"
	class arifle_ash12_wood_RF: arifle_ash12_base_RF
	{
		displayName="ASh-12 (Wood)";
	}
// UGL variant of the Russian-made ASh-12.
// "Veles GL 12.7 mm" -> "ASh-12 GL"
	class arifle_ash12_GL_base_RF;
	class arifle_ash12_GL_blk_RF: arifle_ash12_GL_base_RF
	{
		displayName="ASh-12 GL";
	}
// "Veles GL 12.7 mm (Desert)" -> "ASh-12 GL (Desert)"
	class arifle_ash12_GL_desert_RF: arifle_ash12_GL_blk_RF
	{
		displayName="ASh-12 GL (Desert)";
	}
// "Veles GL 12.7 mm (Urban)" -> "ASh-12 GL (Urban)"
	class arifle_ash12_GL_urban_RF: arifle_ash12_GL_blk_RF
	{
		displayName="ASh-12 GL (Urban)";
	}
// "Veles GL 12.7 mm (Wood)" -> "ASh-12 GL (Wood)"
	class arifle_ash12_GL_wood_RF: arifle_ash12_GL_blk_RF
	{
		displayName="ASh-12 GL (Wood)";
	}
// Black variant of the Vector SMG.
// "Vermin SMG .45 ACP (Black)" -> "Vector SMG (Black)"
	class SMG_01_F;
	class SMG_01_black_RF: SMG_01_F
	{
		displayName="Vector SMG (Black)";
	}
// SECONDARY WEAPONS
// Loosely modelled after the Glock 19X Crossover pistol.
// "G19 9 mm" -> "Glock 19X"
	class Pistol_Base_F;
	class hgun_Glock19_RF: Pistol_Base_F
	{
		displayName="Glock 19X";
	}
// "G19 9 mm (Khaki)" -> "Glock 19X (Khaki)"
	class hgun_Glock19_khk_RF: hgun_Glock19_RF
	{
		displayName="Glock 19X (Khaki)";
	}
// "G19 9 mm (Sand)" -> "Glock 19X (Sand)"
	class hgun_Glock19_Tan_RF: hgun_Glock19_RF
	{
		displayName="Glock 19X (Sand)";
	}
// Possibly fictional automatic version of Glock 19X.
// "G19A 9 mm" -> "Glock 19X Auto"
	class hgun_Glock19_auto_RF: hgun_Glock19_RF
	{
		displayName="Glock 19X Auto";
	}
// "G19A 9 mm (Khaki)" -> "Glock 19X Auto (Khaki)"
	class hgun_Glock19_auto_khk_RF: hgun_Glock19_auto_RF
	{
		displayName="Glock 19X Auto (Khaki)";
	}
// "G19A 9 mm (Sand)" -> "Glock 19X Auto (Sand)"
	class hgun_Glock19_auto_Tan_RF: hgun_Glock19_auto_RF
	{
		displayName="Glock 19X Auto (Sand)";
	}
// Directly based on the real-world Desert Eagle Mark XIX L5 (lighter weight model).
// Renamed "Desert Eagle Mk19 L5" to "Desert Eagle Mark XIX L5"
	class hgun_DEagle_RF: Pistol_Base_F
	{
		displayName="Desert Eagle Mark XIX L5";
	}
// "Mk26 L5 .50 AE (Bronze)" -> "Desert Eagle Mark XIX L5 (Bronze)"
	class hgun_DEagle_bronze_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mark XIX L5 (Bronze)";
	}
// "Mk26 L5 .50 AE (Classic)" -> "Desert Eagle Mark XIX L5 (Classic)"
	class hgun_DEagle_classic_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mark XIX L5 (Classic)";
	}
// "Mk26 L5 .50 AE (Copper)" -> "Desert Eagle Mark XIX L5 (Copper)"
	class hgun_DEagle_copper_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mark XIX L5 (Copper)";
	}
// "Mk26 L5 .50 AE (Gold)" -> "Desert Eagle Mark XIX L5 (Gold)"
	class hgun_DEagle_gold_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mark XIX L5 (Gold)";
	}
// "Mk26 L5 .50 AE (Stripes)" -> "Desert Eagle Mark XIX L5 (Stripes)"
		class hgun_DEagle_camo_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mark XIX L5 (Stripes)";
	}
// PRIMARY ATTACHMENTS
// Camo variants of the C-More Railway.
// "ACO (Green, Desert)" -> "C-More Railway (Green, Desert)"
	class optic_ACO_grn;
	class optic_ACO_grn_desert_RF: optic_ACO_grn
	{
		displayName="C-More Railway (Green, Desert)";
	}
// "ACO (Green, Wood)" -> "C-More Railway (Green, Wood)"
	class optic_ACO_grn_wood_RF: optic_ACO_grn
	{
		displayName="C-More Railway (Green, Wood)";
	}
// "ACO (Green, Stripes)" -> "C-More Railway (Green, Stripes)"
		class optic_ACO_grn_camo_lxWS: optic_ACO_grn
	{
		displayName="C-More Railway (Green, Stripes)";
	}
// "ACO (Red, Desert)" -> "C-More Railway (Red, Desert)"
	class optic_Aco;
	class optic_ACO_desert_RF: optic_Aco
	{
		displayName="C-More Railway (Red, Desert)";
	}
// "ACO (Red, Wood)" -> "C-More Railway (Red, Wood)"
	class optic_ACO_wood_RF: optic_Aco
	{
		displayName="C-More Railway (Red, Wood)";
	}
// "ACO (Red, Stripes)" -> "C-More Railway (Green, Stripes)"
		class optic_ACO_camo_lxWS: optic_Aco
	{
		displayName="C-More Railway (Green, Stripes)";
	}
// Appears to be based on the Spitfire prism scopes designed by Vortex Optics.
// Renamed "Vortex Spitfire 3x Prism" to "Vortex Spitfire Prism". Has model of the "Vortex Spitfire 3x Prism" but it oddly has a magnification of 2x in-game.
// "VRCO (Black)" -> "Vortex Spitfire Prism (Black)"
	class ItemCore;
	class optic_VRCO_RF: ItemCore
	{
		displayName="Vortex Spitfire Prism (Black)";
	}
// "VRCO (Khaki)" -> "Vortex Spitfire Prism (Khaki)"
	class optic_VRCO_khk_RF: optic_VRCO_RF
	{
		displayName="Vortex Spitfire Prism (Khaki)";
	}
// "VRCO (Sand)" -> "Vortex Spitfire Prism (Sand)"
	class optic_VRCO_tan_RF: optic_VRCO_RF
	{
		displayName="Vortex Spitfire Prism (Sand)";
	}
// SECONDARY ATTACHMENTS
// Based on the Aimpoint Micro R-1 reflex sight.
// "RDS" -> "Aimpoint Micro R-1"
	class optic_rds_RF: ItemCore
	{
		displayName="Aimpoint Micro R-1";
	}
// Appears to be based on the Spitfire prism scopes designed by Vortex Optics. Smaller but with the same zoom.
// Renamed "Vortex Spitfire 3x Prism Short" to "Vortex Spitfire Prism Short". Seems to be a fictional combination of Vortex sights, but still using the similar AR-BDC4 Reticle used by Vortex. 
// "VRCO-S" -> "Vortex Spitfire Prism Short"
	class optic_VRCO_pistol_RF: optic_VRCO_RF
	{
		displayName="Vortex Spitfire Prism Short";
	}
// Camo variants of the EOTech MRDS.
// "MRD (Khaki)" -> "EOTech MRDS (Khaki)"
	class optic_MRD;
	class optic_MRD_khk_RF: optic_MRD
	{
		displayName="EOTech MRDS (Khaki)";
	}
// "MRD (Sand)" -> "EOTech MRDS (Sand)"
	class optic_MRD_tan_RF: optic_MRD
	{
		displayName="EOTech MRDS (Sand)";
	}
};

class CfgMagazines 
{
// (06/01/24 Update) Reaction Forces CDLC by Rotators Collective
// MAGAZINES
// Renamed "RC40" "magazine" variants to "Drone40" (Scout, HE, Smoke). The RC40 drones are modelled after DefendTex's Drone40.
// "RC-40 Scout" -> "Drone40 Scout"
// "RC-40 HE" -> "Drone40 HE"
// "RC-40 Smoke (Blue)" -> "Drone40 Smoke (Blue)"
// "RC-40 Smoke (Green)" -> "Drone40 Smoke (Green)"
// "RC-40 Smoke (Orange)" -> "Drone40 Smoke (Orange)"
// "RC-40 Smoke (Red)" -> "Drone40 Smoke (Red)"
// "RC-40 Smoke (White)" -> "Drone40 Smoke (White)"
    class CA_Magazine;
    class 1Rnd_RC40_shell_RF: CA_Magazine 
	{
        displayName = "Drone40 Scout";
    };
    class 1Rnd_RC40_HE_shell_RF: 1Rnd_RC40_shell_RF 
	{
        displayName = "Drone40 HE";
    };
    class 1Rnd_RC40_SmokeBlue_shell_RF: 1Rnd_RC40_shell_RF 
	{
        displayName = "Drone40 Smoke (Blue)";
    };
    class 1Rnd_RC40_SmokeGreen_shell_RF: 1Rnd_RC40_shell_RF 
	{
        displayName = "Drone40 Smoke (Green)";
    };
    class 1Rnd_RC40_SmokeOrange_shell_RF: 1Rnd_RC40_shell_RF 
	{
        displayName = "Drone40 Smoke (Orange)";
    };
    class 1Rnd_RC40_SmokeRed_shell_RF: 1Rnd_RC40_shell_RF 
	{
        displayName = "Drone40 Smoke (Red)";
    };
    class 1Rnd_RC40_SmokeWhite_shell_RF: 1Rnd_RC40_shell_RF 
	{
        displayName = "Drone40 Smoke (White)";
    };
};

class cfgVehicles
{
// VEHICLES
// There are a lot of variants to the new Reaction Forces' helicopter. Though they all fall under either the H225 Super Puma (civil-orientated) or the H225M Super Cougar (military designated by the M). Looking through each one in editor (and their customizable components), there are about 7 total unique variants of these helicopters in all. They will be renamed based on their equipment and subsequent roles.
// Available are the fuel probe, exhaust suppressors, floatation bags, and extra (fuel) tanks. A military variant. An H225M Super Cougar, meant for general transport of 20 passengers. No nose-mounted radar. Likely meant for long distance transportation of troops (by ION and Gendarmerie).
// "H240 Transport" -> "H225M Super Cougar Transport" [BLUFOR- Gendarmerie, ION Services]
	class Heli_EC_01_base_RF;
	class B_GEN_Heli_EC_01_RF: Heli_EC_01_base_RF
	{
		displayName="H225M Super Cougar Transport";
	}
// NATO variants for the AW159 Wildcat.
// "AH-11F Hellcat" -> "AW159 Wildcat (UP)" [BLUFOR- NATO]
	class Heli_light_03_dynamicLoadout_base_F;
	class B_Heli_light_03_dynamicLoadout_RF: Heli_light_03_dynamicLoadout_base_F
	{
		displayName="AW159 Wildcat (UP)";
	}
	class I_Heli_light_03_dynamicLoadout_RF: B_Heli_light_03_dynamicLoadout_RF
	{
		displayName="AW159 Wildcat (UP)";
	}
// "AH-11F Hellcat (Unarmed)" -> "AW159 Wildcat (UP, Unarmed)" [BLUFOR- NATO]
	class Heli_light_03_unarmed_base_F;
	class B_Heli_light_03_unarmed_RF: Heli_light_03_unarmed_base_F
	{
		displayName="AW159 Wildcat (UP, Unarmed)";
	}
	class I_Heli_light_03_unarmed_RF: B_Heli_light_03_unarmed_RF
	{
		displayName="AW159 Wildcat (UP, Unarmed)";
	}
// Available are the fuel probe, exhaust suppressors, and floatation bags. A military variant. An H225M Super Cougar, meant for general transport of 20 passengers but also has 2 wing-mounted weapon pylons and a nose-mounted radar. Has no extra (fuel) tanks. Probably meant for Combat Search & Rescue (CSAR) operations in combat zones.
// "MH-245 Cougar" -> "H225M Super Cougar CSAR" [BLUFOR- NATO]
	class Heli_EC_03_base_RF;
	class B_Heli_EC_03_RF: Heli_EC_03_base_RF
	{
		displayName="H225M Super Cougar CSAR";
	}
// Available are the fuel probe, exhaust suppressors, floatation bags. A military variant. An H225M Super Cougar, meant for general transport of 20 troops but has no weapon pylons. Only the nose-mounted radar and extra (fuel) tanks. Likely meant for SAR operations in non-combat zones.
// "MH-245 Cougar (Unarmed)" -> "H225M Super Cougar SAR" [BLUFOR- NATO]
	class Heli_EC_04_military_base_RF;
	class B_Heli_EC_04_military_RF: Heli_EC_04_military_base_RF
	{
		displayName="H225M Super Cougar SAR";
	}
// Only the exhaust suppressors are available. Still a military variant. An H225M Super Cougar, meant for general transport (or evacuation) of 20 troops/civilians but has no weapon pylons. Has no nose-mounted radar or extra (fuel) tanks. Probably meant for Humanitarian Assistance and Disaster Relief (HADR) operations.
// "RAI-350M Cougar (Unarmed)" -> "H225M Super Cougar HADR" [Independent- AAF, LDF]
	class Heli_EC_01A_military_base_RF;
	class I_Heli_EC_01A_military_RF: Heli_EC_01A_military_base_RF
	{
		displayName="H225M Super Cougar HADR";
	}
	class I_E_Heli_EC_01A_military_RF: Heli_EC_01A_military_base_RF
	{
		displayName="H225M Super Cougar HADR";
	}
// Only the exhaust suppressors are available. A very unique military variant. An H225M Super Cougar but with a nose-mounted 20mm cannon akin to the IAR 330L Puma SOCAT (which was configured for anti-tank and battlefield support operations). Has only 12 passenger seats (instead of 20) due to the cannon ammo, but 4 wing-mounted weapon pylons. Has no nose-mounted radar or extra (fuel) tanks. This variant is likely made to be a SOCAT configuration for the H225M Super Cougar, as the IAR 330L Puma SOCAT was.
// "RAI-360M Cougar" -> "H225M Super Cougar SOCAT" [Independent- AAF, LDF]
	class Heli_EC_02_base_RF;
	class I_Heli_EC_02_RF: Heli_EC_02_base_RF
	{
		displayName="H225M Super Cougar SOCAT";
	}
	class I_E_EC_02_RF: Heli_EC_02_base_RF
	{
		displayName="H225M Super Cougar SOCAT";
	}
class B_Heli_EC_02_RF: Heli_EC_02_base_RF
	{
		displayName="H225M Super Cougar SOCAT";
	}
// Upgraded attack variants of the AW159 Wildcat.
// "AH-11F Czapla" -> "AW159 Wildcat (UP)" [Independent- LDF]
	class I_E_Heli_light_03_dynamicLoadout_RF: I_Heli_light_03_dynamicLoadout_RF
	{
		displayName="AW159 Wildcat (UP)";
	}
// "AH-11F Czapla" -> "AW159 Wildcat (UP, Unarmed)" [Independent- LDF]
	class I_E_Heli_light_03_unarmed_RF: I_Heli_light_03_unarmed_RF
	{
		displayName="AW159 Wildcat (UP, Unarmed)";
	}
// Real name for the water truck from the firefighting mission.
// "Tempest Water" -> "Typhoon Water" [Civilian- Civilians]
	class O_Truck_03_fuel_F;
	class C_Truck_03_water_rf: O_Truck_03_fuel_F
	{
		displayName="Typhoon Water";
	}
// No unique components available. Certainly a civilian variant. An H225 Super Puma, meant for transporting 15 passengers. Interior design of the helicopter supports its purpose for being a civilian passenger transport.
// "H235C Transport" -> "H225 Super Puma Transport" [Civilian- Civilians, IDAP]
	class Heli_EC_01A_civ_base_RF;
	class C_Heli_EC_01A_civ_RF: Heli_EC_01A_civ_base_RF
	{
		displayName="H225 Super Puma Transport";
	}
	class C_IDAP_Heli_EC_01A_civ_RF: Heli_EC_01A_civ_base_RF
	{
		displayName="H225 Super Puma Transport";
	}
// Only has floatation devices. Certainly a civilian variant. An H225 Super Puma, also meant for transporting 15 passengers. Interior design of the helicopter supports its purpose for being a civilian passenger transport. Just to not be redundant and due to the flotation devices, this will probably be meant for VIPs. Also has extra (fuel) tanks.
// "H240C Transport" -> "EC225 Super Puma VIP" [Civilian- Civilians]
	class Heli_EC_01_civ_base_RF;
	class C_Heli_EC_01_civ_RF: Heli_EC_01_civ_base_RF
	{
		displayName="H225 Super Puma VIP";
	}
// Available are a searchlight and floatation devices. Specifically a civilian variant. An H225 Super Puma, meant for transporting 8 passengers (one is on a stretcher). Also has a nose-mounted radar and extra (fuel) tanks. This variant is tailor made for all-weather search, rescue operations and water bombing. 
// "H245 SAR" -> "H225 Super Puma SAR" [Civilian- Civilians]
	class Heli_EC_04_rescue_base_RF;
	class C_Heli_EC_04_rescue_RF: Heli_EC_04_rescue_base_RF
	{
		displayname="H225 Super Puma SAR";
	}
// (06/01/24 Update) Reaction Forces CDLC by Rotators Collective
// Renamed "Pickup" variants to "Ram 1500". The Pickup is modelled after the Ram 1500.
// "Pickup (MRL)" -> "Ram 1500 (MRL)" [BLUFOR- FIA / OPFOR- FIA / Independent - FIA]
	class Pickup_01_mrl_base_rf;
	class B_G_Pickup_mrl_rf: Pickup_01_mrl_base_rf
	{
		displayname="Ram 1500 (MRL)";
	}
	class O_G_Pickup_mrl_rf: B_G_Pickup_mrl_rf
	{
		displayname="Ram 1500 (MRL)";
	}
	class I_C_Pickup_mrl_rf: Pickup_01_mrl_base_rf
	{
		displayname="Ram 1500 (MRL)";
	}
// "Pickup (Fuel)" -> "Ram 1500 (Fuel)" [BLUFOR- FIA / OPFOR- FIA / Independent- FIA / Civilian- IDAP]
	class Pickup_fuel_base_rf;
	class B_G_Pickup_fuel_rf: Pickup_fuel_base_rf
	{
		displayname="Ram 1500 (Fuel)";
	}
	class O_G_Pickup_fuel_rf: B_G_Pickup_fuel_rf
	{
		displayname="Ram 1500 (Fuel)";
	}
	class I_G_Pickup_fuel_rf: B_G_Pickup_fuel_rf
	{
		displayname="Ram 1500 (Fuel)";
	}
	class C_IDAP_Pickup_fuel_rf: Pickup_fuel_base_rf
	{
		displayname="Ram 1500 (Fuel)";
	}
// Renamed "Ram 1500 (HMG)" to "Ram 1500 (M2HB)".
// "Pickup (HMG)" -> "Ram 1500 (M2HB)" [BLUFOR- FIA / OPFOR- FIA / Independent- AAF, FIA, Syndikat]
	class Pickup_01_hmg_base_rf;
	class B_G_Pickup_hmg_rf: Pickup_01_hmg_base_rf
	{
		displayname="Ram 1500 (M2HB)";
	}
	class O_G_Pickup_hmg_rf: B_G_Pickup_hmg_rf
	{
		displayname="Ram 1500 (M2HB)";
	}
	class I_Pickup_hmg_rf: Pickup_01_hmg_base_rf
	{
		displayname="Ram 1500 (M2HB)";
	}
	class I_G_Pickup_hmg_rf: B_G_Pickup_hmg_rf
	{
		displayname="Ram 1500 (M2HB)";
	}
	class I_C_Pickup_hmg_rf: Pickup_01_hmg_base_rf
	{
		displayname="Ram 1500 (M2HB)";
	}
// "Pickup (Repair)" -> "Ram 1500 (Repair)" [BLUFOR- FIA / OPFOR- FIA / Independent- FIA]
	class Pickup_repair_ig_base_rf;
	class B_G_Pickup_repair_rf: Pickup_repair_ig_base_rf
	{
		displayname="Ram 1500 (Repair)";
	}
	class O_G_Pickup_repair_rf: B_G_Pickup_repair_rf
	{
		displayname="Ram 1500 (Repair)";
	}
	class I_G_Pickup_repair_rf: B_G_Pickup_repair_rf
	{
		displayname="Ram 1500 (Repair)";
	}
// "Pickup (Covered)" -> "Ram 1500 (Covered)" [BLUFOR- Gendarmerie / Independent- LDF / Civilian- Civilians, IDAP]
	class Pickup_covered_base_rf;
	class B_GEN_Pickup_covered_rf: Pickup_covered_base_rf
	{
		displayname="Ram 1500 (Covered)";
	}
	class I_E_Pickup_Covered_rf: Pickup_covered_base_rf
	{
		displayname="Ram 1500 (Covered)";
	}
	class C_Pickup_covered_rf: Pickup_covered_base_rf
	{
		displayname="Ram 1500 (Covered)";
	}
	class C_IDAP_Pickup_covered_rf: Pickup_covered_base_rf
	{
		displayname="Ram 1500 (Covered)";
	}
// Renamed "Ram 1500 (AA)" to "Ram 1500 (VAMPIRE/AA)". The anti-air system used on the RF Pickup is based on L3Harris’ Vehicle-Agnostic Modular Palletized ISR Rocket Equipment (VAMPIRE).
// "Pickup (AA)" -> "Ram 1500 (VAMPIRE/AA)" [BLUFOR- NATO, NATO (Pacific) / Independent- AAF]
	class Pickup_01_aat_base_rf;
	class B_Pickup_aat_rf: Pickup_01_aat_base_rf
	{
		displayname="Ram 1500 (VAMPIRE/AA)";
	}
	class B_T_Pickup_aat_rf: B_Pickup_aat_rf
	{
		displayname="Ram 1500 (VAMPIRE/AA)";
	}
	class I_Pickup_aat_rf: Pickup_01_aat_base_rf
	{
		displayname="Ram 1500 (VAMPIRE/AA)";
	}
// "Pickup (Comms)" -> "Ram 1500 (Comms)" [BLUFOR- NATO, NATO (Pacific) / OPFOR- CSAT, CSAT (Pacific) / Independent- AAF, LDF]
	class Pickup_comms_base_rf;
	class B_Pickup_Comms_rf: Pickup_comms_base_rf
	{
		displayname="Ram 1500 (Comms)";
	}
	class B_T_Pickup_Comms_rf: B_Pickup_Comms_rf
	{
		displayname="Ram 1500 (Comms)";
	}
	class O_Pickup_Comms_rf: Pickup_comms_base_rf
	{
		displayname="Ram 1500 (Comms)";
	}
	class O_T_Pickup_Comms_rf: O_Pickup_Comms_rf
	{
		displayname="Ram 1500 (Comms)";
	}
	class I_Pickup_Comms_rf: Pickup_comms_base_rf
	{
		displayname="Ram 1500 (Comms)";
	}
	class I_E_Pickup_Comms_rf: Pickup_comms_base_rf
	{
		displayname="Ram 1500 (Comms)";
	}
// Renamed "Ram 1500 (MMG)" to "Ram 1500 (LWMMG)".
// "Pickup (MMG)" -> "Ram 1500 (LWMMG)" [BLUFOR- NATO, NATO (Pacific)]
	class Pickup_01_mmg_base_rf;
	class B_Pickup_mmg_rf: Pickup_01_mmg_base_rf
	{
		displayname="Ram 1500 (LWMMG)";
	}
	class B_T_Pickup_mmg_rf: B_Pickup_mmg_rf
	{
		displayname="Ram 1500 (LWMMG)";
	}
// "Pickup" -> ""Ram 1500" [BLUFOR- FIA, NATO, NATO (Pacific) / OPFOR- CSAT, CSAT (Pacific), FIA / Independent- AAF, FIA, LDF, Syndikat / Civilian- Civilians, IDAP]
	class Pickup_01_base_rf;
	class B_G_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	}
	class B_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	}
	class B_T_Pickup_rf: B_Pickup_rf
	{
		displayname="Ram 1500";
	}
	class O_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	}
	class O_T_Pickup_rf: O_Pickup_rf
	{
		displayname="Ram 1500";
	}
	class O_G_Pickup_rf: B_G_Pickup_rf
	{
		displayname="Ram 1500";
	}
	class I_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	}
	class I_G_Pickup_rf: B_G_Pickup_rf
	{
		displayname="Ram 1500";
	}
	class I_E_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	}
	class I_C_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	}
	class C_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	}
	class C_IDAP_Pickup_rf: Pickup_01_base_rf
	{
		displayname="Ram 1500";
	}
// "Pickup (Water)" -> "Ram 1500 (Water)" [Civilian- IDAP]
	class C_IDAP_Pickup_water_rf: C_IDAP_Pickup_rf
	{
		displayname="Ram 1500 (Water)";
	}
// "Pickup (Services)" -> "Ram 1500 (Services)" [Civilian- Civilians]
	class Pickup_repair_base_rf;
	class C_Pickup_repair_rf: Pickup_repair_base_rf
	{
		displayname="Ram 1500 (Services)";
	}
// "Pickup (RCWS)" -> "Ram 1500 (M134/RCWS)" [OPFOR - CSAT, China / Independent- AAF]
	class Pickup_01_rcws_base_rf;
	class O_Pickup_rcws_rf: Pickup_01_rcws_base_rf
	{
		displayname="Ram 1500 (M134/RCWS)";
	}
	class O_T_Pickup_rcws_rf: O_Pickup_rcws_rf
	{
		displayname="Ram 1500 (M134/RCWS)";
	}
	class I_Pickup_rcws_rf: Pickup_01_rcws_base_rf
	{
		displayname="Ram 1500 (M134/RCWS)";
	}
// "Pickup (Rocket)" -> "Ram 1500 (S-8)" [BLUFOR- FIA / OPFOR- FIA / Independent- FIA]
	class Pickup_01_Rocket_base_rf;
	class B_G_Pickup_Rocket_rf: Pickup_01_Rocket_base_rf
	{
		displayname="Ram 1500 (S-8)";
	}
	class O_G_Pickup_Rocket_rf: B_G_Pickup_Rocket_rf
	{
		displayname="Ram 1500 (S-8)";
	}
	class I_G_Pickup_Rocket_rf: B_G_Pickup_Rocket_rf
	{
		displayname="Ram 1500 (S-8)";
	}
// "Tempest (Cargo)" -> "Typhoon (Cargo)" [OPFOR- CSAT, China]
	class O_Truck_03_transport_F;
	class O_Truck_03_cargo_RF: O_Truck_03_transport_F
	{
		displayname="Typhoon (Cargo)";
	}
	class O_T_Truck_03_cargo_RF: O_Truck_03_cargo_RF
	{
		displayname="Typhoon (Cargo)";
	}
// "HEMTT Firetruck" -> "HEMTT Firetruck" [BLUFOR- NATO, NATO (Pacific) / Civilians- Civilian]
	class C_Truck_01_water_rf;
	class C_Truck_01_FFT_rf: C_Truck_01_water_rf
	{
		displayname="HEMTT Firetruck";
	}
	class B_Truck_01_FFT_rf: C_Truck_01_FFT_rf
	{
		displayname="HEMTT Firetruck";
	}
	class B_T_Truck_01_FFT_rf: C_Truck_01_FFT_rf
	{
		displayname="HEMTT Firetruck";
	}
// DRONES
// Renamed "RC40" variants to "Drone40" (Scout, HE, Smoke). The RC40 drones are modelled after DefendTex's Drone40.
// "RC-40 Scout" -> "Drone40 Scout" [BLUFOR- NATO / OPFOR- CSAT / Independent- AAF]
	class UAV_RC40_Base_Sensor_RF;
	class B_UAV_RC40_SENSOR_RF: UAV_RC40_Base_Sensor_RF
	{
		displayname="Drone40 Scout";
	}
	class O_UAV_RC40_SENSOR_RF: UAV_RC40_Base_Sensor_RF
	{
		displayname="Drone40 Scout";
	}
	class I_UAV_RC40_SENSOR_RF: UAV_RC40_Base_Sensor_RF
	{
		displayname="Drone40 Scout";
	}
// "RC-40 HE" -> "Drone40 HE" [BLUFOR- NATO / OPFOR- CSAT / Independent- AAF]
	class UAV_RC40_Base_HE_RF;
	class B_UAV_RC40_HE_RF: UAV_RC40_Base_HE_RF
	{
		displayname="Drone40 HE";
	}
	class O_UAV_RC40_HE_RF: UAV_RC40_Base_HE_RF
	{
		displayname="Drone40 HE";
	}
	class I_UAV_RC40_HE_RF: UAV_RC40_Base_HE_RF
	{
		displayname="Drone40 HE";
	}
// "RC-40 Smoke (Blue)" -> "Drone40 Smoke (Blue)" [BLUFOR- NATO / OPFOR- CSAT / Independent- AAF]
	class UAV_RC40_Base_SmokeBlue_RF;
	class B_UAV_RC40_SmokeBlue_RF: UAV_RC40_Base_SmokeBlue_RF
	{
		displayname="Drone40 Smoke (Blue)";
	}
	class O_UAV_RC40_SmokeBlue_RF: UAV_RC40_Base_SmokeBlue_RF
	{
		displayname="Drone40 Smoke (Blue)";
	}
	class I_UAV_RC40_SmokeBlue_RF: UAV_RC40_Base_SmokeBlue_RF
	{
		displayname="Drone40 Smoke (Blue)";
	}
// "RC-40 Smoke (Green)" -> "Drone40 Smoke (Green)" [BLUFOR- NATO / OPFOR- CSAT / Independent- AAF]
	class UAV_RC40_Base_SmokeGreen_RF;
	class B_UAV_RC40_SmokeGreen_RF: UAV_RC40_Base_SmokeGreen_RF
	{
		displayname="Drone40 Smoke (Green)";
	}
	class O_UAV_RC40_SmokeGreen_RF: UAV_RC40_Base_SmokeGreen_RF
	{
		displayname="Drone40 Smoke (Green)";
	}
	class I_UAV_RC40_SmokeGreen_RF: UAV_RC40_Base_SmokeGreen_RF
	{
		displayname="Drone40 Smoke (Green)";
	}
// "RC-40 Smoke (Orange)" -> "Drone40 Smoke (Orange)" [BLUFOR- NATO / OPFOR- CSAT / Independent- AAF]
	class UAV_RC40_Base_SmokeOrange_RF;
	class B_UAV_RC40_SmokeOrange_RF: UAV_RC40_Base_SmokeOrange_RF
	{
		displayname="Drone40 Smoke (Orange)";
	}
	class O_UAV_RC40_SmokeOrange_RF: UAV_RC40_Base_SmokeOrange_RF
	{
		displayname="Drone40 Smoke (Orange)";
	}
	class I_UAV_RC40_SmokeOrange_RF: UAV_RC40_Base_SmokeOrange_RF
	{
		displayname="Drone40 Smoke (Orange)";
	}
// "RC-40 Smoke (Red)" -> "Drone40 Smoke (Red)" [BLUFOR- NATO / OPFOR- CSAT / Independent- AAF]
	class UAV_RC40_Base_SmokeRed_RF;
	class B_UAV_RC40_SmokeRed_RF: UAV_RC40_Base_SmokeRed_RF
	{
		displayname="Drone40 Smoke (Red)";
	}
	class O_UAV_RC40_SmokeRed_RF: UAV_RC40_Base_SmokeRed_RF
	{
		displayname="Drone40 Smoke (Red)";
	}
	class I_UAV_RC40_SmokeRed_RF: UAV_RC40_Base_SmokeRed_RF
	{
		displayname="Drone40 Smoke (Red)";
	}
// "RC-40 Smoke (White)" -> "Drone40 Smoke (White)" [BLUFOR- NATO / OPFOR- CSAT / Independent- AAF]
	class UAV_RC40_Base_SmokeWhite_RF;
	class B_UAV_RC40_SmokeWhite_RF: UAV_RC40_Base_SmokeWhite_RF
	{
		displayname="Drone40 Smoke (White)";
	}
	class O_UAV_RC40_SmokeWhite_RF: UAV_RC40_Base_SmokeWhite_RF
	{
		displayname="Drone40 Smoke (White)";
	}
	class I_UAV_RC40_SmokeWhite_RF: UAV_RC40_Base_SmokeWhite_RF
	{
		displayname="Drone40 Smoke (White)";
	}
// STATICS
// Renamed "Commando Mortar" to "RSG60". The Commando Mortar are modelled after Rheinmetall's RSG60 light mortar.
// "Commando Mortar" -> "RSG60" [BLUFOR- FIA, NATO / OPFOR- CSAT, FIA / Independent- AAF, FIA, LDF]
	class CommandoMortar_base_RF;
	class B_CommandoMortar_RF: CommandoMortar_base_RF
	{
		displayname="RSG60";
	}
	class B_G_CommandoMortar_RF: B_CommandoMortar_RF
	{
		displayname="RSG60";
	}
	class O_CommandoMortar_RF: B_CommandoMortar_RF
	{
		displayname="RSG60";
	}
	class O_G_CommandoMortar_RF: O_CommandoMortar_RF
	{
		displayname="RSG60";
	}
	class I_CommandoMortar_RF: B_CommandoMortar_RF
	{
		displayname="RSG60";
	}
	class I_G_CommandoMortar_RF: I_CommandoMortar_RF
	{
		displayname="RSG60";
	}
	class I_E_CommandoMortar_RF: I_CommandoMortar_RF
	{
		displayname="RSG60";
	}
// Renamed "Twin Mortar 120 mm" to "Patria AMOS Container". The Twin Mortar is modelled after the AMOS (Advanced Mortar System), a Finno-Swedish 120 mm semi-automatic twin barrelled, breech loaded mortar turret. However, the turret design and container itself is based on the Patria NEMO Container. Confirmed by Lexx to be some sort of fusion to both.
// "Twin Mortar 120 mm" -> "Patria AMOS Container" [BLUFOR- NATO, NATO (Pacific) / Independent- AAF]
	class TwinMortar_base_RF;
	class B_TwinMortar_RF: TwinMortar_base_RF
	{
		displayname="Patria AMOS Container";
	}
	class B_T_TwinMortar_RF: B_TwinMortar_RF
	{
		displayname="Patria AMOS Container";
	}
	class I_TwinMortar_RF: TwinMortar_base_RF
	{
		displayname="Patria AMOS Container";
	}
};