#include "AppSpinning.h"
#include "AppHdl.h"



uint32_t CAppSpinning::ms_ui32AppTime;
uint32_t CAppSpinning::ms_ui32MaxAppTime;
CAppBase::enumAppCycleState	 CAppSpinning::ms_enCycleStatus;

void CAppSpinning::Init(void)
{
	ms_enCycleStatus = CAppBase::EN_NOT_STARTED;
}

void CAppSpinning::Configure(uint8_t f_ui8Config)
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


void CAppSpinning::PauseApplication(void)
{
	ms_enCycleStatus = CAppBase::EN_COMPLETED;
}

void CAppSpinning::ProcessApplication(void)
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
		CAppHdl::CallApp(CAppHdl::EN_APP_DRYING, CAppRinsing::EN_CONFIG_SYSTEM_STARTUP);
	}
}

uint32_t CAppSpinning::GetAppTime(void)
{
	return ms_ui32AppTime;
}

uint32_t CAppSpinning::GetMaxAppTime(void)
{
	return ms_ui32MaxAppTime;
}


void CAppSpinning::SetMaxAppTime(uint32_t f_ui32MaxAppTime)
{
	ms_ui32MaxAppTime = f_ui32MaxAppTime * MIN_TO_SEC;
}

void CAppSpinning::SetAppTime(uint32_t f_ui32time)
{
	ms_ui32AppTime = f_ui32time;
}

void CAppSpinning::SetAppCycleState(CAppBase::enumAppCycleState f_boStatus)
{
	ms_enCycleStatus = f_boStatus;
}

CAppBase::enumAppCycleState CAppSpinning::GetAppCycleState(void)
{
	return ms_enCycleStatus;
}


void CAppSpinning::CheckValidCondition(void)
{
	if(CAppHdl::GetWaterLevel() == CAppHdl::EN_NO_WATER)
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

