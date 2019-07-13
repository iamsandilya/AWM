#include "AppStartUp.h"
#include "AppHdl.h"
#include <iostream>


using namespace System::Windows::Forms;

uint32_t CAppStartUp::ms_ui32AppTime;
uint32_t CAppStartUp::ms_ui32MaxAppTime;

void CAppStartUp::Init(void)
{
	
}

void CAppStartUp::Configure(uint8_t f_ui8Config)
{
	switch (f_ui8Config)
	{
		case(EN_CONFIG_SYSTEM_STARTUP):
			CAppHdl::ResetActiveTime();
			CAppHdl::SetCycleCompleteStatus(false);
			break;
		case(EN_CONFIG_SHUTDOWN):
			CAppHdl::SetCycleCompleteStatus(true);
			CAppHdl::ResetAllParameters();
			MessageBox::Show("Washing Cycle Completed!! Stop & Start the application");
			break;
		case(EN_CONFIG_RESTART):
			CAppHdl::SetCycleCompleteStatus(false);
			CAppHdl::ResetAllParameters();
			CAppHdl::ResetActiveTime();
			break;
		default:
			break;
	}
}

void CAppStartUp::PauseApplication(void)
{

}

void CAppStartUp::ProcessApplication(void)
{

}

uint32_t CAppStartUp::GetAppTime(void)
{
	return ms_ui32AppTime;
}

uint32_t CAppStartUp::GetMaxAppTime(void)
{
	return ms_ui32MaxAppTime;
}


void CAppStartUp::SetMaxAppTime(uint32_t f_ui32MaxAppTime)
{
	ms_ui32MaxAppTime = f_ui32MaxAppTime * MIN_TO_SEC;
}
