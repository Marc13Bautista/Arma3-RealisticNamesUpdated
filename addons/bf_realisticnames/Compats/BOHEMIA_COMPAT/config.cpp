class CfgPatches
{
	class real_names_2035_bohemia_compat
	{
		addonRootClass="ADDON"; //Replace this with fisch's config name
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
// A classic shotgun back from OFP... Seems to be a mix of the Beretta DT-11 and CZ-581... Keeping it Kozlice for now.
// "Kozlice 12G" -> "Kozlice"
	class sgun_HunterShotgun_01_base_F;
	class sgun_HunterShotgun_01_F: sgun_HunterShotgun_01_base_F
	{
		displayName="Kozlice";
	}
// "Kozlice 12G (Sawed-Off)" -> "Kozlice (Sawed-Off)"
	class sgun_HunterShotgun_01_sawedoff_base_F: sgun_HunterShotgun_01_base_F
	{
		displayName="Kozlice (Sawed-Off)";
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
};