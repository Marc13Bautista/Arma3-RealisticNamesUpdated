class CfgPatches
{
	class real_names_2035_jamasianescalation_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"jam_weapons_ae"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class LMG_03_F;
	class JAM_AE_LMG_M249_blk: LMG_03_F
	{
		displayName="M249";
	};
	class JAM_AE_LMG_M249_fde: JAM_AE_LMG_M249_blk
	{
		displayName="M249 (FDE)";
	};
	class JAM_AE_LMG_M249_oli: JAM_AE_LMG_M249_blk
	{
		displayName="M249 (OD)";
	};
	class arifle_AK12_F;
	class JAM_AE_ARifle_QBZ95_blk: arifle_AK12_F
	{
		displayName="QBZ-95";
	};
	class JAM_AE_ARifle_QBZ95_1_AFG_blk: JAM_AE_ARifle_QBZ95_blk
	{
		displayName="QBZ-95-1 AFG";
	};
	class JAM_AE_ARifle_QBZ95_1_FG_blk: JAM_AE_ARifle_QBZ95_1_AFG_blk
	{
		displayName="QBZ-95-1 FG";
	};
	class JAM_AE_ARifle_QBZ95_GL_blk: JAM_AE_ARifle_QBZ95_blk
	{
		displayName="QBZ-95 GL";
	};
	class JAM_AE_ARifle_QBZ95_RIS_blk: JAM_AE_ARifle_QBZ95_blk
	{
		displayName="QBZ-95 RIS";
	};
	class JAM_AE_ARifle_QBZ95_RIS_FG_blk: JAM_AE_ARifle_QBZ95_blk
	{
		displayName="QBZ-95 RIS/FG";
	};
	class JAM_AE_ARifle_QBZ97_blk: arifle_AK12_F
	{
		displayName="QBZ-97";
	};
	class JAM_AE_ARifle_QBZ97_GL_blk: arifle_AK12_F
	{
		displayName="QBZ-97 GL";
	};
	class JAM_AE_ARifle_QJB95_blk: JAM_AE_ARifle_QBZ95_blk
	{
		displayName="QBJ-95 LSW";
	};
	class JAM_AE_LMG_QJY88_blk: LMG_03_F
	{
		displayName="QJY-88";
	};
	class JAM_AE_LMG_QJY88_1_blk: LMG_03_F
	{
		displayName="QJY-88 RIS";
	};
	class arifle_SPAR_01_blk_F;
	class JAM_AE_ARifle_T91_blk: arifle_SPAR_01_blk_F
	{
		displayName="T91";
	};
	class JAM_AE_ARifle_T91_fde: JAM_AE_ARifle_T91_blk
	{
		displayName="T91 (FDE)";
	};
	class JAM_AE_ARifle_T91_od: JAM_AE_ARifle_T91_blk
	{
		displayName="T91 (OD)";
	};
	class JAM_AE_ARifle_Type56: arifle_AK12_F
	{
		displayName="Type 56";
	};
	class JAM_AE_ARifle_Type56_2: JAM_AE_ARifle_Type56
	{
		displayName="Type 56-2";
	};
	class JAM_AE_ARifle_Type56_2_plum: JAM_AE_ARifle_Type56_2
	{
		displayName="Type 56-2 (Plum)";
	};
	class JAM_AE_ARifle_Type56_dark: JAM_AE_ARifle_Type56
	{
		displayName="Type 56 (Dark Wood)";
	};
	class JAM_AE_ARifle_Type58_AK: arifle_AK12_F
	{
		displayName="Type-58";
	};
	class JAM_AE_ARifle_Type58_AK_wat: JAM_AE_ARifle_Type58_AK
	{
		displayName="Type-58 (Vodka)";
	};
	class JAM_AE_ARifle_Type81_1: arifle_AK12_F
	{
		displayName="Type 81-1";
	};
	class JAM_AE_ARifle_Type81_1_blk: JAM_AE_ARifle_Type81_1
	{
		displayName="Type 81-1 (Black)";
	};
	class JAM_AE_ARifle_Type81_1_plum: JAM_AE_ARifle_Type81_1
	{
		displayName="Type 81-1 (Plum)";
	};
	class JAM_AE_ARifle_Type81_LMG: JAM_AE_ARifle_Type81_1
	{
		displayName="Type 81 LMG";
	};
	class JAM_AE_ARifle_Type81_LMG_blk: JAM_AE_ARifle_Type81_LMG
	{
		displayName="Type 81 LMG (Black)";
	};
	class JAM_AE_ARifle_Type81_LMG_plum: JAM_AE_ARifle_Type81_LMG
	{
		displayName="Type 81 LMG (Plum)";
	};
	class JAM_AE_ARifle_Type88_2: arifle_AK12_F
	{
		displayName="Type 88-2";
	};
	class JAM_AE_ARifle_Type88_2_helical: JAM_AE_ARifle_Type88_2
	{
		displayName="Type 88-2 Helical";
	};
	class hgun_Rook40_F;
	class JAM_AE_HGun_QSZ92: hgun_Rook40_F
	{
		displayName="QSZ-92";
	};
	class Launcher_Base_F;
	class JAM_AE_Launch_DZAII_grn_F: Launcher_Base_F
	{
		displayName="DZA-11 (Green)";
	};
	class JAM_AE_Launch_DZJ08_grn_F: JAM_AE_Launch_DZAII_grn_F
	{
		displayName="DZJ-08 (Green)";
	};
	class JAM_AE_Launch_PF98_base: Launcher_Base_F
	{
		displayName="PF-98";
	};
};
class cfgVehicles
{
	class JAM_AE_M60A3_base;
	class JAM_AE_ROCA_M60A3: JAM_AE_M60A3_base
	{
		displayName="M60A3";
	};
	class Tank_F;
	class JAM_AE_PLA_Tank_ZTZ96A_base: Tank_F
	{
		displayName="ZTZ-96A";
	};
	class JAM_AE_PLA_Tank_ZTZ96A_wdl: JAM_AE_PLA_Tank_ZTZ96A_base
	{
		displayName="ZTZ-96A";
	};
	class APC_Wheeled_02_base_F;
	class JAM_AE_PLA_APC_Placeholder_wdl: APC_Wheeled_02_base_F
	{
		displayName="Otokar ARMA";
	};
	class O_Truck_02_transport_F;
	class JAM_AE_PLA_Truck_Placeholder_transport: O_Truck_02_transport_F
	{
		displayName="KamAZ Transport";
	};
	class O_Truck_02_Ammo_F;
	class JAM_AE_PLA_Truck_Placeholder_Ammo: O_Truck_02_Ammo_F
	{
		displayName="KamAZ Ammo";
	};
	class O_Truck_02_covered_F;
	class JAM_AE_PLA_Truck_Placeholder: O_Truck_02_covered_F
	{
		displayName="KamAZ Transport (Covered)";
	};
	class O_Truck_02_fuel_F;
	class JAM_AE_PLA_Truck_Placeholder_fuel: O_Truck_02_fuel_F
	{
		displayName="KamAZ  Fuel";
	};
	class O_Truck_02_medical_F;
	class JAM_AE_PLA_Truck_Placeholder_medical: O_Truck_02_medical_F
	{
		displayName="KamAZ Medical";
	};
	class O_Truck_02_box_F;
	class JAM_AE_PLA_Truck_Placeholder_box: O_Truck_02_box_F
	{
		displayName="KamAZ Repair";
	};
};
