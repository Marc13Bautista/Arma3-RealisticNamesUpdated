class CfgPatches
{
	class real_names_2035_ws_compat
	{
		addonRootClass="real_names_2035_base"; //Replace this with fisch's config name
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};

class cfgWeapons
{
// PRIMARY WEAPONS
// Renamed AA-40 to AA-12. The shotgun is really just an AA-12 (with better performing (fictional) internal parts).
// "AA40 12G" -> "AA-12"
	class Rifle_Base_F;
	class sgun_aa40_base_lxWS: Rifle_Base_F
	{
		displayName="AA-12";
	}
// "AA40 12G (Sand)" -> "AA-12 (Sand)"
	class sgun_aa40_tan_lxWS: sgun_aa40_base_lxWS
	{
		displayName="AA-12 (Sand)";
	}
// "AA40 12G (Snake)" -> "AA-12 (Snake)"
	class sgun_aa40_snake_lxWS: sgun_aa40_base_lxWS
	{
		displayName="AA-12 (Snake)";
	}
// Renamed IMI Galil to Galil ARM since that is the exact variant of the Galil used.
// "Galat ARM 7.62 mm" -> "Galil ARM"
	class arifle_Galat_base_lxWS;
	class arifle_Galat_lxWS: arifle_Galat_base_lxWS
	{
		displayName="Galil ARM";
	}
// "Galat ARM 7.62 mm (Old)" -> "IMI Galil (Old)"
	class arifle_Galat_worn_lxWS: arifle_Galat_lxWS
	{
		displayName="Galil ARM (Old)";
	}
// Based on the standalone configuration of the Beretta GLX 160.
// "GLX 40 mm" -> "GLX 160"
	class glaunch_GLX_base_lxWS;
	class glaunch_GLX_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX 160";
	}
// "GLX 40 mm (Snake)" -> "GLX 160 (Snake)"
	class glaunch_GLX_snake_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX 160 (Snake)";
	}
// "GLX 40 mm (Hex)" -> "GLX 160 (Hex)"
	class glaunch_GLX_hex_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX 160 (Hex)";
	}
// "GLX 40 mm (Green Hex)" -> "GLX 160 (Green Hex)"
	class glaunch_GLX_ghex_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX 160 (Green Hex)";
	}
// "GLX 40 mm (Camo)" -> "GLX 160 (Camo)"
	class glaunch_GLX_camo_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX 160 (Camo)";
	}
// "GLX 40 mm (Sand)" -> "GLX 160 (Sand)"
	class glaunch_GLX_tan_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX 160 (Sand)";
	}
// Black and Snake camo variants of Vanilla Mk14 Mod 1 EBR.
// "Mk18 ABR 7.62 mm (Black)" -> "Mk14 Mod 1 EBR (Black)"
	class srifle_EBR_F;
	class srifle_EBR_blk_lxWS: srifle_EBR_F
	{
		displayName="Mk14 Mod 1 EBR (Black)";
	}
// "Mk18 ABR 7.62 mm (Snake)" -> "Mk14 Mod 1 EBR (Snake)"
	class srifle_EBR_snake_lxWS: srifle_EBR_F
	{
		displayName="Mk14 Mod 1 EBR (Snake)";
	}
// Directly based on the real-world South African-made Vektor SS-77.
// "SA-77 7.62 mm" -> "Vektor SS-77"
	class LMG_S77_base_lxWS;
	class LMG_S77_lxWS: LMG_S77_base_lxWS
	{
		displayName="Vektor SS-77";
	}
//"SA-77 7.62 mm (Camo)" -> "Vektor SS-77 (Camo)"
	class LMG_S77_AAF_lxWS: LMG_S77_base_lxWS
	{
		displayName="Vektor SS-77 (Camo)";
	}
//"SA-77 7.62 mm (Desert)" -> "Vektor SS-77 (Desert)"
	class LMG_S77_Desert_lxWS: LMG_S77_base_lxWS
	{
		displayName="Vektor SS-77 (Desert)";
	}
// "SA-77 7.62 mm (Green Hex)" -> "Vektor SS-77 (Green Hex)"
	class LMG_S77_GHex_lxWS: LMG_S77_base_lxWS
	{
		displayName="Vektor SS-77 (Green Hex)";
	}
// "SA-77 7.62 mm (Hex)" -> "Vektor SS-77 (Hex)"
	class LMG_S77_Hex_lxWS: LMG_S77_base_lxWS
	{
		displayName="Vektor SS-77 (Hex)";
	}
// Possibily fictional compact version of the real Vektor SS-77, since Mini-SS (Compact) is 5.56.
// "SA-77 Compact 7.62 mm" -> "Vektor SS-77 Compact"
	class LMG_S77_Compact_base_lxWS: LMG_S77_base_lxWS
	{
		displayName="Vektor SS-77 Compact";
	}
// "SA-77 Compact 7.62 mm (Snake)" -> "Vektor SS-77 Compact (Snake)
	class LMG_S77_Compact_Snakeskin_lxWS: LMG_S77_Compact_base_lxWS
	{
		displayName="Vektor SS-77 Compact (Snake)";
	}
// Renamed "FN FAL" variants to "FN FAL 50.00" since they closely match it.
// "SLR 7.62 mm (Wood)" -> "FN FAL 50.00 (Wood)"
	class DMR_06_base_F;
	class arifle_SLR_lxWS: DMR_06_base_F
	{
		displayName="FN FAL 50.00 (Wood)";
	}
// "SLR 7.62 mm" -> "FN FAL 50.00"
	class arifle_SLR_V_lxWS: arifle_SLR_lxWS
	{
		displayName="FN FAL 50.00";
	}
