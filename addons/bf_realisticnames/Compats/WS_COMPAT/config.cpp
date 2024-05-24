class CfgPatches
{
	class real_names_2035_ws_compat
	{
		addonRootClass="ADDON"; //Replace this with fisch's config name
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
// The AA40 12G Shotgun is a fictional futurised take on the AA-12.
// "AA40 12G" -> "AA-40"
	class Rifle_Base_F;
	class sgun_aa40_base_lxWS: Rifle_Base_F
	{
		displayName="AA-40";
	}
// "AA40 12G (Sand)" -> "AA-40 (Sand)"
	class sgun_aa40_tan_lxWS: sgun_aa40_base_lxWS
	{
		displayName="AA-40 (Sand)";
	}
// "AA40 12G (Snake)" -> "AA-40 (Snake)"
	class sgun_aa40_snake_lxWS: sgun_aa40_base_lxWS
	{
		displayName="AA-40 (Snake)";
	}
// Directly based on the real-world Israeli-made Galil rifle.
// "Galat ARM 7.62 mm" -> "IMI Galil"
	class arifle_Galat_base_lxWS;
	class arifle_Galat_lxWS: arifle_Galat_base_lxWS
	{
		displayName="IMI Galil";
	}
// "Galat ARM 7.62 mm (Old)" -> "IMI Galil (Old)"
	class arifle_Galat_worn_lxWS: arifle_Galat_lxWS
	{
		displayName="IMI Galil (Old)";
	}
// Based on the standalone configuration of the Beretta GLX160.
// "GLX 40 mm" -> "GLX160"
	class glaunch_GLX_base_lxWS: Rifle_Base_F
	{
		displayName="GLX160";
	}
// "GLX 40 mm (Snake)" -> "GLX160 (Snake)"
	class glaunch_GLX_snake_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX160 (Snake)";
	}
// "GLX 40 mm (Hex)" -> "GLX160 (Hex)"
	class glaunch_GLX_hex_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX160 (Hex)";
	}
// "GLX 40 mm (Green Hex)" -> "GLX160 (Green Hex)"
	class glaunch_GLX_ghex_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX160 (Green Hex)";
	}
// "GLX 40 mm (Camo)" -> "GLX160 (Camo)"
	class glaunch_GLX_camo_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX160 (Camo)";
	}
// "GLX 40 mm (Sand)" -> "GLX160 (Sand)"
	class glaunch_GLX_tan_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX160 (Sand)";
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
// Directly based on the Belgian-made FAL rifle.
// "SLR 7.62 mm (Wood)" -> "FN FAL (Wood)"
	class DMR_06_base_F;
	class arifle_SLR_lxWS: DMR_06_base_F
	{
		displayName="FN FAL (Wood)";
	}
// "SLR 7.62 mm" -> "FN FAL"
	class arifle_SLR_V_lxWS: arifle_SLR_lxWS
	{
		displayName="FN FAL";
	}
// "SLR 7.62 mm (Desert)" -> "FN FAL (Desert)"
	class arifle_SLR_D_lxWS: arifle_SLR_lxWS
	{
		displayName="FN FAL (Desert)";
	}
// "SLR 7.62 mm (Jungle)" -> "FN FAL (Jungle)"
	class arifle_SLR_V_camo_lxWS: arifle_SLR_V_lxWS
	{
		displayName="FN FAL (Jungle)";
	}
// FN FAL with a rifle grenade adapter.
// "SLR GL 7.62 mm (Wood) -> ""FN FAL GL (Wood)"
	class arifle_SLR_GL_lxWS: arifle_SLR_lxWS
	{
		displayName="FN FAL GL (Wood)";
	}
// "SLR GL 7.62 mm" -> -> "FN FAL GL"
	class arifle_SLR_V_GL_lxWS: arifle_SLR_V_lxWS
	{
		displayName="FN FAL GL";
	}
// Directly modelled after the South African-made Vektor R4.
// "Velko R4 5.56 mm" -> "Vektor R4"
	class arifle_Velko_base_lxWS;
	class arifle_Velko_lxWS: arifle_Velko_base_lxWS
	{
		displayName="Vektor R4";
	}
// Velko R5 is based on the Vektor R5 Carbine derivative.
// "Velko R5 5.56 mm" -> "Vektor R5"
	class arifle_VelkoR5_lxWS: arifle_Velko_base_lxWS
	{
		displayName="Vektor R5";
	}
// "Velko R5 5.56 mm (Snake)" -> "Vektor R5 (Snake)"
	class arifle_VelkoR5_snake_lxWS: arifle_VelkoR5_lxWS
	{
		displayName="Vektor R5 (Snake)";
	}
