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
			this->SuspendLayout();
			// 
			// button_EditUser
			// 
			this->button_EditUser->Location = System::Drawing::Point(360, 270);
			this->button_EditUser->Name = L"button_EditUser";
			this->button_EditUser->Size = System::Drawing::Size(160, 35);
			this->button_EditUser->TabIndex = 13;
			this->button_EditUser->Text = L"button1";
			this->button_EditUser->UseVisualStyleBackColor = true;
			this->button_EditUser->Click += gcnew System::EventHandler(this, &EditUserForm::button_EditUser_Click);
			// 
			// textBox_EditAddress
			// 
			this->textBox_EditAddress->Location = System::Drawing::Point(25, 407);
			this->textBox_EditAddress->Name = L"textBox_EditAddress";
			this->textBox_EditAddress->Size = System::Drawing::Size(108, 20);
			this->textBox_EditAddress->TabIndex = 12;
			// 
			// textBox_EditPhone
			// 
			this->textBox_EditPhone->Location = System::Drawing::Point(21, 346);
			this->textBox_EditPhone->Name = L"textBox_EditPhone";
			this->textBox_EditPhone->Size = System::Drawing::Size(104, 20);
			this->textBox_EditPhone->TabIndex = 11;
			// 
			// textBox_EditName
			// 
			this->textBox_EditName->Location = System::Drawing::Point(25, 247);
			this->textBox_EditName->Name = L"textBox_EditName";
			this->textBox_EditName->Size = System::Drawing::Size(100, 20);
			this->textBox_EditName->TabIndex = 10;
			// 
			// textBox_EditEmail
			// 
			this->textBox_EditEmail->Location = System::Drawing::Point(17, 172);
			this->textBox_EditEmail->Name = L"textBox_EditEmail";
			this->textBox_EditEmail->Size = System::Drawing::Size(117, 20);
			this->textBox_EditEmail->TabIndex = 9;
			// 
			// textBox_EditPassword
			// 
			this->textBox_EditPassword->Location = System::Drawing::Point(20, 104);
			this->textBox_EditPassword->Name = L"textBox_EditPassword";
			this->textBox_EditPassword->Size = System::Drawing::Size(105, 20);
			this->textBox_EditPassword->TabIndex = 8;
			// 
			// textBox_EditLogin
			// 
			this->textBox_EditLogin->Location = System::Drawing::Point(18, 54);
			this->textBox_EditLogin->Name = L"textBox_EditLogin";
			this->textBox_EditLogin->Size = System::Drawing::Size(107, 20);
			this->textBox_EditLogin->TabIndex = 7;
			// 
			// EditUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(536, 481);
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
