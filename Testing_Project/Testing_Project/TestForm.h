#pragma once
#include "TestManager.h"

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class TestForm : public System::Windows::Forms::Form
	{
	private:
		TestManager^ testManager;
		String^ Login;
		String^ Password;
	public:
		String^ fileLogin;
	public:
		TestForm(String^ login, String^ password)
		{
			InitializeComponent();
			this->testManager = gcnew TestManager();
			panel_Testing->Hide();
			panel_Profile->Hide();
			Login = login;
			Password = password;
		}
	protected:
		~TestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip_Test;
	private: 
	protected:
	protected:
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ математическиеТестыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip_Main;
	private: System::Windows::Forms::ToolStripMenuItem^ главнаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ тестыПоПрограммированиюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ мойПрофильToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel_Profile;


	private: System::Windows::Forms::RadioButton^ answer4;
	private: System::Windows::Forms::RadioButton^ answer3;
	private: System::Windows::Forms::RadioButton^ answer2;
	private: System::Windows::Forms::RadioButton^ answer1;
	private: System::Windows::Forms::Label^ text_question;
	private: System::Windows::Forms::Label^ text_num;
	private: System::Windows::Forms::Button^ Next_Question;
	private: System::Windows::Forms::ToolStripMenuItem^ дискретнаяМатематикаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ математическийАнализToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel_Testing;
	private: System::Windows::Forms::Label^ labelEmail;

	private: System::Windows::Forms::Label^ labelName;

	private: System::Windows::Forms::Label^ labelLogin;
	private: System::Windows::Forms::Label^ labelAddres;

	private: System::Windows::Forms::Label^ labelPhone;
	private: System::Windows::Forms::Label^ labelResultTests;



	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->menuStrip_Test = (gcnew System::Windows::Forms::MenuStrip());
			this->математическиеТестыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->дискретнаяМатематикаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->математическийАнализToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->тестыПоПрограммированиюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip_Main = (gcnew System::Windows::Forms::MenuStrip());
			this->главнаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->мойПрофильToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel_Profile = (gcnew System::Windows::Forms::Panel());
			this->Next_Question = (gcnew System::Windows::Forms::Button());
			this->answer4 = (gcnew System::Windows::Forms::RadioButton());
			this->answer3 = (gcnew System::Windows::Forms::RadioButton());
			this->answer2 = (gcnew System::Windows::Forms::RadioButton());
			this->answer1 = (gcnew System::Windows::Forms::RadioButton());
			this->text_question = (gcnew System::Windows::Forms::Label());
			this->text_num = (gcnew System::Windows::Forms::Label());
			this->panel_Testing = (gcnew System::Windows::Forms::Panel());
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelEmail = (gcnew System::Windows::Forms::Label());
			this->labelPhone = (gcnew System::Windows::Forms::Label());
			this->labelAddres = (gcnew System::Windows::Forms::Label());
			this->labelResultTests = (gcnew System::Windows::Forms::Label());
			this->menuStrip_Test->SuspendLayout();
			this->menuStrip_Main->SuspendLayout();
			this->panel_Profile->SuspendLayout();
			this->panel_Testing->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip_Test
			// 
			this->menuStrip_Test->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->математическиеТестыToolStripMenuItem,
					this->английскийToolStripMenuItem, this->тестыПоПрограммированиюToolStripMenuItem
			});
			this->menuStrip_Test->Location = System::Drawing::Point(0, 24);
			this->menuStrip_Test->Name = L"menuStrip_Test";
			this->menuStrip_Test->Size = System::Drawing::Size(1023, 24);
			this->menuStrip_Test->TabIndex = 0;
			this->menuStrip_Test->Text = L"menuStrip1";
			// 
			// математическиеТестыToolStripMenuItem
			// 
			this->математическиеТестыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->дискретнаяМатематикаToolStripMenuItem,
					this->математическийАнализToolStripMenuItem
			});
			this->математическиеТестыToolStripMenuItem->Name = L"математическиеТестыToolStripMenuItem";
			this->математическиеТестыToolStripMenuItem->Size = System::Drawing::Size(146, 20);
			this->математическиеТестыToolStripMenuItem->Text = L"Математические тесты";
			// 
			// дискретнаяМатематикаToolStripMenuItem
			// 
			this->дискретнаяМатематикаToolStripMenuItem->Name = L"дискретнаяМатематикаToolStripMenuItem";
			this->дискретнаяМатематикаToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->дискретнаяМатематикаToolStripMenuItem->Text = L"Дискретная математика";
			this->дискретнаяМатематикаToolStripMenuItem->Click += gcnew System::EventHandler(this, &TestForm::дискретнаяМатематикаToolStripMenuItem_Click);
			// 
			// математическийАнализToolStripMenuItem
			// 
			this->математическийАнализToolStripMenuItem->Name = L"математическийАнализToolStripMenuItem";
			this->математическийАнализToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->математическийАнализToolStripMenuItem->Text = L"Математический анализ";
			this->математическийАнализToolStripMenuItem->Click += gcnew System::EventHandler(this, &TestForm::математическийАнализToolStripMenuItem_Click);
			// 
			// английскийToolStripMenuItem
			// 
			this->английскийToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->английскийToolStripMenuItem1,
					this->русскийToolStripMenuItem
			});
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			this->английскийToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->английскийToolStripMenuItem->Text = L"Языковые тесты";
			// 
			// английскийToolStripMenuItem1
			// 
			this->английскийToolStripMenuItem1->Name = L"английскийToolStripMenuItem1";
			this->английскийToolStripMenuItem1->Size = System::Drawing::Size(141, 22);
			this->английскийToolStripMenuItem1->Text = L"Английский";
			this->английскийToolStripMenuItem1->Click += gcnew System::EventHandler(this, &TestForm::английскийToolStripMenuItem1_Click);
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &TestForm::русскийToolStripMenuItem_Click);
			// 
			// тестыПоПрограммированиюToolStripMenuItem
			// 
			this->тестыПоПрограммированиюToolStripMenuItem->Name = L"тестыПоПрограммированиюToolStripMenuItem";
			this->тестыПоПрограммированиюToolStripMenuItem->Size = System::Drawing::Size(186, 20);
			this->тестыПоПрограммированиюToolStripMenuItem->Text = L"Тесты по программированию";
			this->тестыПоПрограммированиюToolStripMenuItem->Click += gcnew System::EventHandler(this, &TestForm::тестыПоПрограммированиюToolStripMenuItem_Click);
			// 
			// menuStrip_Main
			// 
			this->menuStrip_Main->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->главнаяToolStripMenuItem,
					this->мойПрофильToolStripMenuItem
			});
			this->menuStrip_Main->Location = System::Drawing::Point(0, 0);
			this->menuStrip_Main->Name = L"menuStrip_Main";
			this->menuStrip_Main->Size = System::Drawing::Size(1023, 24);
			this->menuStrip_Main->TabIndex = 1;
			this->menuStrip_Main->Text = L"menuStrip2";
			// 
			// главнаяToolStripMenuItem
			// 
			this->главнаяToolStripMenuItem->Name = L"главнаяToolStripMenuItem";
			this->главнаяToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->главнаяToolStripMenuItem->Text = L"Главная";
			// 
			// мойПрофильToolStripMenuItem
			// 
			this->мойПрофильToolStripMenuItem->Name = L"мойПрофильToolStripMenuItem";
			this->мойПрофильToolStripMenuItem->Size = System::Drawing::Size(97, 20);
			this->мойПрофильToolStripMenuItem->Text = L"Мой профиль";
			this->мойПрофильToolStripMenuItem->Click += gcnew System::EventHandler(this, &TestForm::мойПрофильToolStripMenuItem_Click);
			// 
			// panel_Profile
			// 
			this->panel_Profile->Controls->Add(this->labelResultTests);
			this->panel_Profile->Controls->Add(this->labelAddres);
			this->panel_Profile->Controls->Add(this->labelPhone);
			this->panel_Profile->Controls->Add(this->labelEmail);
			this->panel_Profile->Controls->Add(this->labelName);
			this->panel_Profile->Controls->Add(this->labelLogin);
			this->panel_Profile->Location = System::Drawing::Point(0, 53);
			this->panel_Profile->Name = L"panel_Profile";
			this->panel_Profile->Size = System::Drawing::Size(1023, 430);
			this->panel_Profile->TabIndex = 2;
			// 
			// Next_Question
			// 
			this->Next_Question->Location = System::Drawing::Point(797, 352);
			this->Next_Question->Name = L"Next_Question";
			this->Next_Question->Size = System::Drawing::Size(189, 43);
			this->Next_Question->TabIndex = 6;
			this->Next_Question->Text = L"Далее";
			this->Next_Question->UseVisualStyleBackColor = true;
			this->Next_Question->Click += gcnew System::EventHandler(this, &TestForm::Next_Question_Click);
			// 
			// answer4
			// 
			this->answer4->AutoSize = true;
			this->answer4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->answer4->Location = System::Drawing::Point(511, 271);
			this->answer4->Name = L"answer4";
			this->answer4->Size = System::Drawing::Size(140, 29);
			this->answer4->TabIndex = 5;
			this->answer4->TabStop = true;
			this->answer4->Text = L"radioButton3";
			this->answer4->UseVisualStyleBackColor = true;
			this->answer4->CheckedChanged += gcnew System::EventHandler(this, &TestForm::Answer_Click);
			// 
			// answer3
			// 
			this->answer3->AutoSize = true;
			this->answer3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->answer3->Location = System::Drawing::Point(38, 271);
			this->answer3->Name = L"answer3";
			this->answer3->Size = System::Drawing::Size(140, 29);
			this->answer3->TabIndex = 4;
			this->answer3->TabStop = true;
			this->answer3->Text = L"radioButton2";
			this->answer3->UseVisualStyleBackColor = true;
			this->answer3->CheckedChanged += gcnew System::EventHandler(this, &TestForm::Answer_Click);
			// 
			// answer2
			// 
			this->answer2->AutoSize = true;
			this->answer2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->answer2->Location = System::Drawing::Point(511, 155);
			this->answer2->Name = L"answer2";
			this->answer2->Size = System::Drawing::Size(140, 29);
			this->answer2->TabIndex = 3;
			this->answer2->TabStop = true;
			this->answer2->Text = L"radioButton1";
			this->answer2->UseVisualStyleBackColor = true;
			this->answer2->CheckedChanged += gcnew System::EventHandler(this, &TestForm::Answer_Click);
			// 
			// answer1
			// 
			this->answer1->AutoSize = true;
			this->answer1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->answer1->Location = System::Drawing::Point(38, 155);
			this->answer1->Name = L"answer1";
			this->answer1->Size = System::Drawing::Size(140, 29);
			this->answer1->TabIndex = 2;
			this->answer1->TabStop = true;
			this->answer1->Text = L"radioButton1";
			this->answer1->UseVisualStyleBackColor = true;
			this->answer1->CheckedChanged += gcnew System::EventHandler(this, &TestForm::Answer_Click);
			// 
			// text_question
			// 
			this->text_question->AutoSize = true;
			this->text_question->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->text_question->Location = System::Drawing::Point(2, 59);
			this->text_question->Name = L"text_question";
			this->text_question->Size = System::Drawing::Size(146, 39);
			this->text_question->TabIndex = 1;
			this->text_question->Text = L"question";
			// 
			// text_num
			// 
			this->text_num->AutoSize = true;
			this->text_num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->text_num->Location = System::Drawing::Point(2, 1);
			this->text_num->Name = L"text_num";
			this->text_num->Size = System::Drawing::Size(83, 39);
			this->text_num->TabIndex = 0;
			this->text_num->Text = L"1/10";
			// 
			// panel_Testing
			// 
			this->panel_Testing->Controls->Add(this->Next_Question);
			this->panel_Testing->Controls->Add(this->answer4);
			this->panel_Testing->Controls->Add(this->answer3);
			this->panel_Testing->Controls->Add(this->answer2);
			this->panel_Testing->Controls->Add(this->answer1);
			this->panel_Testing->Controls->Add(this->text_question);
			this->panel_Testing->Controls->Add(this->text_num);
			this->panel_Testing->Location = System::Drawing::Point(3, 51);
			this->panel_Testing->Name = L"panel_Testing";
			this->panel_Testing->Size = System::Drawing::Size(1023, 427);
			this->panel_Testing->TabIndex = 7;
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->Location = System::Drawing::Point(63, 46);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(35, 13);
			this->labelLogin->TabIndex = 0;
			this->labelLogin->Text = L"label1";
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(68, 98);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(35, 13);
			this->labelName->TabIndex = 1;
			this->labelName->Text = L"label2";
			// 
			// labelEmail
			// 
			this->labelEmail->AutoSize = true;
			this->labelEmail->Location = System::Drawing::Point(70, 147);
			this->labelEmail->Name = L"labelEmail";
			this->labelEmail->Size = System::Drawing::Size(35, 13);
			this->labelEmail->TabIndex = 2;
			this->labelEmail->Text = L"label3";
			// 
			// labelPhone
			// 
			this->labelPhone->AutoSize = true;
			this->labelPhone->Location = System::Drawing::Point(78, 199);
			this->labelPhone->Name = L"labelPhone";
			this->labelPhone->Size = System::Drawing::Size(35, 13);
			this->labelPhone->TabIndex = 3;
			this->labelPhone->Text = L"label4";
			// 
			// labelAddres
			// 
			this->labelAddres->AutoSize = true;
			this->labelAddres->Location = System::Drawing::Point(84, 241);
			this->labelAddres->Name = L"labelAddres";
			this->labelAddres->Size = System::Drawing::Size(35, 13);
			this->labelAddres->TabIndex = 4;
			this->labelAddres->Text = L"label5";
			// 
			// labelResultTests
			// 
			this->labelResultTests->AutoSize = true;
			this->labelResultTests->Location = System::Drawing::Point(438, 54);
			this->labelResultTests->Name = L"labelResultTests";
			this->labelResultTests->Size = System::Drawing::Size(35, 13);
			this->labelResultTests->TabIndex = 5;
			this->labelResultTests->Text = L"label1";
			// 
			// TestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1023, 477);
			this->Controls->Add(this->panel_Profile);
			this->Controls->Add(this->menuStrip_Test);
			this->Controls->Add(this->menuStrip_Main);
			this->Controls->Add(this->panel_Testing);
			this->MainMenuStrip = this->menuStrip_Test;
			this->Name = L"TestForm";
			this->Text = L"TestForm";
			this->menuStrip_Test->ResumeLayout(false);
			this->menuStrip_Test->PerformLayout();
			this->menuStrip_Main->ResumeLayout(false);
			this->menuStrip_Main->PerformLayout();
			this->panel_Profile->ResumeLayout(false);
			this->panel_Profile->PerformLayout();
			this->panel_Testing->ResumeLayout(false);
			this->panel_Testing->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: 
		System::Void дискретнаяМатематикаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void математическийАнализToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		void LoadQuestion();
		System::Void Next_Question_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Answer_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void английскийToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void тестыПоПрограммированиюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void мойПрофильToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		void LoadTestResults(String^ userLogin);
		/*String^ LogiMyOrofile();*/
};
}
