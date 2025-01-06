#pragma once
#include "UserForm.h"

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();

		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Main_User;
	private: System::Windows::Forms::Button^ Main_Admin;
	protected:


	protected:

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
			this->Main_User = (gcnew System::Windows::Forms::Button());
			this->Main_Admin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Main_User
			// 
			this->Main_User->Location = System::Drawing::Point(77, 54);
			this->Main_User->Name = L"Main_User";
			this->Main_User->Size = System::Drawing::Size(111, 45);
			this->Main_User->TabIndex = 0;
			this->Main_User->Text = L"Пользователь";
			this->Main_User->UseVisualStyleBackColor = true;
			this->Main_User->Click += gcnew System::EventHandler(this, &MainForm::Main_User_Click);
			// 
			// Main_Admin
			// 
			this->Main_Admin->Location = System::Drawing::Point(79, 141);
			this->Main_Admin->Name = L"Main_Admin";
			this->Main_Admin->Size = System::Drawing::Size(108, 39);
			this->Main_Admin->TabIndex = 1;
			this->Main_Admin->Text = L"Администратор";
			this->Main_Admin->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->Main_Admin);
			this->Controls->Add(this->Main_User);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: 
		System::Void Main_User_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
		

	};
}