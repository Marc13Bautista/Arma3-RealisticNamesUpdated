class CfgPatches
{
	class real_names_2035_rfmixws_compat
	{
		addonRootClass="real_names_2035_base"; //Replace this with fisch's config name
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"RF_Data_Loadorder",
			"data_f_lxWS_Loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};

class cfgVehicles
{
// VEHICLES
// "H240 Transport" -> "H225M Super Cougar Transport" [BLUFOR- ION Services]
	class Heli_EC_01_base_RF;
	class B_ION_Heli_EC_01_RF: Heli_EC_01_base_RF
	{
		displayName="H225M Super Cougar Transport";
	}
// "RAI-350M Cougar (Unarmed)" -> "H225M Super Cougar HADR" [BLUFOR- UNA]
	class Heli_EC_01A_military_base_RF;
	class B_UN_Heli_EC_01A_military_RF: Heli_EC_01A_military_base_RF
	{
		displayName="H225M Super Cougar HADR";
	}
// "RAI-360M Cougar" -> "H225M Super Cougar SOCAT" [OPFOR- SFIA]
	class Heli_EC_02_base_RF;
	class O_SFIA_Heli_EC_02_RF: Heli_EC_02_base_RF
	{
		displayName="H225M Super Cougar SOCAT";
	}
	class I_SFIA_Heli_EC_02_RF: Heli_EC_02_base_RF
	{
		displayName="H225M Super Cougar SOCAT";
	}
// (06/01/24 Update) Reaction Forces + Western Sahara CDLC by Rotators Collective (If both CDLCs are loaded)
// "Pickup (Fuel)" -> "Ram 1500 (Fuel)" [BLUFOR- Tura / OPFOR- Tura / Independent- Tura]
	class Pickup_fuel_base_rf;
	class I_Tura_Pickup_fuel_rf: Pickup_fuel_base_rf
	{
		displayName="Ram 1500 (Fuel)";
	}
	class B_Tura_Pickup_01_fuel_RF: I_Tura_Pickup_fuel_rf
	{
		displayName="Ram 1500 (Fuel)";
	}
	class O_Tura_Pickup_01_fuel_RF: I_Tura_Pickup_fuel_rf
	{
		displayName="Ram 1500 (Fuel)";
	}
// An anti-air variant of the Ram 1500, with a fictional boxed quad mounted system that fires FIM-92F stinger missiles.
// "Pickup (AA)" -> "Ram 1500 (FIM-92F)" [BLUFOR- ION Services]
	class Pickup_01_aat_base_rf;
	class B_ION_Pickup_aat_rf: Pickup_01_aat_base_rf
	{
		displayName="Ram 1500 (FIM-92F)";
	}
// "Pickup (HMG)" -> "Ram 1500 (HMG)" [BLUFOR- Tura / OPFOR- Tura / Independent- Tura]
	class Pickup_01_hmg_base_rf;
	class I_Tura_Pickup_01_hmg_rf: Pickup_01_hmg_base_rf
	{
		displayName="Ram 1500 (HMG)";
	}
	class B_Tura_Pickup_01_hmg_RF: I_Tura_Pickup_01_hmg_rf
	{
		displayName="Ram 1500 (HMG)";
	}
	class O_Tura_Pickup_01_hmg_RF: I_Tura_Pickup_01_hmg_rf
	{
		displayName="Ram 1500 (HMG)";
	}
// "Pickup (MMG)" -> "Ram 1500 (MMG)" [BLUFOR- ION Services, UNA]
	class Pickup_01_mmg_base_rf;
	class B_ION_Pickup_mmg_rf: Pickup_01_mmg_base_rf
	{
		displayName="Ram 1500 (MMG)";
	}
	class B_UN_Pickup_mmg_rf: Pickup_01_mmg_base_rf
	{
		displayName="Ram 1500 (MMG)";
	}
// "Pickup" -> ""Ram 1500" [BLUFOR- ION Services, Tura, UNA / OPFOR- Tura / Independent- Tura]
	class Pickup_01_base_rf;
	class B_ION_Pickup_rf: Pickup_01_base_rf
	{
		displayName="Ram 1500";
	}
	class I_Tura_Pickup_01_RF: Pickup_01_base_rf
	{
		displayName="Ram 1500";
	}
	class B_Tura_Pickup_01_RF: I_Tura_Pickup_01_RF
	{
		displayName="Ram 1500";
	}
	class B_UN_Pickup_rf: Pickup_01_base_rf
	{
		displayName="Ram 1500";
	}
	class O_Tura_Pickup_01_RF: I_Tura_Pickup_01_RF
	{
		displayName="Ram 1500";
	}
};