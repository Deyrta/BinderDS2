#include "BinderForm.h"

using namespace BinderDS2;

#pragma once
#include "Dark_Souls_Macros.h"

using namespace BinderDS2;

		
		System::Void BinderForm::BindButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (t != nullptr && t->joinable()) {
				*runing = false;
				t->join();
				delete t;
			}
			gameInputs gInputs;
			gameBinds keyBinds;
			gInputs = CheckGameInputs(gInputs);
			keyBinds = CheckGameBinds(keyBinds);


			*runing = true;
			Dark_Souls_Macros DSmacros = Dark_Souls_Macros(gInputs, keyBinds);
			//t = new std::thread(&Dark_Souls_Macros::run, &DSmacros, runing);
			std::thread thr(&Dark_Souls_Macros::run, &DSmacros, runing);
		}

		gameInputs BinderForm::CheckGameInputs(gameInputs inputs)
		{
			inputs.R1 = GetComboBoxValue(R1ComboBox->Text);
			inputs.R2 = GetComboBoxValue(R2ComboBox->Text);
			inputs.L1 = GetComboBoxValue(L1ComboBox->Text);
			inputs.L2 = GetComboBoxValue(L1ComboBox->Text);
			inputs.Stance = GetComboBoxValue(StanceComboBox->Text);
			return inputs;
		}

		gameBinds BinderForm::CheckGameBinds(gameBinds binds)
		{
			binds.qaR1 = GetComboBoxValue(QAR1ComboBox->Text);
			binds.qaR2 = GetComboBoxValue(QAR2ComboBox->GetItemText(QAR2ComboBox->SelectedItem));
			binds.qaL1 = GetComboBoxValue(QAL1ComboBox->GetItemText(QAL1ComboBox->SelectedItem));
			binds.qaL2 = GetComboBoxValue(QAL2ComboBox->GetItemText(QAL2ComboBox->SelectedItem));
			binds.ss1hR1 = GetComboBoxValue(SS1hR1ComboBox->GetItemText(SS1hR1ComboBox->SelectedItem));
			binds.ss1hR2 = GetComboBoxValue(SS1hR2ComboBox->GetItemText(SS1hR2ComboBox->SelectedItem));
			binds.ss1hL1 = GetComboBoxValue(SS1hL1ComboBox->GetItemText(SS1hL1ComboBox->SelectedItem));
			binds.ss1hL2 = GetComboBoxValue(SS1hL2ComboBox->GetItemText(SS1hL2ComboBox->SelectedItem));
			binds.ss2hR1 = GetComboBoxValue(SS2hR1ComboBox->GetItemText(SS2hR1ComboBox->SelectedItem));
			binds.ss2hR2 = GetComboBoxValue(SS2hR2ComboBox->GetItemText(SS2hR2ComboBox->SelectedItem));
			binds.ss2hL1 = GetComboBoxValue(SS2hL1ComboBox->GetItemText(SS2hL1ComboBox->SelectedItem));
			binds.ss2hL2 = GetComboBoxValue(SS2hL2ComboBox->GetItemText(SS2hL2ComboBox->SelectedItem));
			return binds;
		}

		UINT BinderForm::GetComboBoxValue(String^ comboBoxValue)
		{
			if (comboBoxValue->Length == 1)
			{
				SHORT key;
				key = VkKeyScan(comboBoxValue[0]);
				return MapVirtualKey(LOBYTE(key), 0);
			}
			else if (comboBoxValue->Length > 1)
			{
				if (comboBoxValue[5] == '4') // mouse 4
					return VK_XBUTTON1;
				else if (comboBoxValue[5] == '5') // mouse 5
					return VK_XBUTTON2;
				else
					return VK_F12;
			}
			else
				return VK_F12;
		}


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew BinderForm);
	return 0;
}


