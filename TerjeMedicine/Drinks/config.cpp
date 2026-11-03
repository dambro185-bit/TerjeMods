class CfgPatches
{
	class TerjeMedicine_Drinks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"TerjeMedicine",
			"DZ_Gear_Drinks"
		};
	};
};

class CfgVehicles
{
	class SodaCan_ColorBase;
	class TerjeEnergyDrink : SodaCan_ColorBase
	{ 
		scope=0;
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	//Manaos Cola. #Dambro182
	class TerjeManaos: TerjeEnergyDrink
	{
		scope=2;
		medSleepingIncrementValue = 8;
		medSleepingIncrementTimeSec = 1.0; // Time per 1ml
		displayName="Manaos Cola";
		descriptionShort="Manaos Cola Bien Fria";
		hiddenSelectionsTextures[]={"TerjeMedicine\Drinks\data\Manaos_cola.paa"};
	};
	//Cerveza #Baja el valor del sueño. #Dambro182
	//Hacer que de mareos si tomas mucho (Futura Feature)
	class TerjeBeer: TerjeEnergyDrink
	{
		scope=2;
		medSleepingIncrementValue = -6;
		medSleepingIncrementTimeSec = 1.0; // Time per 1ml
		displayName="Survivor Ipa";
		descriptionShort="Elaborada con ingredientes de dudosa procedencia y un sabor que te recuerda que todavía estás vivo. Ideal para acompañar una fogata, celebrar un buen Raid o lamentar esa muerte absurda después de tres horas de supervivencia.";
		hiddenSelectionsTextures[]={"TerjeMedicine\Drinks\data\DayZ_ipa.paa"};
	};
	class TerjeDrinkYaguar: TerjeEnergyDrink
	{
		scope=2;
		medSleepingIncrementValue = 10;
		medSleepingIncrementTimeSec = 1.0; // Time per 1ml
		displayName="#STR_TERJEDRINK_YAGUAR_NAME";
		descriptionShort="#STR_TERJEDRINK_YAGUAR_DESC";
		hiddenSelectionsTextures[]={"TerjeMedicine\Drinks\data\yaguar.paa"};
	};
	class TerjeDrinkPrayboy: TerjeEnergyDrink
	{
		scope=2;
		medSleepingIncrementValue = 4;
		medSleepingIncrementTimeSec = 1.0; // Time per 1ml
		displayName="#STR_TERJEDRINK_PRAYBOY_NAME";
		descriptionShort="#STR_TERJEDRINK_PRAYBOY_DESC";
		hiddenSelectionsTextures[]={"TerjeMedicine\Drinks\data\prayboy.paa"};
	};
	class TerjeDrink6Energy: TerjeEnergyDrink
	{
		scope=2;
		medSleepingIncrementValue = 8;
		medSleepingIncrementTimeSec = 0.8; // Time per 1ml
		displayName="#STR_TERJEDRINK_6ENERGY_NAME";
		descriptionShort="#STR_TERJEDRINK_6ENERGY_DESC";
		hiddenSelectionsTextures[]={"TerjeMedicine\Drinks\data\6energy.paa"};
	};

	class HouseNoDestruct;
//Texturas de los objetos estaticos para colocar por el mapa. #Dambro182
	class StaticObj_TerjeManaos: HouseNoDestruct
	{
		scope=1;
		model="dz\gear\drinks\SodaCan.p3d";
		hiddenSelections[]={"camoGround"};
		hiddenSelectionsTextures[]={"TerjeMedicine\Drinks\data\Manaos_cola.paa"};
	};
	class StaticObj_TerjeBeer: HouseNoDestruct
	{
		scope=1;
		model="dz\gear\drinks\SodaCan.p3d";
		hiddenSelections[]={"camoGround"};
		hiddenSelectionsTextures[]={"TerjeMedicine\Drinks\data\DayZ_ipa.paa"};
	};
	class StaticObj_TerjeDrinkYaguar: HouseNoDestruct
	{
		scope=1;
		model="dz\gear\drinks\SodaCan.p3d";
		hiddenSelections[]={"camoGround"};
		hiddenSelectionsTextures[]={"TerjeMedicine\Drinks\data\yaguar.paa"};
	};
	class StaticObj_TerjeDrinkPrayboy: HouseNoDestruct
	{
		scope=1;
		model="dz\gear\drinks\SodaCan.p3d";
		hiddenSelections[]={"camoGround"};
		hiddenSelectionsTextures[]={"TerjeMedicine\Drinks\data\prayboy.paa"};
	};
	class StaticObj_TerjeDrink6Energy: HouseNoDestruct
	{
		scope=1;
		model="dz\gear\drinks\SodaCan.p3d";
		hiddenSelections[]={"camoGround"};
		hiddenSelectionsTextures[]={"TerjeMedicine\Drinks\data\6energy.paa"};
	};
};
