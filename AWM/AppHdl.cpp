#include "MyUI.h"
#include "AppHdl.h"
#include "AppBase.h"
#include "AppWashing.h"
#include "AppRinsing.h"
#include "AppSpinning.h"
#include "AppDrying.h"
#include "AppStartUp.h"

using namespace AWM;



CAppStartUp	    CAppHdl::ms_obAppStartUp;
CAppWashing		CAppHdl::ms_obAppWashing;
CAppRinsing		CAppHdl::ms_obAppRinsing;
CAppSpinning	CAppHdl::ms_obAppSpinning;
CAppDrying		CAppHdl::ms_obAppDrying;

CAppHdl::enumApplication  CAppHdl::ms_enCurrApplication;
CAppHdl::enumApplication  CAppHdl::ms_enLastApplication;

uint32_t CAppHdl::ms_ui32DevInactiveTime;
uint32_t CAppHdl::ms_ui32DevActiveTimeInSecs;
bool CAppHdl::ms_boDryerStateEnabled;
bool CAppHdl::ms_boStopTimer;
bool CAppHdl::ms_boMotorEnabled;
bool CAppHdl::ms_boCycleComplete;

CAppHdl::enumWaterLevel   CAppHdl::ms_boWaterLevel;
CAppHdl::enumWaterTemp    CAppHdl::ms_boWaterTemp;
CAppHdl::enumMachineHeat  CAppHdl::ms_boMachineHeat;

CAppBase* const CAppHdl::msc_arrApplications[EN_NUM_OF_APPLICATIONS] =
{
	&ms_obAppStartUp,
	&ms_obAppWashing,
	&ms_obAppRinsing,
	&ms_obAppSpinning,
	&ms_obAppDrying,
};


void CAppHdl::Init()
{
	ms_boCycleComplete	= false;
	ms_boMotorEnabled	= false;
	ms_boStopTimer		= false;
	ms_boWaterLevel		= EN_NO_WATER;
	ms_boWaterTemp		= EN_COLD_WATER;
	ms_boMachineHeat	= EN_LESS_THAN_EQUAL_40;

	SetCycleCompleteStatus(false);
	ms_ui32DevInactiveTime = 0;

	for (uint8_t index = 0; index < EN_NUM_OF_APPLICATIONS; index++)
	{
		msc_arrApplications[index]->Init();

		ms_enCurrApplication = EN_APP_STARTUP;
		ms_enLastApplication = EN_APP_STARTUP;
	}
}


void CAppHdl::CallApp(enumApplication f_enAppTarget, uint8_t f_ui8Config)
{
	if (f_enAppTarget == ms_enCurrApplication)
	{
		msc_arrApplications[f_enAppTarget]->Configure(f_ui8Config);
	}
	else if (f_enAppTarget < EN_NUM_OF_APPLICATIONS)
	{
		if ((!ms_boDryerStateEnabled)&& (ms_enCurrApplication == EN_APP_SPINNING))
		{
			// When dryer is disabled, change the state to startup
			f_enAppTarget = EN_APP_STARTUP;
			f_ui8Config = CAppStartUp::EN_CONFIG_SHUTDOWN;
		}

		msc_arrApplications[ms_enCurrApplication]->PauseApplication();

		msc_arrApplications[f_enAppTarget]->Configure(f_ui8Config);

		ms_enLastApplication = ms_enCurrApplication;
		ms_enCurrApplication = f_enAppTarget;
	}
}


void CAppHdl::SelectStartApplication(void)
{
	CAppHdl::CallApp(EN_APP_STARTUP, CAppStartUp::EN_CONFIG_SYSTEM_STARTUP);

}

void CAppHdl::MainLoop(void)
{
	uint32_t ui32AppTime;

	// if Stop timer is set, dont increment the active time.
	if(!ms_boStopTimer)
		ms_ui32DevActiveTimeInSecs++;
		
	msc_arrApplications[ms_enCurrApplication]->ProcessApplication();

	ui32AppTime = msc_arrApplications[ms_enCurrApplication]->GetAppTime();

	if (ui32AppTime >= msc_arrApplications[ms_enCurrApplication]->GetMaxAppTime())
	{
		switch (ms_enCurrApplication)
		{
		case (EN_APP_WASHING):
			// Continue with next cycle
			CallApp(EN_APP_RINSING, CAppWashing::EN_CONFIG_SYSTEM_STARTUP);
			break;
		case (EN_APP_RINSING):
			// Continue with next cycle
			CallApp(EN_APP_SPINNING, CAppRinsing::EN_CONFIG_SYSTEM_STARTUP);
			break;
		case (EN_APP_SPINNING):
			// Continue with next cycle
			CallApp(EN_APP_DRYING, CAppDrying::EN_CONFIG_SYSTEM_STARTUP);
			break;
		case (EN_APP_DRYING):
			// Continue with next cycle
			CallApp(EN_APP_STARTUP, CAppStartUp::EN_CONFIG_SHUTDOWN);
			break;
		default:
			break;
		}
		
	}
}


void CAppHdl::SetDryerStateEnabled(bool f_boStatus)
{
	ms_boDryerStateEnabled = f_boStatus;
}

void CAppHdl::SetStopTimer(bool f_boStatus)
{
	ms_boStopTimer = f_boStatus;
}

void CAppHdl::SetCycleCompleteStatus(bool f_boStatus)
{
	ms_boCycleComplete = f_boStatus;
}



void CAppHdl::ResetAllParameters(void)
{
	SetStopTimer(true);
	SetMotorEnabledStatus(false);

	CAppWashing::SetAppCycleState(CAppBase::EN_NOT_STARTED);
	CAppWashing::SetAppTime(ZERO);

	CAppRinsing::SetAppCycleState(CAppBase::EN_NOT_STARTED);
	CAppRinsing::SetAppTime(ZERO);

	CAppSpinning::SetAppCycleState(CAppBase::EN_NOT_STARTED);
	CAppSpinning::SetAppTime(ZERO);

	CAppDrying::SetAppCycleState(CAppBase::EN_NOT_STARTED);
	CAppDrying::SetAppTime(ZERO);

}

void CAppHdl::SetMotorEnabledStatus(bool f_boStatus)
{
	ms_boMotorEnabled = f_boStatus;
}

void CAppHdl::SetWaterLevel(enumWaterLevel f_enWaterLevel)
{
	ms_boWaterLevel = f_enWaterLevel;
}

void CAppHdl::SetWaterTemp(enumWaterTemp f_enWaterTemp)
{
	ms_boWaterTemp = f_enWaterTemp;
}

void CAppHdl::SetMachineHeat(enumMachineHeat f_enMachineHeat)
{
	ms_boMachineHeat = f_enMachineHeat;
}

void CAppHdl::SetLowWaterWashingCondition(void)
{
	// Low water at washing
	SetWaterLevel(EN_NO_WATER);
	SetMotorEnabledStatus(false);
}

void CAppHdl::SetNormalWaterWashingCondition(void)
{
	// Low water at washing
	SetWaterLevel(EN_ADEQUATE_WATER);
	SetMotorEnabledStatus(true);
}

void CAppHdl::ResetActiveTime(void)
{
	ms_ui32DevActiveTimeInSecs = 0;
}