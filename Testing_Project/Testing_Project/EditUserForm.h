#pragma once

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditUserForm
	/// </summary>
	public ref class EditUserForm : public System::Windows::Forms::Form
	{
	public:
		EditUserForm(void)
		{
			InitializeComponent();
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	public:
	public:
		String^ Key = "MySecretKey12345";
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditUserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_EditUser;
	protected:
	private: System::Windows::Forms::TextBox^ textBox_EditAddress;
	private: System::Windows::Forms::TextBox^ textBox_EditPhone;
	private: System::Windows::Forms::TextBox^ textBox_EditName;
	private: System::Windows::Forms::TextBox^ textBox_EditEmail;
	private: System::Windows::Forms::TextBox^ textBox_EditPassword;
	private: System::Windows::Forms::TextBox^ textBox_EditLogin;

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
			this->button_EditUser = (gcnew System::Windows::Forms::Button());
			this->textBox_EditAddress = (gcnew System::Windows::Forms::TextBox());
			this->textBox_EditPhone = (gcnew System::Windows::Forms::TextBox());
			this->textBox_EditName = (gcnew System::Windows::Forms::TextBox());
			this->textBox_EditEmail = (gcnew System::Windows::Forms::TextBox());
			this->textBox_EditPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBox_EditLogin = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_EditUser
			// 
			this->button_EditUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button_EditUser->Location = System::Drawing::Point(155, 377);
			this->button_EditUser->Name = L"button_EditUser";
			this->button_EditUser->Size = System::Drawing::Size(222, 50);
			this->button_EditUser->TabIndex = 13;
			this->button_EditUser->Text = L"Редактировать";
			this->button_EditUser->UseVisualStyleBackColor = true;
			this->button_EditUser->Click += gcnew System::EventHandler(this, &EditUserForm::button_EditUser_Click);
			// 
			// textBox_EditAddress
			// 
			this->textBox_EditAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_EditAddress->Location = System::Drawing::Point(17, 313);
			this->textBox_EditAddress->Name = L"textBox_EditAddress";
			this->textBox_EditAddress->Size = System::Drawing::Size(486, 30);
			this->textBox_EditAddress->TabIndex = 12;
			// 
			// textBox_EditPhone
			// 
			this->textBox_EditPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_EditPhone->Location = System::Drawing::Point(282, 204);
			this->textBox_EditPhone->Name = L"textBox_EditPhone";
			this->textBox_EditPhone->Size = System::Drawing::Size(221, 30);
			this->textBox_EditPhone->TabIndex = 11;
			// 
			// textBox_EditName
			// 
			this->textBox_EditName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_EditName->Location = System::Drawing::Point(17, 204);
			this->textBox_EditName->Name = L"textBox_EditName";
			this->textBox_EditName->Size = System::Drawing::Size(226, 30);
			this->textBox_EditName->TabIndex = 10;
			// 
			// textBox_EditEmail
			// 
			this->textBox_EditEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_EditEmail->Location = System::Drawing::Point(282, 107);
			this->textBox_EditEmail->Name = L"textBox_EditEmail";
			this->textBox_EditEmail->Size = System::Drawing::Size(221, 30);
			this->textBox_EditEmail->TabIndex = 9;
			// 
			// textBox_EditPassword
			// 
			this->textBox_EditPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_EditPassword->Location = System::Drawing::Point(17, 107);
			this->textBox_EditPassword->Name = L"textBox_EditPassword";
			this->textBox_EditPassword->Size = System::Drawing::Size(226, 30);
			this->textBox_EditPassword->TabIndex = 8;
			// 
			// textBox_EditLogin
			// 
			this->textBox_EditLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_EditLogin->Location = System::Drawing::Point(282, 16);
			this->textBox_EditLogin->Name = L"textBox_EditLogin";
			this->textBox_EditLogin->Size = System::Drawing::Size(221, 30);
			this->textBox_EditLogin->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 25);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Логин пользователя ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(45, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 25);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Пароль";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(333, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 25);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Эл.почта";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(316, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(177, 25);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Номер телефона";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label5->Location = System::Drawing::Point(65, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 25);
			this->label5->TabIndex = 18;
			this->label5->Text = L"ФИО";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->Location = System::Drawing::Point(20, 265);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 25);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Адрес";
			// 
			// EditUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(536, 449);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_EditUser);
			this->Controls->Add(this->textBox_EditAddress);
			this->Controls->Add(this->textBox_EditPhone);
			this->Controls->Add(this->textBox_EditName);
			this->Controls->Add(this->textBox_EditEmail);
			this->Controls->Add(this->textBox_EditPassword);
			this->Controls->Add(this->textBox_EditLogin);
			this->Name = L"EditUserForm";
			this->Text = L"EditUserForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_EditUser_Click(System::Object^ sender, System::EventArgs^ e);
};
}
