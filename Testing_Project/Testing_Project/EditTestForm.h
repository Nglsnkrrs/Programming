#pragma once

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace Microsoft::VisualBasic;
	using namespace System::IO;


	/// <summary>
	/// Summary for EditTestForm
	/// </summary>
	public ref class EditTestForm : public System::Windows::Forms::Form
	{
		List<String^>^ questions = gcnew List<String^>();
		List<List<String^>^>^ answers = gcnew List<List<String^>^>();
	private: System::Windows::Forms::TextBox^ TextBox_NewQuestion;
	private: System::Windows::Forms::ComboBox^ ComboBox_NewCorrectAnswer;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
		   List<int>^ correctAnswers = gcnew List<int>();
	public:
		EditTestForm(void)
		{
			InitializeComponent();
			ComboBox_CorrectAnswer->Items->AddRange(gcnew array<String^>{"1", "2", "3", "4"});
			ComboBox_NewCorrectAnswer->Items->AddRange(gcnew array<String^>{"1", "2", "3", "4"});

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditTestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TextBox_FileName;
	private: System::Windows::Forms::Button^ Button_EditQuestion;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ TextBox_QuestionIndex;
	private: System::Windows::Forms::TextBox^ TextBox_EditQuestion;
	private: System::Windows::Forms::TextBox^ textBox_NewAnswer1;
	private: System::Windows::Forms::TextBox^ textBox_NewAnswer2;
	private: System::Windows::Forms::TextBox^ textBox_NewAnswer3;



	private: System::Windows::Forms::Button^ Button_AddQuestion;






	private: System::Windows::Forms::Button^ Button_LoadFile;
	private: System::Windows::Forms::Button^ Button_SaveFile;
	private: System::Windows::Forms::TextBox^ textBox_NewAnswer4;



	private: System::Windows::Forms::ComboBox^ ComboBox_CorrectAnswer;
	private: System::Windows::Forms::Button^ Button_DeleteQuestion;

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
			this->TextBox_FileName = (gcnew System::Windows::Forms::TextBox());
			this->Button_EditQuestion = (gcnew System::Windows::Forms::Button());
			this->TextBox_QuestionIndex = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_EditQuestion = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NewAnswer1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NewAnswer2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NewAnswer3 = (gcnew System::Windows::Forms::TextBox());
			this->Button_AddQuestion = (gcnew System::Windows::Forms::Button());
			this->Button_LoadFile = (gcnew System::Windows::Forms::Button());
			this->Button_SaveFile = (gcnew System::Windows::Forms::Button());
			this->textBox_NewAnswer4 = (gcnew System::Windows::Forms::TextBox());
			this->ComboBox_CorrectAnswer = (gcnew System::Windows::Forms::ComboBox());
			this->Button_DeleteQuestion = (gcnew System::Windows::Forms::Button());
			this->TextBox_NewQuestion = (gcnew System::Windows::Forms::TextBox());
			this->ComboBox_NewCorrectAnswer = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// TextBox_FileName
			// 
			this->TextBox_FileName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->TextBox_FileName->Location = System::Drawing::Point(59, 62);
			this->TextBox_FileName->Name = L"TextBox_FileName";
			this->TextBox_FileName->Size = System::Drawing::Size(446, 30);
			this->TextBox_FileName->TabIndex = 0;
			// 
			// Button_EditQuestion
			// 
			this->Button_EditQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Button_EditQuestion->Location = System::Drawing::Point(239, 609);
			this->Button_EditQuestion->Name = L"Button_EditQuestion";
			this->Button_EditQuestion->Size = System::Drawing::Size(243, 42);
			this->Button_EditQuestion->TabIndex = 1;
			this->Button_EditQuestion->Text = L"Редактировать вопрос";
			this->Button_EditQuestion->UseVisualStyleBackColor = true;
			this->Button_EditQuestion->Click += gcnew System::EventHandler(this, &EditTestForm::Button_EditQuestion_Click);
			// 
			// TextBox_QuestionIndex
			// 
			this->TextBox_QuestionIndex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->TextBox_QuestionIndex->Location = System::Drawing::Point(11, 70);
			this->TextBox_QuestionIndex->Name = L"TextBox_QuestionIndex";
			this->TextBox_QuestionIndex->Size = System::Drawing::Size(351, 30);
			this->TextBox_QuestionIndex->TabIndex = 3;
			// 
			// TextBox_EditQuestion
			// 
			this->TextBox_EditQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->TextBox_EditQuestion->Location = System::Drawing::Point(11, 154);
			this->TextBox_EditQuestion->Name = L"TextBox_EditQuestion";
			this->TextBox_EditQuestion->Size = System::Drawing::Size(351, 30);
			this->TextBox_EditQuestion->TabIndex = 4;
			// 
			// textBox_NewAnswer1
			// 
			this->textBox_NewAnswer1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_NewAnswer1->Location = System::Drawing::Point(11, 55);
			this->textBox_NewAnswer1->Name = L"textBox_NewAnswer1";
			this->textBox_NewAnswer1->Size = System::Drawing::Size(303, 30);
			this->textBox_NewAnswer1->TabIndex = 5;
			// 
			// textBox_NewAnswer2
			// 
			this->textBox_NewAnswer2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_NewAnswer2->Location = System::Drawing::Point(355, 55);
			this->textBox_NewAnswer2->Name = L"textBox_NewAnswer2";
			this->textBox_NewAnswer2->Size = System::Drawing::Size(324, 30);
			this->textBox_NewAnswer2->TabIndex = 6;
			// 
			// textBox_NewAnswer3
			// 
			this->textBox_NewAnswer3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_NewAnswer3->Location = System::Drawing::Point(11, 139);
			this->textBox_NewAnswer3->Name = L"textBox_NewAnswer3";
			this->textBox_NewAnswer3->Size = System::Drawing::Size(303, 30);
			this->textBox_NewAnswer3->TabIndex = 7;
			// 
			// Button_AddQuestion
			// 
			this->Button_AddQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Button_AddQuestion->Location = System::Drawing::Point(16, 609);
			this->Button_AddQuestion->Name = L"Button_AddQuestion";
			this->Button_AddQuestion->Size = System::Drawing::Size(217, 42);
			this->Button_AddQuestion->TabIndex = 8;
			this->Button_AddQuestion->Text = L"Добавить вопрос";
			this->Button_AddQuestion->UseVisualStyleBackColor = true;
			this->Button_AddQuestion->Click += gcnew System::EventHandler(this, &EditTestForm::Button_AddQuestion_Click);
			// 
			// Button_LoadFile
			// 
			this->Button_LoadFile->Location = System::Drawing::Point(563, 56);
			this->Button_LoadFile->Name = L"Button_LoadFile";
			this->Button_LoadFile->Size = System::Drawing::Size(140, 36);
			this->Button_LoadFile->TabIndex = 9;
			this->Button_LoadFile->Text = L"Загрузить файл";
			this->Button_LoadFile->UseVisualStyleBackColor = true;
			this->Button_LoadFile->Click += gcnew System::EventHandler(this, &EditTestForm::Button_LoadFile_Click);
			// 
			// Button_SaveFile
			// 
			this->Button_SaveFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Button_SaveFile->Location = System::Drawing::Point(254, 667);
			this->Button_SaveFile->Name = L"Button_SaveFile";
			this->Button_SaveFile->Size = System::Drawing::Size(207, 42);
			this->Button_SaveFile->TabIndex = 10;
			this->Button_SaveFile->Text = L"Сохранить в файл";
			this->Button_SaveFile->UseVisualStyleBackColor = true;
			this->Button_SaveFile->Click += gcnew System::EventHandler(this, &EditTestForm::Button_SaveFile_Click);
			// 
			// textBox_NewAnswer4
			// 
			this->textBox_NewAnswer4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_NewAnswer4->Location = System::Drawing::Point(355, 139);
			this->textBox_NewAnswer4->Name = L"textBox_NewAnswer4";
			this->textBox_NewAnswer4->Size = System::Drawing::Size(324, 30);
			this->textBox_NewAnswer4->TabIndex = 11;
			// 
			// ComboBox_CorrectAnswer
			// 
			this->ComboBox_CorrectAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->ComboBox_CorrectAnswer->FormattingEnabled = true;
			this->ComboBox_CorrectAnswer->Location = System::Drawing::Point(228, 207);
			this->ComboBox_CorrectAnswer->Name = L"ComboBox_CorrectAnswer";
			this->ComboBox_CorrectAnswer->Size = System::Drawing::Size(121, 33);
			this->ComboBox_CorrectAnswer->TabIndex = 12;
			// 
			// Button_DeleteQuestion
			// 
			this->Button_DeleteQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Button_DeleteQuestion->Location = System::Drawing::Point(493, 609);
			this->Button_DeleteQuestion->Name = L"Button_DeleteQuestion";
			this->Button_DeleteQuestion->Size = System::Drawing::Size(217, 41);
			this->Button_DeleteQuestion->TabIndex = 13;
			this->Button_DeleteQuestion->Text = L"Удалить вопрос";
			this->Button_DeleteQuestion->UseVisualStyleBackColor = true;
			this->Button_DeleteQuestion->Click += gcnew System::EventHandler(this, &EditTestForm::Button_DeleteQuestion_Click);
			// 
			// TextBox_NewQuestion
			// 
			this->TextBox_NewQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->TextBox_NewQuestion->Location = System::Drawing::Point(18, 83);
			this->TextBox_NewQuestion->Name = L"TextBox_NewQuestion";
			this->TextBox_NewQuestion->Size = System::Drawing::Size(245, 30);
			this->TextBox_NewQuestion->TabIndex = 14;
			// 
			// ComboBox_NewCorrectAnswer
			// 
			this->ComboBox_NewCorrectAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->ComboBox_NewCorrectAnswer->FormattingEnabled = true;
			this->ComboBox_NewCorrectAnswer->Location = System::Drawing::Point(18, 202);
			this->ComboBox_NewCorrectAnswer->Name = L"ComboBox_NewCorrectAnswer";
			this->ComboBox_NewCorrectAnswer->Size = System::Drawing::Size(175, 33);
			this->ComboBox_NewCorrectAnswer->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(156, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(363, 25);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Название файла для редактирования";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(6, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(356, 25);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Индекс вопроса для редактирования";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(6, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(343, 25);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Новый вопрос(отредактированный)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(13, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 25);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Новый вопрос";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->TextBox_FileName);
			this->groupBox1->Controls->Add(this->Button_LoadFile);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupBox1->Location = System::Drawing::Point(15, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(714, 104);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Загрузка файла";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->TextBox_QuestionIndex);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->TextBox_EditQuestion);
			this->groupBox2->Controls->Add(this->ComboBox_CorrectAnswer);
			this->groupBox2->Location = System::Drawing::Point(16, 133);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(376, 260);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Редактор вопроса";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->TextBox_NewQuestion);
			this->groupBox3->Controls->Add(this->ComboBox_NewCorrectAnswer);
			this->groupBox3->Location = System::Drawing::Point(416, 133);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(294, 260);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Добавление вопроса";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->textBox_NewAnswer1);
			this->groupBox4->Controls->Add(this->textBox_NewAnswer3);
			this->groupBox4->Controls->Add(this->textBox_NewAnswer2);
			this->groupBox4->Controls->Add(this->textBox_NewAnswer4);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupBox4->Location = System::Drawing::Point(16, 408);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(694, 184);
			this->groupBox4->TabIndex = 23;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Варианты ответа для отредактированного/нового вопроса";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label5->Location = System::Drawing::Point(17, 210);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(187, 25);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Правильный ответ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->Location = System::Drawing::Point(13, 145);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 25);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Правильный ответ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 35);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(360, 35);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 17);
			this->label8->TabIndex = 13;
			this->label8->Text = L"2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 107);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 17);
			this->label9->TabIndex = 14;
			this->label9->Text = L"3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(360, 107);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 17);
			this->label10->TabIndex = 15;
			this->label10->Text = L"4";
			// 
			// EditTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(741, 721);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->Button_DeleteQuestion);
			this->Controls->Add(this->Button_AddQuestion);
			this->Controls->Add(this->Button_SaveFile);
			this->Controls->Add(this->Button_EditQuestion);
			this->Controls->Add(this->groupBox1);
			this->Name = L"EditTestForm";
			this->Text = L"EditTestForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		void LoadFile(String^ fileName);
		void SaveFile(String^ fileName);
		void EditQuestion(int questionIndex, String^ newQuestion, array<String^>^ newAnswers, int newCorrectAnswer);
		void AddQuestion(String^ newQuestion, array<String^>^ newAnswers, int newCorrectAnswer);
		void DeleteQuestion(int questionIndex);
		System::Void Button_LoadFile_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Button_SaveFile_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Button_EditQuestion_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Button_AddQuestion_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Button_DeleteQuestion_Click(System::Object^ sender, System::EventArgs^ e);
		
};
}
