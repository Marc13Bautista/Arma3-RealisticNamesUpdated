class CfgPatches
{
	class real_names_2035_addgis_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"A3_AddGis_Characters_F_AddGis_Vests"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class Aegis_arifle_M16A4_F;
	class AddGis_arifle_C7A2_F: Aegis_arifle_M16A4_F
	{
		displayName="C7A2";
	};
	class AddGis_arifle_C7A2_blk_F: AddGis_arifle_C7A2_F
	{
		displayName="C7A2 (Black)";
	};
	class AddGis_arifle_C7A2_snd_F: AddGis_arifle_C7A2_F
	{
		displayName="C7A2 (Sand)";
	};
	class AddGis_arifle_C7A2_grip_F: Aegis_arifle_M16A4_F
	{
		displayName="C7A2 FG";
	};
	class AddGis_arifle_C7A2_grip_blk_F: AddGis_arifle_C7A2_grip_F
	{
		displayName="C7A2 FG (Black)";
	};
	class AddGis_arifle_C7A2_grip_snd_F: AddGis_arifle_C7A2_grip_F
	{
		displayName="C7A2 FG (Sand)";
	};
	class arifle_AKM_F;
	class AddGis_arifle_CETME_F: arifle_AKM_F
	{
		displayName="CETME Model 58 C";
	};
	class AddGis_arifle_CETME_blk_F: AddGis_arifle_CETME_F
	{
		displayName="CETME Model 58 C (Black)";
	};
	class AddGis_arifle_CETME_oli_F: AddGis_arifle_CETME_F
	{
		displayName="CETME Model 58 C (Olive)";
	};
	class AddGis_arifle_G3A3_F: AddGis_arifle_CETME_F
	{
		displayName="G3A3";
	};
	class AddGis_arifle_G3A3_blk_F: AddGis_arifle_G3A3_F
	{
		displayName="G3A3 (Black)";
	};
	class AddGis_arifle_G3A3_ris_F: AddGis_arifle_CETME_F
	{
		displayName="G3A3 RIS";
	};
	class AddGis_arifle_G3A3_ris_blk_F: AddGis_arifle_G3A3_ris_F
	{
		displayName="G3A3 RIS (Black)";
	};
	class AddGis_arifle_G3A3_ris_fg_F: AddGis_arifle_CETME_F
	{
		displayName="G3A3 RIS/FG";
	};
	class AddGis_arifle_G3A3_ris_fg_blk_F: AddGis_arifle_G3A3_ris_fg_F
	{
		displayName="G3A3 RIS/FG (Black)";
	};
	class arifle_G36_base_F;
	class AddGis_arifle_G433_F: arifle_G36_base_F
	{
		displayName="HK433 14.5 """;
	};
	class AddGis_arifle_G433_khk_F: AddGis_arifle_G433_F
	{
		displayName="HK433 14.5 "" (Khaki)";
	};
	class AddGis_arifle_G433_snd_F: AddGis_arifle_G433_F
	{
		displayName="HK433 14.5 "" (Sand)";
	};
	class AddGis_arifle_G433_FG_F: AddGis_arifle_G433_F
	{
		displayName="HK433 14.5 "" FG";
	};
	class AddGis_arifle_G433_FG_khk_F: AddGis_arifle_G433_FG_F
	{
		displayName="HK433 14.5 "" FG (Khaki)";
	};
	class AddGis_arifle_G433_FG_snd_F: AddGis_arifle_G433_FG_F
	{
		displayName="HK433 14.5 "" FG (Sand)";
	};
	class AddGis_arifle_G433_GL_F: AddGis_arifle_G433_F
	{
		displayName="HK433 14.5 "" GLM";
	};
	class AddGis_arifle_G433_GL_khk_F: AddGis_arifle_G433_GL_F
	{
		displayName="HK433 14.5 "" GLM (Khaki)";
	};
	class AddGis_arifle_G433_GL_snd_F: AddGis_arifle_G433_GL_F
	{
		displayName="HK433 14.5 "" GLM (Sand)";
	};
	class arifle_Katiba_F;
	class AddGis_arifle_KHBAR_F: arifle_Katiba_F
	{
		displayName="KH2002 DIO";
	};
	class arifle_Katiba_C_F;
	class AddGis_arifle_KHBAR_C_F: arifle_Katiba_C_F
	{
		displayName="KH2002C DIO";
	};
	class arifle_Katiba_GL_F;
	class AddGis_arifle_KHBAR_GL_F: arifle_Katiba_GL_F
	{
		displayName="KH2002 DIO KGL";
	};
	class AddGis_arifle_M16_A2_F: Aegis_arifle_M16A4_F
	{
		displayName="M16A2";
	};
	class AddGis_arifle_M16_Carbine_F: Aegis_arifle_M16A4_F
	{
		displayName="M16A2 Carbine";
	};
};
class cfgVehicles
{
	class AddGis_APC_Tracked_Type63_HMG_base;
	class AddGis_O_A_APC_Tracked_Type63_HMG: AddGis_APC_Tracked_Type63_HMG_base
	{
		displayName="Type 63 (DSHkM)";
	};
	class AddGis_O_SFIA_APC_Tracked_Type63_HMG: AddGis_APC_Tracked_Type63_HMG_base
	{
		displayName="Type 63 (DSHkM)";
	};
	class AddGis_I_AM_APC_Tracked_Type63_HMG: AddGis_APC_Tracked_Type63_HMG_base
	{
		displayName="Type 63 (DSHkM)";
	};
	class AddGis_APC_Tracked_Type63_base;
	class AddGis_O_A_APC_Tracked_Type63_Unarmed: AddGis_APC_Tracked_Type63_base
	{
		displayName="Type 63 (Unarmed)";
	};
	class AddGis_O_SFIA_APC_Tracked_Type63_Unarmed: AddGis_APC_Tracked_Type63_base
	{
		displayName="Type 63 (Unarmed)";
	};
	class AddGis_I_AM_APC_Tracked_Type63_Unarmed: AddGis_APC_Tracked_Type63_base
	{
		displayName="Type 63 (Unarmed)";
	};
	class SAM_System_03_base_F;
	class AddGis_B_G_D_SAM_System_03_F: SAM_System_03_base_F
	{
		displayName="MIM-104 Patriot";
	};
	class AddGis_I_I_A_SAM_System_03_F: SAM_System_03_base_F
	{
		displayName="MIM-104 Patriot";
	};
	class Radar_System_01_base_F;
	class AddGis_B_G_D_Radar_System_01_F: Radar_System_01_base_F
	{
		displayName="AN/MPQ-53 Radar";
	};
	class AddGis_I_I_A_Radar_System_01_F: Radar_System_01_base_F
	{
		displayName="AN/MPQ-53 Radar";
	};
	class Aegis_I_G_APC_Wheeled_04_export_F;
	class AddGis_I_AM_Wheeled_04_export_F: Aegis_I_G_APC_Wheeled_04_export_F
	{
		displayName="BTR-90A";
	};
	class HMG_02_base_F;
	class AddGis_B_G_D_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	};
	class AddGis_I_I_A_HMG_02_F: HMG_02_base_F
	{
		displayName="M2HB";
	};
	class HMG_02_high_base_F;
	class AddGis_B_G_D_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	};
	class AddGis_I_I_A_HMG_02_high_F: HMG_02_high_base_F
	{
		displayName="M2HB (Raised)";
	};
	class I_Heli_EC_02_RF;
	class AddGis_O_R_Heli_EC_02_F: I_Heli_EC_02_RF
	{
		displayName="H225M Super Cougar SOCAT";
	};
	class AddGis_O_R_ard_Heli_EC_02_F: I_Heli_EC_02_RF
	{
		displayName="H225M Super Cougar SOCAT";
	};
	class I_Heli_EC_01A_military_RF;
	class AddGis_O_R_Heli_EC_01A_military_F: I_Heli_EC_01A_military_RF
	{
		displayName="H225M Super Cougar HADR";
	};
	class AddGis_O_R_ard_Heli_EC_01A_military_F: I_Heli_EC_01A_military_RF
	{
		displayName="H225M Super Cougar HADR";
	};
};
