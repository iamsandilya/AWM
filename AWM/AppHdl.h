#pragma once

#include "AppBase.h"
#include "AppWashing.h"
#include "AppRinsing.h"
#include "AppSpinning.h"
#include "AppDrying.h"
#include "AppStartUp.h"

class CAppStartUp;
class CAppWashing;
class CAppRinsing;
class CAppSpinning;
class CAppDrying;



class CAppHdl
{


public:
	enum enumWaterTemp
	{
		EN_COLD_WATER = 0,
		EN_HOT_WATER,

		EN_NUM_OF_WATER_TEMP
	};

	enum enumWaterLevel
	{
		EN_NO_WATER = 0,
		EN_ADEQUATE_WATER,

		EN_NUM_OF_WATER_LEVEL
	};

	enum enumMachineHeat
	{
		EN_LESS_THAN_EQUAL_40 = 0,
		EN_MORE_THAN_40,

		EN_NUM_OF_WATER_HEAT
	};

	enum enumApplication
	{
		EN_APP_STARTUP = 0,
		EN_APP_WASHING,
		EN_APP_RINSING,
		EN_APP_SPINNING,
		EN_APP_DRYING,


		EN_NUM_OF_APPLICATIONS
	};



private:

	static CAppStartUp		ms_obAppStartUp;
	static CAppWashing		ms_obAppWashing;
	static CAppRinsing		ms_obAppRinsing;
	static CAppSpinning		ms_obAppSpinning;
	static CAppDrying		ms_obAppDrying;

	static enumApplication  ms_enCurrApplication;
	static enumApplication  ms_enLastApplication;

	static CAppBase* const  msc_arrApplications[EN_NUM_OF_APPLICATIONS];
	static uint32_t ms_ui32DevInactiveTime;
	static uint32_t ms_ui32DevActiveTimeInSecs;
	static bool     ms_boDryerStateEnabled;
	static bool     ms_boStopTimer;
	static bool     ms_boMotorEnabled;
	static bool     ms_boCycleComplete;

	static enumWaterLevel   ms_boWaterLevel;
	static enumWaterTemp    ms_boWaterTemp;
	static enumMachineHeat  ms_boMachineHeat;

// Public Methods
public:
	static inline const enumApplication& GetCurrentApplicationIndex(void)
	{
		return ms_enCurrApplication;
	}

	static void CallApp(enumApplication, uint8_t);
	static void Init(void);
	static void MainLoop(void);
	static void SelectStartApplication(void);
	static void SetDryerStateEnabled(bool);
	static void SetStopTimer(bool);
	static void SetCycleCompleteStatus(bool);
	static void SetMotorEnabledStatus(bool);
	static void ResetAllParameters(void);
	static void SetLowWaterWashingCondition(void);
	static void SetNormalWaterWashingCondition(void);
	static void SetWaterLevel(enumWaterLevel);
	static void SetWaterTemp(enumWaterTemp);
	static void SetMachineHeat(enumMachineHeat);
	static void ResetActiveTime(void);

	static uint32_t			GetTotalRunTime(void)        { return ms_ui32DevActiveTimeInSecs; }
	static bool				GetStopTimer(void)           { return ms_boStopTimer; }
	static bool				GetMotorEnabledStatus(void)  { return ms_boMotorEnabled; }
	static bool				GetCycleCompleteStatus(void) { return ms_boCycleComplete; }
	static enumWaterLevel	GetWaterLevel(void)			 { return ms_boWaterLevel; }
	static enumWaterTemp	GetWaterTemp (void)          { return ms_boWaterTemp; }
	static enumMachineHeat	GetMachineHeat(void)	     { return ms_boMachineHeat; }

};
