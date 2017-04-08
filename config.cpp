////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Sat Apr 08 15:59:50 2017 : Source 'file' date Sat Apr 08 15:59:50 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class exile_server : config.bin{
class CfgPatches
{
	class exile_server
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","exile_server_config"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgFunctions
{
	class ExileServer
	{
		class Bootstrap
		{
			file = "exile_server\bootstrap";
			class preInit
			{
				preInit = 1;
			};
			class postInit
			{
				postInit = 1;
			};
		};
		class FiniteStateMachine
		{
			file = "exile_server\fsm";
			class main
			{
				ext = ".fsm";
			};
		};
	};
};
//};
