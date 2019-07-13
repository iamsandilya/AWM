#include "AppWashing.h"
#include "AppHdl.h"



uint32_t CAppWashing::ms_ui32AppTime;
uint32_t CAppWashing::ms_ui32MaxAppTime;
CAppBase::enumAppCycleState	 CAppWashing::ms_enCycleStatus;


void CAppWashing::Init(void)
{
	ms_enCycleStatus = CAppBase::EN_NOT_STARTED;
}

void CAppWashing::Configure(uint8_t f_ui8Config)
{
	switch (f_ui8Config)
	{
	case(EN_CONFIG_SYSTEM_STARTUP):
		ms_enCycleStatus = CAppBase::EN_RUNNING;
		ms_ui32AppTime = 0;
		break;
	case(EN_CONFIG_SHUTDOWN):
		break;
	default:
		break;

	}
}

void CAppWashing::PauseApplication(void)
{
	ms_enCycleStatus = CAppBase::EN_COMPLETED;
}

void CAppWashing::ProcessApplication(void)
{
	// Mandatory first step
	CheckValidCondition();

	if (!CAppHdl::GetStopTimer())
	{
		// Increment the time
		ms_ui32AppTime++;
		CAppHdl::SetMotorEnabledStatus(true);
	}
	else
	{
		// Stop the motor
		CAppHdl::SetMotorEnabledStatus(false);
	}

	if (ms_ui32AppTime >= ms_ui32MaxAppTime)
	{
		CAppHdl::CallApp(CAppHdl::EN_APP_RINSING, CAppRinsing::EN_CONFIG_SYSTEM_STARTUP);
	}
}

uint32_t CAppWashing::GetAppTime(void)
{
	return ms_ui32AppTime;
}

 void CAppWashing::SetAppTime(uint32_t f_ui32time)
{
	 ms_ui32AppTime = f_ui32time;
}

uint32_t CAppWashing::GetMaxAppTime(void)
{
	return ms_ui32MaxAppTime;
}

void CAppWashing::SetMaxAppTime(uint32_t f_ui32MaxAppTime)
{
	ms_ui32MaxAppTime = f_ui32MaxAppTime * MIN_TO_SEC;
}

void CAppWashing::SetAppCycleState(CAppBase::enumAppCycleState f_boStatus)
{
	ms_enCycleStatus = f_boStatus;
}

CAppBase::enumAppCycleState CAppWashing::GetAppCycleState(void)
{
	return ms_enCycleStatus;
}

void CAppWashing::CheckValidCondition(void)
{
	if (((CAppHdl::GetMachineHeat() == CAppHdl::EN_MORE_THAN_40) && (CAppHdl::GetWaterTemp() == CAppHdl::EN_HOT_WATER) && (CAppHdl::GetWaterLevel() == CAppHdl::EN_ADEQUATE_WATER))
		|| ((CAppHdl::GetMachineHeat() == CAppHdl::EN_LESS_THAN_EQUAL_40) && (CAppHdl::GetWaterTemp() == CAppHdl::EN_COLD_WATER) && (CAppHdl::GetWaterLevel() == CAppHdl::EN_ADEQUATE_WATER)))
	{
		// Start the timer it will take care of motor
		CAppHdl::SetStopTimer(false);
	}
	else
	{
		// Stop the timer it will take care of motor
		CAppHdl::SetStopTimer(true);
	}
}
