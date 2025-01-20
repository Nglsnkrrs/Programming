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
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBox_UserLogin = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_Categories = (gcnew System::Windows::Forms::ComboBox());
			this->button_SearchUser = (gcnew System::Windows::Forms::Button());
			this->label_Results = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox_UserLogin
			// 
			this->textBox_UserLogin->Location = System::Drawing::Point(377, 294);
			this->textBox_UserLogin->Name = L"textBox_UserLogin";
			this->textBox_UserLogin->Size = System::Drawing::Size(101, 20);
			this->textBox_UserLogin->TabIndex = 7;
			// 
			// comboBox_Categories
			// 
			this->comboBox_Categories->FormattingEnabled = true;
			this->comboBox_Categories->Location = System::Drawing::Point(322, 247);
			this->comboBox_Categories->Name = L"comboBox_Categories";
			this->comboBox_Categories->Size = System::Drawing::Size(121, 21);
			this->comboBox_Categories->TabIndex = 4;
			// 
			// button_SearchUser
			// 
			this->button_SearchUser->Location = System::Drawing::Point(322, 351);
			this->button_SearchUser->Name = L"button_SearchUser";
			this->button_SearchUser->Size = System::Drawing::Size(147, 40);
			this->button_SearchUser->TabIndex = 6;
			this->button_SearchUser->Text = L"button1";
			this->button_SearchUser->UseVisualStyleBackColor = true;
			this->button_SearchUser->Click += gcnew System::EventHandler(this, &ResultForm::button_SearchUser_Click);
			// 
			// label_Results
			// 
			this->label_Results->AutoSize = true;
			this->label_Results->Location = System::Drawing::Point(81, 250);
			this->label_Results->Name = L"label_Results";
			this->label_Results->Size = System::Drawing::Size(35, 13);
			this->label_Results->TabIndex = 5;
			this->label_Results->Text = L"label1";
			// 
			// ResultForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 639);
			this->Controls->Add(this->textBox_UserLogin);
			this->Controls->Add(this->comboBox_Categories);
			this->Controls->Add(this->button_SearchUser);
			this->Controls->Add(this->label_Results);
			this->Name = L"ResultForm";
			this->Text = L"ResultForm";
			this->Load += gcnew System::EventHandler(this, &ResultForm::ResultForm_Load);
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