// "SLR 7.62 mm (Desert)" -> "FN FAL 50.00 (Desert)"
	class arifle_SLR_D_lxWS: arifle_SLR_lxWS
	{
		displayName="FN FAL 50.00 (Desert)";
	}
// "SLR 7.62 mm (Jungle)" -> "FN FAL 50.00 (Jungle)"
	class arifle_SLR_V_camo_lxWS: arifle_SLR_V_lxWS
	{
		displayName="FN FAL 50.00 (Jungle)";
	}
// FN FAL with a rifle grenade adapter.
// "SLR GL 7.62 mm (Wood) -> "FN FAL 50.00 GL (Wood)"
	class arifle_SLR_GL_lxWS: arifle_SLR_lxWS
	{
		displayName="FN FAL 50.00 GL (Wood)";
	}
// "SLR GL 7.62 mm" -> -> "FN FAL 50.00 GL"
	class arifle_SLR_V_GL_lxWS: arifle_SLR_V_lxWS
	{
		displayName="FN FAL 50.00 GL";
	}
// Directly modelled after the South African-made Vektor R4.
// "Velko R4 5.56 mm" -> "Vektor R4"
	class arifle_Velko_base_lxWS;
	class arifle_Velko_lxWS: arifle_Velko_base_lxWS
	{
		displayName="Vektor R4";
	}
// Renamed "Vektor R5" variants to "Vektor R5 Carbine". They are Carbine variants of the Vektor R4 afterall.
// "Velko R5 5.56 mm" -> "Vektor R5 Carbine"
	class arifle_VelkoR5_lxWS: arifle_Velko_base_lxWS
	{
		displayName="Vektor R5 Carbine";
	}
// "Velko R5 5.56 mm (Snake)" -> "Vektor R5 Carbine (Snake)"
	class arifle_VelkoR5_snake_lxWS: arifle_VelkoR5_lxWS
	{
		displayName="Vektor R5 Carbine (Snake)";
	}
// Underbarrel GL variant of the Vektor R5 Carbine.
// "Velko R5 GL 5.56 mm" -> "Vektor R5 Carbine GL"
	class arifle_VelkoR5_GL_lxWS: arifle_VelkoR5_lxWS
	{
		displayName="Vektor R5 Carbine GL";
	}
// "Velko R5 GL 5.56 mm (Snake)" -> "Vektor R5 Carbine GL (Snake)"
	class arifle_VelkoR5_GL_snake_lxWS: arifle_VelkoR5_GL_lxWS
	{
		displayName="Vektor R5 Carbine GL (Snake)";
	}
// The XMS series of rifles are a fictional hybrid of the XM8 and the VHS-2.
// "XMS 5.56 mm" -> "XMS"
	class arifle_SPAR_01_base_F;
	class arifle_XMS_Base_lxWS: arifle_SPAR_01_base_F
	{
		displayName="XMS";
	}
// "XMS 5.56 mm (Khaki)" -> "XMS (Khaki)"
	class arifle_XMS_Base_khk_lxWS: arifle_XMS_Base_lxWS
	{
		displayName="XMS (Khaki)";
	}
// "XMS 5.56 mm (Sand)" -> "XMS (Sand)"
	class arifle_XMS_Base_Sand_lxWS: arifle_XMS_Base_lxWS
	{
		displayName="XMS (Sand)";
	}
// "XMS GL 5.56 mm" -> "XMS GL"
	class arifle_XMS_GL_lxWS: arifle_XMS_Base_lxWS
	{
		displayName="XMS GL";
	}
// "XMS GL 5.56 mm" -> "XMS Gl (Khaki)"
	class arifle_XMS_GL_khk_lxWS: arifle_XMS_GL_lxWS
	{
		displayName="XMS GL (Khaki)";
	}
// "XMS GL 5.56 mm" -> "XMS GL (Sand)"
	class arifle_XMS_GL_Sand_lxWS: arifle_XMS_GL_lxWS
	{
		displayName="XMS GL (Sand)";
	}
// "XMS SG 5.56 mm" -> "XMS SG"
	class arifle_XMS_Shot_lxWS: arifle_XMS_Base_lxWS
	{
		displayName="XMS SG";
	}
// "XMS SG 5.56 mm" -> "XMS SG (Khaki)"
	class arifle_XMS_Shot_khk_lxWS: arifle_XMS_Shot_lxWS
	{
		displayName="XMS SG (Khaki)";
	}
// "XMS SG 5.56 mm" -> "XMS SG (Sand)"
	class arifle_XMS_Shot_Sand_lxWS: arifle_XMS_Shot_lxWS
	{
		displayName="XMS SG (Sand)";
	}
// "XMS SW 5.56 mm" -> "XMS SW"
	class arifle_XMS_M_lxWS: arifle_XMS_Base_lxWS
	{
		displayName="XMS SW";
	}
// "XMS SW 5.56 mm" -> "XMS SW (Khaki)"
	class arifle_XMS_M_khk_lxWS: arifle_XMS_M_lxWS
	{
		displayName="XMS SW (Khaki)";
	}
// "XMS SW 5.56 mm" -> "XMS SW (Sand)"
	class arifle_XMS_M_Sand_lxWS: arifle_XMS_M_lxWS
	{
		displayName="XMS SW (Sand)";
	}
// GM6 Lynx Snake camo variant introduced in WS Update 1.1.3.
// "GM6 Lynx 12.7 mm (Snake)" -> "GM6 Lynx (Snake)"
	class srifle_GM6_F;
	class srifle_GM6_snake_lxWS: srifle_GM6_F
	{
		displayName="GM6 Lynx (Snake)";
	}
