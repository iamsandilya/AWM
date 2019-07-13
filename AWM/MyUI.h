#pragma once

#include <iostream>
#include "AppHdl.h"
#include "AppBase.h"
#include "AppWashing.h"
#include "AppRinsing.h"
#include "AppSpinning.h"
#include "AppDrying.h"
#include "AppStartUp.h"


namespace AWM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyUI
	/// </summary>
	public ref class MyUI : public System::Windows::Forms::Form
	{
	public:
		MyUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonStart;
	protected:

	private: System::Windows::Forms::CheckBox^  checkBoxWashing;
	private: System::Windows::Forms::GroupBox^  groupBoxModes;
	private: System::Windows::Forms::CheckBox^  checkBoxDrying;
	private: System::Windows::Forms::CheckBox^  checkBoxSpinning;
	private: System::Windows::Forms::CheckBox^  checkBoxRinsing;

	private: System::Windows::Forms::RadioButton^  radioButtonAdequate;
	private: System::Windows::Forms::RadioButton^  radioButtonLow;
	private: System::Windows::Forms::Label^  labelWaterlevel;

	private: System::Windows::Forms::Label^  labelWaterTemp;
	private: System::Windows::Forms::RadioButton^  radioButtonCold;
	private: System::Windows::Forms::RadioButton^  radioButtonHot;
	private: System::Windows::Forms::GroupBox^  groupBoxOutput;


	private: System::Windows::Forms::Timer^  timerSystem;



	private: System::Windows::Forms::Label^  labelTimer;
	private: System::Windows::Forms::GroupBox^  groupBoxTimings;
	private: System::Windows::Forms::Label^  labelColon;






	private: System::Windows::Forms::Label^  labelDryTime;
	private: System::Windows::Forms::Label^  labelSpinTime;
	private: System::Windows::Forms::Label^  labelRinseTime;
	private: System::Windows::Forms::Label^  labelWashTime;




	private: System::Windows::Forms::Label^  labelMotorOutput;


	private: System::Windows::Forms::Label^  labelMotorSatus;
	private: System::Windows::Forms::Label^  labelHeaterOutput;
	private: System::Windows::Forms::Label^  labelHeater;


	private: System::Windows::Forms::TextBox^  textBoxTimerSecs;

	private: System::Windows::Forms::TextBox^  textBoxTimerMins;
	private: System::Windows::Forms::RadioButton^  radioButtonLowTemp;
	private: System::Windows::Forms::RadioButton^  radioButtonHighTemp;
	private: System::Windows::Forms::Label^  labelTempSensor;
	private: System::Windows::Forms::Label^  labelDrainOutput;
	private: System::Windows::Forms::Label^  labelDrain;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBoxWashTime;
	private: System::Windows::Forms::TextBox^  textBoxRinseTime;
	private: System::Windows::Forms::TextBox^  textBoxSpinTime;
	private: System::Windows::Forms::TextBox^  textBoxDryTime;
	private: System::Windows::Forms::Label^  label1;








	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::GroupBox^  groupBoxControls;
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->labelTempSensor = (gcnew System::Windows::Forms::Label());
			this->radioButtonHighTemp = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonLowTemp = (gcnew System::Windows::Forms::RadioButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->radioButtonLow = (gcnew System::Windows::Forms::RadioButton());
			this->labelWaterlevel = (gcnew System::Windows::Forms::Label());
			this->radioButtonAdequate = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelWaterTemp = (gcnew System::Windows::Forms::Label());
			this->radioButtonHot = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCold = (gcnew System::Windows::Forms::RadioButton());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->checkBoxWashing = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxModes = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxDrying = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxSpinning = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxRinsing = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxOutput = (gcnew System::Windows::Forms::GroupBox());
			this->labelDrainOutput = (gcnew System::Windows::Forms::Label());
			this->labelDrain = (gcnew System::Windows::Forms::Label());
			this->textBoxTimerSecs = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTimerMins = (gcnew System::Windows::Forms::TextBox());
			this->labelHeaterOutput = (gcnew System::Windows::Forms::Label());
			this->labelHeater = (gcnew System::Windows::Forms::Label());
			this->labelMotorOutput = (gcnew System::Windows::Forms::Label());
			this->labelMotorSatus = (gcnew System::Windows::Forms::Label());
			this->labelColon = (gcnew System::Windows::Forms::Label());
			this->labelTimer = (gcnew System::Windows::Forms::Label());
			this->timerSystem = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBoxTimings = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxDryTime = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSpinTime = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRinseTime = (gcnew System::Windows::Forms::TextBox());
			this->textBoxWashTime = (gcnew System::Windows::Forms::TextBox());
			this->labelDryTime = (gcnew System::Windows::Forms::Label());
			this->labelSpinTime = (gcnew System::Windows::Forms::Label());
			this->labelRinseTime = (gcnew System::Windows::Forms::Label());
			this->labelWashTime = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			groupBoxControls = (gcnew System::Windows::Forms::GroupBox());
			groupBoxControls->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBoxModes->SuspendLayout();
			this->groupBoxOutput->SuspendLayout();
			this->groupBoxTimings->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxControls
			// 
			groupBoxControls->Controls->Add(this->panel3);
			groupBoxControls->Controls->Add(this->panel2);
			groupBoxControls->Controls->Add(this->panel1);
			groupBoxControls->Location = System::Drawing::Point(5, 204);
			groupBoxControls->Name = L"groupBoxControls";
			groupBoxControls->Size = System::Drawing::Size(309, 388);
			groupBoxControls->TabIndex = 4;
			groupBoxControls->TabStop = false;
			groupBoxControls->Text = L"Controls";
			groupBoxControls->Enter += gcnew System::EventHandler(this, &MyUI::groupBoxControls_Enter);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->labelTempSensor);
			this->panel3->Controls->Add(this->radioButtonHighTemp);
			this->panel3->Controls->Add(this->radioButtonLowTemp);
			this->panel3->Location = System::Drawing::Point(2, 144);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(301, 42);
			this->panel3->TabIndex = 11;
			// 
			// labelTempSensor
			// 
			this->labelTempSensor->AutoSize = true;
			this->labelTempSensor->Location = System::Drawing::Point(19, 14);
			this->labelTempSensor->Name = L"labelTempSensor";
			this->labelTempSensor->Size = System::Drawing::Size(70, 13);
			this->labelTempSensor->TabIndex = 6;
			this->labelTempSensor->Text = L"Temp Sensor";
			// 
			// radioButtonHighTemp
			// 
			this->radioButtonHighTemp->AutoSize = true;
			this->radioButtonHighTemp->Location = System::Drawing::Point(224, 12);
			this->radioButtonHighTemp->Name = L"radioButtonHighTemp";
			this->radioButtonHighTemp->Size = System::Drawing::Size(56, 17);
			this->radioButtonHighTemp->TabIndex = 7;
			this->radioButtonHighTemp->Text = L"> 40 C";
			this->radioButtonHighTemp->UseVisualStyleBackColor = true;
			this->radioButtonHighTemp->CheckedChanged += gcnew System::EventHandler(this, &MyUI::radioButtonHighTemp_CheckedChanged);
			// 
			// radioButtonLowTemp
			// 
			this->radioButtonLowTemp->AutoSize = true;
			this->radioButtonLowTemp->Checked = true;
			this->radioButtonLowTemp->Location = System::Drawing::Point(148, 12);
			this->radioButtonLowTemp->Name = L"radioButtonLowTemp";
			this->radioButtonLowTemp->Size = System::Drawing::Size(62, 17);
			this->radioButtonLowTemp->TabIndex = 8;
			this->radioButtonLowTemp->TabStop = true;
			this->radioButtonLowTemp->Text = L"<= 40 C";
			this->radioButtonLowTemp->UseVisualStyleBackColor = true;
			this->radioButtonLowTemp->CheckedChanged += gcnew System::EventHandler(this, &MyUI::radioButtonLowTemp_CheckedChanged);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->radioButtonLow);
			this->panel2->Controls->Add(this->labelWaterlevel);
			this->panel2->Controls->Add(this->radioButtonAdequate);
			this->panel2->Location = System::Drawing::Point(2, 94);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(301, 44);
			this->panel2->TabIndex = 10;
			// 
			// radioButtonLow
			// 
			this->radioButtonLow->AutoSize = true;
			this->radioButtonLow->Checked = true;
			this->radioButtonLow->Location = System::Drawing::Point(148, 12);
			this->radioButtonLow->Name = L"radioButtonLow";
			this->radioButtonLow->Size = System::Drawing::Size(71, 17);
			this->radioButtonLow->TabIndex = 4;
			this->radioButtonLow->TabStop = true;
			this->radioButtonLow->Text = L"No Water";
			this->radioButtonLow->UseVisualStyleBackColor = true;
			this->radioButtonLow->CheckedChanged += gcnew System::EventHandler(this, &MyUI::radioButtonLow_CheckedChanged);
			// 
			// labelWaterlevel
			// 
			this->labelWaterlevel->AutoSize = true;
			this->labelWaterlevel->Location = System::Drawing::Point(19, 16);
			this->labelWaterlevel->Name = L"labelWaterlevel";
			this->labelWaterlevel->Size = System::Drawing::Size(68, 13);
			this->labelWaterlevel->TabIndex = 3;
			this->labelWaterlevel->Text = L"Water Level:";
			this->labelWaterlevel->Click += gcnew System::EventHandler(this, &MyUI::label1_Click);
			// 
			// radioButtonAdequate
			// 
			this->radioButtonAdequate->AutoSize = true;
			this->radioButtonAdequate->Location = System::Drawing::Point(224, 12);
			this->radioButtonAdequate->Name = L"radioButtonAdequate";
			this->radioButtonAdequate->Size = System::Drawing::Size(71, 17);
			this->radioButtonAdequate->TabIndex = 5;
			this->radioButtonAdequate->Text = L"Adequate";
			this->radioButtonAdequate->UseVisualStyleBackColor = true;
			this->radioButtonAdequate->CheckedChanged += gcnew System::EventHandler(this, &MyUI::radioButtonAdequate_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->labelWaterTemp);
			this->panel1->Controls->Add(this->radioButtonHot);
			this->panel1->Controls->Add(this->radioButtonCold);
			this->panel1->Location = System::Drawing::Point(2, 46);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(301, 41);
			this->panel1->TabIndex = 9;
			// 
			// labelWaterTemp
			// 
			this->labelWaterTemp->AutoSize = true;
			this->labelWaterTemp->Location = System::Drawing::Point(18, 14);
			this->labelWaterTemp->Name = L"labelWaterTemp";
			this->labelWaterTemp->Size = System::Drawing::Size(69, 13);
			this->labelWaterTemp->TabIndex = 2;
			this->labelWaterTemp->Text = L"Water Temp:";
			this->labelWaterTemp->Click += gcnew System::EventHandler(this, &MyUI::labelWaterTemp_Click);
			// 
			// radioButtonHot
			// 
			this->radioButtonHot->AutoSize = true;
			this->radioButtonHot->Location = System::Drawing::Point(224, 12);
			this->radioButtonHot->Name = L"radioButtonHot";
			this->radioButtonHot->Size = System::Drawing::Size(42, 17);
			this->radioButtonHot->TabIndex = 0;
			this->radioButtonHot->Text = L"Hot";
			this->radioButtonHot->UseVisualStyleBackColor = true;
			this->radioButtonHot->CheckedChanged += gcnew System::EventHandler(this, &MyUI::radioButtonHot_CheckedChanged);
			// 
			// radioButtonCold
			// 
			this->radioButtonCold->AutoSize = true;
			this->radioButtonCold->CausesValidation = false;
			this->radioButtonCold->Checked = true;
			this->radioButtonCold->Location = System::Drawing::Point(148, 12);
			this->radioButtonCold->Name = L"radioButtonCold";
			this->radioButtonCold->Size = System::Drawing::Size(46, 17);
			this->radioButtonCold->TabIndex = 1;
			this->radioButtonCold->TabStop = true;
			this->radioButtonCold->Text = L"Cold";
			this->radioButtonCold->UseVisualStyleBackColor = true;
			this->radioButtonCold->CheckedChanged += gcnew System::EventHandler(this, &MyUI::radioButtonCold_CheckedChanged);
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(754, 102);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(140, 58);
			this->buttonStart->TabIndex = 0;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyUI::buttonStart_Click);
			// 
			// checkBoxWashing
			// 
			this->checkBoxWashing->AutoSize = true;
			this->checkBoxWashing->BackColor = System::Drawing::SystemColors::Control;
			this->checkBoxWashing->Checked = true;
			this->checkBoxWashing->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxWashing->Enabled = false;
			this->checkBoxWashing->Location = System::Drawing::Point(34, 35);
			this->checkBoxWashing->Name = L"checkBoxWashing";
			this->checkBoxWashing->Size = System::Drawing::Size(68, 17);
			this->checkBoxWashing->TabIndex = 2;
			this->checkBoxWashing->Text = L"Washing";
			this->checkBoxWashing->UseVisualStyleBackColor = false;
			this->checkBoxWashing->CheckedChanged += gcnew System::EventHandler(this, &MyUI::checkBoxWashing_CheckedChanged);
			// 
			// groupBoxModes
			// 
			this->groupBoxModes->Controls->Add(this->checkBoxDrying);
			this->groupBoxModes->Controls->Add(this->checkBoxSpinning);
			this->groupBoxModes->Controls->Add(this->checkBoxRinsing);
			this->groupBoxModes->Controls->Add(this->checkBoxWashing);
			this->groupBoxModes->Location = System::Drawing::Point(5, 89);
			this->groupBoxModes->Name = L"groupBoxModes";
			this->groupBoxModes->Size = System::Drawing::Size(680, 81);
			this->groupBoxModes->TabIndex = 3;
			this->groupBoxModes->TabStop = false;
			this->groupBoxModes->Text = L"Modes";
			this->groupBoxModes->Enter += gcnew System::EventHandler(this, &MyUI::groupBox1_Enter);
			// 
			// checkBoxDrying
			// 
			this->checkBoxDrying->Location = System::Drawing::Point(511, 31);
			this->checkBoxDrying->Name = L"checkBoxDrying";
			this->checkBoxDrying->Size = System::Drawing::Size(104, 24);
			this->checkBoxDrying->TabIndex = 0;
			this->checkBoxDrying->Text = L"Drying";
			this->checkBoxDrying->CheckedChanged += gcnew System::EventHandler(this, &MyUI::checkBoxDrying_CheckedChanged);
			// 
			// checkBoxSpinning
			// 
			this->checkBoxSpinning->AutoSize = true;
			this->checkBoxSpinning->Checked = true;
			this->checkBoxSpinning->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxSpinning->Enabled = false;
			this->checkBoxSpinning->Location = System::Drawing::Point(353, 35);
			this->checkBoxSpinning->Name = L"checkBoxSpinning";
			this->checkBoxSpinning->Size = System::Drawing::Size(67, 17);
			this->checkBoxSpinning->TabIndex = 4;
			this->checkBoxSpinning->Text = L"Spinning";
			this->checkBoxSpinning->UseVisualStyleBackColor = true;
			this->checkBoxSpinning->CheckedChanged += gcnew System::EventHandler(this, &MyUI::checkBoxSpinning_CheckedChanged);
			// 
			// checkBoxRinsing
			// 
			this->checkBoxRinsing->AutoSize = true;
			this->checkBoxRinsing->Checked = true;
			this->checkBoxRinsing->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxRinsing->Enabled = false;
			this->checkBoxRinsing->Location = System::Drawing::Point(196, 35);
			this->checkBoxRinsing->Name = L"checkBoxRinsing";
			this->checkBoxRinsing->Size = System::Drawing::Size(61, 17);
			this->checkBoxRinsing->TabIndex = 3;
			this->checkBoxRinsing->Text = L"Rinsing";
			this->checkBoxRinsing->UseVisualStyleBackColor = true;
			this->checkBoxRinsing->CheckedChanged += gcnew System::EventHandler(this, &MyUI::checkBoxRinsing_CheckedChanged);
			// 
			// groupBoxOutput
			// 
			this->groupBoxOutput->Controls->Add(this->labelDrainOutput);
			this->groupBoxOutput->Controls->Add(this->labelDrain);
			this->groupBoxOutput->Controls->Add(this->textBoxTimerSecs);
			this->groupBoxOutput->Controls->Add(this->textBoxTimerMins);
			this->groupBoxOutput->Controls->Add(this->labelHeaterOutput);
			this->groupBoxOutput->Controls->Add(this->labelHeater);
			this->groupBoxOutput->Controls->Add(this->labelMotorOutput);
			this->groupBoxOutput->Controls->Add(this->labelMotorSatus);
			this->groupBoxOutput->Controls->Add(this->labelColon);
			this->groupBoxOutput->Controls->Add(this->labelTimer);
			this->groupBoxOutput->Location = System::Drawing::Point(693, 204);
			this->groupBoxOutput->Name = L"groupBoxOutput";
			this->groupBoxOutput->Size = System::Drawing::Size(231, 388);
			this->groupBoxOutput->TabIndex = 5;
			this->groupBoxOutput->TabStop = false;
			this->groupBoxOutput->Text = L"Output";
			this->groupBoxOutput->Enter += gcnew System::EventHandler(this, &MyUI::groupBoxOutput_Enter);
			// 
			// labelDrainOutput
			// 
			this->labelDrainOutput->AutoSize = true;
			this->labelDrainOutput->Location = System::Drawing::Point(101, 140);
			this->labelDrainOutput->Name = L"labelDrainOutput";
			this->labelDrainOutput->Size = System::Drawing::Size(27, 13);
			this->labelDrainOutput->TabIndex = 15;
			this->labelDrainOutput->Text = L"OFF";
			// 
			// labelDrain
			// 
			this->labelDrain->AutoSize = true;
			this->labelDrain->Location = System::Drawing::Point(6, 140);
			this->labelDrain->Name = L"labelDrain";
			this->labelDrain->Size = System::Drawing::Size(32, 13);
			this->labelDrain->TabIndex = 14;
			this->labelDrain->Text = L"Drain";
			// 
			// textBoxTimerSecs
			// 
			this->textBoxTimerSecs->Location = System::Drawing::Point(184, 58);
			this->textBoxTimerSecs->Name = L"textBoxTimerSecs";
			this->textBoxTimerSecs->Size = System::Drawing::Size(33, 20);
			this->textBoxTimerSecs->TabIndex = 13;
			// 
			// textBoxTimerMins
			// 
			this->textBoxTimerMins->Location = System::Drawing::Point(133, 58);
			this->textBoxTimerMins->Name = L"textBoxTimerMins";
			this->textBoxTimerMins->Size = System::Drawing::Size(33, 20);
			this->textBoxTimerMins->TabIndex = 12;
			this->textBoxTimerMins->TextChanged += gcnew System::EventHandler(this, &MyUI::textBox1_TextChanged_1);
			// 
			// labelHeaterOutput
			// 
			this->labelHeaterOutput->AutoSize = true;
			this->labelHeaterOutput->Location = System::Drawing::Point(101, 173);
			this->labelHeaterOutput->Name = L"labelHeaterOutput";
			this->labelHeaterOutput->Size = System::Drawing::Size(27, 13);
			this->labelHeaterOutput->TabIndex = 11;
			this->labelHeaterOutput->Text = L"OFF";
			// 
			// labelHeater
			// 
			this->labelHeater->AutoSize = true;
			this->labelHeater->Location = System::Drawing::Point(6, 173);
			this->labelHeater->Name = L"labelHeater";
			this->labelHeater->Size = System::Drawing::Size(39, 13);
			this->labelHeater->TabIndex = 10;
			this->labelHeater->Text = L"Heater";
			// 
			// labelMotorOutput
			// 
			this->labelMotorOutput->AutoSize = true;
			this->labelMotorOutput->Location = System::Drawing::Point(101, 104);
			this->labelMotorOutput->Name = L"labelMotorOutput";
			this->labelMotorOutput->Size = System::Drawing::Size(27, 13);
			this->labelMotorOutput->TabIndex = 7;
			this->labelMotorOutput->Text = L"OFF";
			this->labelMotorOutput->Click += gcnew System::EventHandler(this, &MyUI::labelMotorOutput_Click);
			// 
			// labelMotorSatus
			// 
			this->labelMotorSatus->AutoSize = true;
			this->labelMotorSatus->Location = System::Drawing::Point(5, 104);
			this->labelMotorSatus->Name = L"labelMotorSatus";
			this->labelMotorSatus->Size = System::Drawing::Size(67, 13);
			this->labelMotorSatus->TabIndex = 6;
			this->labelMotorSatus->Text = L"Motor Status";
			this->labelMotorSatus->Click += gcnew System::EventHandler(this, &MyUI::labelMotorSatus_Click);
			// 
			// labelColon
			// 
			this->labelColon->AutoSize = true;
			this->labelColon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelColon->Location = System::Drawing::Point(169, 62);
			this->labelColon->Name = L"labelColon";
			this->labelColon->Size = System::Drawing::Size(11, 13);
			this->labelColon->TabIndex = 5;
			this->labelColon->Text = L":";
			this->labelColon->Click += gcnew System::EventHandler(this, &MyUI::label1_Click_1);
			// 
			// labelTimer
			// 
			this->labelTimer->AutoSize = true;
			this->labelTimer->Location = System::Drawing::Point(5, 62);
			this->labelTimer->Name = L"labelTimer";
			this->labelTimer->Size = System::Drawing::Size(121, 13);
			this->labelTimer->TabIndex = 2;
			this->labelTimer->Text = L"Motor Run Time (mm:ss)";
			this->labelTimer->Click += gcnew System::EventHandler(this, &MyUI::labelTimer_Click);
			// 
			// timerSystem
			// 
			this->timerSystem->Interval = 1000;
			this->timerSystem->Tick += gcnew System::EventHandler(this, &MyUI::timerSystem_Tick);
			// 
			// groupBoxTimings
			// 
			this->groupBoxTimings->Controls->Add(this->textBoxDryTime);
			this->groupBoxTimings->Controls->Add(this->textBoxSpinTime);
			this->groupBoxTimings->Controls->Add(this->textBoxRinseTime);
			this->groupBoxTimings->Controls->Add(this->textBoxWashTime);
			this->groupBoxTimings->Controls->Add(this->labelDryTime);
			this->groupBoxTimings->Controls->Add(this->labelSpinTime);
			this->groupBoxTimings->Controls->Add(this->labelRinseTime);
			this->groupBoxTimings->Controls->Add(this->labelWashTime);
			this->groupBoxTimings->Location = System::Drawing::Point(326, 204);
			this->groupBoxTimings->Name = L"groupBoxTimings";
			this->groupBoxTimings->Size = System::Drawing::Size(357, 388);
			this->groupBoxTimings->TabIndex = 6;
			this->groupBoxTimings->TabStop = false;
			this->groupBoxTimings->Text = L"Timings (in Mins)";
			this->groupBoxTimings->Enter += gcnew System::EventHandler(this, &MyUI::groupBoxTimings_Enter);
			// 
			// textBoxDryTime
			// 
			this->textBoxDryTime->Location = System::Drawing::Point(157, 175);
			this->textBoxDryTime->MaxLength = 2;
			this->textBoxDryTime->Name = L"textBoxDryTime";
			this->textBoxDryTime->Size = System::Drawing::Size(56, 20);
			this->textBoxDryTime->TabIndex = 7;
			this->textBoxDryTime->TextChanged += gcnew System::EventHandler(this, &MyUI::textBoxDryTime_TextChanged);
			// 
			// textBoxSpinTime
			// 
			this->textBoxSpinTime->Location = System::Drawing::Point(157, 137);
			this->textBoxSpinTime->MaxLength = 2;
			this->textBoxSpinTime->Name = L"textBoxSpinTime";
			this->textBoxSpinTime->Size = System::Drawing::Size(56, 20);
			this->textBoxSpinTime->TabIndex = 6;
			this->textBoxSpinTime->TextChanged += gcnew System::EventHandler(this, &MyUI::textBoxSpinTime_TextChanged);
			// 
			// textBoxRinseTime
			// 
			this->textBoxRinseTime->Location = System::Drawing::Point(157, 97);
			this->textBoxRinseTime->MaxLength = 2;
			this->textBoxRinseTime->Name = L"textBoxRinseTime";
			this->textBoxRinseTime->Size = System::Drawing::Size(56, 20);
			this->textBoxRinseTime->TabIndex = 5;
			this->textBoxRinseTime->TextChanged += gcnew System::EventHandler(this, &MyUI::textBoxRinseTime_TextChanged);
			// 
			// textBoxWashTime
			// 
			this->textBoxWashTime->Location = System::Drawing::Point(157, 55);
			this->textBoxWashTime->MaxLength = 2;
			this->textBoxWashTime->Name = L"textBoxWashTime";
			this->textBoxWashTime->Size = System::Drawing::Size(56, 20);
			this->textBoxWashTime->TabIndex = 4;
			this->textBoxWashTime->TextChanged += gcnew System::EventHandler(this, &MyUI::textBox1_TextChanged_2);
			// 
			// labelDryTime
			// 
			this->labelDryTime->AutoSize = true;
			this->labelDryTime->Location = System::Drawing::Point(53, 182);
			this->labelDryTime->Name = L"labelDryTime";
			this->labelDryTime->Size = System::Drawing::Size(46, 13);
			this->labelDryTime->TabIndex = 3;
			this->labelDryTime->Text = L"DryTime";
			this->labelDryTime->Click += gcnew System::EventHandler(this, &MyUI::labelDryTime_Click);
			// 
			// labelSpinTime
			// 
			this->labelSpinTime->AutoSize = true;
			this->labelSpinTime->Location = System::Drawing::Point(48, 144);
			this->labelSpinTime->Name = L"labelSpinTime";
			this->labelSpinTime->Size = System::Drawing::Size(51, 13);
			this->labelSpinTime->TabIndex = 2;
			this->labelSpinTime->Text = L"SpinTime";
			this->labelSpinTime->Click += gcnew System::EventHandler(this, &MyUI::labelSpinTime_Click);
			// 
			// labelRinseTime
			// 
			this->labelRinseTime->AutoSize = true;
			this->labelRinseTime->Location = System::Drawing::Point(46, 102);
			this->labelRinseTime->Name = L"labelRinseTime";
			this->labelRinseTime->Size = System::Drawing::Size(57, 13);
			this->labelRinseTime->TabIndex = 1;
			this->labelRinseTime->Text = L"RinseTime";
			this->labelRinseTime->Click += gcnew System::EventHandler(this, &MyUI::labelRinseTime_Click);
			// 
			// labelWashTime
			// 
			this->labelWashTime->AutoSize = true;
			this->labelWashTime->Location = System::Drawing::Point(46, 60);
			this->labelWashTime->Name = L"labelWashTime";
			this->labelWashTime->Size = System::Drawing::Size(58, 13);
			this->labelWashTime->TabIndex = 0;
			this->labelWashTime->Text = L"WashTime";
			this->labelWashTime->Click += gcnew System::EventHandler(this, &MyUI::labelWashTime_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(306, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 29);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Automatic Washing Machine";
			// 
			// MyUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(936, 604);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBoxTimings);
			this->Controls->Add(this->groupBoxOutput);
			this->Controls->Add(groupBoxControls);
			this->Controls->Add(this->groupBoxModes);
			this->Controls->Add(this->buttonStart);
			this->Name = L"MyUI";
			this->Text = L"Automatic Washing Machine";
			this->Load += gcnew System::EventHandler(this, &MyUI::MyUI_Load);
			groupBoxControls->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBoxModes->ResumeLayout(false);
			this->groupBoxModes->PerformLayout();
			this->groupBoxOutput->ResumeLayout(false);
			this->groupBoxOutput->PerformLayout();
			this->groupBoxTimings->ResumeLayout(false);
			this->groupBoxTimings->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyUI_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void timerSystem_Tick(System::Object^  sender, System::EventArgs^  e) {

	

	UpdateApptoUI();
	UpdateAWM_UI();
	if (!CAppHdl::GetCycleCompleteStatus())
	{
		CAppHdl::MainLoop();
	}
	else
	{
		this->checkBoxSpinning->BackColor = System::Drawing::SystemColors::MenuHighlight;
		this->checkBoxRinsing->BackColor = System::Drawing::SystemColors::MenuHighlight;
		this->checkBoxWashing->BackColor = System::Drawing::SystemColors::MenuHighlight;
		if (this->checkBoxDrying->Checked)
			this->checkBoxDrying->BackColor = System::Drawing::SystemColors::MenuHighlight;
		this->timerSystem->Enabled = false;
	}

}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxState_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
		 

		 private: System::Void UpdateApptoUI(void)
		 {
			 static bool boToggle = false;
			 bool boMotorState = CAppHdl::GetMotorEnabledStatus();
			 CAppRinsing::enumAppCycleState enRinseAppState = CAppRinsing::GetAppCycleState();
			 CAppHdl::enumMachineHeat  enMachineHeat  = CAppHdl::GetMachineHeat();
			 CAppHdl::enumWaterLevel enWaterLevel = CAppHdl::GetWaterLevel();
			 CAppHdl::enumWaterTemp  enWaterTemp  = CAppHdl::GetWaterTemp();
			 CAppHdl::enumApplication enApplication;

			 boToggle = !boToggle;
			 
			 enApplication = CAppHdl::GetCurrentApplicationIndex();

			 // Heater status
			 if (enMachineHeat == CAppHdl::EN_MORE_THAN_40)
			 {
				 this->labelHeaterOutput->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 this->labelHeaterOutput->Text = "ON";
			 }
			 else if (enMachineHeat == CAppHdl::EN_LESS_THAN_EQUAL_40)
			 {
				 this->labelHeaterOutput->BackColor = System::Drawing::SystemColors::Control;
				 this->labelHeaterOutput->Text = "OFF";
			 }
			 // Drain status
			 if ((enWaterLevel == CAppHdl::EN_ADEQUATE_WATER) && (enRinseAppState == CAppRinsing::EN_COMPLETED))
			 {
				 this->labelDrainOutput->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 this->labelDrainOutput->Text = "ON";
			 }
			 else
			 {
				 this->labelDrainOutput->BackColor = System::Drawing::SystemColors::Control;
				 this->labelDrainOutput->Text = "OFF";
			 }

			 // Motor status
			 if (boMotorState)
			 {
				 this->labelMotorOutput->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 this->labelMotorOutput->Text = "ON";
			 }
			 else
			 {
				 this->labelMotorOutput->BackColor = System::Drawing::SystemColors::Control;
				 this->labelMotorOutput->Text = "OFF";
			 }

			 // Modes - Solid ON, Blinking, Solid OFF
			 switch (enApplication)
			 {
			 case (CAppHdl::EN_APP_WASHING):
				 if(boToggle)
					this->checkBoxWashing->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 else
					 this->checkBoxWashing->BackColor = System::Drawing::SystemColors::Control;
				 break;
			 case (CAppHdl::EN_APP_RINSING):
				 this->checkBoxWashing->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 if (boToggle)
					 this->checkBoxRinsing->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 else
					 this->checkBoxRinsing->BackColor = System::Drawing::SystemColors::Control;
				 break;
			 case (CAppHdl::EN_APP_SPINNING):
				 this->checkBoxRinsing->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 if (boToggle)
					 this->checkBoxSpinning->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 else
					 this->checkBoxSpinning->BackColor = System::Drawing::SystemColors::Control;
				 break;
			 case (CAppHdl::EN_APP_DRYING):
				 this->checkBoxSpinning->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 if (boToggle)
					 this->checkBoxDrying->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 else
					 this->checkBoxDrying->BackColor = System::Drawing::SystemColors::Control;
				 break;
				 
			 default:
					 if (CAppHdl::GetCycleCompleteStatus())
					 {
						 this->checkBoxSpinning->BackColor = System::Drawing::SystemColors::MenuHighlight;
						 this->checkBoxRinsing->BackColor = System::Drawing::SystemColors::MenuHighlight;
						 this->checkBoxWashing->BackColor = System::Drawing::SystemColors::MenuHighlight;
						 if(this->checkBoxDrying->Checked)
							 this->checkBoxDrying->BackColor = System::Drawing::SystemColors::MenuHighlight;
					 }
				 break;
			 }

		 }

		 private: System::Void UpdateAWM_UI(void)
		 {
			 uint32_t ui32Index, ui32Secs, ui32Mins;
			 ui32Index = CAppHdl::GetTotalRunTime();
			 ui32Secs = ui32Index % MIN_TO_SEC;
			 ui32Mins = ui32Index / MIN_TO_SEC;
			 this->textBoxTimerSecs->Text = ui32Secs.ToString();
			 this->textBoxTimerMins->Text = ui32Mins.ToString();
		 }

		 private: System::Void DisableAllCheckBox(void)
		 {
			 this->checkBoxDrying->Enabled = false;

		 }
		 private: System::Void EnableAllCheckBox(void)
		 {
			 this->checkBoxDrying->Enabled = true;
		 }

		 private: System::Void DisableAllTextBox(void)
		 {
			 
			 this->textBoxDryTime->Enabled = false;
			 this->textBoxWashTime->Enabled = false;
			 this->textBoxSpinTime->Enabled = false;
			 this->textBoxRinseTime->Enabled = false;

		 }
		 private: System::Void EnableAllTextBox(void)
		 {
			 if (checkBoxDrying->Enabled == true)
				this->textBoxDryTime->Enabled = true;
			 this->textBoxWashTime->Enabled = true;
			 this->textBoxSpinTime->Enabled = true;
			 this->textBoxRinseTime->Enabled = true;
		 }


	
private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (this->buttonStart->Text == "Start")
	{
		DisableAllCheckBox();
		DisableAllTextBox();
		this->buttonStart->Text = "Stop";
		this->buttonStart->BackColor = System::Drawing::SystemColors::MenuHighlight;
		this->timerSystem->Enabled = true;
		this->checkBoxWashing->BackColor = System::Drawing::SystemColors::MenuHighlight;

		CAppHdl::CallApp(CAppHdl::EN_APP_WASHING, CAppWashing::EN_CONFIG_SYSTEM_STARTUP);
	}
	else if (this->buttonStart->Text == "Stop")
	{
		EnableAllCheckBox();
		EnableAllTextBox();
		this->buttonStart->Text = "Start";
		this->timerSystem->Enabled = true;
		this->buttonStart->BackColor = System::Drawing::SystemColors::Control;
		this->checkBoxWashing->BackColor = System::Drawing::SystemColors::Control;
		this->checkBoxSpinning->BackColor = System::Drawing::SystemColors::Control;
		this->checkBoxDrying->BackColor = System::Drawing::SystemColors::Control;
		this->checkBoxRinsing->BackColor = System::Drawing::SystemColors::Control;
		CAppHdl::CallApp(CAppHdl::EN_APP_STARTUP, CAppStartUp::EN_CONFIG_RESTART);

	}

}

