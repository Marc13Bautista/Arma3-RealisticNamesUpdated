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
// Renamed "Ram 1500 (AA)" to "Ram 1500 (VAMPIRE/AA)". The anti-air system used on the RF Pickup is based on L3Harris’ Vehicle-Agnostic Modular Palletized ISR Rocket Equipment (VAMPIRE).
// "Pickup (AA)" -> "Ram 1500 (VAMPIRE/AA)" [BLUFOR- ION Services]
	class Pickup_01_aat_base_rf;
	class B_ION_Pickup_aat_rf: Pickup_01_aat_base_rf
	{
		displayName="Ram 1500 (VAMPIRE/AA)";
	}
// Renamed "Ram 1500 (HMG)" to "Ram 1500 (M2HB)".
// "Pickup (HMG)" -> "Ram 1500 (M2HB)" [BLUFOR- Tura / OPFOR- Tura / Independent- Tura]
	class Pickup_01_hmg_base_rf;
	class I_Tura_Pickup_01_hmg_rf: Pickup_01_hmg_base_rf
	{
		displayName="Ram 1500 (M2HB)";
	}
	class B_Tura_Pickup_01_hmg_RF: I_Tura_Pickup_01_hmg_rf
	{
		displayName="Ram 1500 (M2HB)";
	}
	class O_Tura_Pickup_01_hmg_RF: I_Tura_Pickup_01_hmg_rf
	{
		displayName="Ram 1500 (M2HB)";
	}
// Renamed "Ram 1500 (MMG)" to "Ram 1500 (LWMMG)".
// "Pickup (MMG)" -> "Ram 1500 (LWMMG)" [BLUFOR- ION Services, UNA]
	class Pickup_01_mmg_base_rf;
	class B_ION_Pickup_mmg_rf: Pickup_01_mmg_base_rf
	{
		displayName="Ram 1500 (LWMMG)";
	}
	class B_UN_Pickup_mmg_rf: Pickup_01_mmg_base_rf
	{
		displayName="Ram 1500 (LWMMG)";
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