#pragma once
#include "UserForm.h"
#include "FormManager.h"

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			FormManager::ActiveForms->Add(this);
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
			this->Main_User->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Main_User->Location = System::Drawing::Point(38, 48);
			this->Main_User->Name = L"Main_User";
			this->Main_User->Size = System::Drawing::Size(205, 49);
			this->Main_User->TabIndex = 0;
			this->Main_User->Text = L"Пользователь";
			this->Main_User->UseVisualStyleBackColor = true;
			this->Main_User->Click += gcnew System::EventHandler(this, &MainForm::Main_User_Click);
			// 
			// Main_Admin
			// 
			this->Main_Admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Main_Admin->Location = System::Drawing::Point(40, 135);
			this->Main_Admin->Name = L"Main_Admin";
			this->Main_Admin->Size = System::Drawing::Size(202, 52);
			this->Main_Admin->TabIndex = 1;
			this->Main_Admin->Text = L"Администратор";
			this->Main_Admin->UseVisualStyleBackColor = true;
			this->Main_Admin->Click += gcnew System::EventHandler(this, &MainForm::Main_Admin_Click);
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
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing_1);
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: 
		System::Void Main_User_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
		System::Void Main_Admin_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void MainForm_FormClosing_1(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	};
}