private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxWashTime_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	
}




private: System::Void groupBoxOutput_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBoxWashing_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBoxSpinning_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBoxRinsing_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBoxControls_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButtonAdequate_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	CAppHdl::SetWaterLevel(CAppHdl::EN_ADEQUATE_WATER);
}
private: System::Void radioButtonLow_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	CAppHdl::SetWaterLevel(CAppHdl::EN_NO_WATER);
}
private: System::Void labelWaterTemp_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButtonCold_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	CAppHdl::SetWaterTemp(CAppHdl::EN_COLD_WATER);
}
private: System::Void radioButtonHot_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	CAppHdl::SetWaterTemp(CAppHdl::EN_HOT_WATER);
}
private: System::Void textBoxTimerMins_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelTimer_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelState_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBoxTimings_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelDryTime_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelSpinTime_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelRinseTime_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelWashTime_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelMotorSatus_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelMotorOutput_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButtonHighTemp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	CAppHdl::SetMachineHeat(CAppHdl::EN_MORE_THAN_40);
}
private: System::Void radioButtonLowTemp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	CAppHdl::SetMachineHeat(CAppHdl::EN_LESS_THAN_EQUAL_40);
}
private: System::Void textBox1_TextChanged_2(System::Object^  sender, System::EventArgs^  e) {

	uint32_t ui32time = 0;
	if (System::Text::RegularExpressions::Regex::IsMatch(textBoxWashTime->Text,
		"^[0-9]*$"))
	{
		if (textBoxWashTime->Text->ToString() ==  "")
		{

		}
		else
		{
			ui32time = System::Convert::ToInt32(textBoxWashTime->Text);
			CAppWashing::SetMaxAppTime(ui32time);
		}
	}
	else
	{
		MessageBox::Show("Not a number");
	}

	
}
private: System::Void textBoxRinseTime_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	uint32_t ui32time = 0;
	if (System::Text::RegularExpressions::Regex::IsMatch(textBoxRinseTime->Text,
		"^[0-9]*$"))
	{
		if (textBoxWashTime->Text->ToString() == "")
		{

		}
		else
		{
			ui32time = System::Convert::ToInt32(textBoxRinseTime->Text);
			CAppRinsing::SetMaxAppTime(ui32time);
		}
	}
	else
	{
		MessageBox::Show("Not a number");
	}

}
private: System::Void textBoxSpinTime_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	uint32_t ui32time = 0;
	if (System::Text::RegularExpressions::Regex::IsMatch(textBoxSpinTime->Text,
		"^[0-9]*$"))
	{
		if (textBoxWashTime->Text->ToString() == "")
		{

		}
		else
		{
			ui32time = System::Convert::ToInt32(textBoxSpinTime->Text);
			CAppSpinning::SetMaxAppTime(ui32time);
		}
	}
	else
	{
		MessageBox::Show("Not a number");
	}
}
private: System::Void textBoxDryTime_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	uint32_t ui32time = 0;
	if (System::Text::RegularExpressions::Regex::IsMatch(textBoxDryTime->Text,
		"^[0-9]*$"))
	{
		if (textBoxWashTime->Text->ToString() == "")
		{

		}
		else
		{
			ui32time = System::Convert::ToInt32(textBoxDryTime->Text);
			CAppDrying::SetMaxAppTime(ui32time);
		}
	}
	else
	{
		MessageBox::Show("Not a number");
	}
}
private: System::Void checkBoxDrying_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if(this->checkBoxDrying->Checked == true)
		CAppHdl::SetDryerStateEnabled(true);
	else
		CAppHdl::SetDryerStateEnabled(false);
}
};



}

