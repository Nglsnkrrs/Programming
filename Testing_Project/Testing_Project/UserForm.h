#pragma once
#include "FormManager.h"

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		String^ LoginINPUT;
		String^ PasswordINPUT;

		UserForm(void)
		{
			InitializeComponent();
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			FormManager::ActiveForms->Add(this);
		}
		
		
	protected:

		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Login_User;
	protected:
	protected:
	private: System::Windows::Forms::Button^ Register_User;
	private: System::Windows::Forms::Label^ Label_Login;
	private: System::Windows::Forms::Label^ Label_Password;
	private: System::Windows::Forms::TextBox^ textBox_Log;
	private: System::Windows::Forms::TextBox^ textBox_Pass;
	protected:
	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->Login_User = (gcnew System::Windows::Forms::Button());
			this->Register_User = (gcnew System::Windows::Forms::Button());
			this->Label_Login = (gcnew System::Windows::Forms::Label());
			this->Label_Password = (gcnew System::Windows::Forms::Label());
			this->textBox_Log = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Pass = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Login_User
			// 
			this->Login_User->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Login_User->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Login_User->Location = System::Drawing::Point(72, 168);
			this->Login_User->Name = L"Login_User";
			this->Login_User->Size = System::Drawing::Size(303, 35);
			this->Login_User->TabIndex = 0;
			this->Login_User->Text = L"Войти";
			this->Login_User->UseVisualStyleBackColor = true;
			this->Login_User->Click += gcnew System::EventHandler(this, &UserForm::Login_User_Click);
			// 
			// Register_User
			// 
			this->Register_User->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Register_User->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Register_User->Location = System::Drawing::Point(72, 220);
			this->Register_User->Name = L"Register_User";
			this->Register_User->Size = System::Drawing::Size(303, 37);
			this->Register_User->TabIndex = 1;
			this->Register_User->Text = L"Зарегистрироваться";
			this->Register_User->UseVisualStyleBackColor = true;
			this->Register_User->Click += gcnew System::EventHandler(this, &UserForm::Register_User_Click);
			// 
			// Label_Login
			// 
			this->Label_Login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Label_Login->AutoSize = true;
			this->Label_Login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->Label_Login->Location = System::Drawing::Point(-1, 40);
			this->Label_Login->Name = L"Label_Login";
			this->Label_Login->Size = System::Drawing::Size(111, 39);
			this->Label_Login->TabIndex = 2;
			this->Label_Login->Text = L"Логин";
			// 
			// Label_Password
			// 
			this->Label_Password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Label_Password->AutoSize = true;
			this->Label_Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->Label_Password->Location = System::Drawing::Point(-1, 101);
			this->Label_Password->Name = L"Label_Password";
			this->Label_Password->Size = System::Drawing::Size(136, 39);
			this->Label_Password->TabIndex = 3;
			this->Label_Password->Text = L"Пароль";
			// 
			// textBox_Log
			// 
			this->textBox_Log->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_Log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox_Log->Location = System::Drawing::Point(157, 30);
			this->textBox_Log->Name = L"textBox_Log";
			this->textBox_Log->Size = System::Drawing::Size(271, 38);
			this->textBox_Log->TabIndex = 4;
			// 
			// textBox_Pass
			// 
			this->textBox_Pass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_Pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox_Pass->Location = System::Drawing::Point(157, 92);
			this->textBox_Pass->Name = L"textBox_Pass";
			this->textBox_Pass->Size = System::Drawing::Size(271, 38);
			this->textBox_Pass->TabIndex = 5;
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 277);
			this->Controls->Add(this->textBox_Pass);
			this->Controls->Add(this->textBox_Log);
			this->Controls->Add(this->Label_Password);
			this->Controls->Add(this->Label_Login);
			this->Controls->Add(this->Register_User);
			this->Controls->Add(this->Login_User);
			this->Name = L"UserForm";
			this->Text = L"UserForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &UserForm::UserForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void Register_User_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Login_User_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void UserForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
