class CfgPatches
{
	class real_names_2035_rf_compat
	{
		addonRootClass="COMPONENT_NAME"; //Replace this with fisch's config name
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
// PRIMARY WEAPONS
// Modelled after the real-world German/Austrian-made HERA H6 Rifle.
// "HADES H6 5.56 mm (Sand)" -> "HERA H6 (Sand)"
	class srifle_h6_base_rf;
	class srifle_h6_tan_rf: srifle_h6_base_rf
	{
		displayName="HERA H6 (Sand)";
	}
// "HADES H6 5.56 mm" -> "HERA H6"
	class srifle_h6_blk_rf: srifle_h6_tan_rf
	{
		displayName="HERA H6";
	}
// "HADES H6 5.56 mm (Digital)" -> "HERA H6 (Digital)"
	class srifle_h6_digi_rf: srifle_h6_tan_rf
	{
		displayName="HERA H6 (Digital)";
	}
// "HADES H6 5.56 mm (Gold)" -> "HERA H6 (Gold)"
	class srifle_h6_gold_rf: srifle_h6_tan_rf
	{
		displayName="HERA H6 (Gold)";
	}
// "HADES H6 5.56 mm (Olive)" -> "HERA H6 (Olive)"
	class srifle_h6_oli_rf: srifle_h6_tan_rf
	{
		displayName="HERA H6 (Olive)";
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
// Directly based on the real-world Desert Eagle Mk19 L5.
// "Mk26 L5 .50 AE" -> "Desert Eagle Mk19 L5"
	class hgun_DEagle_RF: Pistol_Base_F
	{
		displayName="Desert Eagle Mk19 L5";
	}
// "Mk26 L5 .50 AE (Bronze)" -> "Desert Eagle Mk19 L5 (Bronze)"
	class hgun_DEagle_bronze_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mk19 L5 (Bronze)";
	}
// "Mk26 L5 .50 AE (Classic)" -> "Desert Eagle Mk19 L5 (Classic)"
	class hgun_DEagle_classic_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mk19 L5 (Classic)";
	}
// "Mk26 L5 .50 AE (Copper)" -> "Desert Eagle Mk19 L5 (Copper)"
	class hgun_DEagle_copper_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mk19 L5 (Copper)";
	}
// "Mk26 L5 .50 AE (Gold)" -> "Desert Eagle Mk19 L5 (Gold)"
	class hgun_DEagle_gold_RF: hgun_DEagle_RF
	{
		displayName="Desert Eagle Mk19 L5 (Gold)";
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
// Appears to be based on the Spitfire prism scopes designed by Vortex Optics.
// "VRCO (Black)" -> "Vortex Spitfire 3x Prism (Black)"
	class ItemCore;
	class optic_VRCO_RF: ItemCore
	{
		displayName="Vortex Spitfire 3x Prism (Black)";
	}
// "VRCO (Khaki)" -> "Vortex Spitfire 3x Prism (Khaki)"
	class optic_VRCO_khk_RF: optic_VRCO_RF
	{
		displayName="Vortex Spitfire 3x Prism (Khaki)";
	}
// "VRCO (Sand)" -> "Vortex Spitfire 3x Prism (Sand)"
	class optic_VRCO_tan_RF: optic_VRCO_RF
	{
		displayName="Vortex Spitfire 3x Prism (Sand)";
	}
// SECONDARY ATTACHMENTS
// Based on the Aimpoint Micro R-1 reflex sight.
// "RDS" -> "Aimpoint Micro R-1"
	class optic_rds_RF: ItemCore
	{
		displayName="Aimpoint Micro R-1";
	}
// Appears to be based on the Spitfire prism scopes designed by Vortex Optics. Smaller but with the same zoom.
// "VRCO-S" -> "Vortex Spitfire 3x Prism Short"
	class optic_VRCO_pistol_RF: optic_VRCO_RF
	{
		displayName="Vortex Spitfire 3x Prism Short";
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
// "AH-11F Hellcat" -> "AW159 Wildcat" [BLUFOR- NATO]
	class Heli_light_03_dynamicLoadout_base_F;
	class B_Heli_light_03_dynamicLoadout_RF: Heli_light_03_dynamicLoadout_base_F
	{
		displayName="AW159 Wildcat";
	}
	class I_Heli_light_03_dynamicLoadout_RF: B_Heli_light_03_dynamicLoadout_RF
	{
		displayName="AW159 Wildcat";
	}
// "AH-11F Hellcat (Unarmed)" -> "AW159 Wildcat (Unarmed)" [BLUFOR- NATO]
	class Heli_light_03_unarmed_base_F;
	class B_Heli_light_03_unarmed_RF: Heli_light_03_unarmed_base_F
	{
		displayName="AW159 Wildcat (Unarmed)";
	}
	class I_Heli_light_03_unarmed_RF: B_Heli_light_03_unarmed_RF
	{
		displayName="AW159 Wildcat (Unarmed)";
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
// "RAI-350M Cougar (Unarmed)" -> "H225M Super Cougar HADR" [BLUFOR- UNA / Independent- AAF, LDF]
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
// "RAI-360M Cougar" -> "H225M Super Cougar SOCAT" [OPFOR- SFIA / Independent- AAF, LDF]
	class Heli_EC_02_base_RF;
	class I_Heli_EC_02_RF: Heli_EC_02_base_RF
	{
		displayName="H225M Super Cougar SOCAT";
	}
	class I_E_EC_02_RF: Heli_EC_02_base_RF
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
};