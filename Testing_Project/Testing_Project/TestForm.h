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
	public:
		TestForm(void)
		{
			InitializeComponent();
			
			this->testManager = gcnew TestManager();
			panel_Testing->Hide();
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
		//int n = 0;
		//int select = 0;
		//int sel_rig = 0;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip_Main;

	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel_Testing;
	private: System::Windows::Forms::RadioButton^ answer4;

	private: System::Windows::Forms::RadioButton^ answer3;

	private: System::Windows::Forms::RadioButton^ answer2;
	private: System::Windows::Forms::RadioButton^ answer1;
	private: System::Windows::Forms::Label^ text_question;
	private: System::Windows::Forms::Label^ text_num;
	private: System::Windows::Forms::Button^ Next_Question;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip_Test = (gcnew System::Windows::Forms::MenuStrip());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip_Main = (gcnew System::Windows::Forms::MenuStrip());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel_Testing = (gcnew System::Windows::Forms::Panel());
			this->Next_Question = (gcnew System::Windows::Forms::Button());
			this->answer4 = (gcnew System::Windows::Forms::RadioButton());
			this->answer3 = (gcnew System::Windows::Forms::RadioButton());
			this->answer2 = (gcnew System::Windows::Forms::RadioButton());
			this->answer1 = (gcnew System::Windows::Forms::RadioButton());
			this->text_question = (gcnew System::Windows::Forms::Label());
			this->text_num = (gcnew System::Windows::Forms::Label());
			this->menuStrip_Test->SuspendLayout();
			this->menuStrip_Main->SuspendLayout();
			this->panel_Testing->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip_Test
			// 
			this->menuStrip_Test->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������������������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->�����������������������ToolStripMenuItem
			});
			this->menuStrip_Test->Location = System::Drawing::Point(0, 24);
			this->menuStrip_Test->Name = L"menuStrip_Test";
			this->menuStrip_Test->Size = System::Drawing::Size(1023, 24);
			this->menuStrip_Test->TabIndex = 0;
			this->menuStrip_Test->Text = L"menuStrip1";
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������������������ToolStripMenuItem,
					this->��������������������ToolStripMenuItem
			});
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(146, 20);
			this->�������������������ToolStripMenuItem->Text = L"�������������� �����";
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->��������������������ToolStripMenuItem->Text = L"���������� ����������";
			this->��������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TestForm::��������������������ToolStripMenuItem_Click);
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->��������������������ToolStripMenuItem->Text = L"�������������� ������";
			this->��������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TestForm::��������������������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������ToolStripMenuItem1,
					this->�������ToolStripMenuItem
			});
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->����������ToolStripMenuItem->Text = L"�������� �����";
			// 
			// ����������ToolStripMenuItem1
			// 
			this->����������ToolStripMenuItem1->Name = L"����������ToolStripMenuItem1";
			this->����������ToolStripMenuItem1->Size = System::Drawing::Size(141, 22);
			this->����������ToolStripMenuItem1->Text = L"����������";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// �����������������������ToolStripMenuItem
			// 
			this->�����������������������ToolStripMenuItem->Name = L"�����������������������ToolStripMenuItem";
			this->�����������������������ToolStripMenuItem->Size = System::Drawing::Size(186, 20);
			this->�����������������������ToolStripMenuItem->Text = L"����� �� ����������������";
			// 
			// menuStrip_Main
			// 
			this->menuStrip_Main->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������ToolStripMenuItem,
					this->����������ToolStripMenuItem
			});
			this->menuStrip_Main->Location = System::Drawing::Point(0, 0);
			this->menuStrip_Main->Name = L"menuStrip_Main";
			this->menuStrip_Main->Size = System::Drawing::Size(1023, 24);
			this->menuStrip_Main->TabIndex = 1;
			this->menuStrip_Main->Text = L"menuStrip2";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(97, 20);
			this->����������ToolStripMenuItem->Text = L"��� �������";
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
			this->panel_Testing->Location = System::Drawing::Point(0, 53);
			this->panel_Testing->Name = L"panel_Testing";
			this->panel_Testing->Size = System::Drawing::Size(1023, 430);
			this->panel_Testing->TabIndex = 2;
			// 
			// Next_Question
			// 
			this->Next_Question->Location = System::Drawing::Point(807, 364);
			this->Next_Question->Name = L"Next_Question";
			this->Next_Question->Size = System::Drawing::Size(189, 43);
			this->Next_Question->TabIndex = 6;
			this->Next_Question->Text = L"�����";
			this->Next_Question->UseVisualStyleBackColor = true;
			this->Next_Question->Click += gcnew System::EventHandler(this, &TestForm::Next_Question_Click);
			// 
			// answer4
			// 
			this->answer4->AutoSize = true;
			this->answer4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->answer4->Location = System::Drawing::Point(521, 283);
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
			this->answer3->Location = System::Drawing::Point(48, 283);
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
			this->answer2->Location = System::Drawing::Point(521, 167);
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
			this->answer1->Location = System::Drawing::Point(48, 167);
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
			this->text_question->Location = System::Drawing::Point(12, 71);
			this->text_question->Name = L"text_question";
			this->text_question->Size = System::Drawing::Size(146, 39);
			this->text_question->TabIndex = 1;
			this->text_question->Text = L"question";
			// 
			// text_num
			// 
			this->text_num->AutoSize = true;
			this->text_num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->text_num->Location = System::Drawing::Point(12, 13);
			this->text_num->Name = L"text_num";
			this->text_num->Size = System::Drawing::Size(83, 39);
			this->text_num->TabIndex = 0;
			this->text_num->Text = L"1/10";
			// 
			// TestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1023, 477);
			this->Controls->Add(this->panel_Testing);
			this->Controls->Add(this->menuStrip_Test);
			this->Controls->Add(this->menuStrip_Main);
			this->MainMenuStrip = this->menuStrip_Test;
			this->Name = L"TestForm";
			this->Text = L"TestForm";
			this->menuStrip_Test->ResumeLayout(false);
			this->menuStrip_Test->PerformLayout();
			this->menuStrip_Main->ResumeLayout(false);
			this->menuStrip_Main->PerformLayout();
			this->panel_Testing->ResumeLayout(false);
			this->panel_Testing->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: 
		System::Void ��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void ��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		void LoadQuestion();
		System::Void Next_Question_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Answer_Click(System::Object^ sender, System::EventArgs^ e);
		
};
}
