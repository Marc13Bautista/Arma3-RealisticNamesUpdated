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
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
	};
	class ModuleCAS_F: Module_F
	{
		class ModuleDescription;
	};
	class ModuleCAS_ANZ_Light_F: ModuleCAS_F
	{
		displayName="Close Air Support (CAS) (Light)";
		function="BIS_fnc_moduleCAS_light_ANZ";
		category="Effects";
		class Arguments
		{
			class Type
			{
				displayName="$STR_A3_CfgVehicles_ModuleOrdnance_F_Arguments_Type";
				description="";
				typeName="NUMBER";
				class values
				{
					class Bomb
					{
						name="CAS - Bomb Strike (Light)";
						value=3;
						default=1;
					};
				};
			};
			class Vehicle
			{
				displayName="$STR_DN_Plane";
				description="";
				class values
				{
					class B_Plane_CAS_01_CASModule_Napalm_F
					{
						name="A-10D Thunderbolt II (2x MK77 Napalm)";
						value="B_Plane_CAS_01_CASModule_Napalm_F";
						default=1;
					};
					class B_Plane_CAS_01_F
					{
						name="A-10D Thunderbolt II";
						value="B_Plane_CAS_01_F";
					};
					class B_Plane_Fighter_01_CASModule_Napalm_F
					{
						name="F/A-181 Black Wasp II (2x MK77 Napalm)";
						value="B_Plane_Fighter_01_CASModule_Napalm_F";
					};
					class B_Plane_Fighter_01_F
					{
						name="$STR_A3_Fighter_01_name";
						value="B_Plane_Fighter_01_F";
					};
					class O_Plane_CAS_02_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value="O_Plane_CAS_02_F";
					};
					class I_Plane_Fighter_03_CAS_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_Fighter_03_CAS0";
						value="I_Plane_Fighter_03_CAS_F";
					};
					class B_Plane_CAS_01_Cluster_F
					{
						name="$STR_A3_CfgVehicles_B_Plane_CAS_01_Cluster_F0";
						value="B_Plane_CAS_01_Cluster_F";
					};
					class O_Plane_CAS_02_Cluster_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_CAS_02_Cluster_F0";
						value="O_Plane_CAS_02_Cluster_F";
					};
					class B_Plane_Fighter_01_Cluster_F
					{
						name="$STR_A3_CfgVehicles_B_Plane_Fighter_01_Cluster_F0";
						value="B_Plane_Fighter_01_Cluster_F";
					};
					class O_Plane_Fighter_02_F
					{
						name="$STR_A3_Fighter_02_name";
						value="O_Plane_Fighter_02_F";
					};
					class O_Plane_Fighter_02_Cluster_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_Fighter_02_Cluster_F0";
						value="O_Plane_Fighter_02_Cluster_F";
					};
					class I_Plane_Fighter_03_Cluster_F
					{
						name="$STR_A3_CfgVehicles_I_Plane_Fighter_03_Cluster_F0";
						value="I_Plane_Fighter_03_Cluster_F";
					};
					class I_Plane_Fighter_04_F
					{
						name="$STR_A3_Fighter_04_name";
						value="I_Plane_Fighter_04_F";
					};
					class I_Plane_Fighter_04_Cluster_F
					{
						name="$STR_A3_CfgVehicles_I_Plane_Fighter_04_Cluster_F0";
						value="I_Plane_Fighter_04_Cluster_F";
					};
				};
			};
		};
	};
	class ModuleCAS_ANZ_LowAlt_2_F: ModuleCAS_F
	{
		displayName="Close Air Support (CAS) Low Altitude (Light)";
		function="BIS_fnc_moduleCAS_Lo_Alt_2_ANZ";
		class Arguments
		{
			class Type
			{
				displayName="$STR_A3_CfgVehicles_ModuleOrdnance_F_Arguments_Type";
				description="";
				typeName="NUMBER";
				class values
				{
					class Bomb
					{
						name="CAS - Bomb Strike / Low Altitude (Light)";
						default=1;
						value=3;
					};
				};
			};
			class Vehicle
			{
				displayName="$STR_DN_Plane";
				description="";
				class values
				{
					class B_Plane_CAS_01_CASModule_MediumNapalm_F
					{
						name="A-10D Thunderbolt II (2x MK77 Napalm)";
						value="B_Plane_CAS_01_CASModule_Napalm_F";
						default=1;
					};
					class B_Plane_CAS_01_CASModule_MediumBomber_F
					{
						name="A-10D Thunderbolt II (2x GBU-12 Bombs)";
						value="B_Plane_CAS_01_F";
					};
					class B_Plane_Fighter_01_CASModule_MediumNapalm_F
					{
						name="F/A-181 Black Wasp II (2x MK77 Napalm)";
						value="B_Plane_Fighter_01_CASModule_Napalm_F";
					};
					class B_Plane_Fighter_01_CASModule_MediumBomber_F
					{
						name="F/A-181 Black Wasp II (2x GBU-12 Bombs)";
						value="B_Plane_Fighter_01_F";
					};
					class O_Plane_CAS_02_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value="O_Plane_CAS_02_F";
					};
					class I_Plane_Fighter_03_CAS_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_Fighter_03_CAS0";
						value="I_Plane_Fighter_03_CAS_F";
					};
					class B_Plane_CAS_01_Cluster_F
					{
						name="$STR_A3_CfgVehicles_B_Plane_CAS_01_Cluster_F0";
						value="B_Plane_CAS_01_Cluster_F";
					};
					class O_Plane_CAS_02_Cluster_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_CAS_02_Cluster_F0";
						value="O_Plane_CAS_02_Cluster_F";
					};
					class B_Plane_Fighter_01_Cluster_F
					{
						name="$STR_A3_CfgVehicles_B_Plane_Fighter_01_Cluster_F0";
						value="B_Plane_Fighter_01_Cluster_F";
					};
					class O_Plane_Fighter_02_F
					{
						name="$STR_A3_Fighter_02_name";
						value="O_Plane_Fighter_02_F";
					};
					class O_Plane_Fighter_02_Cluster_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_Fighter_02_Cluster_F0";
						value="O_Plane_Fighter_02_Cluster_F";
					};
					class I_Plane_Fighter_03_Cluster_F
					{
						name="$STR_A3_CfgVehicles_I_Plane_Fighter_03_Cluster_F0";
						value="I_Plane_Fighter_03_Cluster_F";
					};
					class I_Plane_Fighter_04_F
					{
						name="$STR_A3_Fighter_04_name";
						value="I_Plane_Fighter_04_F";
					};
					class I_Plane_Fighter_04_Cluster_F
					{
						name="$STR_A3_CfgVehicles_I_Plane_Fighter_04_Cluster_F0";
						value="I_Plane_Fighter_04_Cluster_F";
					};
				};
			};
		};
	};
	class ModuleCAS_ANZ_LowAlt_F: ModuleCAS_F
	{
		displayName="Close Air Support (CAS) Low Altitude (Medium)";
		function="BIS_fnc_moduleCAS_Lo_Alt_ANZ";
		class Arguments
		{
			class Type
			{
				displayName="$STR_A3_CfgVehicles_ModuleOrdnance_F_Arguments_Type";
				description="";
				typeName="NUMBER";
				class values
				{
					class Bomb
					{
						name="CAS - Bomb Strike / Low Altitude (Medium)";
						default=1;
						value=3;
					};
				};
			};
			class Vehicle
			{
				displayName="$STR_DN_Plane";
				description="";
				class values
				{
					class B_Plane_CAS_01_CASModule_MediumNapalm_F
					{
						name="A-10D Thunderbolt II (3x MK77 Napalm)";
						value="B_Plane_CAS_01_CASModule_MediumNapalm_F";
						default=1;
					};
					class B_Plane_CAS_01_CASModule_MediumBomber_F
					{
						name="A-10D Thunderbolt II (4x GBU-12 Bombs)";
						value="B_Plane_CAS_01_CASModule_MediumBomber_F";
					};
					class B_Plane_Fighter_01_CASModule_MediumNapalm_F
					{
						name="F/A-181 Black Wasp II (3x MK77 Napalm)";
						value="B_Plane_Fighter_01_CASModule_MediumNapalm_F";
					};
					class B_Plane_Fighter_01_CASModule_MediumBomber_F
					{
						name="F/A-181 Black Wasp II (4x GBU-12 Bombs)";
						value="B_Plane_Fighter_01_CASModule_MediumBomber_F";
					};
					class O_Plane_CAS_02_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value="O_Plane_CAS_02_F";
					};
					class I_Plane_Fighter_03_CAS_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_Fighter_03_CAS0";
						value="I_Plane_Fighter_03_CAS_F";
					};
					class B_Plane_CAS_01_Cluster_F
					{
						name="$STR_A3_CfgVehicles_B_Plane_CAS_01_Cluster_F0";
						value="B_Plane_CAS_01_Cluster_F";
					};
					class O_Plane_CAS_02_Cluster_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_CAS_02_Cluster_F0";
						value="O_Plane_CAS_02_Cluster_F";
					};
					class B_Plane_Fighter_01_Cluster_F
					{
						name="$STR_A3_CfgVehicles_B_Plane_Fighter_01_Cluster_F0";
						value="B_Plane_Fighter_01_Cluster_F";
					};
					class O_Plane_Fighter_02_F
					{
						name="$STR_A3_Fighter_02_name";
						value="O_Plane_Fighter_02_F";
					};
					class O_Plane_Fighter_02_Cluster_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_Fighter_02_Cluster_F0";
						value="O_Plane_Fighter_02_Cluster_F";
					};
					class I_Plane_Fighter_03_Cluster_F
					{
						name="$STR_A3_CfgVehicles_I_Plane_Fighter_03_Cluster_F0";
						value="I_Plane_Fighter_03_Cluster_F";
					};
					class I_Plane_Fighter_04_F
					{
						name="$STR_A3_Fighter_04_name";
						value="I_Plane_Fighter_04_F";
					};
					class I_Plane_Fighter_04_Cluster_F
					{
						name="$STR_A3_CfgVehicles_I_Plane_Fighter_04_Cluster_F0";
						value="I_Plane_Fighter_04_Cluster_F";
					};
				};
			};
		};
	};
	class ModuleCAS_ANZ_Medium_F: ModuleCAS_F
	{
		displayName="Close Air Support (CAS) (Medium)";
		function="BIS_fnc_moduleCAS_Medium_ANZ";
		class Arguments
		{
			class Type
			{
				displayName="$STR_A3_CfgVehicles_ModuleOrdnance_F_Arguments_Type";
				description="";
				typeName="NUMBER";
				class values
				{
					class Bomb
					{
						name="CAS - Bomb Strike (Medium)";
						default=1;
						value=3;
					};
				};
			};
			class Vehicle
			{
				displayName="$STR_DN_Plane";
				description="";
				class values
				{
					class B_Plane_CAS_01_CASModule_MediumNapalm_F
					{
						name="A-10D Thunderbolt II (3x MK77 Napalm)";
						value="B_Plane_CAS_01_CASModule_MediumNapalm_F";
						default=1;
					};
					class B_Plane_CAS_01_CASModule_MediumBomber_F
					{
						name="A-10D Thunderbolt II (4x GBU-12 Bombs)";
						value="B_Plane_CAS_01_CASModule_MediumBomber_F";
					};
					class B_Plane_Fighter_01_CASModule_MediumNapalm_F
					{
						name="F/A-181 Black Wasp II (3x MK77 Napalm)";
						value="B_Plane_Fighter_01_CASModule_MediumNapalm_F";
					};
					class B_Plane_Fighter_01_CASModule_MediumBomber_F
					{
						name="F/A-181 Black Wasp II (4x GBU-12 Bombs)";
						value="B_Plane_Fighter_01_CASModule_MediumBomber_F";
					};
					class B_Plane_CAS_01_Cluster_F
					{
						name="$STR_A3_CfgVehicles_B_Plane_CAS_01_Cluster_F0";
						value="B_Plane_CAS_01_Cluster_F";
					};
					class B_Plane_Fighter_01_Cluster_F
					{
						name="$STR_A3_CfgVehicles_B_Plane_Fighter_01_Cluster_F0";
						value="B_Plane_Fighter_01_Cluster_F";
					};
				};
			};
		};
	};
	class ModuleCAS_ANZ_Medium_2_F: ModuleCAS_F
	{
		displayName="Close Air Support (CAS) (Medium 2)";
		function="BIS_fnc_moduleCAS_Medium_2_ANZ";
		class Arguments
		{
			class Type
			{
				displayName="$STR_A3_CfgVehicles_ModuleOrdnance_F_Arguments_Type";
				description="";
				typeName="NUMBER";
				class values
				{
					class Bomb
					{
						name="CAS - Bomb Strike (Medium 2)";
						default=1;
						value=3;
					};
				};
			};
			class Vehicle
			{
				displayName="$STR_DN_Plane";
				description="";
				class values
				{
					class B_Plane_CAS_01_CASModule_MediumNapalm_2_F
					{
						name="A-10D Thunderbolt II (4x MK77 Napalm)";
						value="B_Plane_CAS_01_CASModule_MediumNapalm_2_F";
						default=1;
					};
					class B_Plane_CAS_01_CASModule_MediumBomber_2_F
					{
						name="A-10D Thunderbolt II (6x GBU-12 Bombs)";
						value="B_Plane_CAS_01_CASModule_MediumBomber_2_F";
					};
					class B_Plane_Fighter_01_CASModule_MediumNapalm_2_F
					{
						name="F/A-181 Black Wasp II (4x MK77 Napalm)";
						value="B_Plane_Fighter_01_CASModule_MediumNapalm_2_F";
					};
					class B_Plane_Fighter_01_CASModule_MediumBomber_2_F
					{
						name="F/A-181 Black Wasp II (6x GBU-12 Bombs)";
						value="B_Plane_Fighter_01_CASModule_MediumBomber_2_F";
					};
					class B_Plane_CAS_01_Cluster_F
					{
						name="$STR_A3_CfgVehicles_B_Plane_CAS_01_Cluster_F0";
						value="B_Plane_CAS_01_Cluster_F";
					};
				};
			};
		};
	};
	class ModuleCAS_ANZ_HiAlt_F: ModuleCAS_F
	{
		displayName="Close Air Support (CAS) High Altitude (Heavy)";
		function="BIS_fnc_moduleCAS_Hi_Alt_ANZ";
		class Arguments
		{
			class Type
			{
				displayName="$STR_A3_CfgVehicles_ModuleOrdnance_F_Arguments_Type";
				description="";
				typeName="NUMBER";
				class values
				{
					class Bomb_HiAlt
					{
						name="CAS - Bomb strike / High Altitude (Heavy)";
						default=1;
						value=3;
					};
				};
			};
			class Vehicle
			{
				displayName="$STR_DN_Plane";
				description="";
				class Values
				{
					class B_Plane_Fighter_01_CASModule_HeavyNapalm_F
					{
						name="F/A-181 Black Wasp II (6x MK77 Napalm)";
						value="B_Plane_Fighter_01_CASModule_HeavyNapalm_F";
					};
					class B_Plane_Fighter_01_CASModule_HeavyBomber_F
					{
						name="F/A-181 Black Wasp II (8x GBU-12 Bombs)";
						value="B_Plane_Fighter_01_CASModule_HeavyBomber_F";
						default=1;
					};
					class B_Plane_CAS_01_CASModule_HeavyNapalm_F
					{
						name="A-10D Thunderbolt II (6x MK77 Napalm)";
						value="B_Plane_CAS_01_CASModule_HeavyNapalm_F";
					};
					class B_Plane_CAS_01_CASModule_HeavyBomber_F
					{
						name="A-10D Thunderbolt II (8x GBU-12 Bombs)";
						value="B_Plane_CAS_01_CASModule_HeavyBomber_F";
					};
					class B_Plane_CAS_01_Cluster_F
					{
						name="$STR_A3_CfgVehicles_B_Plane_CAS_01_Cluster_F0";
						value="B_Plane_CAS_01_Cluster_F";
					};
					class O_Plane_CAS_02_Cluster_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_CAS_02_Cluster_F0";
						value="O_Plane_CAS_02_Cluster_F";
					};
					class B_Plane_Fighter_01_Cluster_F
					{
						name="$STR_A3_CfgVehicles_B_Plane_Fighter_01_Cluster_F0";
						value="B_Plane_Fighter_01_Cluster_F";
					};
					class O_Plane_Fighter_02_F
					{
						name="$STR_A3_Fighter_02_name";
						value="O_Plane_Fighter_02_F";
					};
					class O_Plane_Fighter_02_Cluster_F
					{
						name="$STR_A3_CfgVehicles_O_Plane_Fighter_02_Cluster_F0";
						value="O_Plane_Fighter_02_Cluster_F";
					};
					class I_Plane_Fighter_03_Cluster_F
					{
						name="$STR_A3_CfgVehicles_I_Plane_Fighter_03_Cluster_F0";
						value="I_Plane_Fighter_03_Cluster_F";
					};
					class I_Plane_Fighter_04_F
					{
						name="$STR_A3_Fighter_04_name";
						value="I_Plane_Fighter_04_F";
					};
					class I_Plane_Fighter_04_Cluster_F
					{
						name="$STR_A3_CfgVehicles_I_Plane_Fighter_04_Cluster_F0";
						value="I_Plane_Fighter_04_Cluster_F";
					};
				};
			};
		};
	};
	class ModuleCAS_ANZ_HiAlt_2_F: ModuleCAS_F
	{
		displayName="Close Air Support (CAS) High Altitude (Very Heavy)";
		function="BIS_fnc_moduleCAS_Hi_Alt_2_ANZ";
		class Arguments
		{
			class Type
			{
				displayName="$STR_A3_CfgVehicles_ModuleOrdnance_F_Arguments_Type";
				description="";
				typeName="NUMBER";
				class values
				{
					class Bomb_HiAlt
					{
						name="CAS - Bomb strike / High Altitude (Very Heavy)";
						default=1;
						value=3;
					};
				};
			};
			class Vehicle
			{
				displayName="$STR_DN_Plane";
				description="";
				class Values
				{
					class B_Plane_Fighter_01_CASModule_HeavyNapalm_2_F
					{
						name="F/A-181 Black Wasp II (8x MK77 Napalm)";
						value="B_Plane_Fighter_01_CASModule_HeavyNapalm_2_F";
					};
					class B_Plane_Fighter_01_CASModule_HeavyBomber_2_F
					{
						name="F/A-181 Black Wasp II (10x GBU-12 Bombs)";
						value="B_Plane_Fighter_01_CASModule_HeavyBomber_2_F";
						default=1;
					};
					class B_Plane_CAS_01_CASModule_HeavyNapalm_2_F
					{
						name="A-10D Thunderbolt II (8x MK77 Napalm)";
						value="B_Plane_CAS_01_CASModule_HeavyNapalm_2_F";
					};
					class B_Plane_CAS_01_CASModule_HeavyBomber_2_F
					{
						name="A-10D Thunderbolt II (10x GBU-12 Bombs)";
						value="B_Plane_CAS_01_CASModule_HeavyBomber_2_F";
					};
				};
			};
		};
	};
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class Components;
	};
	class Plane_CAS_01_base_F: Plane_Base_F
	{
	};
	class B_Plane_CAS_01_F;
	class Plane_CAS_01_dynamicLoadout_base_F: Plane_CAS_01_base_F
	{
		class Components;
	};
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
	};
	class B_Plane_CAS_01_dynamicLoadout_F: Plane_CAS_01_dynamicLoadout_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_EPC\Plane_CAS_01\Data\UI\Plane_CAS_01_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"B_BOMB_PYLON"
						};
						attachment="PylonRack_1Rnd_Missile_AA_04_F";
						priority=5;
						maxweight=300;
						UIposition[]={0.34999999,0};
					};
					class Pylons2: Pylons1
					{
						priority=4;
						attachment="PylonRack_7Rnd_Rocket_04_HE_F";
						maxweight=500;
						UIposition[]={0.345,0.050000001};
					};
					class Pylons3: Pylons1
					{
						priority=3;
						attachment="PylonRack_3Rnd_Missile_AGM_02_F";
						maxweight=1050;
						UIposition[]={0.34,0.1};
					};
					class Pylons4: Pylons1
					{
						priority=2;
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						maxweight=1200;
						UIposition[]={0.33000001,0.2};
					};
					class Pylons5: Pylons1
					{
						priority=1;
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						maxweight=1200;
						UIposition[]={0.33000001,0.25};
					};
					class Pylons6: Pylons5
					{
						UIposition[]={0.33000001,0.30000001};
						mirroredMissilePos=5;
					};
					class Pylons7: Pylons4
					{
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=4;
					};
					class Pylons8: Pylons3
					{
						UIposition[]={0.34,0.44999999};
						mirroredMissilePos=3;
					};
					class Pylons9: Pylons2
					{
						attachment="PylonRack_7Rnd_Rocket_04_AP_F";
						UIposition[]={0.345,0.5};
						mirroredMissilePos=2;
					};
					class Pylons10: Pylons1
					{
						UIposition[]={0.34999999,0.55000001};
						mirroredMissilePos=1;
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_3Rnd_Missile_AGM_02_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_3Rnd_Missile_AGM_02_F",
							"PylonRack_7Rnd_Rocket_04_AP_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_3Rnd_Missile_AGM_02_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_3Rnd_Missile_AGM_02_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_7Rnd_Rocket_04_AP_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class ANZ_CAS
					{
						displayName="CAS MK-77 Napalm";
						attachment[]=
						{
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_ANZ_1RndNapalmMag",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_ANZ_1RndNapalmMag",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonMissile_ANZ_2RndNapalmMag"
						};
					};
					class ANZ_FAC
					{
						displayName="FAC MK-77 Napalm";
						attachment[]=
						{
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonRack_ANZ_7RndWPMag",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonMissile_ANZ_1RndNapalmMag",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_ANZ_1RndNapalmMag",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_ANZ_7RndWPMag",
							"PylonMissile_ANZ_2RndNapalmMag"
						};
					};
				};
			};
		};
	};
	class B_Plane_CAS_01_Napalm_F: B_Plane_CAS_01_dynamicLoadout_F
	{
		scope=2;
		displayName="A-10D Thunderbolt II (CAS) MK-77";
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_EPC\Plane_CAS_01\Data\UI\Plane_CAS_01_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"B_BOMB_PYLON"
						};
						attachment="PylonRack_7Rnd_Rocket_04_AP_F";
						priority=5;
						maxweight=300;
						UIposition[]={0.34999999,0};
					};
					class Pylons2: Pylons1
					{
						priority=4;
						attachment="PylonMissile_ANZ_2RndNapalmMag";
						maxweight=500;
						UIposition[]={0.345,0.050000001};
					};
					class Pylons3: Pylons1
					{
						priority=3;
						attachment="PylonMissile_ANZ_2RndNapalmMag";
						maxweight=1050;
						UIposition[]={0.34,0.1};
					};
					class Pylons4: Pylons1
					{
						priority=2;
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						maxweight=1200;
						UIposition[]={0.33000001,0.2};
					};
					class Pylons5: Pylons1
					{
						priority=1;
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						maxweight=1200;
						UIposition[]={0.33000001,0.25};
					};
					class Pylons6: Pylons5
					{
						UIposition[]={0.33000001,0.30000001};
						mirroredMissilePos=5;
					};
					class Pylons7: Pylons4
					{
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=4;
					};
					class Pylons8: Pylons3
					{
						UIposition[]={0.34,0.44999999};
						mirroredMissilePos=3;
					};
					class Pylons9: Pylons2
					{
						UIposition[]={0.345,0.5};
						mirroredMissilePos=2;
					};
					class Pylons10: Pylons1
					{
						UIposition[]={0.34999999,0.55000001};
						mirroredMissilePos=1;
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_ANZ_1RndNapalmMag",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_ANZ_1RndNapalmMag",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonMissile_ANZ_2RndNapalmMag"
						};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_3Rnd_Missile_AGM_02_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_3Rnd_Missile_AGM_02_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_7Rnd_Rocket_04_AP_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class CAS2
					{
						displayName="CAS 2";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_3Rnd_Missile_AGM_02_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_3Rnd_Missile_AGM_02_F",
							"PylonRack_7Rnd_Rocket_04_AP_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class ANZ_FAC
					{
						displayName="FAC MK-77 Napalm";
						attachment[]=
						{
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonRack_ANZ_7RndWPMag",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonMissile_ANZ_1RndNapalmMag",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_ANZ_1RndNapalmMag",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_ANZ_7RndWPMag",
							"PylonMissile_ANZ_2RndNapalmMag"
						};
					};
				};
			};
		};
	};
	class B_Plane_CAS_01_FAC_F: B_Plane_CAS_01_dynamicLoadout_F
	{
		scope=2;
		displayName="A-10D Thunderbolt II (FAC)";
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_EPC\Plane_CAS_01\Data\UI\Plane_CAS_01_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"B_BOMB_PYLON"
						};
						attachment="PylonRack_ANZ_7RndWPMag";
						priority=5;
						maxweight=300;
						UIposition[]={0.34999999,0};
					};
					class Pylons2: Pylons1
					{
						priority=4;
						attachment="PylonRack_ANZ_7RndWPMag";
						maxweight=500;
						UIposition[]={0.345,0.050000001};
					};
					class Pylons3: Pylons1
					{
						priority=3;
						attachment="PylonMissile_ANZ_2RndNapalmMag";
						maxweight=1050;
						UIposition[]={0.34,0.1};
					};
					class Pylons4: Pylons1
					{
						priority=2;
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						maxweight=1200;
						UIposition[]={0.33000001,0.2};
					};
					class Pylons5: Pylons1
					{
						priority=1;
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						maxweight=1200;
						UIposition[]={0.33000001,0.25};
					};
					class Pylons6: Pylons5
					{
						UIposition[]={0.33000001,0.30000001};
						mirroredMissilePos=5;
					};
					class Pylons7: Pylons4
					{
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=4;
					};
					class Pylons8: Pylons3
					{
						UIposition[]={0.34,0.44999999};
						mirroredMissilePos=3;
					};
					class Pylons9: Pylons2
					{
						UIposition[]={0.345,0.5};
						mirroredMissilePos=2;
					};
					class Pylons10: Pylons1
					{
						UIposition[]={0.34999999,0.55000001};
						mirroredMissilePos=1;
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"PylonRack_ANZ_7RndWPMag",
							"PylonRack_ANZ_7RndWPMag",
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonRack_ANZ_7RndWPMag",
							"PylonRack_ANZ_7RndWPMag"
						};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_3Rnd_Missile_AGM_02_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_3Rnd_Missile_AGM_02_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_7Rnd_Rocket_04_AP_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class ANZ_CAS
					{
						displayName="CAS MK-77 Napalm";
						attachment[]=
						{
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_ANZ_1RndNapalmMag",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_ANZ_1RndNapalmMag",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonMissile_ANZ_2RndNapalmMag"
						};
					};
				};
			};
		};
	};
	class B_Plane_CAS_01_CASModule_Napalm_F: B_Plane_CAS_01_F
	{
		maxSpeed=800;
		scope=1;
		scopeCurator=2;
		displayName="A-10D Thunderbolt II (2x MK77 Napalm)";
		weapons[]=
		{
			"Gatling_30mm_Plane_CAS_01_F",
			"ANZ_Napalmlauncher_Module_CAS",
			"Missile_AGM_02_Plane_CAS_01_F",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"ANZ_2RndNapalm_CASModule_Mag",
			"6Rnd_Missile_AGM_02_F",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_CAS_01_CASModule_MediumNapalm_F: B_Plane_CAS_01_F
	{
		maxSpeed=800;
		scope=1;
		scopeCurator=2;
		displayName="A-10D Thunderbolt II (3x MK77 Napalm)";
		weapons[]=
		{
			"Gatling_30mm_Plane_CAS_01_F",
			"ANZ_Napalmlauncher_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"ANZ_3RndNapalm_CASModule_Mag",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_CAS_01_CASModule_MediumNapalm_2_F: B_Plane_CAS_01_F
	{
		maxSpeed=800;
		scope=1;
		scopeCurator=2;
		displayName="A-10D Thunderbolt II (4x MK77 Napalm)";
		weapons[]=
		{
			"Gatling_30mm_Plane_CAS_01_F",
			"ANZ_Napalmlauncher_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"ANZ_4RndNapalm_CASModule_Mag",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_CAS_01_CASModule_HeavyNapalm_F: B_Plane_CAS_01_F
	{
		maxSpeed=800;
		scope=1;
		scopeCurator=2;
		displayName="A-10D Thunderbolt II (6x MK77 Napalm)";
		weapons[]=
		{
			"Gatling_30mm_Plane_CAS_01_F",
			"ANZ_Napalmlauncher_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"ANZ_6RndNapalm_CASModule_Mag",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_CAS_01_CASModule_HeavyNapalm_2_F: B_Plane_CAS_01_F
	{
		maxSpeed=800;
		scope=1;
		scopeCurator=2;
		displayName="A-10D Thunderbolt II (8x MK77 Napalm)";
		weapons[]=
		{
			"Gatling_30mm_Plane_CAS_01_F",
			"ANZ_Napalmlauncher_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"ANZ_8RndNapalm_CASModule_Mag",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_CAS_01_CASModule_MediumBomber_F: B_Plane_CAS_01_F
	{
		maxSpeed=800;
		scope=1;
		scopeCurator=2;
		displayName="A-10D Thunderbolt II (4x GBU-12)";
		weapons[]=
		{
			"Gatling_30mm_Plane_CAS_01_F",
			"GBU12BombLauncherANZ_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"4Rnd_GBU12_LGB_ANZ_CASModule",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_CAS_01_CASModule_MediumBomber_2_F: B_Plane_CAS_01_F
	{
		maxSpeed=800;
		scope=1;
		scopeCurator=2;
		displayName="A-10D Thunderbolt II (6x GBU-12)";
		weapons[]=
		{
			"Gatling_30mm_Plane_CAS_01_F",
			"GBU12BombLauncherANZ_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"6Rnd_GBU12_LGB_ANZ_CASModule",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_CAS_01_CASModule_HeavyBomber_F: B_Plane_CAS_01_F
	{
		maxSpeed=800;
		scope=1;
		scopeCurator=2;
		displayName="A-10D Thunderbolt II (8x GBU-12)";
		weapons[]=
		{
			"Gatling_30mm_Plane_CAS_01_F",
			"GBU12BombLauncherANZ_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"8Rnd_GBU12_LGB_ANZ_CASModule",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_CAS_01_CASModule_HeavyBomber_2_F: B_Plane_CAS_01_F
	{
		maxSpeed=800;
		scope=1;
		scopeCurator=2;
		displayName="A-10D Thunderbolt II (10x GBU-12)";
		weapons[]=
		{
			"Gatling_30mm_Plane_CAS_01_F",
			"GBU12BombLauncherANZ_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"10Rnd_GBU12_LGB_ANZ_CASModule",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_Fighter_01_F: Plane_Fighter_01_Base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_GBU12"
						};
						attachment="PylonRack_Missile_AMRAAM_D_x1";
						priority=12;
						maxweight=300;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylon2: pylon1
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=1;
					};
					class pylon3
					{
						hardpoints[]=
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_GBU12",
							"B_GBU12_DUAL_RAIL",
							"B_HARM_RAIL",
							"B_SDB_QUAD_RAIL"
						};
						priority=11;
						attachment="PylonRack_Missile_AGM_02_x2";
						maxweight=1050;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylon4: pylon3
					{
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylonBayRight1
					{
						hardpoints[]=
						{
							"B_BIM9X"
						};
						priority=10;
						attachment="PylonMissile_Missile_BIM9X_x1";
						maxweight=1200;
						UIposition[]={0.5,0.25};
						bay=2;
					};
					class pylonBayLeft1: pylonBayRight1
					{
						UIposition[]={0.16,0.25};
						mirroredMissilePos=5;
						bay=1;
					};
					class pylonBayCenter1
					{
						hardpoints[]=
						{
							"B_AMRAAM_D_INT"
						};
						priority=9;
						attachment="PylonMissile_Missile_AMRAAM_D_INT_x1";
						maxweight=1200;
						UIposition[]={0.33000001,0.30000001};
						bay=3;
					};
					class pylonBayCenter2: pylonBayCenter1
					{
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=7;
					};
					class pylonBayCenter3
					{
						hardpoints[]=
						{
							"B_AMRAAM_D_INT",
							"B_SDB_QUAD_RAIL"
						};
						priority=7;
						attachment="";
						maxweight=1200;
						UIposition[]={0.33000001,0.40000001};
						bay=3;
					};
					class pylonBayCenter4: pylonBayCenter3
					{
						UIposition[]={0.33000001,0.44999999};
						mirroredMissilePos=9;
					};
					class pylonBayCenter5
					{
						hardpoints[]=
						{
							"B_AMRAAM_D_INT",
							"B_GBU12"
						};
						priority=5;
						attachment="PylonMissile_Bomb_GBU12_x1";
						maxweight=1200;
						UIposition[]={0.33000001,0.5};
						bay=3;
					};
					class pylonBayCenter6: pylonBayCenter5
					{
						UIposition[]={0.33000001,0.55000001};
						mirroredMissilePos=11;
					};
				};
				class Bays
				{
					class BayLeft1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=2;
					};
					class BayRight1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=2;
					};
					class BayCenter1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=3;
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AGM_02_x2",
							"PylonRack_Missile_AGM_02_x2",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"",
							"",
							"PylonMissile_Bomb_GBU12_x1",
							"PylonMissile_Bomb_GBU12_x1"
						};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"PylonRack_Missile_AMRAAM_D_x2",
							"PylonRack_Missile_AMRAAM_D_x2",
							"PylonRack_Missile_AMRAAM_D_x2",
							"PylonRack_Missile_AMRAAM_D_x2",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1"
						};
					};
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"PylonRack_Missile_AGM_02_x1",
							"PylonRack_Missile_AGM_02_x1",
							"PylonRack_Missile_AGM_02_x2",
							"PylonRack_Missile_AGM_02_x2",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"",
							"",
							"PylonMissile_Bomb_GBU12_x1",
							"PylonMissile_Bomb_GBU12_x1"
						};
					};
					class ANZ_CAS
					{
						displayName="CAS Napalm";
						attachment[]=
						{
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"",
							"",
							"PylonMissile_Bomb_GBU12_x1",
							"PylonMissile_Bomb_GBU12_x1"
						};
					};
				};
			};
		};
	};
	class B_Plane_Fighter_01_Napalm_F: B_Plane_Fighter_01_F
	{
		scope=2;
		displayName="FA-181 Black Wasp II - MK77";
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_GBU12"
						};
						attachment="PylonMissile_ANZ_2RndNapalmMag";
						priority=12;
						maxweight=300;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylon2: pylon1
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=1;
					};
					class pylon3
					{
						hardpoints[]=
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_GBU12",
							"B_GBU12_DUAL_RAIL",
							"B_HARM_RAIL",
							"B_SDB_QUAD_RAIL"
						};
						priority=11;
						attachment="PylonMissile_ANZ_2RndNapalmMag";
						maxweight=1050;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylon4: pylon3
					{
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylonBayRight1
					{
						hardpoints[]=
						{
							"B_BIM9X"
						};
						priority=10;
						attachment="PylonMissile_Missile_BIM9X_x1";
						maxweight=1200;
						UIposition[]={0.5,0.25};
						bay=2;
					};
					class pylonBayLeft1: pylonBayRight1
					{
						UIposition[]={0.16,0.25};
						mirroredMissilePos=5;
						bay=1;
					};
					class pylonBayCenter1
					{
						hardpoints[]=
						{
							"B_AMRAAM_D_INT"
						};
						priority=9;
						attachment="PylonMissile_Missile_AMRAAM_D_INT_x1";
						maxweight=1200;
						UIposition[]={0.33000001,0.30000001};
						bay=3;
					};
					class pylonBayCenter2: pylonBayCenter1
					{
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=7;
					};
					class pylonBayCenter3
					{
						hardpoints[]=
						{
							"B_AMRAAM_D_INT",
							"B_SDB_QUAD_RAIL"
						};
						priority=7;
						attachment="";
						maxweight=1200;
						UIposition[]={0.33000001,0.40000001};
						bay=3;
					};
					class pylonBayCenter4: pylonBayCenter3
					{
						UIposition[]={0.33000001,0.44999999};
						mirroredMissilePos=9;
					};
					class pylonBayCenter5
					{
						hardpoints[]=
						{
							"B_AMRAAM_D_INT",
							"B_GBU12"
						};
						priority=5;
						attachment="PylonMissile_Bomb_GBU12_x1";
						maxweight=1200;
						UIposition[]={0.33000001,0.5};
						bay=3;
					};
					class pylonBayCenter6: pylonBayCenter5
					{
						UIposition[]={0.33000001,0.55000001};
						mirroredMissilePos=11;
					};
				};
				class Bays
				{
					class BayLeft1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=2;
					};
					class BayRight1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=2;
					};
					class BayCenter1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=3;
					};
				};
				class Presets
				{
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonMissile_ANZ_2RndNapalmMag",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"",
							"",
							"PylonMissile_Bomb_GBU12_x1",
							"PylonMissile_Bomb_GBU12_x1"
						};
					};
				};
			};
		};
	};
	class B_Plane_Fighter_01_CASModule_Napalm_F: Plane_Fighter_01_Base_F
	{
		displayName="FA-181 Black Wasp II (2x MK77 Napalm)";
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_EPC\Plane_CAS_01\Data\UI\Plane_CAS_01_3DEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_GBU12"
						};
						attachment="PylonRack_Missile_AMRAAM_D_x1";
						priority=12;
						maxweight=300;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylon2: pylon1
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=1;
					};
					class pylon3
					{
						hardpoints[]=
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_GBU12",
							"B_GBU12_DUAL_RAIL",
							"B_HARM_RAIL",
							"B_SDB_QUAD_RAIL"
						};
						priority=11;
						attachment="";
						maxweight=1050;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylon4: pylon3
					{
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylonBayRight1
					{
						hardpoints[]=
						{
							"B_BIM9X"
						};
						priority=10;
						attachment="PylonMissile_Missile_BIM9X_x1";
						maxweight=1200;
						UIposition[]={0.5,0.25};
						bay=2;
					};
					class pylonBayLeft1: pylonBayRight1
					{
						UIposition[]={0.16,0.25};
						mirroredMissilePos=5;
						bay=1;
					};
					class pylonBayCenter1
					{
						hardpoints[]=
						{
							"B_AMRAAM_D_INT"
						};
						priority=9;
						attachment="PylonMissile_Missile_AMRAAM_D_INT_x1";
						maxweight=1200;
						UIposition[]={0.33000001,0.30000001};
						bay=3;
					};
					class pylonBayCenter2: pylonBayCenter1
					{
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=7;
					};
					class pylonBayCenter3
					{
						hardpoints[]=
						{
							"B_AMRAAM_D_INT",
							"B_SDB_QUAD_RAIL"
						};
						priority=7;
						attachment="";
						maxweight=1200;
						UIposition[]={0.33000001,0.40000001};
						bay=3;
					};
					class pylonBayCenter4: pylonBayCenter3
					{
						UIposition[]={0.33000001,0.44999999};
						mirroredMissilePos=9;
					};
					class pylonBayCenter5
					{
						hardpoints[]=
						{
							"B_AMRAAM_D_INT",
							"B_GBU12"
						};
						priority=5;
						attachment="";
						maxweight=1200;
						UIposition[]={0.33000001,0.5};
						bay=3;
					};
					class pylonBayCenter6: pylonBayCenter5
					{
						UIposition[]={0.33000001,0.55000001};
						mirroredMissilePos=11;
					};
				};
				class Bays
				{
					class BayLeft1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=2;
					};
					class BayRight1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=2;
					};
					class BayCenter1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=3;
					};
				};
				class Presets
				{
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AGM_02_x1",
							"PylonRack_Missile_AGM_02_x1",
							"",
							"",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"",
							""
						};
					};
				};
			};
		};
		scope=1;
		scopeCurator=2;
		weapons[]=
		{
			"weapon_Fighter_Gun20mm_AA",
			"ANZ_Napalmlauncher_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"magazine_Fighter01_Gun20mm_AA_x450",
			"ANZ_2RndNapalm_CASModule_Mag",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		maxSpeed=1400;
	};
	class B_Plane_Fighter_01_CASModule_MediumBomber_F: B_Plane_Fighter_01_CASModule_Napalm_F
	{
		scope=1;
		scopeCurator=2;
		displayName="F/A-181 Black Wasp II (4x GBU-12)";
		weapons[]=
		{
			"weapon_Fighter_Gun20mm_AA",
			"GBU12BombLauncherANZ_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"magazine_Fighter01_Gun20mm_AA_x450",
			"4Rnd_GBU12_LGB_ANZ_CASModule",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_Fighter_01_CASModule_MediumBomber_2_F: B_Plane_Fighter_01_CASModule_Napalm_F
	{
		scope=1;
		scopeCurator=2;
		displayName="F/A-181 Black Wasp II (6x GBU-12)";
		weapons[]=
		{
			"weapon_Fighter_Gun20mm_AA",
			"GBU12BombLauncherANZ_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"magazine_Fighter01_Gun20mm_AA_x450",
			"6Rnd_GBU12_LGB_ANZ_CASModule",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_Fighter_01_CASModule_HeavyBomber_F: B_Plane_Fighter_01_CASModule_MediumBomber_F
	{
		scope=1;
		scopeCurator=2;
		displayName="F/A-181 Black Wasp II (8x GBU-12)";
		weapons[]=
		{
			"weapon_Fighter_Gun20mm_AA",
			"GBU12BombLauncherANZ_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"magazine_Fighter01_Gun20mm_AA_x450",
			"8Rnd_GBU12_LGB_ANZ_CASModule",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_Fighter_01_CASModule_HeavyBomber_2_F: B_Plane_Fighter_01_CASModule_MediumBomber_F
	{
		scope=1;
		scopeCurator=2;
		displayName="F/A-181 Black Wasp II (10x GBU-12)";
		weapons[]=
		{
			"weapon_Fighter_Gun20mm_AA",
			"GBU12BombLauncherANZ_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"magazine_Fighter01_Gun20mm_AA_x450",
			"10Rnd_GBU12_LGB_ANZ_CASModule",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_Fighter_01_CASModule_MediumNapalm_F: B_Plane_Fighter_01_CASModule_Napalm_F
	{
		scope=1;
		scopeCurator=2;
		displayName="F/A-181 Black Wasp II (3x MK77 Napalm)";
		weapons[]=
		{
			"weapon_Fighter_Gun20mm_AA",
			"ANZ_Napalmlauncher_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"magazine_Fighter01_Gun20mm_AA_x450",
			"ANZ_3RndNapalm_CASModule_Mag",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_Fighter_01_CASModule_MediumNapalm_2_F: B_Plane_Fighter_01_CASModule_Napalm_F
	{
		scope=1;
		scopeCurator=2;
		displayName="F/A-181 Black Wasp II (4x MK77 Napalm)";
		weapons[]=
		{
			"weapon_Fighter_Gun20mm_AA",
			"ANZ_Napalmlauncher_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"magazine_Fighter01_Gun20mm_AA_x450",
			"ANZ_4RndNapalm_CASModule_Mag",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_Fighter_01_CASModule_HeavyNapalm_F: B_Plane_Fighter_01_CASModule_Napalm_F
	{
		scope=1;
		scopeCurator=2;
		displayName="F/A-181 Black Wasp II (6x MK77 Napalm)";
		weapons[]=
		{
			"weapon_Fighter_Gun20mm_AA",
			"ANZ_Napalmlauncher_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"magazine_Fighter01_Gun20mm_AA_x450",
			"ANZ_6RndNapalm_CASModule_Mag",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_Fighter_01_CASModule_HeavyNapalm_2_F: B_Plane_Fighter_01_CASModule_Napalm_F
	{
		scope=1;
		scopeCurator=2;
		displayName="F/A-181 Black Wasp II (8x MK77 Napalm)";
		weapons[]=
		{
			"weapon_Fighter_Gun20mm_AA",
			"ANZ_Napalmlauncher_Module_CAS",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"magazine_Fighter01_Gun20mm_AA_x450",
			"ANZ_8RndNapalm_CASModule_Mag",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
};
