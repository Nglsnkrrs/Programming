#pragma once

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class ResultForm : public System::Windows::Forms::Form
	{
	public:
		ResultForm(void)
		{
			InitializeComponent();
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		}
	protected:
		~ResultForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		String^ category;
	private: System::Windows::Forms::TextBox^ textBox_UserLogin;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox_Categories;
	private: System::Windows::Forms::Button^ button_SearchUser;
	private: System::Windows::Forms::Label^ label_Results;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBox_UserLogin = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_Categories = (gcnew System::Windows::Forms::ComboBox());
			this->button_SearchUser = (gcnew System::Windows::Forms::Button());
			this->label_Results = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox_UserLogin
			// 
			this->textBox_UserLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_UserLogin->Location = System::Drawing::Point(878, 172);
			this->textBox_UserLogin->Name = L"textBox_UserLogin";
			this->textBox_UserLogin->Size = System::Drawing::Size(242, 30);
			this->textBox_UserLogin->TabIndex = 7;
			// 
			// comboBox_Categories
			// 
			this->comboBox_Categories->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox_Categories->FormattingEnabled = true;
			this->comboBox_Categories->Location = System::Drawing::Point(878, 62);
			this->comboBox_Categories->Name = L"comboBox_Categories";
			this->comboBox_Categories->Size = System::Drawing::Size(244, 33);
			this->comboBox_Categories->TabIndex = 4;
			// 
			// button_SearchUser
			// 
			this->button_SearchUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button_SearchUser->Location = System::Drawing::Point(933, 227);
			this->button_SearchUser->Name = L"button_SearchUser";
			this->button_SearchUser->Size = System::Drawing::Size(147, 40);
			this->button_SearchUser->TabIndex = 6;
			this->button_SearchUser->Text = L"Найти";
			this->button_SearchUser->UseVisualStyleBackColor = true;
			this->button_SearchUser->Click += gcnew System::EventHandler(this, &ResultForm::button_SearchUser_Click);
			// 
			// label_Results
			// 
			this->label_Results->AutoSize = true;
			this->label_Results->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label_Results->Location = System::Drawing::Point(17, 38);
			this->label_Results->Name = L"label_Results";
			this->label_Results->Size = System::Drawing::Size(64, 25);
			this->label_Results->TabIndex = 5;
			this->label_Results->Text = L"label1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(875, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Название теста";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label_Results);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(817, 243);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Результаты тестов";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(875, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(205, 25);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Логин пользователя";
			// 
			// ResultForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1142, 289);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_UserLogin);
			this->Controls->Add(this->comboBox_Categories);
			this->Controls->Add(this->button_SearchUser);
			this->Name = L"ResultForm";
			this->Text = L"ResultForm";
			this->Load += gcnew System::EventHandler(this, &ResultForm::ResultForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void ResultForm_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void LoadTestResultsByCategory(String^ category);
		System::Void LoadTestResultsByUser(String^ userLogin);
		System::Void comboBox_Categories_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void button_SearchUser_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
