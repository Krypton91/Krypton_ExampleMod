class CfgPatches 
{
	class Krypton_ExampleMod 
	{
		units[] = 
		{
			"Krypton_ExampleMod"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data"
		};
	};
};

class CfgMods 
{
	class Krypton_ExampleMod 
	{
		dir = "Krypton_ExampleMod";
		picture = "";
		action = "https://DeutscheBohrmaschine.de";
		hideName = 1;
		hidePicture = 1;
		name = "DeutscheBohrmaschine Mod";
		credits = "Krypton91";
		author = "Krypton91";
		authorID = "76561198796326626";
		version = "6.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Mission", "World", "Game"};

	    class defs
	    {
			class worldScriptModule
            {
                value = "";
                files[] = {"Krypton_ExampleMod/scripts/4_World"};
            };
        };
	};
};