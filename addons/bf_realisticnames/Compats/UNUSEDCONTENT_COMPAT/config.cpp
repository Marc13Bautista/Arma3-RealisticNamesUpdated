class CfgPatches
{
	class real_names_2035_unusedcontent_compat
	{
		addonRootClass="real_names_2035_base";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"UC_Data_F"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class arifle_AKM_F;
	class arifle_AKM_FL_F: arifle_AKM_F
	{
		displayName="AKM (Flashlight)";
	};
	class hgun_ACPC2_F;
	class UC_hgun_ACPC2_F: hgun_ACPC2_F
	{
		displayName="Custom Covert II (Black)";
	};
	class launch_RPG32_F;
	class launch_RPG32_camo_F: launch_RPG32_F
	{
		displayName="RPG-32 (Camo)";
	};
};
class cfgVehicles
{
	class I_MRAP_03_F;
	class UC_B_MRAP_03_F: I_MRAP_03_F
	{
		displayname="Fennek";
	};
	class I_MRAP_03_gmg_F;
	class UC_B_MRAP_03_gmg_F: I_MRAP_03_gmg_F
	{
		displayname="Fennek (GMG)";
	};
	class I_MRAP_03_hmg_F;
	class UC_B_MRAP_03_hmg_F: I_MRAP_03_hmg_F
	{
		displayname="Fennek (HMG)";
	};
	class B_APC_Wheeled_03_cannon_F;
	class UC_B_APC_Wheeled_03_cannon_F: B_APC_Wheeled_03_cannon_F
	{
		displayname="Pandur II";
	};
	class B_Plane_CAS_01_dynamicLoadout_F;
	class B_Plane_CAS_01_Cluster_F: B_Plane_CAS_01_dynamicLoadout_F
	{
		displayname="A-10D Thunderbolt II (Cluster)";
	};
	class B_Plane_Fighter_01_F;
	class B_Plane_Fighter_01_Cluster_F: B_Plane_Fighter_01_F
	{
		displayname="F/A-181 Black Wasp II (Cluster)";
	};
	class I_Truck_02_MRL_F;
	class UC_O_Truck_02_MRL_F: I_Truck_02_MRL_F
	{
		displayname="KamAZ MRL";
	};
	class I_Plane_Fighter_03_AA_F;
	class UC_O_Plane_Fighter_03_AA_F: I_Plane_Fighter_03_AA_F
	{
		displayname="L-159 ALCA (AA)";
	};
	class I_Plane_Fighter_03_dynamicLoadout_F;
	class UC_O_Plane_Fighter_03_dynamicLoadout_F: I_Plane_Fighter_03_dynamicLoadout_F
	{
		displayname="L-159 ALCA (CAS)";
	};
	class I_Plane_Fighter_03_Cluster_F;
	class UC_O_Plane_Fighter_03_Cluster_F: I_Plane_Fighter_03_Cluster_F
	{
		displayname="L-159 ALCA (Cluster)";
	};
	class O_Plane_CAS_02_dynamicLoadout_F;
	class O_Plane_CAS_02_Cluster_F: O_Plane_CAS_02_dynamicLoadout_F
	{
		displayname="Yak-130 (Cluster)";
	};
	class O_Plane_Fighter_02_F;
	class O_Plane_Fighter_02_Cluster_F: O_Plane_Fighter_02_F
	{
		displayname="To-201 Shikra (Cluster)";
	};
	class B_Heli_Light_01_dynamicLoadout_F;
	class UC_I_Heli_Light_01_dynamicLoadout_F: B_Heli_Light_01_dynamicLoadout_F
	{
		displayname="AH-6 Little Bird";
	};
	class B_Heli_Light_01_F;
	class UC_I_Heli_Light_01_F: B_Heli_Light_01_F
	{
		displayname="MH-6 Little Bird";
	};
	class O_Heli_Light_02_dynamicLoadout_F;
	class UC_I_Heli_Light_02_dynamicLoadout_F: O_Heli_Light_02_dynamicLoadout_F
	{
		displayname="Ka-60 Kasatka";
	};
	class O_Heli_Light_02_unarmed_F;
	class UC_I_Heli_Light_02_unarmed_F: O_Heli_Light_02_unarmed_F
	{
		displayname="Ka-60 Kasatka (Unarmed)";
	};
	class I_Plane_Fighter_03_CAS_F;
	class I_Plane_Fighter_04_F;
	class I_Plane_Fighter_04_Cluster_F: I_Plane_Fighter_04_F
	{
		displayname="JAS 39 Gripen (Cluster)";
	};
	class I_Heli_Transport_02_F;
	class UC_C_Heli_Transport_02_F: I_Heli_Transport_02_F
	{
		displayname="EH101 Heliliner";
	};
	class UC_C_Heli_Light_02_civil_F: O_Heli_Light_02_unarmed_F
	{
		displayname="Ka-60 Kasatka";
	};
};
