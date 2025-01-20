#pragma once

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeleteUser
	/// </summary>
	public ref class DeleteUser : public System::Windows::Forms::Form
	{
	public:
		DeleteUser(void)
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
		~DeleteUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_DelLogin;
	protected:
	private: System::Windows::Forms::TextBox^ textBox_DeleteLogin;

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
			this->button_DelLogin = (gcnew System::Windows::Forms::Button());
			this->textBox_DeleteLogin = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button_DelLogin
			// 
			this->button_DelLogin->Location = System::Drawing::Point(57, 158);
			this->button_DelLogin->Name = L"button_DelLogin";
			this->button_DelLogin->Size = System::Drawing::Size(170, 48);
			this->button_DelLogin->TabIndex = 3;
			this->button_DelLogin->Text = L"button1";
			this->button_DelLogin->UseVisualStyleBackColor = true;
			this->button_DelLogin->Click += gcnew System::EventHandler(this, &DeleteUser::button_DelLogin_Click);
			// 
			// textBox_DeleteLogin
			// 
			this->textBox_DeleteLogin->Location = System::Drawing::Point(71, 55);
			this->textBox_DeleteLogin->Name = L"textBox_DeleteLogin";
			this->textBox_DeleteLogin->Size = System::Drawing::Size(136, 20);
			this->textBox_DeleteLogin->TabIndex = 2;
			// 
			// DeleteUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button_DelLogin);
			this->Controls->Add(this->textBox_DeleteLogin);
			this->Name = L"DeleteUser";
			this->Text = L"DeleteUser";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_DelLogin_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
