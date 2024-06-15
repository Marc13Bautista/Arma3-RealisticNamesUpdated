class CfgPatches
{
	class real_names_2035_aegisrevolucion_compat
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Revolucion_Data_F_Revolucion_Loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgVehicles
{
	class I_APC_Wheeled_03_cannon_F;
	class Rev_B_BDF_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_cannon_F
	{
		displayname="Pandur II";
	};
	class Rev_O_FASR_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_cannon_F
	{
		displayname="Pandur II";
	};
	class Offroad_01_civil_base_F;
	class Rev_B_PNB_Offroad_01_policia_F: Offroad_01_civil_base_F
	{
		displayname="Q7/F-150 Offroad";
	};
	class Rev_O_PNB_Offroad_01_policia_F: Offroad_01_civil_base_F
	{
		displayname="Q7/F-150 Offroad";
	};
	class Offroad_01_military_comms_base_F;
	class Rev_B_BDF_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		displayname="Q7/F-150 Offroad (Comms)";
	};
	class Rev_B_PNB_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		displayname="Q7/F-150 Offroad (Comms)";
	};
	class Rev_O_FASR_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		displayname="Q7/F-150 Offroad (Comms)";
	};
	class Rev_O_PNB_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		displayname="Q7/F-150 Offroad (Comms)";
	};
	class Offroad_01_military_covered_base_F;
	class Rev_B_BDF_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		displayname="Q7/F-150 Offroad (Covered)";
	};
	class Rev_B_PNB_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		displayname="Q7/F-150 Offroad (Covered)";
	};
	class Rev_O_FASR_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		displayname="Q7/F-150 Offroad (Covered)";
	};
	class Rev_O_PNB_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		displayname="Q7/F-150 Offroad (Covered)";
	};
	class Rev_I_CDB_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		displayname="Q7/F-150 Offroad (Covered)";
	};
	class Offroad_01_armed_base_F;
	class Rev_B_BDF_Offroad_01_armed_F: Offroad_01_armed_base_F
	{
		displayname="Q7/F-150 Offroad (M2HB)";
	};
	class Rev_O_FASR_Offroad_01_armed_F: Offroad_01_armed_base_F
	{
		displayname="Q7/F-150 Offroad (M2HB)";
	};
	class Rev_I_CDB_Offroad_01_armed_F: Offroad_01_armed_base_F
	{
		displayname="Q7/F-150 Offroad (M2HB)";
	};
	class Plane_Fighter_03_dynamicLoadout_base_F;
	class Rev_B_BDF_Plane_Fighter_03_dynamicLoadout_F: Plane_Fighter_03_dynamicLoadout_base_F
	{
		displayname="L-159 ALCA";
	};
	class Plane_Fighter_04_Base_F;
	class rev_B_Plane_Fighter_04_F: Plane_Fighter_04_Base_F
	{
		displayname="JAS 39 Gripen";
	};
	class zu23_base_lxWS;
	class Rev_B_FRR_ZU23_lxWS_F: zu23_base_lxWS
	{
		displayname="ZU-23-2";
	};
	class Rev_O_FASR_ZU23_lxWS_F: zu23_base_lxWS
	{
		displayname="ZU-23-2";
	};
	class Rev_O_FRR_ZU23_lxWS_F: Rev_B_FRR_ZU23_lxWS_F
	{
		displayname="ZU-23-2";
	};
	class Rev_I_FRR_ZU23_lxWS_F: Rev_B_FRR_ZU23_lxWS_F
	{
		displayname="ZU-23-2";
	};
	class Offroad_01_AT_base_F;
	class Rev_O_FASR_Offroad_01_AT_F: Offroad_01_AT_base_F
	{
		displayname="Q7/F-150 Offroad (SPG-9)";
	};
	class Rev_I_CDB_Offroad_01_AT_F: Offroad_01_AT_base_F
	{
		displayname="Q7/F-150 Offroad (SPG-9)";
	};
	class Offroad_01_armor_base_lxWS;
	class Rev_I_CDB_Offroad_01_armor_base_F: Offroad_01_armor_base_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	};
	class Offroad_01_armor_AT_lxWS;
	class Rev_I_CDB_Offroad_01_armor_AT_F: Offroad_01_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	};
	class Offroad_01_armor_armed_lxWS;
	class Rev_I_CDB_Offroad_01_armor_armed_F: Offroad_01_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	};
	class O_MRAP_02_F;
	class Rev_B_PNB_MRAP_02_F: O_MRAP_02_F
	{
		displayname="Karatel";
	};
	class Rev_O_PNB_MRAP_02_F: O_MRAP_02_F
	{
		displayname="Karatel";
	};
	class Van_02_vehicle_base_F;
	class Rev_B_PNB_Van_02_Vehicle_F: Van_02_vehicle_base_F
	{
		displayname="Sprinter Transit (Cargo)";
	};
	class Van_02_transport_base_F;
	class Rev_B_PNB_Van_02_Transport_F: Van_02_transport_base_F
	{
		displayname="Sprinter Transit";
	};
	class O_R_APC_Wheeled_04_cannon_F;
	class Rev_O_VZ_APC_Wheeled_04_cannon_F: O_R_APC_Wheeled_04_cannon_F
	{
		displayname="BTR-90 (Bumerange-BM)";
	};
	class Boat_Armed_01_base_F;
	class Rev_O_VZ_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
	{
		displayname="SOC-Riverine X (XM312)";
	};
	class LSV_02_unarmed_base_F;
	class Rev_O_VZ_LSV_02_unarmed_F: LSV_02_unarmed_base_F
	{
		displayname="LSV Mk II";
	};
	class LSV_02_AT_base_F;
	class Rev_O_VZ_LSV_02_AT_F: LSV_02_AT_base_F
	{
		displayname="LSV Mk II (Metis-M)";
	};
	class LSV_02_armed_base_F;
	class Rev_O_VZ_LSV_02_armed_F: LSV_02_armed_base_F
	{
		displayname="LSV Mk II (M134)";
	};
	class O_MBT_02_cannon_F;
	class Rev_O_VZ_MBT_02_cannon_ghex_F: O_MBT_02_cannon_F
	{
		displayname="T-100 Black Eagle";
	};
	class Heli_Light_02_dynamicLoadout_base_F;
	class Rev_O_VZ_Heli_Light_02_dynamicLoadout_F: Heli_Light_02_dynamicLoadout_base_F
	{
		displayname="Ka-60 Kasatka";
	};
	class Heli_Light_02_unarmed_base_F;
	class Rev_O_VZ_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F
	{
		displayname="Ka-60 Kasatka (Unarmed)";
	};
	class Aegis_Heli_Attack_04_base_F;
	class Rev_O_VZ_Heli_Attack_04_F: Aegis_Heli_Attack_04_base_F
	{
		displayname="Mi-35 Super Hind Mk III";
	};
	class Plane_CAS_02_dynamicLoadout_base_F;
	class Rev_O_VZ_Plane_CAS_02_dynamicLoadout_ghex_F: Plane_CAS_02_dynamicLoadout_base_F
	{
		displayname="Yak-130";
	};
};
