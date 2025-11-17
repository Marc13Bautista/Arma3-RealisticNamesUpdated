class CfgPatches
{
	class real_names_2035_ws_compat
	{
		addonRootClass="real_names_2035_base";
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
	class Rifle_Base_F;
	class sgun_aa40_base_lxWS: Rifle_Base_F
	{
		displayName="AA-12";
	};
	class sgun_aa40_tan_lxWS: sgun_aa40_base_lxWS
	{
		displayName="AA-12 (Sand)";
	};
	class sgun_aa40_snake_lxWS: sgun_aa40_base_lxWS
	{
		displayName="AA-12 (Snake)";
	};
	class arifle_Galat_base_lxWS;
	class arifle_Galat_lxWS: arifle_Galat_base_lxWS
	{
		displayName="Galil ARM";
	};
	class arifle_Galat_worn_lxWS: arifle_Galat_lxWS
	{
		displayName="Galil ARM (Old)";
	};
	class glaunch_GLX_base_lxWS;
	class glaunch_GLX_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX 160";
	};
	class glaunch_GLX_snake_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX 160 (Snake)";
	};
	class glaunch_GLX_hex_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX 160 (Hex)";
	};
	class glaunch_GLX_ghex_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX 160 (Green Hex)";
	};
	class glaunch_GLX_camo_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX 160 (Camo)";
	};
	class glaunch_GLX_tan_lxWS: glaunch_GLX_base_lxWS
	{
		displayName="GLX 160 (Sand)";
	};
	class srifle_EBR_F;
	class srifle_EBR_blk_lxWS: srifle_EBR_F
	{
		displayName="Mk14 Mod 1 EBR (Black)";
	};
	class srifle_EBR_snake_lxWS: srifle_EBR_F
	{
		displayName="Mk14 Mod 1 EBR (Snake)";
	};
	class LMG_S77_base_lxWS;
	class LMG_S77_lxWS: LMG_S77_base_lxWS
	{
		displayName="Vektor SS-77";
	};
	class LMG_S77_AAF_lxWS: LMG_S77_base_lxWS
	{
		displayName="Vektor SS-77 (Camo)";
	};
	class LMG_S77_Desert_lxWS: LMG_S77_base_lxWS
	{
		displayName="Vektor SS-77 (Desert)";
	};
	class LMG_S77_GHex_lxWS: LMG_S77_base_lxWS
	{
		displayName="Vektor SS-77 (Green Hex)";
	};
	class LMG_S77_Hex_lxWS: LMG_S77_base_lxWS
	{
		displayName="Vektor SS-77 (Hex)";
	};
	class LMG_S77_Compact_base_lxWS: LMG_S77_base_lxWS
	{
		displayName="Vektor SS-77 Compact";
	};
	class LMG_S77_Compact_Snakeskin_lxWS: LMG_S77_Compact_base_lxWS
	{
		displayName="Vektor SS-77 Compact (Snake)";
	};
	class DMR_06_base_F;
	class arifle_SLR_lxWS: DMR_06_base_F
	{
		displayName="FN FAL 50.00 (Wood)";
	};
	class arifle_SLR_V_lxWS: arifle_SLR_lxWS
	{
		displayName="FN FAL 50.00";
	};
	class arifle_SLR_D_lxWS: arifle_SLR_lxWS
	{
		displayName="FN FAL 50.00 (Desert)";
	};
	class arifle_SLR_V_camo_lxWS: arifle_SLR_V_lxWS
	{
		displayName="FN FAL 50.00 (Jungle)";
	};
	class arifle_SLR_GL_lxWS: arifle_SLR_lxWS
	{
		displayName="FN FAL 50.00 GL (Wood)";
	};
	class arifle_SLR_V_GL_lxWS: arifle_SLR_V_lxWS
	{
		displayName="FN FAL 50.00 GL";
	};
	class arifle_Velko_base_lxWS;
	class arifle_Velko_lxWS: arifle_Velko_base_lxWS
	{
		displayName="Vektor R4";
	};
	class arifle_VelkoR5_lxWS: arifle_Velko_base_lxWS
	{
		displayName="Vektor R5 Carbine";
	};
	class arifle_VelkoR5_snake_lxWS: arifle_VelkoR5_lxWS
	{
		displayName="Vektor R5 Carbine (Snake)";
	};
	class arifle_VelkoR5_GL_lxWS: arifle_VelkoR5_lxWS
	{
		displayName="Vektor R5 Carbine GL";
	};
	class arifle_VelkoR5_GL_snake_lxWS: arifle_VelkoR5_GL_lxWS
	{
		displayName="Vektor R5 Carbine GL (Snake)";
	};
	class arifle_SPAR_01_base_F;
	class arifle_XMS_Base_lxWS: arifle_SPAR_01_base_F
	{
		displayName="XMS";
	};
	class arifle_XMS_Base_khk_lxWS: arifle_XMS_Base_lxWS
	{
		displayName="XMS (Khaki)";
	};
	class arifle_XMS_Base_Sand_lxWS: arifle_XMS_Base_lxWS
	{
		displayName="XMS (Sand)";
	};
	class arifle_XMS_Gray_lxWS: arifle_XMS_Base_lxWS
	{
		displayName="XMS (Gray)";
	};
	class arifle_XMS_Camo_lxWS: arifle_XMS_Base_lxWS
	{
		displayName="XMS (Stripes)";
	};
	class arifle_XMS_GL_lxWS: arifle_XMS_Base_lxWS
	{
		displayName="XMS GL";
	};
	class arifle_XMS_GL_khk_lxWS: arifle_XMS_GL_lxWS
	{
		displayName="XMS GL (Khaki)";
	};
	class arifle_XMS_GL_Sand_lxWS: arifle_XMS_GL_lxWS
	{
		displayName="XMS GL (Sand)";
	};
	class arifle_XMS_GL_Gray_lxWS: arifle_XMS_GL_lxWS
	{
		displayName="XMS GL (Gray)";
	};
	class arifle_XMS_GL_Camo_lxWS: arifle_XMS_GL_lxWS
	{
		displayName="XMS GL (Stripes)";
	};
	class arifle_XMS_Shot_lxWS: arifle_XMS_Base_lxWS
	{
		displayName="XMS SG";
	};
	class arifle_XMS_Shot_khk_lxWS: arifle_XMS_Shot_lxWS
	{
		displayName="XMS SG (Khaki)";
	};
	class arifle_XMS_Shot_Sand_lxWS: arifle_XMS_Shot_lxWS
	{
		displayName="XMS SG (Sand)";
	};
	class arifle_XMS_Shot_Gray_lxWS: arifle_XMS_Shot_lxWS
	{
		displayName="XMS SG (Gray)";
	};
	class arifle_XMS_Shot_Camo_lxWS: arifle_XMS_Shot_lxWS
	{
		displayName="XMS SG (Stripes)";
	};
	class arifle_XMS_M_lxWS: arifle_XMS_Base_lxWS
	{
		displayName="XMS SW";
	};
	class arifle_XMS_M_khk_lxWS: arifle_XMS_M_lxWS
	{
		displayName="XMS SW (Khaki)";
	};
	class arifle_XMS_M_Sand_lxWS: arifle_XMS_M_lxWS
	{
		displayName="XMS SW (Sand)";
	};
	class arifle_XMS_M_Gray_lxWS: arifle_XMS_M_lxWS
	{
		displayName="XMS SW (Gray)";
	};
	class arifle_XMS_M_Camo_lxWS: arifle_XMS_M_lxWS
	{
		displayName="XMS SW (Stripes)";
	};
	class srifle_GM6_F;
	class srifle_GM6_snake_lxWS: srifle_GM6_F
	{
		displayName="GM6 Lynx (Snake)";
	};
	class arifle_SLR_Para_lxWS: arifle_SLR_V_lxWS
	{
		displayName="FN FAL 50.00 Para";
	};
	class arifle_SLR_Para_snake_lxWS: arifle_SLR_Para_lxWS
	{
		displayName="FN FAL 50.00 Para (Snake)";
	};
	class launch_RPG32_F;
	class launch_RPG32_tan_lxWS: launch_RPG32_F
	{
		displayName="RPG-32 (Sand)";
	};
	class optic_Arco;
	class optic_Arco_hex_lxWS: optic_Arco
	{
		displayName="ELCAN SpecterOS (Hex)";
	};
	class optic_Holosight;
	class optic_Holosight_snake_lxWS: optic_Holosight
	{
		displayName="EOTech XPS3 (Snake)";
	};
	class optic_Holosight_smg;
	class optic_Holosight_smg_snake_lxWS: optic_Holosight_smg
	{
		displayName="EOTech XPS3 SMG (Snake)";
	};
	class optic_Hamr;
	class optic_Hamr_arid_lxWS: optic_Hamr
	{
		displayName="Leupold Mark 4 HAMR (Arid)";
	};
	class optic_Hamr_lush_lxWS: optic_Hamr
	{
		displayName="Leupold Mark 4 HAMR (Lush)";
	};
	class optic_Hamr_sand_lxWS: optic_Hamr
	{
		displayName="Leupold Mark 4 HAMR (Sand)";
	};
	class optic_Hamr_snake_lxWS: optic_Hamr
	{
		displayName="Leupold Mark 4 HAMR (Snake)";
	};
	class ItemCore;
	class optic_r1_high_lxWS: ItemCore
	{
		displayName="Aimpoint Micro R-1 (High, Black)";
	};
	class optic_r1_high_arid_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (High, Arid)";
	};
	class optic_r1_high_khaki_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (High, Khaki)";
	};
	class optic_r1_high_lush_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (High, Lush)";
	};
	class optic_r1_high_sand_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (High, Sand)";
	};
	class optic_r1_high_snake_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (High, Snake)";
	};
	class optic_r1_low_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (Low, Black)";
	};
	class optic_r1_low_arid_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (Low, Arid)";
	};
	class optic_r1_low_khaki_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (Low, Khaki)";
	};
	class optic_r1_low_lush_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (Low, Lush)";
	};
	class optic_r1_low_sand_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (Low, Sand)";
	};
	class optic_r1_low_snake_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (Low, Snake)";
	};
	class optic_DMS;
	class optic_DMS_snake_lxWS: optic_DMS
	{
		displayName="Burris XTR II (Snake)";
	};
	class optic_r1_high_black_sand_lxWS: optic_r1_high_lxWS
	{
		displayName="Aimpoint Micro R-1 (High, Black, Sand)";
	};
};
class cfgVehicles
{
	class APC_Wheeled_02_base_v2_F;
	class APC_Wheeled_02_unarmed_base_lxws: APC_Wheeled_02_base_v2_F
	{
		displayname="Otokar ARMA (Unarmed)";
	};
	class B_UNA_APC_Wheeled_02_unarmed_lxWS: APC_Wheeled_02_unarmed_base_lxws
	{
		displayname="Otokar ARMA (Unarmed)";
	};
	class O_APC_Wheeled_02_unarmed_lxWS: APC_Wheeled_02_unarmed_base_lxws
	{
		displayname="Otokar ARMA (Unarmed)";
	};
	class O_T_APC_Wheeled_02_unarmed_lxWS: O_APC_Wheeled_02_unarmed_lxWS
	{
		displayname="Otokar ARMA (Unarmed)";
	};
	class I_SFIA_APC_Wheeled_02_unarmed_lxWS: APC_Wheeled_02_unarmed_base_lxws
	{
		displayname="Otokar ARMA (Unarmed)";
	};
	class O_SFIA_APC_Wheeled_02_unarmed_lxWS: I_SFIA_APC_Wheeled_02_unarmed_lxWS
	{
		displayname="Otokar ARMA (Unarmed)";
	};
	class APC_Wheeled_02_hmg_base_lxws: APC_Wheeled_02_base_v2_F
	{
		displayname="Otokar ARMA (M2HB)";
	};
	class I_SFIA_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws
	{
		displayname="Otokar ARMA (M2HB)";
	};
	class O_SFIA_APC_Wheeled_02_hmg_lxWS: I_SFIA_APC_Wheeled_02_hmg_lxWS
	{
		displayname="Otokar ARMA (M2HB)";
	};
	class O_GEN_APC_Wheeled_02_hmg_lxWS: O_SFIA_APC_Wheeled_02_hmg_lxWS
	{
		displayname="Otokar ARMA (M2HB)";
	};
	class B_GEN_APC_Wheeled_02_hmg_lxWS: O_GEN_APC_Wheeled_02_hmg_lxWS
	{
		displayname="Otokar ARMA (M2HB)";
	};
	class B_ION_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws
	{
		displayname="Otokar ARMA (M2HB)";
	};
	class B_UNA_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws
	{
		displayname="Otokar ARMA (M2HB)";
	};
	class O_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws
	{
		displayname="Otokar ARMA (M2HB)";
	};
	class O_T_APC_Wheeled_02_hmg_lxWS: O_APC_Wheeled_02_hmg_lxWS
	{
		displayname="Otokar ARMA (M2HB)";
	};
	class APC_Wheeled_01_base_F;
	class APC_Wheeled_01_command_base_lxWS: APC_Wheeled_01_base_F
	{
		displayname="Badger IFV (Command)";
	};
	class B_ION_APC_Wheeled_01_command_lxWS: APC_Wheeled_01_command_base_lxWS
	{
		displayname="Badger IFV (Command)";
	};
	class B_D_APC_Wheeled_01_command_lxWS: APC_Wheeled_01_command_base_lxWS
	{
		displayname="Badger IFV (Command)";
	};
	class B_T_APC_Wheeled_01_command_lxWS: APC_Wheeled_01_command_base_lxWS
	{
		displayname="Badger IFV (Command)";
	};
	class B_UN_APC_Wheeled_01_command_lxWS: APC_Wheeled_01_command_base_lxWS
	{
		displayname="Badger IFV (Command)";
	};
	class APC_Wheeled_01_atgm_base_lxWS: APC_Wheeled_01_base_F
	{
		displayname="Badger IFV (ATGM)";
	};
	class B_D_APC_Wheeled_01_atgm_lxWS: APC_Wheeled_01_atgm_base_lxWS
	{
		displayname="Badger IFV (ATGM)";
	};
	class B_T_APC_Wheeled_01_atgm_lxWS: APC_Wheeled_01_atgm_base_lxWS
	{
		displayname="Badger IFV (ATGM)";
	};
	class APC_Wheeled_01_mortar_base_lxWS: APC_Wheeled_01_base_F
	{
		displayname="Badger IFV (Mortar)";
	};
	class B_D_APC_Wheeled_01_mortar_lxWS: APC_Wheeled_01_mortar_base_lxWS
	{
		displayname="Badger IFV (Mortar)";
	};
	class B_T_APC_Wheeled_01_mortar_lxWS: APC_Wheeled_01_mortar_base_lxWS
	{
		displayname="Badger IFV (Mortar)";
	};
	class O_Heli_Light_02_unarmed_F;
	class B_ION_Heli_Light_02_unarmed_lxWS: O_Heli_Light_02_unarmed_F
	{
		displayname="Ka-60 Kasatka (UP, Unarmed)";
	};
	class O_Heli_Light_02_dynamicLoadout_F;
	class B_ION_Heli_Light_02_dynamicLoadout_lxWS: O_Heli_Light_02_dynamicLoadout_F
	{
		displayname="Ka-60 Kasatka (UP)";
	};
	class Heli_Transport_02_base_F;
	class B_UN_Heli_Transport_02_lxWS: Heli_Transport_02_base_F
	{
		displayname="AW101 Merlin";
	};
	class O_APC_Tracked_02_base_F;
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		displayname="BM-2T Stalker (Bumerang-BM)";
	};
	class O_APC_Tracked_02_30mm_lxWS: O_APC_Tracked_02_cannon_F
	{
		displayname="BM-2T Stalker (Bumerang-BM)";
	};
	class O_T_APC_Tracked_02_30mm_lxWS: O_APC_Tracked_02_30mm_lxWS
	{
		displayname="BM-2T Stalker (Bumerang-BM)";
	};
	class I_SFIA_APC_Tracked_02_30mm_lxWS: O_T_APC_Tracked_02_30mm_lxWS
	{
		displayname="BM-2T Stalker (Bumerang-BM)";
	};
	class O_SFIA_APC_Tracked_02_30mm_lxWS: I_SFIA_APC_Tracked_02_30mm_lxWS
	{
		displayname="BM-2T Stalker (Bumerang-BM)";
	};
	class Truck_02_base_F;
	class Truck_02_aa_base_lxWS: Truck_02_base_F
	{
		displayname="KamAZ (ZU-23-2)";
	};
	class I_A_Truck_02_aa_lxWS: Truck_02_aa_base_lxWS
	{
		displayname="KamAZ (ZU-23-2)";
	};
	class I_SFIA_Truck_02_aa_lxWS: Truck_02_aa_base_lxWS
	{
		displayname="KamAZ (ZU-23-2)";
	};
	class O_SFIA_Truck_02_aa_lxWS: I_SFIA_Truck_02_aa_lxWS
	{
		displayname="KamAZ (ZU-23-2)";
	};
	class B_Tura_Truck_02_aa_lxWS: O_SFIA_Truck_02_aa_lxWS
	{
		displayname="KamAZ (ZU-23-2)";
	};
	class O_Tura_Truck_02_aa_lxWS: O_SFIA_Truck_02_aa_lxWS
	{
		displayname="KamAZ (ZU-23-2)";
	};
	class I_Tura_Truck_02_aa_lxWS: O_SFIA_Truck_02_aa_lxWS
	{
		displayname="KamAZ (ZU-23-2)";
	};
	class Truck_02_cargo_base_lxWS: Truck_02_base_F
	{
		displayname="KamAZ Cargo";
	};
	class O_Truck_02_cargo_lxWS: Truck_02_cargo_base_lxWS
	{
		displayname="KamAZ Cargo";
	};
	class I_SFIA_Truck_02_cargo_lxWS: Truck_02_cargo_base_lxWS
	{
		displayname="KamAZ Cargo";
	};
	class O_SFIA_Truck_02_cargo_lxWS: I_SFIA_Truck_02_cargo_lxWS
	{
		displayname="KamAZ Cargo";
	};
	class I_Truck_02_cargo_lxWS: Truck_02_cargo_base_lxWS
	{
		displayname="KamAZ Cargo";
	};
	class I_E_Truck_02_cargo_lxWS: I_Truck_02_cargo_lxWS
	{
		displayname="KamAZ Cargo";
	};
	class C_Truck_02_cargo_lxWS: Truck_02_cargo_base_lxWS
	{
		displayname="KamAZ Cargo";
	};
	class Truck_02_flatbed_base_lxWS: Truck_02_cargo_base_lxWS
	{
		displayname="KamAZ Flatbed";
	};
	class O_Truck_02_flatbed_lxWS: Truck_02_flatbed_base_lxWS
	{
		displayname="KamAZ Flatbed";
	};
	class O_T_Truck_02_flatbed_lxWS: O_Truck_02_flatbed_lxWS
	{
		displayname="KamAZ Flatbed";
	};
	class I_SFIA_Truck_02_flatbed_lxWS: Truck_02_flatbed_base_lxWS
	{
		displayname="KamAZ Flatbed";
	};
	class O_SFIA_Truck_02_flatbed_lxWS: I_SFIA_Truck_02_flatbed_lxWS
	{
		displayname="KamAZ Flatbed";
	};
	class I_Truck_02_flatbed_lxWS: Truck_02_flatbed_base_lxWS
	{
		displayname="KamAZ Flatbed";
	};
	class I_E_Truck_02_flatbed_lxWS: I_Truck_02_flatbed_lxWS
	{
		displayname="KamAZ Flatbed";
	};
	class C_Truck_02_flatbed_lxWS: Truck_02_flatbed_base_lxWS
	{
		displayname="KamAZ Flatbed";
	};
	class Truck_02_box_base_lxWS: Truck_02_base_F
	{
		displayname="KamAZ Repair";
	};
	class I_SFIA_Truck_02_box_lxWS: Truck_02_box_base_lxWS
	{
		displayname="KamAZ Repair";
	};
	class O_SFIA_Truck_02_box_lxWS: I_SFIA_Truck_02_box_lxWS
	{
		displayname="KamAZ Repair";
	};
	class C_IDAP_Truck_02_box_lxWS: Truck_02_box_base_lxWS
	{
		displayname="KamAZ Repair";
	};
	class C_Truck_02_racing_lxWS: Truck_02_box_base_lxWS
	{
		displayname="KamAZ Racing";
	};
	class Truck_02_Ammo_base_lxWS: Truck_02_base_F
	{
		displayname="KamAZ Ammo";
	};
	class I_SFIA_Truck_02_Ammo_lxWS: Truck_02_Ammo_base_lxWS
	{
		displayname="KamAZ Ammo";
	};
	class O_SFIA_Truck_02_Ammo_lxWS: I_SFIA_Truck_02_Ammo_lxWS
	{
		displayname="KamAZ Ammo";
	};
	class Truck_02_fuel_base_F;
	class O_Truck_02_fuel_F: Truck_02_fuel_base_F
	{
		displayname="KamAZ Fuel";
	};
	class I_SFIA_Truck_02_fuel_lxWS: O_Truck_02_fuel_F
	{
		displayname="KamAZ Fuel";
	};
	class O_SFIA_Truck_02_fuel_lxWS: I_SFIA_Truck_02_fuel_lxWS
	{
		displayname="KamAZ Fuel";
	};
	class Truck_02_transport_base_F;
	class O_Truck_02_transport_F: Truck_02_transport_base_F
	{
		displayname="KamAZ Transport";
	};
	class I_SFIA_Truck_02_transport_lxWS: O_Truck_02_transport_F
	{
		displayname="KamAZ Transport";
	};
	class O_SFIA_Truck_02_transport_lxWS: I_SFIA_Truck_02_transport_lxWS
	{
		displayname="KamAZ Transport";
	};
	class O_Truck_02_covered_F: Truck_02_base_F
	{
		displayname="KamAZ Transport (Covered)";
	};
	class B_ION_Truck_02_covered_lxWS: O_Truck_02_covered_F
	{
		displayname="KamAZ Transport (Covered)";
	};
	class I_SFIA_Truck_02_covered_lxWS: O_Truck_02_covered_F
	{
		displayname="KamAZ Transport (Covered)";
	};
	class O_SFIA_Truck_02_covered_lxWS: I_SFIA_Truck_02_covered_lxWS
	{
		displayname="KamAZ Transport (Covered)";
	};
	class Offroad_01_base_lxWS;
	class B_ION_Offroad_lxWS: Offroad_01_base_lxWS
	{
		displayname="Q7/F-150D Offroad";
	};
	class B_UN_Offroad_lxWS: Offroad_01_base_lxWS
	{
		displayname="Q7/F-150D Offroad";
	};
	class I_SFIA_Offroad_lxWS: Offroad_01_base_lxWS
	{
		displayname="Q7/F-150D Offroad";
	};
	class O_SFIA_Offroad_lxWS: I_SFIA_Offroad_lxWS
	{
		displayname="Q7/F-150D Offroad";
	};
	class C_Offroad_lxWS: Offroad_01_base_lxWS
	{
		displayname="Q7/F-150D Offroad";
	};
	class C_IDAP_Offroad_lxWS: Offroad_01_base_lxWS
	{
		displayname="Q7/F-150D Offroad";
	};
	class Offroad_01_armed_lxWS;
	class B_ION_Offroad_armed_lxWS: Offroad_01_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (M2HB)";
	};
	class I_SFIA_Offroad_armed_lxWS: Offroad_01_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (M2HB)";
	};
	class O_SFIA_Offroad_armed_lxWS: I_SFIA_Offroad_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (M2HB)";
	};
	class Offroad_01_AT_lxWS;
	class I_SFIA_Offroad_AT_lxWS: Offroad_01_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (SPG-9)";
	};
	class O_SFIA_Offroad_AT_lxWS: I_SFIA_Offroad_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (SPG-9)";
	};
	class Offroad_01_armor_base_lxWS;
	class I_G_Offroad_01_armor_base_lxWS: Offroad_01_armor_base_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	};
	class B_G_Offroad_01_armor_base_lxWS: I_G_Offroad_01_armor_base_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	};
	class I_Tura_Offroad_armor_lxWS: Offroad_01_armor_base_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	};
	class B_Tura_Offroad_armor_lxWS: I_Tura_Offroad_armor_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	};
	class B_UN_Offroad_Armor_lxWS: Offroad_01_armor_base_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	};
	class O_Tura_Offroad_armor_lxWS: I_Tura_Offroad_armor_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	};
	class O_G_Offroad_01_armor_base_lxWS: I_G_Offroad_01_armor_base_lxWS
	{
		displayname="Q7/F-150D Offroad (UP)";
	};
	class Offroad_01_armor_armed_lxWS;
	class I_G_Offroad_01_armor_armed_lxWS: Offroad_01_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	};
	class B_G_Offroad_01_armor_armed_lxWS: I_G_Offroad_01_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	};
	class I_Tura_Offroad_armor_armed_lxWS: Offroad_01_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	};
	class B_Tura_Offroad_armor_armed_lxWS: I_Tura_Offroad_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	};
	class O_G_Offroad_01_armor_armed_lxWS: I_G_Offroad_01_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	};
	class O_Tura_Offroad_armor_armed_lxWS: I_Tura_Offroad_armor_armed_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, M2HB)";
	};
	class Offroad_01_armor_AT_lxWS;
	class I_G_Offroad_01_armor_AT_lxWS: Offroad_01_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	};
	class B_G_Offroad_01_armor_AT_lxWS: I_G_Offroad_01_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	};
	class I_Tura_Offroad_armor_AT_lxWS: Offroad_01_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	};
	class B_Tura_Offroad_armor_AT_lxWS: I_Tura_Offroad_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	};
	class O_G_Offroad_01_armor_AT_lxWS: I_G_Offroad_01_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	};
	class O_Tura_Offroad_armor_AT_lxWS: I_Tura_Offroad_armor_AT_lxWS
	{
		displayname="Q7/F-150D Offroad (UP, SPG-9)";
	};
	class B_Quadbike_01_F;
	class B_ION_Quadbike_01_lxWS: B_Quadbike_01_F
	{
		displayname="Grizzly 450 ATV";
	};
	class B_D_Quadbike_01_lxWS: B_Quadbike_01_F
	{
		displayname="Grizzly 450 ATV";
	};
	class B_APC_Wheeled_01_cannon_lxWS: APC_Wheeled_01_base_F
	{
		displayname="Badger IFV";
	};
	class B_UN_APC_Wheeled_01_cannon_lxWS: B_APC_Wheeled_01_cannon_lxWS
	{
		displayname="Badger IFV";
	};
	class B_ION_APC_Wheeled_01_cannon_lxWS: B_APC_Wheeled_01_cannon_lxWS
	{
		displayname="Badger IFV";
	};
	class UAV_02_IED_Base_lxWS;
	class B_G_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	};
	class B_Tura_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	};
	class O_G_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	};
	class O_Tura_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	};
	class I_G_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	};
	class I_Tura_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
	{
		displayname="AP-5X Bustard (IED)";
	};
	class UAV_01_base_F;
	class CIV_UAV_01_lxWS: UAV_01_base_F
	{
		displayname="AR-2U Darter";
	};
	class B_UGV_01_F;
	class B_D_UGV_01_lxWS: B_UGV_01_F
	{
		displayname="Crusher UGCV";
	};
	class B_UGV_01_rcws_F;
	class B_D_UGV_01_rcws_lxWS: B_UGV_01_rcws_F
	{
		displayname="Crusher UGCV (RCWS)";
	};
	class zu23_base_lxWS;
	class I_SFIA_ZU23_lxWS: zu23_base_lxWS
	{
		displayname="ZU-23-2";
	};
	class O_SFIA_ZU23_lxWS: I_SFIA_ZU23_lxWS
	{
		displayname="ZU-23-2";
	};
	class B_Tura_ZU23_lxWS: O_SFIA_ZU23_lxWS
	{
		displayname="ZU-23-2";
	};
	class O_Tura_ZU23_lxWS: O_SFIA_ZU23_lxWS
	{
		displayname="ZU-23-2";
	};
	class I_Tura_ZU23_lxWS: O_SFIA_ZU23_lxWS
	{
		displayname="ZU-23-2";
	};
	class I_G_HMG_02_F;
	class I_SFIA_HMG_02_lxWS: I_G_HMG_02_F
	{
		displayname="M2HB";
	};
	class I_Tura_HMG_02_lxWS: I_SFIA_HMG_02_lxWS
	{
		displayname="M2HB";
	};
	class B_Tura_HMG_02_lxWS: I_Tura_HMG_02_lxWS
	{
		displayname="M2HB";
	};
	class O_SFIA_HMG_02_lxWS: I_SFIA_HMG_02_lxWS
	{
		displayname="M2HB";
	};
	class O_Tura_HMG_02_lxWS: I_Tura_HMG_02_lxWS
	{
		displayname="M2HB";
	};
	class I_G_HMG_02_high_F;
	class I_SFIA_HMG_02_high_lxWS: I_G_HMG_02_high_F
	{
		displayname="M2HB (Raised)";
	};
	class I_Tura_HMG_02_high_lxWS: I_SFIA_HMG_02_high_lxWS
	{
		displayname="M2HB (Raised)";
	};
	class B_Tura_HMG_02_high_lxWS: I_Tura_HMG_02_high_lxWS
	{
		displayname="M2HB (Raised)";
	};
	class O_SFIA_HMG_02_high_lxWS: I_SFIA_HMG_02_high_lxWS
	{
		displayname="M2HB (Raised)";
	};
	class O_Tura_HMG_02_high_lxWS: I_Tura_HMG_02_high_lxWS
	{
		displayname="M2HB (Raised)";
	};
};
