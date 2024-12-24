class CfgPatches
{
	class real_names_2035_unusedcontent_compat
	{
		addonRootClass="real_names_2035_base"; //Replace this with fisch's config name
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
// PRIMARY WEAPONS
// AKM 7.62 mm (Flashlight) -> AKM (Flashlight)
	class arifle_AKM_F;
	class arifle_AKM_FL_F: arifle_AKM_F
	{
		displayName="AKM (Flashlight)";
	}
// SECONDARY WEAPONS
// ACP-C2 .45 ACP (Black) -> Custom Covert II (Black)
	class hgun_ACPC2_F;
	class UC_hgun_ACPC2_F: hgun_ACPC2_F
	{
		displayName="Custom Covert II (Black)";
	}
// LAUNCHERS
// "RPG-42 (Camo)" -> "RPG-32 (Camo)"
	class launch_RPG32_F;
	class launch_RPG32_camo_F: launch_RPG32_F
	{
		displayName="RPG-32 (Camo)";
	}
};

class cfgVehicles
{
// VEHICLES
// [BLUFOR- NATO]
// Strider -> Fennek
	class I_MRAP_03_F;
	class UC_B_MRAP_03_F: I_MRAP_03_F
	{
		displayname="Fennek";
	}
// Strider GMG -> Fennek (GMG)
	class I_MRAP_03_gmg_F;
	class UC_B_MRAP_03_gmg_F: I_MRAP_03_gmg_F
	{
		displayname="Fennek (GMG)";
	}
// Strider HMG -> Fennek (HMG)
	class I_MRAP_03_hmg_F;
	class UC_B_MRAP_03_hmg_F: I_MRAP_03_hmg_F
	{
		displayname="Fennek (HMG)";
	}
// AFV-4 Gorgon -> Pandur II
	class B_APC_Wheeled_03_cannon_F;
	class UC_B_APC_Wheeled_03_cannon_F: B_APC_Wheeled_03_cannon_F
	{
		displayname="Pandur II";
	}
// A-164 Wipeout (Cluster) -> A-10D Thunderbolt II (Cluster)
	class B_Plane_CAS_01_dynamicLoadout_F;
	class B_Plane_CAS_01_Cluster_F: B_Plane_CAS_01_dynamicLoadout_F
	{
		displayname="A-10D Thunderbolt II (Cluster)";
	}
// F/A-181 Black Wasp II (Cluster) -> F/A-181 Black Wasp II (Cluster)
	class B_Plane_Fighter_01_F;
	class B_Plane_Fighter_01_Cluster_F: B_Plane_Fighter_01_F
	{
		displayname="F/A-181 Black Wasp II (Cluster)";
	}
// [OPFOR- CSAT]
// Zamak MRL -> KamAZ MRL
	class I_Truck_02_MRL_F;
	class UC_O_Truck_02_MRL_F: I_Truck_02_MRL_F
	{
		displayname="KamAZ MRL";
	}
// A-143 Buzzard (AA) -> L-159 ALCA (AA)
	class I_Plane_Fighter_03_AA_F;
	class UC_O_Plane_Fighter_03_AA_F: I_Plane_Fighter_03_AA_F
	{
		displayname="L-159 ALCA (AA)";
	}
// A-143 Buzzard (CAS) -> L-159 ALCA (CAS)
	class I_Plane_Fighter_03_dynamicLoadout_F;
	class UC_O_Plane_Fighter_03_dynamicLoadout_F: I_Plane_Fighter_03_dynamicLoadout_F
	{
		displayname="L-159 ALCA (CAS)";
	}
// A-143 Buzzard (Cluster) -> L-159 ALCA (Cluster)
	class I_Plane_Fighter_03_Cluster_F;
	class UC_O_Plane_Fighter_03_Cluster_F: I_Plane_Fighter_03_Cluster_F
	{
		displayname="L-159 ALCA (Cluster)";
	}
// To-199 Neophron (Cluster) -> Yak-130 (Cluster)
	class O_Plane_CAS_02_dynamicLoadout_F;
	class O_Plane_CAS_02_Cluster_F: O_Plane_CAS_02_dynamicLoadout_F
	{
		displayname="Yak-130 (Cluster)";
	}
// To-201 Shikra (Cluster) -> To-201 Shikra (Cluster)
	class O_Plane_Fighter_02_F;
	class O_Plane_Fighter_02_Cluster_F: O_Plane_Fighter_02_F
	{
		displayname="To-201 Shikra (Cluster)";
	}
// [Independent- AAF]
// AH-9 Pawnee -> AH-6 Little Bird
	class B_Heli_Light_01_dynamicLoadout_F;
	class UC_I_Heli_Light_01_dynamicLoadout_F: B_Heli_Light_01_dynamicLoadout_F
	{
		displayname="AH-6 Little Bird";
	}
// MH-9 Hummingbird -> MH-6 Little Bird
	class B_Heli_Light_01_F;
	class UC_I_Heli_Light_01_F: B_Heli_Light_01_F
	{
		displayname="MH-6 Little Bird";
	}
// PO-30 Orca -> Ka-60 Kasatka
	class O_Heli_Light_02_dynamicLoadout_F;
	class UC_I_Heli_Light_02_dynamicLoadout_F: O_Heli_Light_02_dynamicLoadout_F
	{
		displayname="Ka-60 Kasatka";
	}
// PO-30 Orca (Unarmed) -> Ka-60 Kasatka (Unarmed)
	class O_Heli_Light_02_unarmed_F;
	class UC_I_Heli_Light_02_unarmed_F: O_Heli_Light_02_unarmed_F
	{
		displayname="Ka-60 Kasatka (Unarmed)";
	}
// A-143 Buzzard (AA) -> L-159 ALCA (AA)
	class I_Plane_Fighter_03_CAS_F;
	class I_Plane_Fighter_03_AA_F: I_Plane_Fighter_03_CAS_F
	{
		displayname="L-159 ALCA (AA)";
	}
// A-143 Buzzard (Cluster) -> L-159 ALCA (Cluster)
	class I_Plane_Fighter_03_Cluster_F: I_Plane_Fighter_03_dynamicLoadout_F
	{
		displayname="L-159 ALCA (Cluster)";
	}
// A-149 Gryphon -> JAS 39 Gripen (Cluster) 
	class I_Plane_Fighter_04_F;
	class I_Plane_Fighter_04_Cluster_F: I_Plane_Fighter_04_F
	{
		displayname="JAS 39 Gripen (Cluster)";
	}
// [Civilian- Civilians]
// CH-49 Mohawk -> AW101 Merlin
	class I_Heli_Transport_02_F;
	class UC_C_Heli_Transport_02_F: I_Heli_Transport_02_F
	{
		displayname="AW101 Merlin";
	}
// PO-30 Orca -> Ka-60 Kasatka
	class UC_C_Heli_Light_02_civil_F: O_Heli_Light_02_unarmed_F
	{
		displayname="Ka-60 Kasatka";
	}
};