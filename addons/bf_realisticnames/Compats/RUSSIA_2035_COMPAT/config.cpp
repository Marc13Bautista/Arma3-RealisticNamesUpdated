class CfgPatches
{
	class real_names_2035_russia2035_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"lk_afrf"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class lk_pkp_base_f;
	class lk_pkp_mg: lk_pkp_base_f
	{
		displayName="PKP Pecheneg-N";
	};
	class hmg_nsvt;
	class lk_kord_hmg: hmg_nsvt
	{
		displayName="Kord";
	};
	class HMG_M2;
	class Aegis_HMG_KORD: HMG_M2
	{
		displayName="Kord";
	};
};
class cfgVehicles
{
	class lk_vodnik_base;
	class lk_vodnik_autocannon: lk_vodnik_base
	{
		displayName="Vodnik (BM-30-D Spitsa)";
	};
	class lk_o_t_vodnik_autocannon: lk_vodnik_autocannon
	{
		displayName="Vodnik (BM-30-D Spitsa)";
	};
	class lk_o_vodnik_autocannon: lk_vodnik_autocannon
	{
		displayName="Vodnik (BM-30-D Spitsa)";
	};
	class lk_ru_vodnik_autocannon: lk_vodnik_autocannon
	{
		displayName="Vodnik (BM-30-D Spitsa)";
	};
	class lk_ru_vmf_vodnik_autocannon: lk_vodnik_autocannon
	{
		displayName="Vodnik (BM-30-D Spitsa)";
	};
	class lk_vodnik_medevac: lk_vodnik_base
	{
		displayName="Vodnik (Medevac)";
	};
	class lk_o_t_vodnik_medevac: lk_vodnik_medevac
	{
		displayName="Vodnik (Medevac)";
	};
	class lk_o_vodnik_medevac: lk_vodnik_medevac
	{
		displayName="Vodnik (Medevac)";
	};
	class lk_ru_vodnik_medevac: lk_vodnik_medevac
	{
		displayName="Vodnik (Medevac)";
	};
	class lk_ru_vmf_vodnik_medevac: lk_vodnik_medevac
	{
		displayName="Vodnik (Medevac)";
	};
	class lk_vodnik_transport: lk_vodnik_base
	{
		displayName="Vodnik (Transport)";
	};
	class lk_o_t_vodnik_transport: lk_vodnik_transport
	{
		displayName="Vodnik (Transport)";
	};
	class lk_o_vodnik_transport: lk_vodnik_transport
	{
		displayName="Vodnik (Transport)";
	};
	class lk_ru_vodnik_transport: lk_vodnik_transport
	{
		displayName="Vodnik (Transport)";
	};
	class lk_ru_vmf_vodnik_transport: lk_vodnik_transport
	{
		displayName="Vodnik (Transport)";
	};
	class lk_kord_base_F;
	class lk_kord_hmg_high_base_F: lk_kord_base_F
	{
		displayName="Kord (Raised)";
	};
	class lk_kord_hmg_high_F: lk_kord_hmg_high_base_F
	{
		displayName="Kord (Raised)";
	};
	class lk_kord_hmg_f: lk_kord_base_F
	{
		displayName="Kord";
	};
};
