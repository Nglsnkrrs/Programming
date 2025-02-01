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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label7;


	public:
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox_NameFile
			// 
			this->textBox_NameFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_NameFile->Location = System::Drawing::Point(29, 84);
			this->textBox_NameFile->Name = L"textBox_NameFile";
			this->textBox_NameFile->Size = System::Drawing::Size(524, 30);
			this->textBox_NameFile->TabIndex = 0;
			// 
			// textBox_question
			// 
			this->textBox_question->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_question->Location = System::Drawing::Point(29, 193);
			this->textBox_question->Name = L"textBox_question";
			this->textBox_question->Size = System::Drawing::Size(524, 30);
			this->textBox_question->TabIndex = 1;
			// 
			// textBox_answer1
			// 
			this->textBox_answer1->Location = System::Drawing::Point(21, 75);
			this->textBox_answer1->Name = L"textBox_answer1";
			this->textBox_answer1->Size = System::Drawing::Size(262, 30);
			this->textBox_answer1->TabIndex = 2;
			// 
			// textBox_answer2
			// 
			this->textBox_answer2->Location = System::Drawing::Point(324, 75);
			this->textBox_answer2->Name = L"textBox_answer2";
			this->textBox_answer2->Size = System::Drawing::Size(303, 30);
			this->textBox_answer2->TabIndex = 3;
			// 
			// textBox_answer3
			// 
			this->textBox_answer3->Location = System::Drawing::Point(21, 216);
			this->textBox_answer3->Name = L"textBox_answer3";
			this->textBox_answer3->Size = System::Drawing::Size(262, 30);
			this->textBox_answer3->TabIndex = 4;
			// 
			// textBox_answer4
			// 
			this->textBox_answer4->Location = System::Drawing::Point(324, 216);
			this->textBox_answer4->Name = L"textBox_answer4";
			this->textBox_answer4->Size = System::Drawing::Size(303, 30);
			this->textBox_answer4->TabIndex = 5;
			// 
			// button_SaveQuestion
			// 
			this->button_SaveQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button_SaveQuestion->Location = System::Drawing::Point(29, 550);
			this->button_SaveQuestion->Name = L"button_SaveQuestion";
			this->button_SaveQuestion->Size = System::Drawing::Size(243, 47);
			this->button_SaveQuestion->TabIndex = 6;
			this->button_SaveQuestion->Text = L"Сохранить вопрос";
			this->button_SaveQuestion->UseVisualStyleBackColor = true;
			this->button_SaveQuestion->Click += gcnew System::EventHandler(this, &AddNewTestForm::button_SaveQuestion_Click);
			// 
			// button_SaveTest
			// 
			this->button_SaveTest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button_SaveTest->Location = System::Drawing::Point(29, 622);
			this->button_SaveTest->Name = L"button_SaveTest";
			this->button_SaveTest->Size = System::Drawing::Size(243, 43);
			this->button_SaveTest->TabIndex = 7;
			this->button_SaveTest->Text = L"Сохранить тест";
			this->button_SaveTest->UseVisualStyleBackColor = true;
			this->button_SaveTest->Click += gcnew System::EventHandler(this, &AddNewTestForm::button_SaveTest_Click);
			// 
			// comboBox_CorrectAnswer
			// 
			this->comboBox_CorrectAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox_CorrectAnswer->FormattingEnabled = true;
			this->comboBox_CorrectAnswer->Location = System::Drawing::Point(411, 590);
			this->comboBox_CorrectAnswer->Name = L"comboBox_CorrectAnswer";
			this->comboBox_CorrectAnswer->Size = System::Drawing::Size(189, 33);
			this->comboBox_CorrectAnswer->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(24, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(529, 58);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Введите название файла с тестом в формате \"Категория предмета_название теста\"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(24, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 25);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Введите вопрос";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 25);
			this->label3->TabIndex = 11;
			this->label3->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(319, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 25);
			this->label4->TabIndex = 12;
			this->label4->Text = L"2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 25);
			this->label5->TabIndex = 13;
			this->label5->Text = L"3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(319, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 25);
			this->label6->TabIndex = 14;
			this->label6->Text = L"4";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox_answer4);
			this->groupBox1->Controls->Add(this->textBox_answer3);
			this->groupBox1->Controls->Add(this->textBox_answer2);
			this->groupBox1->Controls->Add(this->textBox_answer1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->groupBox1->Location = System::Drawing::Point(29, 257);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(652, 262);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Варианты ответов";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label7->Location = System::Drawing::Point(348, 539);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(300, 25);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Варианты правильных ответов";
			// 
			// AddNewTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(693, 689);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox_CorrectAnswer);
			this->Controls->Add(this->button_SaveTest);
			this->Controls->Add(this->button_SaveQuestion);
			this->Controls->Add(this->textBox_question);
			this->Controls->Add(this->textBox_NameFile);
			this->Name = L"AddNewTestForm";
			this->Text = L"AddNewTestForm";
			this->Load += gcnew System::EventHandler(this, &AddNewTestForm::AddNewTestForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
