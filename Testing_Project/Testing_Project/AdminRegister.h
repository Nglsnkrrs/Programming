#pragma once

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminRegister
	/// </summary>
	public ref class AdminRegister : public System::Windows::Forms::Form
	{
	public:
		AdminRegister(void)
		{
			InitializeComponent();
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		}
		String^ LoginAdmin;
		String^ PasswordAdmin;
		String^ encryptedLoginAdmin;
		String^ encryptedPasswordAdmin;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminRegister()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_login;
	private: System::Windows::Forms::TextBox^ textBox_password;


	private: System::Windows::Forms::Button^ Regiter;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_login = (gcnew System::Windows::Forms::TextBox());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->Regiter = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 146);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(84, 219);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// textBox_login
			// 
			this->textBox_login->Location = System::Drawing::Point(201, 139);
			this->textBox_login->Name = L"textBox_login";
			this->textBox_login->Size = System::Drawing::Size(100, 20);
			this->textBox_login->TabIndex = 2;
			// 
			// textBox_password
			// 
			this->textBox_password->Location = System::Drawing::Point(201, 212);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(100, 20);
			this->textBox_password->TabIndex = 3;
			// 
			// Regiter
			// 
			this->Regiter->Location = System::Drawing::Point(87, 320);
			this->Regiter->Name = L"Regiter";
			this->Regiter->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Regiter->Size = System::Drawing::Size(188, 38);
			this->Regiter->TabIndex = 4;
			this->Regiter->Text = L"Зарегистрироваться ";
			this->Regiter->UseVisualStyleBackColor = true;
			this->Regiter->Click += gcnew System::EventHandler(this, &AdminRegister::Regiter_Click);
			// 
			// AdminRegister
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 460);
			this->Controls->Add(this->Regiter);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_login);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AdminRegister";
			this->Text = L"AdminRegister";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Regiter_Click(System::Object^ sender, System::EventArgs^ e);
};
}
