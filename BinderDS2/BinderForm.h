#pragma once
#include "Dark_Souls_Macros.h"

namespace BinderDS2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для BinderForm
	/// </summary>
	public ref class BinderForm : public System::Windows::Forms::Form
	{
	public:
		BinderForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~BinderForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ BindButton;
		   std::thread* t = nullptr;
		   bool* runing = new bool;




	private: System::Windows::Forms::Label^ L2SS2hLabel;
	private: System::Windows::Forms::Label^ L1SS2hLabel;
	private: System::Windows::Forms::Label^ R2SS2hLabel;
	private: System::Windows::Forms::Label^ R1SS2hLabel;
	private: System::Windows::Forms::Label^ SS2hBindsLabel;




	private: System::Windows::Forms::Label^ L2SS1hLabel;
	private: System::Windows::Forms::Label^ L1SS1hLabel;
	private: System::Windows::Forms::Label^ R2SS1hLabel;
	private: System::Windows::Forms::Label^ R1SS1hLabel;
	private: System::Windows::Forms::Label^ SS1hBindsLabel;




	private: System::Windows::Forms::Label^ L2QALabel;
	private: System::Windows::Forms::Label^ L1QALabel;
	private: System::Windows::Forms::Label^ R2QALabel;
	private: System::Windows::Forms::Label^ R1QALabel;
	private: System::Windows::Forms::Label^ QABindsLabel;

	private: System::Windows::Forms::Label^ StanceLabel;




	private: System::Windows::Forms::Label^ L2Labe;
	private: System::Windows::Forms::Label^ L1Label;
	private: System::Windows::Forms::Label^ R2Label;
	private: System::Windows::Forms::Label^ R1Label;
	private: System::Windows::Forms::Label^ InputsLabel;
	private: System::Windows::Forms::ComboBox^ R1ComboBox;
	private: System::Windows::Forms::ComboBox^ R2ComboBox;
	private: System::Windows::Forms::ComboBox^ StanceComboBox;
	private: System::Windows::Forms::ComboBox^ L1ComboBox;
	private: System::Windows::Forms::ComboBox^ L2ComboBox;
	private: System::Windows::Forms::ComboBox^ QAL2ComboBox;





	private: System::Windows::Forms::ComboBox^ QAL1ComboBox;

	private: System::Windows::Forms::ComboBox^ QAR2ComboBox;

	private: System::Windows::Forms::ComboBox^ QAR1ComboBox;
	private: System::Windows::Forms::ComboBox^ SS1hL2ComboBox;


	private: System::Windows::Forms::ComboBox^ SS1hL1ComboBox;

	private: System::Windows::Forms::ComboBox^ SS1hR2ComboBox;

	private: System::Windows::Forms::ComboBox^ SS1hR1ComboBox;
	private: System::Windows::Forms::ComboBox^ SS2hL2ComboBox;



	private: System::Windows::Forms::ComboBox^ SS2hL1ComboBox;

	private: System::Windows::Forms::ComboBox^ SS2hR2ComboBox;

	private: System::Windows::Forms::ComboBox^ SS2hR1ComboBox;




	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BinderForm::typeid));
			this->BindButton = (gcnew System::Windows::Forms::Button());
			this->L2SS2hLabel = (gcnew System::Windows::Forms::Label());
			this->L1SS2hLabel = (gcnew System::Windows::Forms::Label());
			this->R2SS2hLabel = (gcnew System::Windows::Forms::Label());
			this->R1SS2hLabel = (gcnew System::Windows::Forms::Label());
			this->SS2hBindsLabel = (gcnew System::Windows::Forms::Label());
			this->L2SS1hLabel = (gcnew System::Windows::Forms::Label());
			this->L1SS1hLabel = (gcnew System::Windows::Forms::Label());
			this->R2SS1hLabel = (gcnew System::Windows::Forms::Label());
			this->R1SS1hLabel = (gcnew System::Windows::Forms::Label());
			this->SS1hBindsLabel = (gcnew System::Windows::Forms::Label());
			this->L2QALabel = (gcnew System::Windows::Forms::Label());
			this->L1QALabel = (gcnew System::Windows::Forms::Label());
			this->R2QALabel = (gcnew System::Windows::Forms::Label());
			this->R1QALabel = (gcnew System::Windows::Forms::Label());
			this->QABindsLabel = (gcnew System::Windows::Forms::Label());
			this->StanceLabel = (gcnew System::Windows::Forms::Label());
			this->L2Labe = (gcnew System::Windows::Forms::Label());
			this->L1Label = (gcnew System::Windows::Forms::Label());
			this->R2Label = (gcnew System::Windows::Forms::Label());
			this->R1Label = (gcnew System::Windows::Forms::Label());
			this->InputsLabel = (gcnew System::Windows::Forms::Label());
			this->R1ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->R2ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->StanceComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->L1ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->L2ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->QAL2ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->QAL1ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->QAR2ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->QAR1ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SS1hL2ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SS1hL1ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SS1hR2ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SS1hR1ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SS2hL2ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SS2hL1ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SS2hR2ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SS2hR1ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// BindButton
			// 
			this->BindButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BindButton->Location = System::Drawing::Point(282, 479);
			this->BindButton->Name = L"BindButton";
			this->BindButton->Size = System::Drawing::Size(141, 61);
			this->BindButton->TabIndex = 77;
			this->BindButton->Text = L"BIND";
			this->BindButton->UseVisualStyleBackColor = true;
			this->BindButton->Click += gcnew System::EventHandler(this, &BinderForm::BindButton_Click);
			// 
			// L2SS2hLabel
			// 
			this->L2SS2hLabel->AutoSize = true;
			this->L2SS2hLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->L2SS2hLabel->Location = System::Drawing::Point(548, 392);
			this->L2SS2hLabel->Name = L"L2SS2hLabel";
			this->L2SS2hLabel->Size = System::Drawing::Size(46, 31);
			this->L2SS2hLabel->TabIndex = 72;
			this->L2SS2hLabel->Text = L"L2";
			// 
			// L1SS2hLabel
			// 
			this->L1SS2hLabel->AutoSize = true;
			this->L1SS2hLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->L1SS2hLabel->Location = System::Drawing::Point(463, 392);
			this->L1SS2hLabel->Name = L"L1SS2hLabel";
			this->L1SS2hLabel->Size = System::Drawing::Size(46, 31);
			this->L1SS2hLabel->TabIndex = 71;
			this->L1SS2hLabel->Text = L"L1";
			// 
			// R2SS2hLabel
			// 
			this->R2SS2hLabel->AutoSize = true;
			this->R2SS2hLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->R2SS2hLabel->Location = System::Drawing::Point(183, 392);
			this->R2SS2hLabel->Name = L"R2SS2hLabel";
			this->R2SS2hLabel->Size = System::Drawing::Size(51, 31);
			this->R2SS2hLabel->TabIndex = 70;
			this->R2SS2hLabel->Text = L"R2";
			// 
			// R1SS2hLabel
			// 
			this->R1SS2hLabel->AutoSize = true;
			this->R1SS2hLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->R1SS2hLabel->Location = System::Drawing::Point(91, 392);
			this->R1SS2hLabel->Name = L"R1SS2hLabel";
			this->R1SS2hLabel->Size = System::Drawing::Size(51, 31);
			this->R1SS2hLabel->TabIndex = 69;
			this->R1SS2hLabel->Text = L"R1";
			// 
			// SS2hBindsLabel
			// 
			this->SS2hBindsLabel->AutoSize = true;
			this->SS2hBindsLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->SS2hBindsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SS2hBindsLabel->Location = System::Drawing::Point(276, 344);
			this->SS2hBindsLabel->Name = L"SS2hBindsLabel";
			this->SS2hBindsLabel->Size = System::Drawing::Size(165, 31);
			this->SS2hBindsLabel->TabIndex = 68;
			this->SS2hBindsLabel->Text = L"SS2h Binds";
			this->SS2hBindsLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// L2SS1hLabel
			// 
			this->L2SS1hLabel->AutoSize = true;
			this->L2SS1hLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->L2SS1hLabel->Location = System::Drawing::Point(548, 280);
			this->L2SS1hLabel->Name = L"L2SS1hLabel";
			this->L2SS1hLabel->Size = System::Drawing::Size(46, 31);
			this->L2SS1hLabel->TabIndex = 63;
			this->L2SS1hLabel->Text = L"L2";
			// 
			// L1SS1hLabel
			// 
			this->L1SS1hLabel->AutoSize = true;
			this->L1SS1hLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->L1SS1hLabel->Location = System::Drawing::Point(463, 280);
			this->L1SS1hLabel->Name = L"L1SS1hLabel";
			this->L1SS1hLabel->Size = System::Drawing::Size(46, 31);
			this->L1SS1hLabel->TabIndex = 62;
			this->L1SS1hLabel->Text = L"L1";
			// 
			// R2SS1hLabel
			// 
			this->R2SS1hLabel->AutoSize = true;
			this->R2SS1hLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->R2SS1hLabel->Location = System::Drawing::Point(183, 280);
			this->R2SS1hLabel->Name = L"R2SS1hLabel";
			this->R2SS1hLabel->Size = System::Drawing::Size(51, 31);
			this->R2SS1hLabel->TabIndex = 61;
			this->R2SS1hLabel->Text = L"R2";
			// 
			// R1SS1hLabel
			// 
			this->R1SS1hLabel->AutoSize = true;
			this->R1SS1hLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->R1SS1hLabel->Location = System::Drawing::Point(91, 280);
			this->R1SS1hLabel->Name = L"R1SS1hLabel";
			this->R1SS1hLabel->Size = System::Drawing::Size(51, 31);
			this->R1SS1hLabel->TabIndex = 60;
			this->R1SS1hLabel->Text = L"R1";
			// 
			// SS1hBindsLabel
			// 
			this->SS1hBindsLabel->AutoSize = true;
			this->SS1hBindsLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->SS1hBindsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SS1hBindsLabel->Location = System::Drawing::Point(276, 237);
			this->SS1hBindsLabel->Name = L"SS1hBindsLabel";
			this->SS1hBindsLabel->Size = System::Drawing::Size(165, 31);
			this->SS1hBindsLabel->TabIndex = 59;
			this->SS1hBindsLabel->Text = L"SS1h Binds";
			this->SS1hBindsLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// L2QALabel
			// 
			this->L2QALabel->AutoSize = true;
			this->L2QALabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->L2QALabel->Location = System::Drawing::Point(548, 174);
			this->L2QALabel->Name = L"L2QALabel";
			this->L2QALabel->Size = System::Drawing::Size(46, 31);
			this->L2QALabel->TabIndex = 54;
			this->L2QALabel->Text = L"L2";
			// 
			// L1QALabel
			// 
			this->L1QALabel->AutoSize = true;
			this->L1QALabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->L1QALabel->Location = System::Drawing::Point(463, 174);
			this->L1QALabel->Name = L"L1QALabel";
			this->L1QALabel->Size = System::Drawing::Size(46, 31);
			this->L1QALabel->TabIndex = 53;
			this->L1QALabel->Text = L"L1";
			// 
			// R2QALabel
			// 
			this->R2QALabel->AutoSize = true;
			this->R2QALabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->R2QALabel->Location = System::Drawing::Point(183, 174);
			this->R2QALabel->Name = L"R2QALabel";
			this->R2QALabel->Size = System::Drawing::Size(51, 31);
			this->R2QALabel->TabIndex = 52;
			this->R2QALabel->Text = L"R2";
			// 
			// R1QALabel
			// 
			this->R1QALabel->AutoSize = true;
			this->R1QALabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->R1QALabel->Location = System::Drawing::Point(91, 174);
			this->R1QALabel->Name = L"R1QALabel";
			this->R1QALabel->Size = System::Drawing::Size(51, 31);
			this->R1QALabel->TabIndex = 51;
			this->R1QALabel->Text = L"R1";
			// 
			// QABindsLabel
			// 
			this->QABindsLabel->AutoSize = true;
			this->QABindsLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->QABindsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->QABindsLabel->Location = System::Drawing::Point(287, 132);
			this->QABindsLabel->Name = L"QABindsLabel";
			this->QABindsLabel->Size = System::Drawing::Size(136, 31);
			this->QABindsLabel->TabIndex = 50;
			this->QABindsLabel->Text = L"QA Binds";
			this->QABindsLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// StanceLabel
			// 
			this->StanceLabel->AutoSize = true;
			this->StanceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->StanceLabel->Location = System::Drawing::Point(287, 65);
			this->StanceLabel->Name = L"StanceLabel";
			this->StanceLabel->Size = System::Drawing::Size(105, 31);
			this->StanceLabel->TabIndex = 48;
			this->StanceLabel->Text = L"Stance";
			// 
			// L2Labe
			// 
			this->L2Labe->AutoSize = true;
			this->L2Labe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->L2Labe->Location = System::Drawing::Point(548, 65);
			this->L2Labe->Name = L"L2Labe";
			this->L2Labe->Size = System::Drawing::Size(46, 31);
			this->L2Labe->TabIndex = 43;
			this->L2Labe->Text = L"L2";
			// 
			// L1Label
			// 
			this->L1Label->AutoSize = true;
			this->L1Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->L1Label->Location = System::Drawing::Point(463, 65);
			this->L1Label->Name = L"L1Label";
			this->L1Label->Size = System::Drawing::Size(46, 31);
			this->L1Label->TabIndex = 42;
			this->L1Label->Text = L"L1";
			// 
			// R2Label
			// 
			this->R2Label->AutoSize = true;
			this->R2Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->R2Label->Location = System::Drawing::Point(183, 65);
			this->R2Label->Name = L"R2Label";
			this->R2Label->Size = System::Drawing::Size(51, 31);
			this->R2Label->TabIndex = 41;
			this->R2Label->Text = L"R2";
			// 
			// R1Label
			// 
			this->R1Label->AutoSize = true;
			this->R1Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->R1Label->Location = System::Drawing::Point(91, 65);
			this->R1Label->Name = L"R1Label";
			this->R1Label->Size = System::Drawing::Size(51, 31);
			this->R1Label->TabIndex = 40;
			this->R1Label->Text = L"R1";
			// 
			// InputsLabel
			// 
			this->InputsLabel->AutoSize = true;
			this->InputsLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputsLabel->Location = System::Drawing::Point(291, 9);
			this->InputsLabel->Name = L"InputsLabel";
			this->InputsLabel->Size = System::Drawing::Size(95, 31);
			this->InputsLabel->TabIndex = 39;
			this->InputsLabel->Text = L"Inputs";
			// 
			// R1ComboBox
			// 
			this->R1ComboBox->FormattingEnabled = true;
			this->R1ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l", L"z",
					L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->R1ComboBox->Location = System::Drawing::Point(83, 101);
			this->R1ComboBox->Name = L"R1ComboBox";
			this->R1ComboBox->Size = System::Drawing::Size(68, 21);
			this->R1ComboBox->TabIndex = 78;
			// 
			// R2ComboBox
			// 
			this->R2ComboBox->FormattingEnabled = true;
			this->R2ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l", L"z",
					L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->R2ComboBox->Location = System::Drawing::Point(172, 101);
			this->R2ComboBox->Name = L"R2ComboBox";
			this->R2ComboBox->Size = System::Drawing::Size(68, 21);
			this->R2ComboBox->TabIndex = 79;
			// 
			// StanceComboBox
			// 
			this->StanceComboBox->FormattingEnabled = true;
			this->StanceComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l",
					L"z", L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->StanceComboBox->Location = System::Drawing::Point(303, 101);
			this->StanceComboBox->Name = L"StanceComboBox";
			this->StanceComboBox->Size = System::Drawing::Size(68, 21);
			this->StanceComboBox->TabIndex = 80;
			// 
			// L1ComboBox
			// 
			this->L1ComboBox->FormattingEnabled = true;
			this->L1ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l", L"z",
					L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->L1ComboBox->Location = System::Drawing::Point(450, 102);
			this->L1ComboBox->Name = L"L1ComboBox";
			this->L1ComboBox->Size = System::Drawing::Size(68, 21);
			this->L1ComboBox->TabIndex = 81;
			// 
			// L2ComboBox
			// 
			this->L2ComboBox->FormattingEnabled = true;
			this->L2ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l", L"z",
					L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->L2ComboBox->Location = System::Drawing::Point(538, 102);
			this->L2ComboBox->Name = L"L2ComboBox";
			this->L2ComboBox->Size = System::Drawing::Size(68, 21);
			this->L2ComboBox->TabIndex = 82;
			// 
			// QAL2ComboBox
			// 
			this->QAL2ComboBox->FormattingEnabled = true;
			this->QAL2ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l", L"z",
					L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->QAL2ComboBox->Location = System::Drawing::Point(538, 209);
			this->QAL2ComboBox->Name = L"QAL2ComboBox";
			this->QAL2ComboBox->Size = System::Drawing::Size(68, 21);
			this->QAL2ComboBox->TabIndex = 86;
			// 
			// QAL1ComboBox
			// 
			this->QAL1ComboBox->FormattingEnabled = true;
			this->QAL1ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l", L"z",
					L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->QAL1ComboBox->Location = System::Drawing::Point(450, 209);
			this->QAL1ComboBox->Name = L"QAL1ComboBox";
			this->QAL1ComboBox->Size = System::Drawing::Size(68, 21);
			this->QAL1ComboBox->TabIndex = 85;
			// 
			// QAR2ComboBox
			// 
			this->QAR2ComboBox->FormattingEnabled = true;
			this->QAR2ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l", L"z",
					L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->QAR2ComboBox->Location = System::Drawing::Point(172, 208);
			this->QAR2ComboBox->Name = L"QAR2ComboBox";
			this->QAR2ComboBox->Size = System::Drawing::Size(68, 21);
			this->QAR2ComboBox->TabIndex = 84;
			// 
			// QAR1ComboBox
			// 
			this->QAR1ComboBox->FormattingEnabled = true;
			this->QAR1ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l", L"z",
					L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->QAR1ComboBox->Location = System::Drawing::Point(83, 208);
			this->QAR1ComboBox->Name = L"QAR1ComboBox";
			this->QAR1ComboBox->Size = System::Drawing::Size(68, 21);
			this->QAR1ComboBox->TabIndex = 83;
			// 
			// SS1hL2ComboBox
			// 
			this->SS1hL2ComboBox->FormattingEnabled = true;
			this->SS1hL2ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l",
					L"z", L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->SS1hL2ComboBox->Location = System::Drawing::Point(538, 315);
			this->SS1hL2ComboBox->Name = L"SS1hL2ComboBox";
			this->SS1hL2ComboBox->Size = System::Drawing::Size(68, 21);
			this->SS1hL2ComboBox->TabIndex = 90;
			// 
			// SS1hL1ComboBox
			// 
			this->SS1hL1ComboBox->FormattingEnabled = true;
			this->SS1hL1ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l",
					L"z", L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->SS1hL1ComboBox->Location = System::Drawing::Point(450, 315);
			this->SS1hL1ComboBox->Name = L"SS1hL1ComboBox";
			this->SS1hL1ComboBox->Size = System::Drawing::Size(68, 21);
			this->SS1hL1ComboBox->TabIndex = 89;
			// 
			// SS1hR2ComboBox
			// 
			this->SS1hR2ComboBox->FormattingEnabled = true;
			this->SS1hR2ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l",
					L"z", L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->SS1hR2ComboBox->Location = System::Drawing::Point(172, 314);
			this->SS1hR2ComboBox->Name = L"SS1hR2ComboBox";
			this->SS1hR2ComboBox->Size = System::Drawing::Size(68, 21);
			this->SS1hR2ComboBox->TabIndex = 88;
			// 
			// SS1hR1ComboBox
			// 
			this->SS1hR1ComboBox->FormattingEnabled = true;
			this->SS1hR1ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l",
					L"z", L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->SS1hR1ComboBox->Location = System::Drawing::Point(83, 314);
			this->SS1hR1ComboBox->Name = L"SS1hR1ComboBox";
			this->SS1hR1ComboBox->Size = System::Drawing::Size(68, 21);
			this->SS1hR1ComboBox->TabIndex = 87;
			// 
			// SS2hL2ComboBox
			// 
			this->SS2hL2ComboBox->FormattingEnabled = true;
			this->SS2hL2ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l",
					L"z", L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->SS2hL2ComboBox->Location = System::Drawing::Point(538, 427);
			this->SS2hL2ComboBox->Name = L"SS2hL2ComboBox";
			this->SS2hL2ComboBox->Size = System::Drawing::Size(68, 21);
			this->SS2hL2ComboBox->TabIndex = 94;
			// 
			// SS2hL1ComboBox
			// 
			this->SS2hL1ComboBox->FormattingEnabled = true;
			this->SS2hL1ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l",
					L"z", L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->SS2hL1ComboBox->Location = System::Drawing::Point(450, 427);
			this->SS2hL1ComboBox->Name = L"SS2hL1ComboBox";
			this->SS2hL1ComboBox->Size = System::Drawing::Size(68, 21);
			this->SS2hL1ComboBox->TabIndex = 93;
			// 
			// SS2hR2ComboBox
			// 
			this->SS2hR2ComboBox->FormattingEnabled = true;
			this->SS2hR2ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l",
					L"z", L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->SS2hR2ComboBox->Location = System::Drawing::Point(172, 426);
			this->SS2hR2ComboBox->Name = L"SS2hR2ComboBox";
			this->SS2hR2ComboBox->Size = System::Drawing::Size(68, 21);
			this->SS2hR2ComboBox->TabIndex = 92;
			// 
			// SS2hR1ComboBox
			// 
			this->SS2hR1ComboBox->FormattingEnabled = true;
			this->SS2hR1ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"q", L"w", L"e", L"r", L"t", L"y", L"u", L"i", L"o", L"p", L"a", L"s", L"d", L"f", L"g", L"h", L"j", L"k", L"l",
					L"z", L"x", L"c", L"v", L"b", L"n", L"m", L"mouse4", L"mouse5"
			});
			this->SS2hR1ComboBox->Location = System::Drawing::Point(83, 426);
			this->SS2hR1ComboBox->Name = L"SS2hR1ComboBox";
			this->SS2hR1ComboBox->Size = System::Drawing::Size(68, 21);
			this->SS2hR1ComboBox->TabIndex = 91;
			// 
			// BinderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(685, 556);
			this->Controls->Add(this->SS2hL2ComboBox);
			this->Controls->Add(this->SS2hL1ComboBox);
			this->Controls->Add(this->SS2hR2ComboBox);
			this->Controls->Add(this->SS2hR1ComboBox);
			this->Controls->Add(this->SS1hL2ComboBox);
			this->Controls->Add(this->SS1hL1ComboBox);
			this->Controls->Add(this->SS1hR2ComboBox);
			this->Controls->Add(this->SS1hR1ComboBox);
			this->Controls->Add(this->QAL2ComboBox);
			this->Controls->Add(this->QAL1ComboBox);
			this->Controls->Add(this->QAR2ComboBox);
			this->Controls->Add(this->QAR1ComboBox);
			this->Controls->Add(this->L2ComboBox);
			this->Controls->Add(this->L1ComboBox);
			this->Controls->Add(this->StanceComboBox);
			this->Controls->Add(this->R2ComboBox);
			this->Controls->Add(this->R1ComboBox);
			this->Controls->Add(this->BindButton);
			this->Controls->Add(this->L2SS2hLabel);
			this->Controls->Add(this->L1SS2hLabel);
			this->Controls->Add(this->R2SS2hLabel);
			this->Controls->Add(this->R1SS2hLabel);
			this->Controls->Add(this->SS2hBindsLabel);
			this->Controls->Add(this->L2SS1hLabel);
			this->Controls->Add(this->L1SS1hLabel);
			this->Controls->Add(this->R2SS1hLabel);
			this->Controls->Add(this->R1SS1hLabel);
			this->Controls->Add(this->SS1hBindsLabel);
			this->Controls->Add(this->L2QALabel);
			this->Controls->Add(this->L1QALabel);
			this->Controls->Add(this->R2QALabel);
			this->Controls->Add(this->R1QALabel);
			this->Controls->Add(this->QABindsLabel);
			this->Controls->Add(this->StanceLabel);
			this->Controls->Add(this->L2Labe);
			this->Controls->Add(this->L1Label);
			this->Controls->Add(this->R2Label);
			this->Controls->Add(this->R1Label);
			this->Controls->Add(this->InputsLabel);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"BinderForm";
			this->Text = L"Dark souls 2 binder";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: 
		System::Void BindButton_Click(System::Object^ sender, System::EventArgs^ e);
		gameInputs CheckGameInputs(gameInputs inputs);
		gameBinds CheckGameBinds(gameBinds binds);
		UINT GetComboBoxValue(String^ comboBoxValue);
};
}
