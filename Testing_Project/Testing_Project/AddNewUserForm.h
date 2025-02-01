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
	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox_NewLogin
			// 
			this->textBox_NewLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_NewLogin->Location = System::Drawing::Point(24, 71);
			this->textBox_NewLogin->Name = L"textBox_NewLogin";
			this->textBox_NewLogin->Size = System::Drawing::Size(230, 30);
			this->textBox_NewLogin->TabIndex = 7;
			// 
			// AddNewUser
			// 
			this->AddNewUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->AddNewUser->Location = System::Drawing::Point(130, 392);
			this->AddNewUser->Name = L"AddNewUser";
			this->AddNewUser->Size = System::Drawing::Size(278, 44);
			this->AddNewUser->TabIndex = 13;
			this->AddNewUser->Text = L"Добавить пользователя";
			this->AddNewUser->UseVisualStyleBackColor = true;
			this->AddNewUser->Click += gcnew System::EventHandler(this, &AddNewUserForm::AddNewUser_Click);
			// 
			// textBox_NewPassword
			// 
			this->textBox_NewPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_NewPassword->Location = System::Drawing::Point(295, 71);
			this->textBox_NewPassword->Name = L"textBox_NewPassword";
			this->textBox_NewPassword->Size = System::Drawing::Size(223, 30);
			this->textBox_NewPassword->TabIndex = 8;
			// 
			// textBox_NewPhone
			// 
			this->textBox_NewPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_NewPhone->Location = System::Drawing::Point(295, 195);
			this->textBox_NewPhone->Name = L"textBox_NewPhone";
			this->textBox_NewPhone->Size = System::Drawing::Size(223, 30);
			this->textBox_NewPhone->TabIndex = 12;
			// 
			// textBox_NewEmail
			// 
			this->textBox_NewEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_NewEmail->Location = System::Drawing::Point(24, 195);
			this->textBox_NewEmail->Name = L"textBox_NewEmail";
			this->textBox_NewEmail->Size = System::Drawing::Size(230, 30);
			this->textBox_NewEmail->TabIndex = 9;
			// 
			// textBox_NewAddres
			// 
			this->textBox_NewAddres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_NewAddres->Location = System::Drawing::Point(295, 322);
			this->textBox_NewAddres->Name = L"textBox_NewAddres";
			this->textBox_NewAddres->Size = System::Drawing::Size(223, 30);
			this->textBox_NewAddres->TabIndex = 11;
			// 
			// textBox_NewName
			// 
			this->textBox_NewName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_NewName->Location = System::Drawing::Point(24, 322);
			this->textBox_NewName->Name = L"textBox_NewName";
			this->textBox_NewName->Size = System::Drawing::Size(230, 30);
			this->textBox_NewName->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(19, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 25);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Логин пользователя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(363, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 25);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Пароль";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(19, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 25);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Электронная почта";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(19, 269);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(197, 25);
			this->label4->TabIndex = 17;
			this->label4->Text = L"ФИО пользователя";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label5->Location = System::Drawing::Point(312, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(177, 25);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Номер телефона";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->Location = System::Drawing::Point(363, 269);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 25);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Адрес";
			// 
			// AddNewUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 486);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
