

#pragma once
#include "AppBase.h"

class CAppRinsing : public CAppBase
{

#define APP_RINSING_RUNTIME     (15 * MIN_TO_SEC)
	// enum
public:
	enum enumConfig
	{
		EN_CONFIG_SYSTEM_STARTUP = 0,
		EN_CONFIG_SHUTDOWN
	};
	// Members
private:
	static uint32_t ms_ui32AppTime;
	static uint32_t ms_ui32MaxAppTime;
	static enumAppCycleState     ms_enCycleStatus;

public:

	virtual void Init();
	virtual void PauseApplication(void);
	virtual void ProcessApplication(void);
	virtual void Configure(uint8_t) ;
	virtual uint32_t GetAppTime(void);
	virtual uint32_t GetMaxAppTime(void);


	//Static 
	static void CheckValidCondition(void);
	static void SetAppTime(uint32_t);
	static void SetMaxAppTime(uint32_t);
	static void SetAppCycleState(enumAppCycleState);
	static enumAppCycleState GetAppCycleState(void);

	// Constructor
	CAppRinsing()
	{
		ms_ui32MaxAppTime = APP_RINSING_RUNTIME;
	}
};