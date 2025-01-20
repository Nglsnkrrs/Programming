#pragma once

namespace TestingProject {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class TestForm : public System::Windows::Forms::Form
	{
	private:
		String^ Login1;
		String^ Password1;
		ToolStripMenuItem^ testsMenuItem;
		ListBox^ questionsListBox;
		Button^ nextButton;
		List<String^>^ testQuestions;
		List<List<String^>^>^ testOptions;
		List<String^>^ testAnswers;
		
		int currentQuestionIndex;
		int correctAnswers = 0;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	public:
		String^ fileLogin;
		String^ categoryName;
	public:
		TestForm(String^ login1, String^ password1)
		{
			InitializeComponent();
			panel_Testing->Hide();
			Login1 = login1;
			Password1 = password1;

			testQuestions = gcnew List<String^>();
			testOptions = gcnew List<List<String^>^>();
			testAnswers = gcnew List<String^>();
			loadTests();
		}
	protected:
		~TestForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
	protected:
	protected:
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip_Main;
	private: System::Windows::Forms::ToolStripMenuItem^ ãëàâíàÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ìîéÏðîôèëüToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^ answer4;
	private: System::Windows::Forms::RadioButton^ answer3;
	private: System::Windows::Forms::RadioButton^ answer2;
	private: System::Windows::Forms::RadioButton^ answer1;
	private: System::Windows::Forms::Label^ text_question;
	private: System::Windows::Forms::Label^ text_num;
	private: System::Windows::Forms::Button^ Next_Question;
	private: System::Windows::Forms::Panel^ panel_Testing;
	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->menuStrip_Main = (gcnew System::Windows::Forms::MenuStrip());
			this->ãëàâíàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìîéÏðîôèëüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Next_Question = (gcnew System::Windows::Forms::Button());
			this->answer4 = (gcnew System::Windows::Forms::RadioButton());
			this->answer3 = (gcnew System::Windows::Forms::RadioButton());
			this->answer2 = (gcnew System::Windows::Forms::RadioButton());
			this->answer1 = (gcnew System::Windows::Forms::RadioButton());
			this->text_question = (gcnew System::Windows::Forms::Label());
			this->text_num = (gcnew System::Windows::Forms::Label());
			this->panel_Testing = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip_Main->SuspendLayout();
			this->panel_Testing->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip_Main
			// 
			this->menuStrip_Main->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ãëàâíàÿToolStripMenuItem,
					this->ìîéÏðîôèëüToolStripMenuItem
			});
			this->menuStrip_Main->Location = System::Drawing::Point(0, 24);
			this->menuStrip_Main->Name = L"menuStrip_Main";
			this->menuStrip_Main->Size = System::Drawing::Size(1023, 24);
			this->menuStrip_Main->TabIndex = 1;
			this->menuStrip_Main->Text = L"menuStrip2";
			// 
			// ãëàâíàÿToolStripMenuItem
			// 
			this->ãëàâíàÿToolStripMenuItem->Name = L"ãëàâíàÿToolStripMenuItem";
			this->ãëàâíàÿToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->ãëàâíàÿToolStripMenuItem->Text = L"Ãëàâíàÿ";
			// 
			// ìîéÏðîôèëüToolStripMenuItem
			// 
			this->ìîéÏðîôèëüToolStripMenuItem->Name = L"ìîéÏðîôèëüToolStripMenuItem";
			this->ìîéÏðîôèëüToolStripMenuItem->Size = System::Drawing::Size(97, 20);
			this->ìîéÏðîôèëüToolStripMenuItem->Text = L"Ìîé ïðîôèëü";
			this->ìîéÏðîôèëüToolStripMenuItem->Click += gcnew System::EventHandler(this, &TestForm::ìîéÏðîôèëüToolStripMenuItem_Click);
			// 
			// Next_Question
			// 
			this->Next_Question->Location = System::Drawing::Point(797, 352);
			this->Next_Question->Name = L"Next_Question";
			this->Next_Question->Size = System::Drawing::Size(189, 43);
			this->Next_Question->TabIndex = 6;
			this->Next_Question->Text = L"Äàëåå";
			this->Next_Question->UseVisualStyleBackColor = true;
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
			this->panel_Testing->Location = System::Drawing::Point(0, 51);
			this->panel_Testing->Name = L"panel_Testing";
			this->panel_Testing->Size = System::Drawing::Size(1023, 427);
			this->panel_Testing->TabIndex = 7;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1023, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// TestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1023, 477);
			this->Controls->Add(this->menuStrip_Main);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel_Testing);
			this->Name = L"TestForm";
			this->Text = L"TestForm";
			this->menuStrip_Main->ResumeLayout(false);
			this->menuStrip_Main->PerformLayout();
			this->panel_Testing->ResumeLayout(false);
			this->panel_Testing->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

			answer1->Click += gcnew EventHandler(this, &TestForm::OnAnswerClick);
			answer2->Click += gcnew EventHandler(this, &TestForm::OnAnswerClick);
			answer3->Click += gcnew EventHandler(this, &TestForm::OnAnswerClick);
			answer4->Click += gcnew EventHandler(this, &TestForm::OnAnswerClick);
			Next_Question->Click += gcnew EventHandler(this, &TestForm::OnNextButtonClick);


		}

#pragma endregion

	private:

		System::Void ìîéÏðîôèëüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		void loadTests();
		void OnCategoryItemClick(Object^ sender, EventArgs^ e);
		void loadTestFromFile(String^ testName);
		void displayQuestion();
		void saveTestResults(String^ testName, int grade);
		void OnAnswerClick(Object^ sender, EventArgs^ e);
		void OnNextButtonClick(Object^ sender, EventArgs^ e);
		
};
}