// FN FAL 50.00 Para Standard and Snake camo variant introduced in WS Update 1.1.3.
// "SLR Para 7.62 mm" -> "FN FAL 50.00 Para"
	class arifle_SLR_Para_lxWS: arifle_SLR_V_lxWS
	{
		displayName="FN FAL 50.00 Para";
	}
// "SLR Para 7.62 mm" -> "FN FAL 50.00 Para (Snake)"
		class arifle_SLR_Para_snake_lxWS: arifle_SLR_Para_lxWS
	{
		displayName="FN FAL 50.00 Para (Snake)";
	}
// LAUNCHERS
// RPG-32 Sand camo variant introduced in WS Update 1.1.3.
// "RPG-42 (Sand)" -> "RPG-32 (Sand)"
	class launch_RPG32_F;
	class launch_RPG32_tan_lxWS: launch_RPG32_F
	{
		displayName="RPG-32 (Sand)";
	}
// PRIMARY ATTACHMENTS
// Hex variant of ELCAN SpecterOS.
// "ARCO (Hex)" -> "ELCAN SpecterOS (Hex)"
	class optic_Arco;
	class optic_Arco_hex_lxWS: optic_Arco
	{
		displayName="ELCAN SpecterOS (Hex)";
	}
// Snake variant of ELCAN SpecterOS and SMG.
// "Mk17 Holosight (Snake)" -> "EOTech XPS3 (Snake)"
	class optic_Holosight;
	class optic_Holosight_snake_lxWS: optic_Holosight
	{
		displayName="EOTech XPS3 (Snake)";
	}
// "Mk17 Holosight SMG (Snake)" -> "EOTech XPS3 SMG (Snake)"
	class optic_Holosight_smg;
	class optic_Holosight_smg_snake_lxWS: optic_Holosight_smg
	{
		displayName="EOTech XPS3 SMG (Snake)";
	}
// Arid, Lush, and Sand variant of Leupold Mark 4 HAMR.
// "RCO (Arid)" -> "Leupold Mark 4 HAMR (Arid)"
	class optic_Hamr;
	class optic_Hamr_arid_lxWS: optic_Hamr
	{
		displayName="Leupold Mark 4 HAMR (Arid)";
	}
// "RCO (Lush)" -> "Leupold Mark 4 HAMR (Lush)"
	class optic_Hamr_lush_lxWS: optic_Hamr
	{
		displayName="Leupold Mark 4 HAMR (Lush)";
	}
// "RCO (Sand)" -> "Leupold Mark 4 HAMR (Sand)"
	class optic_Hamr_sand_lxWS: optic_Hamr
	{
		displayName="Leupold Mark 4 HAMR (Sand)";
	}
// "RCO (Snake)" -> "Leupold Mark 4 HAMR (Snake)"
	class optic_Hamr_snake_lxWS: optic_Hamr
	{
		displayName="Leupold Mark 4 HAMR (Snake)";
	}
// Based on the Aimpoint Micro R-1 reflex sight.
// "RDS (High, Black)" -> "Aimpoint Micro R-1 (High, Black)"
	class ItemCore;
	class optic_r1_high_lxWS: ItemCore
	{
		displayName="Aimpoint Micro R-1 (High, Black)";
	}
// "RDS (High, Arid)" -> "Aimpoint Micro R-1 (High, Arid)"
	class optic_r1_high_arid_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (High, Arid)";
	}
// "RDS (High, Khaki)" -> "Aimpoint Micro R-1 (High, Khaki)"
	class optic_r1_high_khaki_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (High, Khaki)";
	}
// "RDS (High, Lush)" -> "Aimpoint Micro R-1 (High, Lush)"
	class optic_r1_high_lush_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (High, Lush)";
	}
// "RDS (High, Sand)" -> "Aimpoint Micro R-1 (High, Sand)"
	class optic_r1_high_sand_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (High, Sand)";
	}
// "RDS (High, Snake)" -> "Aimpoint Micro R-1 (High, Snake)"
	class optic_r1_high_snake_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (High, Snake)";
	}
// "RDS (Low, Black)" -> "Aimpoint Micro R-1 (Low, Black)"
	class optic_r1_low_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (Low, Black)";
	}
// "RDS (Low, Arid)" -> "Aimpoint Micro R-1 (Low, Arid)"
	class optic_r1_low_arid_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (Low, Arid)";
	}
// "RDS (Low, Khaki)" -> "Aimpoint Micro R-1 (Low, Khaki)"
	class optic_r1_low_khaki_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (Low, Khaki)";
	}
// "RDS (Low, Lush)" -> "Aimpoint Micro R-1 (Low, Lush)"
	class optic_r1_low_lush_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (Low, Lush)";
	}
// "RDS (Low, Sand)" -> "Aimpoint Micro R-1 (Low, Sand)"
	class optic_r1_low_sand_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (Low, Sand)";
	}
// "RDS (Low, Snake)" -> "Aimpoint Micro R-1 (Low, Snake)"
	class optic_r1_low_snake_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (Low, Snake)";
	}
// Burris XTR II Snake camo variant introduced in WS Update 1.1.3.
// "DMS (Snake)" -> "Burris XTR II (Snake)"
	class optic_DMS;
	class optic_DMS_snake_lxWS: optic_DMS
	{
		displayName="Burris XTR II (Snake)";
	}
