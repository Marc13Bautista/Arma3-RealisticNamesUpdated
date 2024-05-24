class CfgPatches
{
	class real_names_2035_otexpansion_compat
	{
		addonRootClass="real_names_2035_base"; //Replace this with fisch's config name
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"Weapons_Globe_ACC",
			"A3_Armor_F_expEden",
			"A3_Soft_F_expEden",
			"Air_Globe"
		};
		skipWhenMissingDependencies=1;
	};
};

class cfgWeapons
{
// PRIMARY WEAPONS
// "AKM 7.62 mm (Flashlight)" -> "AKM (Flashlight)"
	class arifle_AKM_F;
	class arifle_AKM_FL_F: arifle_AKM_F
	{
		displayName="AKM (Flashlight)";
	}
// PRIMARY ATTACHMENTS
// "ACO SRS" -> "Trijicon SRS"
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class optic_SRS: ItemCore
	{
		displayName="Trijicon SRS";
	};
}
class CfgVehicles
{
// VEHICLES
// "AFV-4 Gorgon (Guerilla 1 to 3)" -> "Pandur II (Guerilla 1 to 3)" [BLUFOR- FIA]
	class B_APC_Wheeled_03_base_F;
	class B_APC_Wheeled_03_cannon_F: B_APC_Wheeled_03_base_F
	{
		displayName="Pandur II (Guerilla 1)";
	};
	class B_APC_Wheeled_03_cannon_2_F: B_APC_Wheeled_03_cannon_F
	{
		displayName="Pandur II (Guerilla 2)";
	};
	class B_APC_Wheeled_03_cannon_3_F: B_APC_Wheeled_03_cannon_F
	{
		displayName="Pandur II (Guerilla 3)";
	};
// "Tempest (Atrox Counteragent)" -> "Typhoon "Atrox" Counteragent)" [OFPOR- CSAT (Pacific)]
	class O_Truck_03_ammo_F;
	class O_T_Truck_03_science_containers_ghex_F: O_Truck_03_ammo_F
	{
		displayName="Typhoon ""Atrox"" Counteragent";
	};
// "PO-30 Orca" -> "Ka-60 Kasatka" [Independent- AAF], "PO-30 Orca (Unarmed)" -> "Ka-60 Kasatka (Unarmed)" [Independent- AAF], "M-3000" -> "Ka-60 (Unarmed)" [Civilian- Civilians] 
	class Heli_Light_02_dynamicLoadout_base_F;
	class I_Heli_Light_02_dynamicLoadout: Heli_Light_02_dynamicLoadout_base_F
	{
		displayName="Ka-60 Kasatka";
	}
	class Heli_Light_02_unarmed_base_F;
	class I_Heli_Light_02_unarmed: Heli_Light_02_unarmed_base_F
	{
		displayName="Ka-60 Kasatka (Unarmed)";
	}
	class C_Heli_Light_02: Heli_Light_02_unarmed_base_F
	{
		displayName="Ka-60 Kasatka (Unarmed)";
	}
// EH101 Heliliner is the civilian version of the AgustaWestland AW101.
// "EH302" -> "EH101 Heliliner" [Civilian- Civilians]
	class Heli_Transport_02_base_F;
	class C_Heli_Transport_02: Heli_Transport_02_base_F
	{
		displayName="EH101 Heliliner";
	}
};