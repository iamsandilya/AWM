#pragma once

#include "AppBase.h"



class CAppStartUp : public CAppBase
{
	// enum
public:
	enum enumConfig
	{
		EN_CONFIG_SYSTEM_STARTUP = 0,
		EN_CONFIG_SHUTDOWN,
		EN_CONFIG_RESTART,
	};
	// Members
private:
	static uint32_t ms_ui32AppTime;
	static uint32_t ms_ui32MaxAppTime;
	// Functions
private:
	public:

		virtual void Init();
		virtual void PauseApplication(void);
		virtual void ProcessApplication(void);
		virtual void Configure(uint8_t) ;
		virtual uint32_t GetAppTime(void);
		virtual uint32_t GetMaxAppTime(void);
		static void SetMaxAppTime(uint32_t);

};