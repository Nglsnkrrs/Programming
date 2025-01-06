#pragma once

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^ LoginINPUT;
		String^ PasswordINPUT;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
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
			this->Login_User->Location = System::Drawing::Point(72, 168);
			this->Login_User->Name = L"Login_User";
			this->Login_User->Size = System::Drawing::Size(132, 30);
			this->Login_User->TabIndex = 0;
			this->Login_User->Text = L"�����";
			this->Login_User->UseVisualStyleBackColor = true;
			this->Login_User->Click += gcnew System::EventHandler(this, &UserForm::Login_User_Click);
			// 
			// Register_User
			// 
			this->Register_User->Location = System::Drawing::Point(72, 220);
			this->Register_User->Name = L"Register_User";
			this->Register_User->Size = System::Drawing::Size(132, 29);
			this->Register_User->TabIndex = 1;
			this->Register_User->Text = L"������������������";
			this->Register_User->UseVisualStyleBackColor = true;
			this->Register_User->Click += gcnew System::EventHandler(this, &UserForm::Register_User_Click);
			// 
			// Label_Login
			// 
			this->Label_Login->AutoSize = true;
			this->Label_Login->Location = System::Drawing::Point(12, 41);
			this->Label_Login->Name = L"Label_Login";
			this->Label_Login->Size = System::Drawing::Size(38, 13);
			this->Label_Login->TabIndex = 2;
			this->Label_Login->Text = L"�����";
			// 
			// Label_Password
			// 
			this->Label_Password->AutoSize = true;
			this->Label_Password->Location = System::Drawing::Point(12, 80);
			this->Label_Password->Name = L"Label_Password";
			this->Label_Password->Size = System::Drawing::Size(45, 13);
			this->Label_Password->TabIndex = 3;
			this->Label_Password->Text = L"������";
			// 
			// textBox_Log
			// 
			this->textBox_Log->Location = System::Drawing::Point(104, 34);
			this->textBox_Log->Name = L"textBox_Log";
			this->textBox_Log->Size = System::Drawing::Size(100, 20);
			this->textBox_Log->TabIndex = 4;
			// 
			// textBox_Pass
			// 
			this->textBox_Pass->Location = System::Drawing::Point(104, 73);
			this->textBox_Pass->Name = L"textBox_Pass";
			this->textBox_Pass->Size = System::Drawing::Size(100, 20);
			this->textBox_Pass->TabIndex = 5;
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->textBox_Pass);
			this->Controls->Add(this->textBox_Log);
			this->Controls->Add(this->Label_Password);
			this->Controls->Add(this->Label_Login);
			this->Controls->Add(this->Register_User);
			this->Controls->Add(this->Login_User);
			this->Name = L"UserForm";
			this->Text = L"UserForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: 
		System::Void Register_User_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Login_User_Click(System::Object^ sender, System::EventArgs^ e);
};
}
