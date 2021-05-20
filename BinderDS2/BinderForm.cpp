#include "BinderForm.h"
#include "Dark_Souls_Macros.h"

using namespace BinderDS2;

#pragma once
		
		System::Void BinderForm::BindButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			static bool* runing;
			static Dark_Souls_Macros* DSmacros;
			if (!init)
			{
				runing = new bool;
				DSmacros = new Dark_Souls_Macros;

				init = true;
			}

			if (t != nullptr && t->joinable()) {
				*runing = false;

				t->join();
				delete t;
			}

			DSmacros->setGameBinds(CheckGameBinds());
			DSmacros->setGameInputs(CheckGameInputs());

			*runing = true;
			t = new std::thread(&Dark_Souls_Macros::run, DSmacros, runing);
			Sleep(15);
		}

		CHAR  BinderForm::GetComboBoxValue(String^ comboBoxValue)
		{
			if (comboBoxValue->Length == 1)
				return toupper(comboBoxValue[0]);
			else if (comboBoxValue->Length > 1)
			{
				if (comboBoxValue[5] == '4') // mouse4
					return 0x05;
				else if (comboBoxValue[5] == '5') // mouse5
					return 0x06;
				else
					return NULL;
			}
			else
				return NULL;
		}

		gameInputs BinderForm::CheckGameInputs()
		{
			gameInputs inputs;
			inputs.R1 = GetComboBoxValue(R1ComboBox->Text);
			inputs.R2 = GetComboBoxValue(R2ComboBox->Text);
			inputs.L1 = GetComboBoxValue(L1ComboBox->Text);
			inputs.L2 = GetComboBoxValue(L2ComboBox->Text);
			inputs.Stance = GetComboBoxValue(StanceComboBox->Text);
			return inputs;
		}

		gameBinds BinderForm::CheckGameBinds()
		{
			gameBinds binds;
			binds.qaR1 = GetComboBoxValue(QAR1ComboBox->Text);
			binds.qaR2 = GetComboBoxValue(QAR2ComboBox->Text);
			binds.qaL1 = GetComboBoxValue(QAL1ComboBox->Text);
			binds.qaL2 = GetComboBoxValue(QAL2ComboBox->Text);
			binds.ss1hR1 = GetComboBoxValue(SS1hR1ComboBox->Text);
			binds.ss1hR2 = GetComboBoxValue(SS1hR2ComboBox->Text);
			binds.ss1hL1 = GetComboBoxValue(SS1hL1ComboBox->Text);
			binds.ss1hL2 = GetComboBoxValue(SS1hL2ComboBox->Text);
			binds.ss2hR1 = GetComboBoxValue(SS2hR1ComboBox->Text);
			binds.ss2hR2 = GetComboBoxValue(SS2hR2ComboBox->Text);
			binds.ss2hL1 = GetComboBoxValue(SS2hL1ComboBox->Text);
			binds.ss2hL2 = GetComboBoxValue(SS2hL2ComboBox->Text);
			return binds;
		}


		int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
			Application::EnableVisualStyles();
			Application::SetCompatibleTextRenderingDefault(false);
			Application::Run(gcnew BinderForm);
			return 0;
		};