// Aimpoint Micro R-1 (High, Black, Sand) introduced in WS Update 1.1.3.
// "RDS (High, Black, Sand)" -> "Aimpoint Micro R-1 (High, Black, Sand)"
		class optic_r1_high_black_sand_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (High, Black, Sand)";
	}
};

class cfgVehicles
{
// VEHICLES
// Camo reskins and variants of Vanilla vehicles.
// "MSE-3 Marid (Unarmed)" -> "Otokar ARMA (Unarmed)" [BLUFOR- UNA / OPFOR- CSAT, CSAT (Pacific), SFIA]
	class APC_Wheeled_02_base_v2_F;
	class APC_Wheeled_02_unarmed_base_lxws: APC_Wheeled_02_base_v2_F
	{
		displayname="Otokar ARMA (Unarmed)";
	}
	class B_UNA_APC_Wheeled_02_unarmed_lxWS: APC_Wheeled_02_unarmed_base_lxws
	{
		displayname="Otokar ARMA (Unarmed)";
	}
	class O_APC_Wheeled_02_unarmed_lxWS: APC_Wheeled_02_unarmed_base_lxws
	{
		displayname="Otokar ARMA (Unarmed)";
	}
	class O_T_APC_Wheeled_02_unarmed_lxWS: O_APC_Wheeled_02_unarmed_lxWS
	{
		displayname="Otokar ARMA (Unarmed)";
	}
	class I_SFIA_APC_Wheeled_02_unarmed_lxWS: APC_Wheeled_02_unarmed_base_lxws
	{
		displayname="Otokar ARMA (Unarmed)";
	}
	class O_SFIA_APC_Wheeled_02_unarmed_lxWS: I_SFIA_APC_Wheeled_02_unarmed_lxWS
	{
		displayname="Otokar ARMA (Unarmed)";
	}
// Renamed "MSE-3 Marid (HMG)" to "Otokar ARMA (M2HB)".
// "MSE-3 Marid (HMG)" -> "Otokar ARMA (M2HB)" [BLUFOR- Gendarmerie, ION Services, UNA, / OPFOR- CSAT, CSAT (Pacific), Gendarmerie, SFIA]
	class APC_Wheeled_02_hmg_base_lxws: APC_Wheeled_02_base_v2_F
	{
		displayname="Otokar ARMA (M2HB)";
	}
	class I_SFIA_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws
	{
		displayname="Otokar ARMA (M2HB)";
	}
	class O_SFIA_APC_Wheeled_02_hmg_lxWS: I_SFIA_APC_Wheeled_02_hmg_lxWS
	{
		displayname="Otokar ARMA (M2HB)";
	}
	class O_GEN_APC_Wheeled_02_hmg_lxWS: O_SFIA_APC_Wheeled_02_hmg_lxWS
	{
		displayname="Otokar ARMA (M2HB)";
	}
	class B_GEN_APC_Wheeled_02_hmg_lxWS: O_GEN_APC_Wheeled_02_hmg_lxWS
	{
		displayname="Otokar ARMA (M2HB)";
	}
	class B_ION_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws
	{
		displayname="Otokar ARMA (M2HB)";
	}
	class B_UNA_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws
	{
		displayname="Otokar ARMA (M2HB)";
	}
	class O_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws
	{
		displayname="Otokar ARMA (M2HB)";
	}
	class O_T_APC_Wheeled_02_hmg_lxWS: O_APC_Wheeled_02_hmg_lxWS
	{
		displayname="Otokar ARMA (M2HB)";
	}
// Renamed "Badger IFV (CV)" to "Badger IFV (Command)".
// "AMV-7 Marshall (CV)" -> "Badger IFV (Command)" [BLUFOR- ION Services, NATO, NATO (Desert), NATO (Pacific), UNA]
	class APC_Wheeled_01_base_F;
	class APC_Wheeled_01_command_base_lxWS: APC_Wheeled_01_base_F
	{
		displayname="Badger IFV (Command)";
	}
	class B_ION_APC_Wheeled_01_command_lxWS: APC_Wheeled_01_command_base_lxWS
	{
		displayname="Badger IFV (Command)";
	}
	class B_D_APC_Wheeled_01_command_lxWS: APC_Wheeled_01_command_base_lxWS
	{
		displayname="Badger IFV (Command)";
	}
	class B_T_APC_Wheeled_01_command_lxWS: APC_Wheeled_01_command_base_lxWS
	{
		displayname="Badger IFV (Command)";
	}
	class B_UN_APC_Wheeled_01_command_lxWS: APC_Wheeled_01_command_base_lxWS
	{
		displayname="Badger IFV (Command)";
	}
// "AMV-7 Marshall (ATGM)" -> "Badger IFV (ATGM)" [BLUFOR- NATO, NATO (Desert), NATO (Pacific)]
	class APC_Wheeled_01_atgm_base_lxWS: APC_Wheeled_01_base_F
	{
		displayname="Badger IFV (ATGM)";
	}
	class B_D_APC_Wheeled_01_atgm_lxWS: APC_Wheeled_01_atgm_base_lxWS
	{
		displayname="Badger IFV (ATGM)";
	}
	class B_T_APC_Wheeled_01_atgm_lxWS: APC_Wheeled_01_atgm_base_lxWS
	{
		displayname="Badger IFV (ATGM)";
	}
// "AMV-7 Marshall (Mortar)" -> "Badger IFV (Mortar)" [BLUFOR- NATO, NATO (Desert), NATO (Pacific)]
	class APC_Wheeled_01_mortar_base_lxWS: APC_Wheeled_01_base_F
	{
		displayname="Badger IFV (Mortar)";
	}
	class B_D_APC_Wheeled_01_mortar_lxWS: APC_Wheeled_01_mortar_base_lxWS
	{
		displayname="Badger IFV (Mortar)";
	}
	class B_T_APC_Wheeled_01_mortar_lxWS: APC_Wheeled_01_mortar_base_lxWS
	{
		displayname="Badger IFV (Mortar)";
	}
// "PO-30 Orca (UP, Unarmed)" -> "Ka-60 Kasatka (UP, Unarmed)" [BLUFOR- ION Services]
	class O_Heli_Light_02_unarmed_F;
	class B_ION_Heli_Light_02_unarmed_lxWS: O_Heli_Light_02_unarmed_F
	{
		displayname="Ka-60 Kasatka (UP, Unarmed)";
	}
// "PO-30 Orca (UP)" -> "Ka-60 Kasatka (UP)" [BLUFOR- ION Services]
	class O_Heli_Light_02_dynamicLoadout_F;
	class B_ION_Heli_Light_02_dynamicLoadout_lxWS: O_Heli_Light_02_dynamicLoadout_F
	{
		displayname="Ka-60 Kasatka (UP)";
	}
// "CH-49 Mohawk" -> "AW101 Merlin" [BLUFOR- UNA]
	class Heli_Transport_02_base_F;
	class B_UN_Heli_Transport_02_lxWS: Heli_Transport_02_base_F
	{
		displayname="AW101 Merlin";
	}
// Based on the BM-2T Stalker chassis but with the Bumerang-BM turret. 
// "BTR-T Iskatel" -> "BM-2T Stalker (Bumerang-BM)" [OPFOR- CSAT, CSAT (Pacific), SFIA]
	class O_APC_Tracked_02_base_F;
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		displayname="BM-2T Stalker (Bumerang-BM)";
	}
	class O_APC_Tracked_02_30mm_lxWS: O_APC_Tracked_02_cannon_F
	{
		displayname="BM-2T Stalker (Bumerang-BM)";
	}
	class O_T_APC_Tracked_02_30mm_lxWS: O_APC_Tracked_02_30mm_lxWS
	{
		displayname="BM-2T Stalker (Bumerang-BM)";
	}
	class I_SFIA_APC_Tracked_02_30mm_lxWS: O_T_APC_Tracked_02_30mm_lxWS
	{
		displayname="BM-2T Stalker (Bumerang-BM)";
	}
	class O_SFIA_APC_Tracked_02_30mm_lxWS: I_SFIA_APC_Tracked_02_30mm_lxWS
	{
		displayname="BM-2T Stalker (Bumerang-BM)";
	}
