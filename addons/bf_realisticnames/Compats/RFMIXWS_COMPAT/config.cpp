class CfgPatches
{
	class real_names_2035_rfmixws_compat
	{
		addonRootClass="real_names_2035_base";
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
	class Heli_EC_01_base_RF;
	class B_ION_Heli_EC_01_RF: Heli_EC_01_base_RF
	{
		displayName="H225M Super Cougar Transport";
	};
	class Heli_EC_01A_military_base_RF;
	class B_UN_Heli_EC_01A_military_RF: Heli_EC_01A_military_base_RF
	{
		displayName="H225M Super Cougar HADR";
	};
	class Heli_EC_02_base_RF;
	class O_SFIA_Heli_EC_02_RF: Heli_EC_02_base_RF
	{
		displayName="H225M Super Cougar SOCAT";
	};
	class I_SFIA_Heli_EC_02_RF: Heli_EC_02_base_RF
	{
		displayName="H225M Super Cougar SOCAT";
	};
	class Pickup_fuel_base_rf;
	class I_Tura_Pickup_fuel_rf: Pickup_fuel_base_rf
	{
		displayName="Ram 1500 (Fuel)";
	};
	class B_Tura_Pickup_01_fuel_RF: I_Tura_Pickup_fuel_rf
	{
		displayName="Ram 1500 (Fuel)";
	};
	class O_Tura_Pickup_01_fuel_RF: I_Tura_Pickup_fuel_rf
	{
		displayName="Ram 1500 (Fuel)";
	};
	class Pickup_01_aat_base_rf;
	class B_ION_Pickup_aat_rf: Pickup_01_aat_base_rf
	{
		displayName="Ram 1500 (VAMPIRE/AA)";
	};
	class Pickup_01_hmg_base_rf;
	class I_Tura_Pickup_01_hmg_rf: Pickup_01_hmg_base_rf
	{
		displayName="Ram 1500 (M2HB)";
	};
	class B_Tura_Pickup_01_hmg_RF: I_Tura_Pickup_01_hmg_rf
	{
		displayName="Ram 1500 (M2HB)";
	};
	class O_Tura_Pickup_01_hmg_RF: I_Tura_Pickup_01_hmg_rf
	{
		displayName="Ram 1500 (M2HB)";
	};
	class Pickup_01_mmg_base_rf;
	class B_ION_Pickup_mmg_rf: Pickup_01_mmg_base_rf
	{
		displayName="Ram 1500 (LWMMG)";
	};
	class B_UN_Pickup_mmg_rf: Pickup_01_mmg_base_rf
	{
		displayName="Ram 1500 (LWMMG)";
	};
	class Pickup_01_base_rf;
	class B_ION_Pickup_rf: Pickup_01_base_rf
	{
		displayName="Ram 1500";
	};
	class I_Tura_Pickup_01_RF: Pickup_01_base_rf
	{
		displayName="Ram 1500";
	};
	class B_Tura_Pickup_01_RF: I_Tura_Pickup_01_RF
	{
		displayName="Ram 1500";
	};
	class B_UN_Pickup_rf: Pickup_01_base_rf
	{
		displayName="Ram 1500";
	};
	class O_Tura_Pickup_01_RF: I_Tura_Pickup_01_RF
	{
		displayName="Ram 1500";
	};
	class Pickup_01_rcws_base_rf;
	class B_ION_Pickup_rcws_rf: Pickup_01_rcws_base_rf
	{
		displayname="Ram 1500 (M134/RCWS)";
	};
	class Pickup_01_Rocket_base_rf;
	class I_Tura_Pickup_01_Rocket_rf: Pickup_01_Rocket_base_rf
	{
		displayname="Ram 1500 (S-8)";
	};
	class B_Tura_Pickup_01_Rocket_rf: I_Tura_Pickup_01_Rocket_rf
	{
		displayname="Ram 1500 (S-8)";
	};
	class O_Tura_Pickup_01_Rocket_rf: I_Tura_Pickup_01_Rocket_rf
	{
		displayname="Ram 1500 (S-8)";
	};
};
