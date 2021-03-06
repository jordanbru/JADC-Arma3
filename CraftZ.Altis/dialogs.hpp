#define IDC_OK 1 //emulate "OK"
#define IDC_CANCEL 0 //emulate "cancel"


class invMenu
{    

	idd = 4999;
	onLoad="uiNamespace setVariable ['invMenu',_this select 0]";
	movingEnable = false;
	enableSimulation = true;

	class controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by RyroNZ, v1.063, #Fubyja)
		////////////////////////////////////////////////////////

		class InvMenu_background: RscPicture
		{
			idc = 6000;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.37099 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.25802 * safezoneW;
			h = 0.22 * safezoneH;
		};
		class InvMenu_slPic: RscPicture
		{
			idc = 6001;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.381311 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0567645 * safezoneW;
			h = 0.099 * safezoneH;
		};
		class InvMenu_desc: RscStructuredText
		{
			idc = 6002;
			x = 0.443235 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.170294 * safezoneW;
			h = 0.176 * safezoneH;
		};
		class InvMenu_use: RscButtonMenu
		{
			idc = 6003;
			text = "USE"; //--- ToDo: Localize;
			textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
			x = 0.381311 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0464437 * safezoneW;
			h = 0.022 * safezoneH;
			action = "closeDialog 1";
		};
		class InvMenu_cancel: RscButtonMenu
		{
			idc = 6004;
			text = "CLOSE"; //--- ToDo: Localize;
			textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
			x = 0.381311 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464437 * safezoneW;
			h = 0.022 * safezoneH;
			action = "closeDialog 0";
		};
		class InvMenu_data: RscText
		{
			idc = 6005;
			text = ""; //--- ToDo: Localize;
			x = -8.5 * GUI_GRID_W + GUI_GRID_X;
			y = 17 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 2.5 * GUI_GRID_H;
			colorText[] = {-1,-1,-1,0};
			colorBackground[] = {-1,-1,-1,0};
			colorActive[] = {-1,-1,-1,0};
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

	};


};

class craftMenu
{    

	idd = 6999;
	onLoad="uiNamespace setVariable ['craftMenu', _this select 0]";
	movingEnable = false;
	enableSimulation = true;

	class controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by RyroNZ, v1.063, #Wuruma)
		////////////////////////////////////////////////////////

