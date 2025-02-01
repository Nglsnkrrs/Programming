#pragma once
#include "FormManager.h"
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
			FormManager::ActiveForms->Add(this);
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
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
			this->Admin_Login->BackColor = System::Drawing::Color::White;
			this->Admin_Login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Admin_Login->Location = System::Drawing::Point(165, 222);
			this->Admin_Login->Name = L"Admin_Login";
			this->Admin_Login->Size = System::Drawing::Size(240, 38);
			this->Admin_Login->TabIndex = 0;
			this->Admin_Login->Text = L"Войти";
			this->Admin_Login->UseVisualStyleBackColor = false;
			this->Admin_Login->Click += gcnew System::EventHandler(this, &AdminForm::Admin_Login_Click);
			// 
			// Admin_Register
			// 
			this->Admin_Register->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Admin_Register->Location = System::Drawing::Point(163, 288);
			this->Admin_Register->Name = L"Admin_Register";
			this->Admin_Register->Size = System::Drawing::Size(241, 40);
			this->Admin_Register->TabIndex = 1;
			this->Admin_Register->Text = L"Зарегистрироваться";
			this->Admin_Register->UseVisualStyleBackColor = true;
			this->Admin_Register->Click += gcnew System::EventHandler(this, &AdminForm::Admin_Register_Click);
			// 
			// textBox_LoginAdm
			// 
			this->textBox_LoginAdm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_LoginAdm->Location = System::Drawing::Point(285, 66);
			this->textBox_LoginAdm->Name = L"textBox_LoginAdm";
			this->textBox_LoginAdm->Size = System::Drawing::Size(234, 30);
			this->textBox_LoginAdm->TabIndex = 2;
			// 
			// label_LoginAdm
			// 
			this->label_LoginAdm->AutoSize = true;
			this->label_LoginAdm->BackColor = System::Drawing::Color::Transparent;
			this->label_LoginAdm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label_LoginAdm->Location = System::Drawing::Point(78, 71);
			this->label_LoginAdm->Name = L"label_LoginAdm";
			this->label_LoginAdm->Size = System::Drawing::Size(68, 25);
			this->label_LoginAdm->TabIndex = 3;
			this->label_LoginAdm->Text = L"Логин";
			// 
			// label_PasswordAdm
			// 
			this->label_PasswordAdm->AutoSize = true;
			this->label_PasswordAdm->BackColor = System::Drawing::Color::Transparent;
			this->label_PasswordAdm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label_PasswordAdm->Location = System::Drawing::Point(78, 141);
			this->label_PasswordAdm->Name = L"label_PasswordAdm";
			this->label_PasswordAdm->Size = System::Drawing::Size(80, 25);
			this->label_PasswordAdm->TabIndex = 4;
			this->label_PasswordAdm->Text = L"Пароль";
			// 
			// textBox_PasswordAdm
			// 
			this->textBox_PasswordAdm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_PasswordAdm->Location = System::Drawing::Point(285, 136);
			this->textBox_PasswordAdm->Name = L"textBox_PasswordAdm";
			this->textBox_PasswordAdm->Size = System::Drawing::Size(234, 30);
			this->textBox_PasswordAdm->TabIndex = 5;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(592, 369);
			this->Controls->Add(this->textBox_PasswordAdm);
			this->Controls->Add(this->label_PasswordAdm);
			this->Controls->Add(this->label_LoginAdm);
			this->Controls->Add(this->textBox_LoginAdm);
			this->Controls->Add(this->Admin_Register);
			this->Controls->Add(this->Admin_Login);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AdminForm::AdminForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void Admin_Register_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Admin_Login_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void AdminForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
