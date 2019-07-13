#include "MyUI.h"
#include "AppHdl.h"
#include "AppBase.h"
#include "AppWashing.h"
#include "AppRinsing.h"
#include "AppSpinning.h"
#include "AppDrying.h"
#include "AppStartUp.h"



using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array < String ^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AWM::MyUI AWM;

	// AppHdl
	CAppHdl::Init();
	Application::Run(%AWM);
	return 0;
}

