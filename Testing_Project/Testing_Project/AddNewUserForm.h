#pragma once

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddNewUserForm
	/// </summary>
	public ref class AddNewUserForm : public System::Windows::Forms::Form
	{
	public:
		AddNewUserForm(void)
		{
			InitializeComponent();
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		}
	public:
		String^ Key = "MySecretKey12345";
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddNewUserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_NewLogin;
	protected:
	private: System::Windows::Forms::Button^ AddNewUser;
	private: System::Windows::Forms::TextBox^ textBox_NewPassword;
	private: System::Windows::Forms::TextBox^ textBox_NewPhone;
	private: System::Windows::Forms::TextBox^ textBox_NewEmail;
	private: System::Windows::Forms::TextBox^ textBox_NewAddres;
	private: System::Windows::Forms::TextBox^ textBox_NewName;

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
			this->textBox_NewLogin = (gcnew System::Windows::Forms::TextBox());
			this->AddNewUser = (gcnew System::Windows::Forms::Button());
			this->textBox_NewPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NewPhone = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NewEmail = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NewAddres = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NewName = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox_NewLogin
			// 
			this->textBox_NewLogin->Location = System::Drawing::Point(-10, -34);
			this->textBox_NewLogin->Name = L"textBox_NewLogin";
			this->textBox_NewLogin->Size = System::Drawing::Size(108, 20);
			this->textBox_NewLogin->TabIndex = 7;
			// 
			// AddNewUser
			// 
			this->AddNewUser->Location = System::Drawing::Point(225, 261);
			this->AddNewUser->Name = L"AddNewUser";
			this->AddNewUser->Size = System::Drawing::Size(138, 44);
			this->AddNewUser->TabIndex = 13;
			this->AddNewUser->Text = L"button1";
			this->AddNewUser->UseVisualStyleBackColor = true;
			this->AddNewUser->Click += gcnew System::EventHandler(this, &AddNewUserForm::AddNewUser_Click);
			// 
			// textBox_NewPassword
			// 
			this->textBox_NewPassword->Location = System::Drawing::Point(63, 37);
			this->textBox_NewPassword->Name = L"textBox_NewPassword";
			this->textBox_NewPassword->Size = System::Drawing::Size(113, 20);
			this->textBox_NewPassword->TabIndex = 8;
			// 
			// textBox_NewPhone
			// 
			this->textBox_NewPhone->Location = System::Drawing::Point(80, 214);
			this->textBox_NewPhone->Name = L"textBox_NewPhone";
			this->textBox_NewPhone->Size = System::Drawing::Size(106, 20);
			this->textBox_NewPhone->TabIndex = 12;
			// 
			// textBox_NewEmail
			// 
			this->textBox_NewEmail->Location = System::Drawing::Point(70, 91);
			this->textBox_NewEmail->Name = L"textBox_NewEmail";
			this->textBox_NewEmail->Size = System::Drawing::Size(105, 20);
			this->textBox_NewEmail->TabIndex = 9;
			// 
			// textBox_NewAddres
			// 
			this->textBox_NewAddres->Location = System::Drawing::Point(80, 294);
			this->textBox_NewAddres->Name = L"textBox_NewAddres";
			this->textBox_NewAddres->Size = System::Drawing::Size(94, 20);
			this->textBox_NewAddres->TabIndex = 11;
			// 
			// textBox_NewName
			// 
			this->textBox_NewName->Location = System::Drawing::Point(84, 152);
			this->textBox_NewName->Name = L"textBox_NewName";
			this->textBox_NewName->Size = System::Drawing::Size(103, 20);
			this->textBox_NewName->TabIndex = 10;
			// 
			// AddNewUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 374);
			this->Controls->Add(this->textBox_NewLogin);
			this->Controls->Add(this->AddNewUser);
			this->Controls->Add(this->textBox_NewPassword);
			this->Controls->Add(this->textBox_NewPhone);
			this->Controls->Add(this->textBox_NewEmail);
			this->Controls->Add(this->textBox_NewAddres);
			this->Controls->Add(this->textBox_NewName);
			this->Name = L"AddNewUserForm";
			this->Text = L"AddNewUserForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddNewUser_Click(System::Object^ sender, System::EventArgs^ e);
};
}