		class craftMenu_background: RscPicture
		{
			idc = 7000;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.309065 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.38187 * safezoneW;
			h = 0.165 * safezoneH;
		};
		class craftMenu_recipeSelect: RscCombo
		{
			idc = 7001;
			tooltip = "SELECT A RECIPE";
			x = 0.324546 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.350908 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class craftMenu_item1_pic: RscPicture
		{
			idc = 7002;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.324546 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class craftMenu_item1_count: RscText
		{
			idc = 7003;
			text = "";
			x = 0.324546 * safezoneW + safezoneX;
			y = 0.300 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;

		};
		class craftMenu_item2_pic: RscPicture
		{
			idc = 7004;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.37615 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class craftMenu_item2_count: RscText
		{
			idc = 7005;
			text = "";
			x = 0.37615 * safezoneW + safezoneX;
			y = 0.300 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;

		};
		class craftMenu_item3_pic: RscPicture
		{
			idc = 7006;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.427754 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class craftMenu_item3_count: RscText
		{
			idc = 7007;
			text = "";
			x = 0.427754 * safezoneW + safezoneX;
			y = 0.300 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;

		};
		class craftMenu_item4_pic: RscPicture
		{
			idc = 7008;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.479358 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class craftMenu_item4_count: RscText
		{
			idc = 7009;
			text = "";
			x = 0.479358 * safezoneW + safezoneX;
			y = 0.300 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;

		};
		class craftMenu_item5_pic: RscPicture
		{
			idc = 7010;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.530962 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class craftMenu_item5_count: RscText
		{
			idc = 7011;
			text = "";
			x = 0.530962 * safezoneW + safezoneX;
			y = 0.300 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;

		};
		class craftMenu_item6_pic: RscPicture
		{
			idc = 7012;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.582567 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class craftMenu_item6_count: RscText
		{
			idc = 7013;
			text = "";
			x = 0.582567 * safezoneW + safezoneX;
			y = 0.300 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class craftMenu_item7_pic: RscPicture
		{
			idc = 7014;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.634171 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class craftMenu_item7_count: RscText
		{
			idc = 7015;
			text = "";
			x = 0.634171 * safezoneW + safezoneX;
			y = 0.300 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.055 * safezoneH;

		};
		class craftMenu_createItemName: RscText
		{
			idc = 7018;
			text = "Create: ";
			x = 0.324546 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.1612833 * safezoneW;
			h = 0.022 * safezoneH;

		};
		class craftMenu_doCraft: RscButtonMenu
		{
			idc = 7016;
			text = "CRAFT"; //--- ToDo: Localize;
			textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
			x = 0.577406 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0412833 * safezoneW;
			h = 0.022 * safezoneH;
			action = "closeDialog 1";
		};
		class craftMenu_cancel: RscButtonMenu
		{
			idc = 7017;
			text = "CANCEL"; //--- ToDo: Localize;
			textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
			x = 0.62901 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0464437 * safezoneW;
			h = 0.022 * safezoneH;
			action = "closeDialog 0";
		};
		class craftMenu_data: RscText
		{
			idc = 7019;
			text = ""; //--- ToDo: Localize;
			x = -8.5 * GUI_GRID_W + GUI_GRID_X;
			y = 17 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 2.5 * GUI_GRID_H;
			colorText[] = {-1,-1,-1,0};
			colorBackground[] = {-1,-1,-1,0};
			colorActive[] = {-1,-1,-1,0};
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};

	
};

class mainDialog
	{    

		idd = 8999;
		onLoad="uiNamespace setVariable ['mainDialog', _this select 0]";
		movingEnable = false;
		enableSimulation = true;

		class controls
		{
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT START (by RyroNZ, v1.063, #Mapoxa)
			////////////////////////////////////////////////////////

			class mainDialog_background: RscPicture
			{
				idc = 9000;
				text = "#(argb,8,8,3)color(0,0,0,0.5)";
				x = 0.025278 * safezoneW + safezoneX;
				y = 0.103957 * safezoneH + safezoneY;
				w = 0.11868 * safezoneW;
				h = 0.341037 * safezoneH;
			};
			class mainDialog_craftingMenu: RscButtonMenu
			{
				idc = 9050;
				text = "CRAFTING"; //--- ToDo: Localize;
				textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
				x = 0.035598 * safezoneW + safezoneX;
				y = 0.147961 * safezoneH + safezoneY;
				w = 0.0980404 * safezoneW;
				h = 0.0220024 * safezoneH;
				action = "closeDialog 1";
			};
			class mainDialog_close: RscButtonMenu
			{
				idc = 9001;
				text = "CLOSE"; //--- ToDo: Localize;
				textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
				x = 0.040758 * safezoneW + safezoneX;
				y = 0.41199 * safezoneH + safezoneY;
				w = 0.0877204 * safezoneW;
				h = 0.0220024 * safezoneH;
				action = "closeDialog 0";
			};
			class mainDialog_header: RscStructuredText
			{
				idc = 9004;
				text = "JADC Menu"; //--- ToDo: Localize;
				x = 0.030438 * safezoneW + safezoneX;
				y = 0.114958 * safezoneH + safezoneY;
				w = 0.10836 * safezoneW;
				h = 0.0220024 * safezoneH;
			};
			class mainDialog_group: RscButtonMenu
			{
				idc = 9002;
				text = "GROUPS"; //--- ToDo: Localize;
				textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
				x = 0.035598 * safezoneW + safezoneX;
				y = 0.180965 * safezoneH + safezoneY;
				w = 0.0980404 * safezoneW;
				h = 0.0220024 * safezoneH;
				action = "closeDialog 2";
			};
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT END
			////////////////////////////////////////////////////////

		};
	};