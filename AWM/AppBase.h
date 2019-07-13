#pragma once
#include<iostream> 


#define MIN_TO_SEC				60
#define ZERO					0

class CAppBase
{
public:
	enum enumAppCycleState
	{
		EN_NOT_STARTED,
		EN_RUNNING,
		EN_COMPLETED,
		EN_NUM_OF_STATES
	};

public:

	virtual void Init() =0 ;
	virtual void PauseApplication(void) = 0;
	virtual void ProcessApplication(void)  = 0;
	virtual void Configure(uint8_t) = 0;
	virtual uint32_t GetAppTime(void) = 0;
	virtual uint32_t GetMaxAppTime(void) = 0;


};