// (06/01/24 Update) Western Sahara CDLC by Rotators Collective
// Renamed "Zamak (Zu-23-2)" -> "KamAZ (ZU-23-2)". All research points to it being named "ZU-23-2".
// "Zamak (Zu-23-2)" -> "KamAZ (ZU-23-2)" [BLUFOR- Tura / OPFOR- SFIA, Tura / Independent- AAF, Tura]
	class Truck_02_base_F;
	class Truck_02_aa_base_lxWS: Truck_02_base_F
	{
		displayname="KamAZ (ZU-23-2)";
	}
	class I_A_Truck_02_aa_lxWS: Truck_02_aa_base_lxWS
	{
		displayname="KamAZ (ZU-23-2)";
	}
	class I_SFIA_Truck_02_aa_lxWS: Truck_02_aa_base_lxWS
	{
		displayname="KamAZ (ZU-23-2)";
	}
	class O_SFIA_Truck_02_aa_lxWS: I_SFIA_Truck_02_aa_lxWS
	{
		displayname="KamAZ (ZU-23-2)";
	}
	class B_Tura_Truck_02_aa_lxWS: O_SFIA_Truck_02_aa_lxWS
	{
		displayname="KamAZ (ZU-23-2)";
	}
	class O_Tura_Truck_02_aa_lxWS: O_SFIA_Truck_02_aa_lxWS
	{
		displayname="KamAZ (ZU-23-2)";
	}
	class I_Tura_Truck_02_aa_lxWS: O_SFIA_Truck_02_aa_lxWS
	{
		displayname="KamAZ (ZU-23-2)";
	}
// "Zamak Cargo" -> "KamAZ Cargo" [OPFOR- CSAT, SFIA / Independent- AAF, LDF / Civilian- Civilians]
	class Truck_02_cargo_base_lxWS: Truck_02_base_F
	{
		displayname="KamAZ Cargo";
	}
	class O_Truck_02_cargo_lxWS: Truck_02_cargo_base_lxWS
	{
		displayname="KamAZ Cargo";
	}
	class I_SFIA_Truck_02_cargo_lxWS: Truck_02_cargo_base_lxWS
	{
		displayname="KamAZ Cargo";
	}
	class O_SFIA_Truck_02_cargo_lxWS: I_SFIA_Truck_02_cargo_lxWS
	{
		displayname="KamAZ Cargo";
	}
	class I_Truck_02_cargo_lxWS: Truck_02_cargo_base_lxWS
	{
		displayname="KamAZ Cargo";
	}
	class I_E_Truck_02_cargo_lxWS: I_Truck_02_cargo_lxWS
	{
		displayname="KamAZ Cargo";
	}
	class C_Truck_02_cargo_lxWS: Truck_02_cargo_base_lxWS
	{
		displayname="KamAZ Cargo";
	}
