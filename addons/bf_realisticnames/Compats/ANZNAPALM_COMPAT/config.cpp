class CfgPatches
{
	class real_names_2035_vanilla_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"anz_napalmmod"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgVehicles
{
	class B_Plane_CAS_01_dynamicLoadout_F;
	class B_Plane_CAS_01_Napalm_F: B_Plane_CAS_01_dynamicLoadout_F
	{
		displayName="A-10D Thunderbolt II (MK77)";
	};
	class B_Plane_CAS_01_FAC_F: B_Plane_CAS_01_dynamicLoadout_F
	{
		displayName="A-10D Thunderbolt II (FAC)";
	};
	class B_Plane_Fighter_01_F;
	class B_Plane_Fighter_01_Napalm_F: B_Plane_Fighter_01_F
	{
		displayName="F/A-181 Black Wasp II (MK77)";
	};
};
