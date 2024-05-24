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
};