// "Zamak Flatbed" -> "KamAZ Flatbed" [OPFOR- CSAT, CSAT (Pacific), SFIA / Independent- AAF, LDF / Civilian- Civilians]
	class Truck_02_flatbed_base_lxWS: Truck_02_cargo_base_lxWS
	{
		displayname="KamAZ Flatbed";
	}
	class O_Truck_02_flatbed_lxWS: Truck_02_flatbed_base_lxWS
	{
		displayname="KamAZ Flatbed";
	}
	class O_T_Truck_02_flatbed_lxWS: O_Truck_02_flatbed_lxWS
	{
		displayname="KamAZ Flatbed";
	}
	class I_SFIA_Truck_02_flatbed_lxWS: Truck_02_flatbed_base_lxWS
	{
		displayname="KamAZ Flatbed";
	}
	class O_SFIA_Truck_02_flatbed_lxWS: I_SFIA_Truck_02_flatbed_lxWS
	{
		displayname="KamAZ Flatbed";
	}
	class I_Truck_02_flatbed_lxWS: Truck_02_flatbed_base_lxWS
	{
		displayname="KamAZ Flatbed";
	}
	class I_E_Truck_02_flatbed_lxWS: I_Truck_02_flatbed_lxWS
	{
		displayname="KamAZ Flatbed";
	}
	class C_Truck_02_flatbed_lxWS: Truck_02_flatbed_base_lxWS
	{
		displayname="KamAZ Flatbed";
	}
// "Zamak Repair" -> "KamAZ Repair" [OPFOR- SFIA]
	class Truck_02_box_base_lxWS: Truck_02_base_F
	{
		displayname="KamAZ Repair";
	}
	class I_SFIA_Truck_02_box_lxWS: Truck_02_box_base_lxWS
	{
		displayname="KamAZ Repair";
	}
	class O_SFIA_Truck_02_box_lxWS: I_SFIA_Truck_02_box_lxWS
	{
		displayname="KamAZ Repair";
	}
	class C_IDAP_Truck_02_box_lxWS: Truck_02_box_base_lxWS
	{
		displayname="KamAZ Repair";
	}
// "Zamak Racing" -> "KamAZ Racing" [Civilian- Civilians]
	class C_Truck_02_racing_lxWS: Truck_02_box_base_lxWS
	{
		displayname="KamAZ Racing";
	}
// "Zamak Ammo" -> "KamAZ Ammo" [OPFOR- SFIA]
	class Truck_02_Ammo_base_lxWS: Truck_02_base_F
	{
		displayname="KamAZ Ammo";
	}
	class I_SFIA_Truck_02_Ammo_lxWS: Truck_02_Ammo_base_lxWS
	{
		displayname="KamAZ Ammo";
	}
	class O_SFIA_Truck_02_Ammo_lxWS: I_SFIA_Truck_02_Ammo_lxWS
	{
		displayname="KamAZ Ammo";
	}
// "Zamak Fuel" -> "KamAZ Fuel" [OPFOR- SFIA]
	class Truck_02_fuel_base_F;
	class O_Truck_02_fuel_F: Truck_02_fuel_base_F
	{
		displayname="KamAZ Fuel";
	}
	class I_SFIA_Truck_02_fuel_lxWS: O_Truck_02_fuel_F
	{
		displayname="KamAZ Fuel";
	}
	class O_SFIA_Truck_02_fuel_lxWS: I_SFIA_Truck_02_fuel_lxWS
	{
		displayname="KamAZ Fuel";
	}
// "Zamak Transport" -> "KamAZ Transport" [OPFOR- SFIA]
	class Truck_02_transport_base_F;
	class O_Truck_02_transport_F: Truck_02_transport_base_F
		{
		displayname="KamAZ Transport";
	}
	class I_SFIA_Truck_02_transport_lxWS: O_Truck_02_transport_F
	{
		displayname="KamAZ Transport";
	}
	class O_SFIA_Truck_02_transport_lxWS: I_SFIA_Truck_02_transport_lxWS
	{
		displayname="KamAZ Transport";
	}
// "Zamak Transport (Covered)" -> "KamAZ Transport (Covered)" [BLUFORE- ION Services / OPFOR- SFIA]
	class O_Truck_02_covered_F: Truck_02_base_F
	{
		displayname="KamAZ Transport (Covered)";
	}
	class B_ION_Truck_02_covered_lxWS: O_Truck_02_covered_F
	{
		displayname="KamAZ Transport (Covered)";
	}
	class I_SFIA_Truck_02_covered_lxWS: O_Truck_02_covered_F
	{
		displayname="KamAZ Transport (Covered)";
	}
	class O_SFIA_Truck_02_covered_lxWS: I_SFIA_Truck_02_covered_lxWS
	{
		displayname="KamAZ Transport (Covered)";
	}
// (06/01/24 Update) Western Sahara CDLC by Rotators Collective
// VEHICLES
// Renamed "Offroad (Desert)" variants to "Q7/F-150D Offroad". Still the same fusion Offroad modelled after two real vehicles, the Audi Q7 (front) and the Ford F-150 (rear). However, this desert variant ("designated with the "D") comes with a unique desert intake Snorkel system.
// "Offroad (Desert)" -> "Q7/F-150D Offroad"
	class Offroad_01_base_lxWS;
	class B_ION_Offroad_lxWS: Offroad_01_base_lxWS
	{
		displayname="Q7/F-150D Offroad";
	}
	class B_UN_Offroad_lxWS: Offroad_01_base_lxWS
	{
		displayname="Q7/F-150D Offroad";
	}
	class I_SFIA_Offroad_lxWS: Offroad_01_base_lxWS
	{
		displayname="Q7/F-150D Offroad";
	}
	class O_SFIA_Offroad_lxWS: I_SFIA_Offroad_lxWS
	{
		displayname="Q7/F-150D Offroad";
	}
	class C_Offroad_lxWS: Offroad_01_base_lxWS
	{
		displayname="Q7/F-150D Offroad";
	}
	class C_IDAP_Offroad_lxWS: Offroad_01_base_lxWS
	{
		displayname="Q7/F-150D Offroad";
	}
