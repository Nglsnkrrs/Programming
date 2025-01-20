#pragma once

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
		{
			InitializeComponent();
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		}
		String^ LoginAdminInput;
		String^ PasswordAdminInput;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Admin_Login;
	private: System::Windows::Forms::Button^ Admin_Register;
	private: System::Windows::Forms::TextBox^ textBox_LoginAdm;
	private: System::Windows::Forms::Label^ label_LoginAdm;
	private: System::Windows::Forms::Label^ label_PasswordAdm;
	private: System::Windows::Forms::TextBox^ textBox_PasswordAdm;

	protected:

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
			this->Admin_Login = (gcnew System::Windows::Forms::Button());
			this->Admin_Register = (gcnew System::Windows::Forms::Button());
			this->textBox_LoginAdm = (gcnew System::Windows::Forms::TextBox());
			this->label_LoginAdm = (gcnew System::Windows::Forms::Label());
			this->label_PasswordAdm = (gcnew System::Windows::Forms::Label());
			this->textBox_PasswordAdm = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Admin_Login
			// 
			this->Admin_Login->Location = System::Drawing::Point(203, 254);
			this->Admin_Login->Name = L"Admin_Login";
			this->Admin_Login->Size = System::Drawing::Size(191, 38);
			this->Admin_Login->TabIndex = 0;
			this->Admin_Login->Text = L"Войти";
			this->Admin_Login->UseVisualStyleBackColor = true;
			this->Admin_Login->Click += gcnew System::EventHandler(this, &AdminForm::Admin_Login_Click);
			// 
			// Admin_Register
			// 
			this->Admin_Register->Location = System::Drawing::Point(201, 320);
			this->Admin_Register->Name = L"Admin_Register";
			this->Admin_Register->Size = System::Drawing::Size(192, 40);
			this->Admin_Register->TabIndex = 1;
			this->Admin_Register->Text = L"Зарегистрироваться";
			this->Admin_Register->UseVisualStyleBackColor = true;
			this->Admin_Register->Click += gcnew System::EventHandler(this, &AdminForm::Admin_Register_Click);
			// 
			// textBox_LoginAdm
			// 
			this->textBox_LoginAdm->Location = System::Drawing::Point(324, 85);
			this->textBox_LoginAdm->Name = L"textBox_LoginAdm";
			this->textBox_LoginAdm->Size = System::Drawing::Size(100, 20);
			this->textBox_LoginAdm->TabIndex = 2;
			// 
			// label_LoginAdm
			// 
			this->label_LoginAdm->AutoSize = true;
			this->label_LoginAdm->Location = System::Drawing::Point(108, 92);
			this->label_LoginAdm->Name = L"label_LoginAdm";
			this->label_LoginAdm->Size = System::Drawing::Size(38, 13);
			this->label_LoginAdm->TabIndex = 3;
			this->label_LoginAdm->Text = L"Логин";
			// 
			// label_PasswordAdm
			// 
			this->label_PasswordAdm->AutoSize = true;
			this->label_PasswordAdm->Location = System::Drawing::Point(101, 162);
			this->label_PasswordAdm->Name = L"label_PasswordAdm";
			this->label_PasswordAdm->Size = System::Drawing::Size(45, 13);
			this->label_PasswordAdm->TabIndex = 4;
			this->label_PasswordAdm->Text = L"Пароль";
			// 
			// textBox_PasswordAdm
			// 
			this->textBox_PasswordAdm->Location = System::Drawing::Point(324, 155);
			this->textBox_PasswordAdm->Name = L"textBox_PasswordAdm";
			this->textBox_PasswordAdm->Size = System::Drawing::Size(100, 20);
			this->textBox_PasswordAdm->TabIndex = 5;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(666, 369);
			this->Controls->Add(this->textBox_PasswordAdm);
			this->Controls->Add(this->label_PasswordAdm);
			this->Controls->Add(this->label_LoginAdm);
			this->Controls->Add(this->textBox_LoginAdm);
			this->Controls->Add(this->Admin_Register);
			this->Controls->Add(this->Admin_Login);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void Admin_Register_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Admin_Login_Click(System::Object^ sender, System::EventArgs^ e);
};
}
