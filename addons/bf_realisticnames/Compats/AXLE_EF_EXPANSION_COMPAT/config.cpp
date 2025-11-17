class CfgPatches
{
	class real_names_2035_axleefexpansion_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"ax_weapons_f_usmc_futura"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class AX_LMG_03_fast_base_F;
	class AX_LMG_03_blk_F: AX_LMG_03_fast_base_F
	{
		displayName="FN Minimi SPW (Classic)";
	};
	class LMG_03_base_F;
	class AX_LMG_03_coy_F: LMG_03_base_F
	{
		displayName="FN Minimi SPW (Coyote)";
	};
	class AX_LMG_03_spray_F: LMG_03_base_F
	{
		displayName="FN Minimi SPW (Spray)";
	};
	class LMG_Mk200_F;
	class AX_LMG_Mk200_coy_F: LMG_Mk200_F
	{
		displayName="Stone 99 LMG (Coyote)";
	};
	class srifle_DMR_03_tan_F;
	class AX_srifle_DMR_03_coy_F: srifle_DMR_03_tan_F
	{
		displayName="SIG 556 (Coyote)";
	};
	class arifle_SCAR_L_black_base_F;
	class AX_arifle_SCAR_L_coy_F: arifle_SCAR_L_black_base_F
	{
		displayName="FN SCAR-L (Coyote)";
	};
	class AX_arifle_SCAR_L_spray_F: arifle_SCAR_L_black_base_F
	{
		displayName="FN SCAR-L (Spray)";
	};
	class arifle_SCAR_L_grip_black_base_F;
	class AX_arifle_SCAR_L_grip_coy_F: arifle_SCAR_L_grip_black_base_F
	{
		displayName="FN SCAR-L FG (Coyote)";
	};
	class AX_arifle_SCAR_L_grip_spray_F: arifle_SCAR_L_grip_black_base_F
	{
		displayName="FN SCAR-L FG (Spray)";
	};
	class arifle_SCAR_L_short_black_base_F;
	class AX_arifle_SCAR_L_short_coy_F: arifle_SCAR_L_short_black_base_F
	{
		displayName="FN SCAR-L CQC (Coyote)";
	};
	class AX_arifle_SCAR_L_short_spray_F: arifle_SCAR_L_short_black_base_F
	{
		displayName="FN SCAR-L CQC (Spray)";
	};
	class arifle_SCAR_L_GL_black_base_F;
	class AX_arifle_SCAR_L_GL_coy_F: arifle_SCAR_L_GL_black_base_F
	{
		displayName="FN SCAR-L CQC GLM (Coyote)";
	};
	class AX_arifle_SCAR_L_GL_spray_F: arifle_SCAR_L_GL_black_base_F
	{
		displayName="FN SCAR-L CQC GLM (Spray)";
	};
	class arifle_SCAR_base_F;
	class AX_arifle_SCAR_coy_F: arifle_SCAR_base_F
	{
		displayName="FN SCAR-H (Coyote)";
	};
	class AX_arifle_SCAR_spray_F: arifle_SCAR_base_F
	{
		displayName="FN SCAR-H (Spray)";
	};
	class arifle_SCAR_grip_base_F;
	class AX_arifle_SCAR_grip_coy_F: arifle_SCAR_grip_base_F
	{
		displayName="FN SCAR-H FG (Coyote)";
	};
	class AX_arifle_SCAR_grip_spray_F: arifle_SCAR_grip_base_F
	{
		displayName="FN SCAR-H FG (Spray)";
	};
	class arifle_SCAR_short_base_F;
	class AX_arifle_SCAR_short_coy_F: arifle_SCAR_short_base_F
	{
		displayName="FN SCAR-H CQC (Coyote)";
	};
	class AX_arifle_SCAR_short_spray_F: arifle_SCAR_short_base_F
	{
		displayName="FN SCAR-H CQC (Spray)";
	};
	class arifle_SCAR_GL_base_F;
	class AX_arifle_SCAR_GL_coy_F: arifle_SCAR_GL_base_F
	{
		displayName="FN SCAR-H CQC GLM (Coyote)";
	};
	class AX_arifle_SCAR_GL_spray_F: arifle_SCAR_GL_base_F
	{
		displayName="FN SCAR-H CQC GLM (Spray)";
	};
	class arifle_SCAR_M_base_F: arifle_SCAR_L_black_base_F
	{
		displayName="FN SCAR-L CL";
	};
	class AX_arifle_SCAR_M_blk_F: arifle_SCAR_M_base_F
	{
		displayName="FN SCAR-L CL (Black)";
	};
	class AX_arifle_SCAR_M_coy_F: arifle_SCAR_M_base_F
	{
		displayName="FN SCAR-L CL (Coyote)";
	};
	class AX_arifle_SCAR_M_khk_F: arifle_SCAR_M_base_F
	{
		displayName="FN SCAR-L CL (Khaki)";
	};
	class AX_arifle_SCAR_M_spray_F: arifle_SCAR_M_base_F
	{
		displayName="FN SCAR-L CL (Spray)";
	};
	class arifle_SCAR_M_grip_base_F: arifle_SCAR_L_grip_black_base_F
	{
		displayName="FN SCAR-L CL/FG";
	};
	class AX_arifle_SCAR_M_grip_blk_F: arifle_SCAR_M_grip_base_F
	{
		displayName="FN SCAR-L CL/FG (Black)";
	};
	class AX_arifle_SCAR_M_grip_coy_F: arifle_SCAR_M_grip_base_F
	{
		displayName="FN SCAR-L CL/FG (Coyote)";
	};
	class AX_arifle_SCAR_M_grip_khk_F: arifle_SCAR_M_grip_base_F
	{
		displayName="FN SCAR-L CL/FG (Khaki)";
	};
	class AX_arifle_SCAR_M_grip_spray_F: arifle_SCAR_M_grip_base_F
	{
		displayName="FN SCAR-L CL/FG (Spray)";
	};
	class arifle_SCAR_M_short_base_F;
	class AX_arifle_SCAR_M_short_F: arifle_SCAR_M_short_base_F
	{
		displayName="FN SCAR-L CQC CL";
	};
	class AX_arifle_SCAR_M_short_blk_F: arifle_SCAR_M_short_base_F
	{
		displayName="FN SCAR-L CQC CL (Black)";
	};
	class AX_arifle_SCAR_M_short_coy_F: arifle_SCAR_M_short_base_F
	{
		displayName="FN SCAR-L CQC CL (Coyote)";
	};
	class AX_arifle_SCAR_M_short_khk_F: arifle_SCAR_M_short_base_F
	{
		displayName="FN SCAR-L CQC CL (Khaki)";
	};
	class AX_arifle_SCAR_M_short_spray_F: arifle_SCAR_M_short_base_F
	{
		displayName="FN SCAR-L CQC CL (Spray)";
	};
	class arifle_SCAR_M_short_grip_base_F;
	class AX_arifle_SCAR_M_short_grip_F: arifle_SCAR_M_short_grip_base_F
	{
		displayName="FN SCAR-L CQC CL/FG";
	};
	class AX_arifle_SCAR_M_short_grip_blk_F: arifle_SCAR_M_short_grip_base_F
	{
		displayName="FN SCAR-L CQC CL/FG (Black)";
	};
	class AX_arifle_SCAR_M_short_grip_coy_F: arifle_SCAR_M_short_grip_base_F
	{
		displayName="FN SCAR-L CQC CL/FG (Coyote)";
	};
	class AX_arifle_SCAR_M_short_grip_khk_F: arifle_SCAR_M_short_grip_base_F
	{
		displayName="FN SCAR-L CQC CL/FG (Khaki)";
	};
	class AX_arifle_SCAR_M_short_grip_spray_F: arifle_SCAR_M_short_grip_base_F
	{
		displayName="FN SCAR-L CQC CL/FG (Spray)";
	};
	class arifle_SCAR_M_GL_base_F: arifle_SCAR_L_GL_black_base_F
	{
		displayName="FN SCAR-L CQC CL/GLM";
	};
	class AX_arifle_SCAR_M_GL_blk_F: arifle_SCAR_M_GL_base_F
	{
		displayName="FN SCAR-L CQC CL/GLM (Black)";
	};
	class AX_arifle_SCAR_M_GL_coy_F: arifle_SCAR_M_GL_base_F
	{
		displayName="FN SCAR-L CQC CL/GLM (Coyote)";
	};
	class AX_arifle_SCAR_M_GL_khk_F: arifle_SCAR_M_GL_base_F
	{
		displayName="FN SCAR-L CQC CL/GLM (Khaki)";
	};
	class AX_arifle_SCAR_M_GL_spray_F: arifle_SCAR_M_GL_base_F
	{
		displayName="FN SCAR-L CQC CL/GLM (Spray)";
	};
	class ef_arifle_mx_gl_coy;
	class AX_arifle_mx_gl_coy_tt: ef_arifle_mx_gl_coy
	{
		displayName="MX 3GL (Black/Coyote)";
	};
	class AX_arifle_mx_gl_spray: ef_arifle_mx_gl_coy
	{
		displayName="MX 3GL (Spray)";
	};
	class ef_arifle_mx_coy;
	class AX_arifle_mx_coy_tt: ef_arifle_mx_coy
	{
		displayName="MX (Black/Coyote)";
	};
	class AX_arifle_mx_spray: ef_arifle_mx_coy
	{
		displayName="MX (Spray)";
	};
	class ef_arifle_mx_sw_coy;
	class AX_arifle_mx_sw_coy_tt: ef_arifle_mx_sw_coy
	{
		displayName="MX LSW (Black/Coyote)";
	};
	class AX_arifle_mx_sw_spray: ef_arifle_mx_sw_coy
	{
		displayName="MX LSW (Spray)";
	};
	class ef_arifle_mxar_gl_coy;
	class AX_arifle_mxar_gl_coy_tt: ef_arifle_mxar_gl_coy
	{
		displayName="MXAR 3GL (Black/Coyote)";
	};
	class AX_arifle_mxar_gl_spray: ef_arifle_mxar_gl_coy
	{
		displayName="MXAR 3GL (Spray)";
	};
	class ef_arifle_mxar_coy;
	class AX_arifle_mxar_coy_tt: ef_arifle_mxar_coy
	{
		displayName="MXAR (Black/Coyote)";
	};
	class AX_arifle_mxar_spray: ef_arifle_mxar_coy
	{
		displayName="MXAR (Spray)";
	};
	class ef_arifle_mxc_coy;
	class AX_arifle_mxc_coy_tt: ef_arifle_mxc_coy
	{
		displayName="MXC (Black/Coyote)";
	};
	class AX_arifle_mxc_spray: ef_arifle_mxc_coy
	{
		displayName="MXC (Spray)";
	};
	class ef_arifle_mxm_coy;
	class AX_arifle_mxm_coy_tt: ef_arifle_mxm_coy
	{
		displayName="MXM (Black/Coyote)";
	};
	class AX_arifle_mxm_spray: ef_arifle_mxm_coy
	{
		displayName="MXM (Spray)";
	};
	class Aegis_arifle_SPAR_02_inf_khk_F;
	class AX_arifle_SPAR_02_inf_coy_F: Aegis_arifle_SPAR_02_inf_khk_F
	{
		displayName="HK416A5 14.5 "" FG (Coyote)";
	};
	class AX_arifle_SPAR_02_inf_spray_F: Aegis_arifle_SPAR_02_inf_khk_F
	{
		displayName="HK416A5 14.5 "" FG (Spray)";
	};
	class arifle_SPAR_01_khk_F;
	class AX_arifle_SPAR_01_coy_F: arifle_SPAR_01_khk_F
	{
		displayName="HK416A5 11 "" (Coyote)";
	};
	class AX_arifle_SPAR_01_spray_F: arifle_SPAR_01_khk_F
	{
		displayName="HK416A5 11 "" (Spray)";
	};
	class arifle_SPAR_01_GL_khk_F;
	class AX_arifle_SPAR_01_GL_coy_F: arifle_SPAR_01_GL_khk_F
	{
		displayName="HK416A5 11 "" GL (Coyote)";
	};
	class AX_arifle_SPAR_01_GL_spray_F: arifle_SPAR_01_GL_khk_F
	{
		displayName="HK416A5 11 "" GL (Spray)";
	};
	class arifle_SPAR_02_khk_F;
	class AX_arifle_SPAR_02_coy_F: arifle_SPAR_02_khk_F
	{
		displayName="HK416A5 14.5 "" FG (Coyote)";
	};
	class AX_arifle_SPAR_02_spray_F: arifle_SPAR_02_khk_F
	{
		displayName="HK416A5 14.5 "" FG (Spray)";
	};
	class arifle_SPAR_03_khk_F;
	class AX_arifle_SPAR_03_coy_F: arifle_SPAR_03_khk_F
	{
		displayName="HK417A2 20 "" (Coyote)";
	};
	class AX_arifle_SPAR_03_spray_F: arifle_SPAR_03_khk_F
	{
		displayName="HK417A2 20 "" (Spray)";
	};
	class MMG_02_sand_F;
	class AX_MMG_02_coy_F: MMG_02_sand_F
	{
		displayName="LWMMG (Coyote)";
	};
	class Aegis_hgun_P320_sand_F;
	class AX_hgun_P320_coy_F: Aegis_hgun_P320_sand_F
	{
		displayName="M18 (Coyote)";
	};
	class hgun_ACPC2_F;
	class AX_hgun_ACPC2_coy_F: hgun_ACPC2_F
	{
		displayName="Custom Covert II (Coyote)";
	};
};