// Renamed "Offroad (Desert, HMG)" to "Q7/F-150D Offroad (M2HB)". M2HB variant of the Q7/F-150D Offroad.
// "Offroad (Desert, HMG)" -> "Q7/F-150D Offroad (M2HB)" [BLUFOR- ION Services / OPFOR- SFIA / Independent- SFIA]
	class Offroad_01_armed_lxWS;
	class B_ION_Offroad_armed_lxWS: Offroad_01_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (M2HB)";
	}
	class I_SFIA_Offroad_armed_lxWS: Offroad_01_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (M2HB)";
	}
	class O_SFIA_Offroad_armed_lxWS: I_SFIA_Offroad_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (M2HB)";
	}
// "Offroad (Desert, AT)" -> "Q7/F-150D Offroad (SPG-9)". SPG-9 variant of the Q7/F-150D Offroad.
// "Offroad (Desert, AT)" -> "Q7/F-150D Offroad (SPG-9)" [OPFOR- SFIA / Independent- SFIA]
	class Offroad_01_AT_lxWS;
	class I_SFIA_Offroad_AT_lxWS: Offroad_01_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (SPG-9)";
	}
	class O_SFIA_Offroad_AT_lxWS: I_SFIA_Offroad_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (SPG-9)";
	}
// Renamed "Offroad (UP)" variants to "Q7/F-150D Offroad (UP)". These are upgraded/up-armored versions of the Q7/F-150D Offroad and can also install the unique desert intake Snorkel system.
// "Offroad (UP)" -> "Q7/F-150D Offroad (UP)" [BLUFOR- FIA, TURA, UNA / OPFOR- FIA, SFIA / Independent- FIA, SFIA / Independent- FIA, Tura]
	class Offroad_01_armor_base_lxWS;
	class I_G_Offroad_01_armor_base_lxWS: Offroad_01_armor_base_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	}
	class B_G_Offroad_01_armor_base_lxWS: I_G_Offroad_01_armor_base_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	}
	class I_Tura_Offroad_armor_lxWS: Offroad_01_armor_base_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	}
	class B_Tura_Offroad_armor_lxWS: I_Tura_Offroad_armor_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	}
	class B_UN_Offroad_Armor_lxWS: Offroad_01_armor_base_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	}
	class O_Tura_Offroad_armor_lxWS: I_Tura_Offroad_armor_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	}
	class O_G_Offroad_01_armor_base_lxWS: I_G_Offroad_01_armor_base_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	}
// Renamed "Offroad (UP, HMG)" to "Q7/F-150D Offroad (UP, M2HB)". M2HB variant of the Q7/F-150D Offroad (UP). 
// "Offroad (UP, HMG)" -> "Q7/F-150D Offroad (UP, M2HB)" [BLUFOR- FIA, Tura, UNA / OPFOR- SFIA / Independent- FIA, Tura, SFIA / Independent- FIA, Tura]
	class Offroad_01_armor_armed_lxWS;
	class I_G_Offroad_01_armor_armed_lxWS: Offroad_01_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	}
	class B_G_Offroad_01_armor_armed_lxWS: I_G_Offroad_01_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	}
	class I_Tura_Offroad_armor_armed_lxWS: Offroad_01_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	}
	class B_Tura_Offroad_armor_armed_lxWS: I_Tura_Offroad_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	}
	class O_G_Offroad_01_armor_armed_lxWS: I_G_Offroad_01_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	}
		class O_Tura_Offroad_armor_armed_lxWS: I_Tura_Offroad_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	}
// "Offroad (UP, AT)" -> "Q7/F-150D Offroad (UP, SPG-9)". SPG-9 variant of the Q7/F-150D Offroad (UP). 
// "Offroad (UP, AT)" -> "Q7/F-150D Offroad (UP, SPG-9)" [BLUFOR- FIA, Tura, UNA / OPFOR- SFIA / Independent- FIA, Tura, SFIA / Independent- FIA, Tura]
	class Offroad_01_armor_AT_lxWS;
	class I_G_Offroad_01_armor_AT_lxWS: Offroad_01_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	}
	class B_G_Offroad_01_armor_AT_lxWS: I_G_Offroad_01_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	}
	class I_Tura_Offroad_armor_AT_lxWS: Offroad_01_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	}
	class B_Tura_Offroad_armor_AT_lxWS: I_Tura_Offroad_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	}
	class O_G_Offroad_01_armor_AT_lxWS: I_G_Offroad_01_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	}
	class O_Tura_Offroad_armor_AT_lxWS: I_Tura_Offroad_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	}
// Renamed "Quad Bike" to "Grizzly 450 ATV". Western Sahara added variant of the Grizzly 450 ATV.
// "Quad Bike" -> "Grizzly 450 ATV" [BLUFOR- ION Services, NATO]
	class B_Quadbike_01_F;
	class B_ION_Quadbike_01_lxWS: B_Quadbike_01_F
	{
		displayname="Grizzly 450 ATV";
	}
	class B_D_Quadbike_01_lxWS: B_Quadbike_01_F
	{
		displayname="Grizzly 450 ATV";
	}
