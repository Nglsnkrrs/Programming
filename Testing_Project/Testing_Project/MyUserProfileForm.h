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
			this->SuspendLayout();
			// 
			// labelAddres
			// 
			this->labelAddres->AutoSize = true;
			this->labelAddres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelAddres->Location = System::Drawing::Point(52, 354);
			this->labelAddres->Name = L"labelAddres";
			this->labelAddres->Size = System::Drawing::Size(64, 25);
			this->labelAddres->TabIndex = 9;
			this->labelAddres->Text = L"label5";
			// 
			// labelPhone
			// 
			this->labelPhone->AutoSize = true;
			this->labelPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelPhone->Location = System::Drawing::Point(52, 273);
			this->labelPhone->Name = L"labelPhone";
			this->labelPhone->Size = System::Drawing::Size(64, 25);
			this->labelPhone->TabIndex = 8;
			this->labelPhone->Text = L"label4";
			// 
			// labelEmail
			// 
			this->labelEmail->AutoSize = true;
			this->labelEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelEmail->Location = System::Drawing::Point(52, 189);
			this->labelEmail->Name = L"labelEmail";
			this->labelEmail->Size = System::Drawing::Size(64, 25);
			this->labelEmail->TabIndex = 7;
			this->labelEmail->Text = L"label3";
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelName->Location = System::Drawing::Point(52, 116);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(64, 25);
			this->labelName->TabIndex = 6;
			this->labelName->Text = L"label2";
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelLogin->Location = System::Drawing::Point(52, 36);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(64, 25);
			this->labelLogin->TabIndex = 5;
			this->labelLogin->Text = L"label1";
			// 
			// labelResultTests
			// 
			this->labelResultTests->AutoSize = true;
			this->labelResultTests->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->labelResultTests->Location = System::Drawing::Point(50, 434);
			this->labelResultTests->Name = L"labelResultTests";
			this->labelResultTests->Size = System::Drawing::Size(109, 39);
			this->labelResultTests->TabIndex = 10;
			this->labelResultTests->Text = L"label1";
			// 
			// MyUserProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 831);
			this->Controls->Add(this->labelResultTests);
			this->Controls->Add(this->labelAddres);
			this->Controls->Add(this->labelPhone);
			this->Controls->Add(this->labelEmail);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->labelLogin);
			this->Name = L"MyUserProfileForm";
			this->Text = L"MyUserProfileForm";
			this->Load += gcnew System::EventHandler(this, &MyUserProfileForm::MyUserProfileForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void MyUserProfileForm_Load(System::Object^ sender, System::EventArgs^ e);
		void LoadTestResults(String^ userLogin);
};
}
