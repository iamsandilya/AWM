#include "AppDrying.h"
#include "AppHdl.h"




uint32_t CAppDrying::ms_ui32AppTime;
uint32_t CAppDrying::ms_ui32MaxAppTime;
CAppBase::enumAppCycleState CAppDrying::ms_enCycleStatus;

void CAppDrying::Init(void)
{
	ms_enCycleStatus = CAppBase::EN_NOT_STARTED;
}

void CAppDrying::Configure(uint8_t f_ui8Config)
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

void CAppDrying::PauseApplication(void)
{
	ms_enCycleStatus = CAppBase::EN_COMPLETED;
}

void CAppDrying::ProcessApplication(void)
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
		CAppHdl::CallApp(CAppHdl::EN_APP_STARTUP, CAppStartUp::EN_CONFIG_SHUTDOWN);
	}
}

uint32_t CAppDrying::GetAppTime(void)
{
	return ms_ui32AppTime;
}

void CAppDrying::SetAppTime(uint32_t f_ui32time)
{
	ms_ui32AppTime = f_ui32time;
}

uint32_t CAppDrying::GetMaxAppTime(void)
{
	return ms_ui32MaxAppTime;
}

void CAppDrying::SetMaxAppTime(uint32_t f_ui32MaxAppTime)
{
	ms_ui32MaxAppTime = f_ui32MaxAppTime * MIN_TO_SEC;
}

void CAppDrying::SetAppCycleState(enumAppCycleState f_boStatus)
{
	ms_enCycleStatus = f_boStatus;
}

CAppBase::enumAppCycleState CAppDrying::GetAppCycleState(void)
{
	return ms_enCycleStatus;
}


void CAppDrying::CheckValidCondition(void)
{
	if ((CAppHdl::GetMachineHeat() == CAppHdl::EN_MORE_THAN_40) && (CAppHdl::GetWaterLevel() == CAppHdl::EN_NO_WATER))
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