// Renamed "AMV-7 Marshall" to "Badger IFV". Forgot to rename the default cannon variants for ION and UNA.
// "AMV-7 Marshall" -> "Badger IFV" [BLUFOR- ION Services, UNA]
	class B_APC_Wheeled_01_cannon_lxWS: APC_Wheeled_01_base_F
	{
		displayname="Badger IFV";
	}
	class B_UN_APC_Wheeled_01_cannon_lxWS: B_APC_Wheeled_01_cannon_lxWS
	{
		displayname="Badger IFV";
	}
	class B_ION_APC_Wheeled_01_cannon_lxWS: B_APC_Wheeled_01_cannon_lxWS
	{
		displayname="Badger IFV";
	}
// DRONES
// Renamed "IED UAV" to "AP-5X Bustard (IED)". Fictional concept hexacopter drone made by Bohemia Interactive. Renamed to match with the other AP-5 variants. Comes with "X" to designate it's experimental/modified, as the in-game manual says it was self-made from looted AP-5 Bustard gun drones and turned into grenade carriers. Western Sahara added variant.
// "IED UAV" -> "AP-5X Bustard (IED)" [BLUFOR- FIA, Tura / OPFOR- FIA, Tura / Independent- FIA, Tura ]
	class UAV_02_IED_Base_lxWS;
	class B_G_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	}
	class B_Tura_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	}
	class O_G_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	}
	class O_Tura_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	}
	class I_G_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	}
	class I_Tura_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	}
// Renamed "Drone" to "AR-2U Darter". Western Sahara added variant of the AR-2U Darter.
// "Drone" -> "AR-2U Darter" [Civilian- Civlians]
	class UAV_01_base_F;
	class CIV_UAV_01_lxWS: UAV_01_base_F
	{
		displayname="AR-2U Darter";
	}
// Renamed "UGV Stomper" to "Crusher UGCV". Western Sahara added variant of the Crusher UGCV.
// "UGV Stomper" -> "Crusher UGCV" [BLUFOR- NATO (Desert)]
	class B_UGV_01_F;
	class B_D_UGV_01_lxWS: B_UGV_01_F
	{
		displayname="Crusher UGCV";
	}
// Renamed "UGV Stomper RCWS" to "Crusher UGCV (RCWS)". Western Sahara added variant of the Crusher UGCV (RCWS).
// "UGV Stomper RCWS" -> "Crusher UGCV (RCWS)" [BLUFOR- NATO (Desert)]
	class B_UGV_01_rcws_F;
	class B_D_UGV_01_rcws_lxWS: B_UGV_01_rcws_F
	{
		displayname="Crusher UGCV (RCWS)";
	}
// STATICS
// Added "Zu-23-2" static variant for proper capitalization to "ZU-23-2".
// "Zu-23-2" -> "ZU-23-2" [BLUFOR- Tura / OPFOR- SFIA, Tura, / Independent- SFIA, Tura]
	class zu23_base_lxWS;
	class I_SFIA_ZU23_lxWS: zu23_base_lxWS
	{
		displayname="ZU-23-2";
	}
	class O_SFIA_ZU23_lxWS: I_SFIA_ZU23_lxWS
	{
		displayname="ZU-23-2";
	}
	class B_Tura_ZU23_lxWS: O_SFIA_ZU23_lxWS
	{
		displayname="ZU-23-2";
	}
	class O_Tura_ZU23_lxWS: O_SFIA_ZU23_lxWS
	{
		displayname="ZU-23-2";
	}
	class I_Tura_ZU23_lxWS: O_SFIA_ZU23_lxWS
	{
		displayname="ZU-23-2";
	}
// Renamed "M2 HMG .50" turret variants to "M2HB".
// "M2 HMG .50" -> "M2HB" [BLUFOR- Tura / OPFOR- SFIA, Tura, / Independent- SFIA, Tura]
	class I_G_HMG_02_F;
	class I_SFIA_HMG_02_lxWS: I_G_HMG_02_F
	{
		displayname="M2HB";
	}
	class I_Tura_HMG_02_lxWS: I_SFIA_HMG_02_lxWS
	{
		displayname="M2HB";
	}
	class B_Tura_HMG_02_lxWS: I_Tura_HMG_02_lxWS
	{
		displayname="M2HB";
	}
	class O_SFIA_HMG_02_lxWS: I_SFIA_HMG_02_lxWS
	{
		displayname="M2HB";
	}
		class O_Tura_HMG_02_lxWS: I_Tura_HMG_02_lxWS
	{
		displayname="M2HB";
	}
// Renamed "M2 HMG .50 (Raised)" -> "M2HB (Raised)".
// "M2 HMG .50 (Raised)" -> "M2HB (Raised)" [BLUFOR- Tura / OPFOR- SFIA, Tura, / Independent- SFIA, Tura]
	class I_G_HMG_02_high_F;
	class I_SFIA_HMG_02_high_lxWS: I_G_HMG_02_high_F
	{
		displayname="M2HB (Raised)";
	}
	class I_Tura_HMG_02_high_lxWS: I_SFIA_HMG_02_high_lxWS
	{
		displayname="M2HB (Raised)";
	}
	class B_Tura_HMG_02_high_lxWS: I_Tura_HMG_02_high_lxWS
	{
		displayname="M2HB (Raised)";
	}
	class O_SFIA_HMG_02_high_lxWS: I_SFIA_HMG_02_high_lxWS
	{
		displayname="M2HB (Raised)";
	}
	class O_Tura_HMG_02_high_lxWS: I_Tura_HMG_02_high_lxWS
	{
		displayname="M2HB (Raised)";
	}
};