// Underbarrel GL variant of the Vektor R5 Carbine.
// "Velko R5 GL 5.56 mm" -> "Vektor R5 GL"
	class arifle_VelkoR5_GL_lxWS: arifle_VelkoR5_lxWS
	{
		displayName="Vektor R5 GL";
	}
// "Velko R5 GL 5.56 mm (Snake)" -> "Vektor R5 GL (Snake)"
	class arifle_VelkoR5_GL_snake_lxWS: arifle_VelkoR5_GL_lxWS
	{
		displayName="Vektor R5 GL (Snake)";
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
// "MSE-3 Marid (HMG)" -> "Otokar ARMA (HMG)" [BLUFOR- Gendarmerie, ION Services, UNA, / OPFOR- CSAT, CSAT (Pacific), Gendarmerie, SFIA]
	class APC_Wheeled_02_hmg_base_lxws: APC_Wheeled_02_base_v2_F
	{
		displayname="Otokar ARMA (HMG)";
	}
	class I_SFIA_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws
	{
		displayname="Otokar ARMA (HMG)";
	}
	class O_SFIA_APC_Wheeled_02_hmg_lxWS: I_SFIA_APC_Wheeled_02_hmg_lxWS
	{
		displayname="Otokar ARMA (HMG)";
	}
	class O_GEN_APC_Wheeled_02_hmg_lxWS: O_SFIA_APC_Wheeled_02_hmg_lxWS
	{
		displayname="Otokar ARMA (HMG)";
	}
	class B_GEN_APC_Wheeled_02_hmg_lxWS: O_GEN_APC_Wheeled_02_hmg_lxWS
	{
		displayname="Otokar ARMA (HMG)";
	}
	class B_ION_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws
	{
		displayname="Otokar ARMA (HMG)";
	}
	class B_UNA_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws
	{
		displayname="Otokar ARMA (HMG)";
	}
	class O_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws
	{
		displayname="Otokar ARMA (HMG)";
	}
	class O_T_APC_Wheeled_02_hmg_lxWS: O_APC_Wheeled_02_hmg_lxWS
	{
		displayname="Otokar ARMA (HMG)";
	}
// "AMV-7 Marchall (CV)" -> "Badger IFV (CV)" [BLUFOR- ION Services, NATO, NATO (Desert), NATO (Pacific), UNA]
	class APC_Wheeled_01_base_F;
	class APC_Wheeled_01_command_base_lxWS: APC_Wheeled_01_base_F
	{
		displayname="Badger IFV (CV)";
	}
	class B_ION_APC_Wheeled_01_command_lxWS: APC_Wheeled_01_command_base_lxWS
	{
		displayname="Badger IFV (CV)";
	}
	class B_D_APC_Wheeled_01_command_lxWS: APC_Wheeled_01_command_base_lxWS
	{
		displayname="Badger IFV (CV)";
	}
	class B_T_APC_Wheeled_01_command_lxWS: APC_Wheeled_01_command_base_lxWS
	{
		displayname="Badger IFV (CV)";
	}
	class B_UN_APC_Wheeled_01_command_lxWS: APC_Wheeled_01_command_base_lxWS
	{
		displayname="Badger IFV (CV)";
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
// "Zamak (Zu-23-2)" -> "KamAZ (Zu-23-2)" [BLUFOR- Tura / OPFOR- SFIA, Tura / Independent- AAF, Tura]
	class Truck_02_base_F;
	class Truck_02_aa_base_lxWS: Truck_02_base_F
	{
		displayname="KamAZ (Zu-23-2)";
	}
	class I_A_Truck_02_aa_lxWS: Truck_02_aa_base_lxWS
	{
		displayname="KamAZ (Zu-23-2)";
	}
	class I_SFIA_Truck_02_aa_lxWS: Truck_02_aa_base_lxWS
	{
		displayname="KamAZ (Zu-23-2)";
	}
	class O_SFIA_Truck_02_aa_lxWS: I_SFIA_Truck_02_aa_lxWS
	{
		displayname="KamAZ (Zu-23-2)";
	}
	class B_Tura_Truck_02_aa_lxWS: O_SFIA_Truck_02_aa_lxWS
	{
		displayname="KamAZ (Zu-23-2)";
	}
	class O_Tura_Truck_02_aa_lxWS: O_SFIA_Truck_02_aa_lxWS
	{
		displayname="KamAZ (Zu-23-2)";
	}
	class I_Tura_Truck_02_aa_lxWS: O_SFIA_Truck_02_aa_lxWS
	{
		displayname="KamAZ (Zu-23-2)";
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
};