#pragma once

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyUserProfileForm
	/// </summary>
	public ref class MyUserProfileForm : public System::Windows::Forms::Form
	{
	private:
		String^ Login;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;






		   String^ Password;
	public:
		MyUserProfileForm(String^ login, String^ password)
		{
			InitializeComponent();
			Login = login;
			Password = password;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyUserProfileForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelAddres;
	protected:
	private: System::Windows::Forms::Label^ labelPhone;
	private: System::Windows::Forms::Label^ labelEmail;
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::Label^ labelLogin;
	private: System::Windows::Forms::Label^ labelResultTests;
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
			this->labelAddres = (gcnew System::Windows::Forms::Label());
			this->labelPhone = (gcnew System::Windows::Forms::Label());
			this->labelEmail = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->labelResultTests = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelAddres
			// 
			this->labelAddres->AutoSize = true;
			this->labelAddres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelAddres->Location = System::Drawing::Point(6, 345);
			this->labelAddres->Name = L"labelAddres";
			this->labelAddres->Size = System::Drawing::Size(64, 25);
			this->labelAddres->TabIndex = 9;
			this->labelAddres->Text = L"label5";
			// 
			// labelPhone
			// 
			this->labelPhone->AutoSize = true;
			this->labelPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelPhone->Location = System::Drawing::Point(6, 264);
			this->labelPhone->Name = L"labelPhone";
			this->labelPhone->Size = System::Drawing::Size(64, 25);
			this->labelPhone->TabIndex = 8;
			this->labelPhone->Text = L"label4";
			// 
			// labelEmail
			// 
			this->labelEmail->AutoSize = true;
			this->labelEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelEmail->Location = System::Drawing::Point(6, 191);
			this->labelEmail->Name = L"labelEmail";
			this->labelEmail->Size = System::Drawing::Size(64, 25);
			this->labelEmail->TabIndex = 7;
			this->labelEmail->Text = L"label3";
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelName->Location = System::Drawing::Point(6, 116);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(64, 25);
			this->labelName->TabIndex = 6;
			this->labelName->Text = L"label2";
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelLogin->Location = System::Drawing::Point(6, 45);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(64, 25);
			this->labelLogin->TabIndex = 5;
			this->labelLogin->Text = L"label1";
			// 
			// labelResultTests
			// 
			this->labelResultTests->AutoSize = true;
			this->labelResultTests->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelResultTests->Location = System::Drawing::Point(16, 37);
			this->labelResultTests->Name = L"labelResultTests";
			this->labelResultTests->Size = System::Drawing::Size(64, 25);
			this->labelResultTests->TabIndex = 10;
			this->labelResultTests->Text = L"label1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labelAddres);
			this->groupBox1->Controls->Add(this->labelPhone);
			this->groupBox1->Controls->Add(this->labelEmail);
			this->groupBox1->Controls->Add(this->labelName);
			this->groupBox1->Controls->Add(this->labelLogin);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->groupBox1->Location = System::Drawing::Point(17, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(572, 436);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Данные пользователя";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labelResultTests);
			this->groupBox2->Location = System::Drawing::Point(7, 459);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(581, 292);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Результаты";
			// 
			// MyUserProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 767);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyUserProfileForm";
			this->Text = L"MyUserProfileForm";
			this->Load += gcnew System::EventHandler(this, &MyUserProfileForm::MyUserProfileForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 
		System::Void MyUserProfileForm_Load(System::Object^ sender, System::EventArgs^ e);
		void LoadTestResults(String^ userLogin);
};
}
