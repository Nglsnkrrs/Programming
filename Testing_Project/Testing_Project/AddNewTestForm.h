#pragma once

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	public ref class AddNewTestForm : public System::Windows::Forms::Form
	{
	public:
		List<System::String^>^ questions;
		List<System::String^>^ answers;
		List<int>^ correctAnswers;
	public:
		AddNewTestForm(void)
		{
			InitializeComponent();
			questions = gcnew List<System::String^>();
			answers = gcnew List<System::String^>();
			correctAnswers = gcnew List<int>();
		}

	protected:
		~AddNewTestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_NameFile;
	protected:
	private: System::Windows::Forms::TextBox^ textBox_question;
	private: System::Windows::Forms::TextBox^ textBox_answer1;
	private: System::Windows::Forms::TextBox^ textBox_answer2;
	private: System::Windows::Forms::TextBox^ textBox_answer3;
	private: System::Windows::Forms::TextBox^ textBox_answer4;
	private: System::Windows::Forms::Button^ button_SaveQuestion;
	private: System::Windows::Forms::Button^ button_SaveTest;
	private: System::Windows::Forms::ComboBox^ comboBox_CorrectAnswer;
	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBox_NameFile = (gcnew System::Windows::Forms::TextBox());
			this->textBox_question = (gcnew System::Windows::Forms::TextBox());
			this->textBox_answer1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_answer2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_answer3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_answer4 = (gcnew System::Windows::Forms::TextBox());
			this->button_SaveQuestion = (gcnew System::Windows::Forms::Button());
			this->button_SaveTest = (gcnew System::Windows::Forms::Button());
			this->comboBox_CorrectAnswer = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox_NameFile
			// 
			this->textBox_NameFile->Location = System::Drawing::Point(120, 106);
			this->textBox_NameFile->Name = L"textBox_NameFile";
			this->textBox_NameFile->Size = System::Drawing::Size(100, 20);
			this->textBox_NameFile->TabIndex = 0;
			// 
			// textBox_question
			// 
			this->textBox_question->Location = System::Drawing::Point(160, 217);
			this->textBox_question->Name = L"textBox_question";
			this->textBox_question->Size = System::Drawing::Size(95, 20);
			this->textBox_question->TabIndex = 1;
			// 
			// textBox_answer1
			// 
			this->textBox_answer1->Location = System::Drawing::Point(200, 365);
			this->textBox_answer1->Name = L"textBox_answer1";
			this->textBox_answer1->Size = System::Drawing::Size(133, 20);
			this->textBox_answer1->TabIndex = 2;
			// 
			// textBox_answer2
			// 
			this->textBox_answer2->Location = System::Drawing::Point(400, 368);
			this->textBox_answer2->Name = L"textBox_answer2";
			this->textBox_answer2->Size = System::Drawing::Size(177, 20);
			this->textBox_answer2->TabIndex = 3;
			// 
			// textBox_answer3
			// 
			this->textBox_answer3->Location = System::Drawing::Point(173, 464);
			this->textBox_answer3->Name = L"textBox_answer3";
			this->textBox_answer3->Size = System::Drawing::Size(133, 20);
			this->textBox_answer3->TabIndex = 4;
			// 
			// textBox_answer4
			// 
			this->textBox_answer4->Location = System::Drawing::Point(423, 464);
			this->textBox_answer4->Name = L"textBox_answer4";
			this->textBox_answer4->Size = System::Drawing::Size(154, 20);
			this->textBox_answer4->TabIndex = 5;
			// 
			// button_SaveQuestion
			// 
			this->button_SaveQuestion->Location = System::Drawing::Point(101, 726);
			this->button_SaveQuestion->Name = L"button_SaveQuestion";
			this->button_SaveQuestion->Size = System::Drawing::Size(173, 33);
			this->button_SaveQuestion->TabIndex = 6;
			this->button_SaveQuestion->Text = L"button1";
			this->button_SaveQuestion->UseVisualStyleBackColor = true;
			this->button_SaveQuestion->Click += gcnew System::EventHandler(this, &AddNewTestForm::button_SaveQuestion_Click);
			// 
			// button_SaveTest
			// 
			this->button_SaveTest->Location = System::Drawing::Point(512, 726);
			this->button_SaveTest->Name = L"button_SaveTest";
			this->button_SaveTest->Size = System::Drawing::Size(172, 32);
			this->button_SaveTest->TabIndex = 7;
			this->button_SaveTest->Text = L"button2";
			this->button_SaveTest->UseVisualStyleBackColor = true;
			this->button_SaveTest->Click += gcnew System::EventHandler(this, &AddNewTestForm::button_SaveTest_Click);
			// 
			// comboBox_CorrectAnswer
			// 
			this->comboBox_CorrectAnswer->FormattingEnabled = true;
			this->comboBox_CorrectAnswer->Location = System::Drawing::Point(456, 96);
			this->comboBox_CorrectAnswer->Name = L"comboBox_CorrectAnswer";
			this->comboBox_CorrectAnswer->Size = System::Drawing::Size(121, 21);
			this->comboBox_CorrectAnswer->TabIndex = 8;
			// 
			// AddNewTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 854);
			this->Controls->Add(this->comboBox_CorrectAnswer);
			this->Controls->Add(this->button_SaveTest);
			this->Controls->Add(this->button_SaveQuestion);
			this->Controls->Add(this->textBox_answer4);
			this->Controls->Add(this->textBox_answer3);
			this->Controls->Add(this->textBox_answer2);
			this->Controls->Add(this->textBox_answer1);
			this->Controls->Add(this->textBox_question);
			this->Controls->Add(this->textBox_NameFile);
			this->Name = L"AddNewTestForm";
			this->Text = L"AddNewTestForm";
			this->Load += gcnew System::EventHandler(this, &AddNewTestForm::AddNewTestForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void button_SaveQuestion_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button_SaveTest_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void AddNewTestForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
