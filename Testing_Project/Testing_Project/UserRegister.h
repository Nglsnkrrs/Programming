#pragma once

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserRegister
	/// </summary>
	public ref class UserRegister : public System::Windows::Forms::Form
	{
	public:
		UserRegister(void)
		{
			InitializeComponent();

		}
		String^ Login;
		String^ encryptedLogin;
		String^ Password;
		String^ encryptedPassword;
		String^ Email;
		String^ encryptedEmail;
		String^ Name;
		String^ encryptedName;
		String^ Phone;
		String^ encryptedPhone;
		String^ Addres;
		String^ encryptedAddres;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserRegister()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ Reg;
	private: System::Windows::Forms::Button^ Back;
	private: System::Windows::Forms::TextBox^ textBox_Login;
	private: System::Windows::Forms::TextBox^ textBox_Password;
	private: System::Windows::Forms::TextBox^ textBox_Email;
	private: System::Windows::Forms::TextBox^ textBox_Name;
	private: System::Windows::Forms::TextBox^ textBox_Phone;
	private: System::Windows::Forms::TextBox^ textBox_Addres;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserRegister::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Reg = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->textBox_Login = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Email = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Phone = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Addres = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(179, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(165, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пароль";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(179, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ФИО";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(110, 372);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(229, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Номер телефона";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(165, 468);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 31);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Адрес";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(156, 187);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 31);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Эл.почта";
			// 
			// Reg
			// 
			this->Reg->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Reg->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Reg->Location = System::Drawing::Point(336, 575);
			this->Reg->Name = L"Reg";
			this->Reg->Size = System::Drawing::Size(136, 38);
			this->Reg->TabIndex = 6;
			this->Reg->Text = L"Зарегистрироваться";
			this->Reg->UseVisualStyleBackColor = false;
			this->Reg->Click += gcnew System::EventHandler(this, &UserRegister::Reg_Click);
			// 
			// Back
			// 
			this->Back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Back->Location = System::Drawing::Point(12, 575);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(120, 38);
			this->Back->TabIndex = 7;
			this->Back->Text = L"Назад";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &UserRegister::Back_Click);
			// 
			// textBox_Login
			// 
			this->textBox_Login->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox_Login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_Login->Location = System::Drawing::Point(116, 63);
			this->textBox_Login->Name = L"textBox_Login";
			this->textBox_Login->Size = System::Drawing::Size(210, 30);
			this->textBox_Login->TabIndex = 8;
			// 
			// textBox_Password
			// 
			this->textBox_Password->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox_Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_Password->Location = System::Drawing::Point(116, 140);
			this->textBox_Password->Name = L"textBox_Password";
			this->textBox_Password->Size = System::Drawing::Size(210, 30);
			this->textBox_Password->TabIndex = 9;
			// 
			// textBox_Email
			// 
			this->textBox_Email->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox_Email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_Email->Location = System::Drawing::Point(116, 232);
			this->textBox_Email->Name = L"textBox_Email";
			this->textBox_Email->Size = System::Drawing::Size(210, 30);
			this->textBox_Email->TabIndex = 10;
			// 
			// textBox_Name
			// 
			this->textBox_Name->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_Name->Location = System::Drawing::Point(116, 315);
			this->textBox_Name->Name = L"textBox_Name";
			this->textBox_Name->Size = System::Drawing::Size(210, 30);
			this->textBox_Name->TabIndex = 11;
			// 
			// textBox_Phone
			// 
			this->textBox_Phone->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox_Phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_Phone->Location = System::Drawing::Point(116, 423);
			this->textBox_Phone->Name = L"textBox_Phone";
			this->textBox_Phone->Size = System::Drawing::Size(210, 30);
			this->textBox_Phone->TabIndex = 12;
			// 
			// textBox_Addres
			// 
			this->textBox_Addres->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox_Addres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_Addres->Location = System::Drawing::Point(116, 516);
			this->textBox_Addres->Name = L"textBox_Addres";
			this->textBox_Addres->Size = System::Drawing::Size(210, 30);
			this->textBox_Addres->TabIndex = 13;
			// 
			// UserRegister
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(484, 625);
			this->Controls->Add(this->textBox_Addres);
			this->Controls->Add(this->textBox_Phone);
			this->Controls->Add(this->textBox_Name);
			this->Controls->Add(this->textBox_Email);
			this->Controls->Add(this->textBox_Password);
			this->Controls->Add(this->textBox_Login);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Reg);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UserRegister";
			this->Text = L"UserRegister";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void Reg_Click(System::Object^ sender, System::EventArgs^ e);
		bool IsValidEmail(String^ email);
		System::Void Back_Click(System::Object^ sender, System::EventArgs^ e);
};
}
