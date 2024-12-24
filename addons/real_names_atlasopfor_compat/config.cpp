class CfgPatches
{
	class real_names_2035_atlasopfor_compat
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Opf_Data_F_Opf_Loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};

class cfgVehicles
{
// VEHICLES
// - IED UAV > AP-5X Bustard (IED)
// [BLUFOR- Partisans]
// [OPFOR- Separatists]
// [Independent- Insurgents]
	class UAV_02_IED_Base_lxWS;
	class Opf_B_P_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	}
	class Opf_O_S_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	}
	class Opf_I_I_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	}
// M2 HMG .50 > M2HB
// [BLUFOR- Partisans]
// [OPFOR- Paramilitary, Separatists]
// [Independent- Insurgents]
	class HMG_02_base_F;
	class Opf_B_P_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	}
	class Opf_O_P_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	}
	class Opf_O_S_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	}
	class Opf_I_I_HMG_02_F: HMG_02_base_F
	{
		displayname="M2HB";
	}
// M2 HMG .50 (Raised) > M2HB (Raised)
// [BLUFOR- Partisans]
// [OPFOR- Paramilitary, Separatists]
// [Independent- Insurgents]
	class HMG_02_high_base_F;
	class Opf_B_P_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	}
	class Opf_O_P_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	}
	class Opf_O_S_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	}
	class Opf_I_I_HMG_02_high_F: HMG_02_high_base_F
	{
		displayname="M2HB (Raised)";
	}
// Zu-23-2 > ZU-23-2
// [OPFOR- Paramilitary, Separatists]
// [Independent- Insurgents]
	class zu23_base_lxWS;
	class OpF_O_P_ZU23_lxWS_F: zu23_base_lxWS
	{
		displayname="ZU-23-2";
	}
	class OpF_O_S_ZU23_lxWS_F: zu23_base_lxWS
	{
		displayname="ZU-23-2";
	}
	class OpF_I_I_ZU23_lxWS_F: zu23_base_lxWS
	{
		displayname="ZU-23-2";
	}
// Quad Bike > Grizzly 450 ATV
// [OPFOR- Separatists]
	class Quadbike_01_base_F;
	class Opf_O_S_Quadbike_01_F: Quadbike_01_base_F
	{
		displayname="Grizzly 450 ATV";
	}
// Zamak Transport > KamAZ Transport
// [BLUFOR- Partisans]
// [OPFOR- Paramilitary, Separatists]
	class O_Truck_02_transport_F;
	class Opf_B_P_Truck_02_transport_F: O_Truck_02_transport_F
	{
		displayname="KamAZ Transport";
	}
	class Opf_O_P_Truck_02_transport_F: O_Truck_02_transport_F
	{
		displayname="KamAZ Transport";
	}
	class Opf_O_S_Truck_02_transport_F: O_Truck_02_transport_F
	{
		displayname="KamAZ Transport";
	}
// Truck > Iveco Daily
// [Independent- Insurgents]
	class Van_01_transport_base_F;
	class Opf_I_I_Van_01_transport_F: Van_01_transport_base_F
	{
		displayname="Iveco Daily";
	}
// Offroad (Desert) > Q7/F-150D Offroad
// [OPFOR- Paramilitary]
	class Offroad_01_base_lxWS;
	class Opf_O_P_Offroad_01_F: Offroad_01_base_lxWS
	{
		displayname="Q7/F-150D Offroad";
	}
// Offroad (Desert, AT) > Q7/F-150D Offroad (SPG-9)
// [OPFOR- Paramilitary]
// [Independent- Insurgents]
	class Offroad_01_AT_lxWS;
	class Opf_O_P_Offroad_01_AT_F: Offroad_01_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (SPG-9)";
	}
// Offroad (Desert, HMG) > Q7/F-150D Offroad (M2HB)
// [OPFOR- Paramilitary]
// [Independent- Insurgents]
	class Offroad_01_armed_lxWS;
	class Opf_O_P_Offroad_01_armed_F: Offroad_01_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (M2HB)";
	}
// Offroad (UP) > Q7/F-150D Offroad (UP)
// [OPFOR- Paramilitary]
// [Independent- Insurgents]
	class Offroad_01_armor_base_lxWS;
	class Opf_O_P_Offroad_01_armor_base_F: Offroad_01_armor_base_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	}
	class Opf_I_I_Offroad_01_armor_base_F: Offroad_01_armor_base_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	}
// Offroad (UP, AT) > Q7/F-150D Offroad (UP, SPG-9)
// [OPFOR- Paramilitary]
// [Independent- Insurgents]
	class Offroad_01_armor_AT_lxWS;
	class Opf_O_P_Offroad_01_armor_AT_F: Offroad_01_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	}
	class Opf_I_I_Offroad_01_armor_AT_F: Offroad_01_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	}
// Offroad (UP, HMG) > Q7/F-150D Offroad (UP, M2HB)
// [OPFOR- Paramilitary]
// [Independent- Insurgents]
	class Offroad_01_armor_armed_lxWS;
	class Opf_O_P_Offroad_01_armor_armed_F: Offroad_01_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	}
	class Opf_I_I_Offroad_01_armor_armed_F: Offroad_01_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	}
// Pickup (Repair) > Ram 1500 (Repair)
// [BLUFOR- Partisans]
	class Pickup_repair_ig_base_rf;
	class Opf_B_P_Pickup_repair_rf: Pickup_repair_ig_base_rf
	{
		displayname="Ram 1500 (Repair)";
	}
// BTR-100A Muharib > BTR-90A
// [OPFOR- Paramilitary]
	class APC_Wheeled_04_export_base_F;
	class Opf_O_P_APC_Wheeled_04_export_F: APC_Wheeled_04_export_base_F
	{
		displayname="BTR-90A";
	}
};