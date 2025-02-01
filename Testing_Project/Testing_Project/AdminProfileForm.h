#pragma once
#include "FormManager.h"
namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class AdminProfileForm : public System::Windows::Forms::Form
	{
	public:
		AdminProfileForm(String^ log, String^ pass)
		{
			InitializeComponent();
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			FormManager::ActiveForms->Add(this);
		}
	public:










	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button_EditTest;
	private: System::Windows::Forms::Button^ button_DeleteTest;
	private: System::Windows::Forms::Button^ button_AddTest;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button_EditUser;

	private: System::Windows::Forms::Button^ buttonDeleteUser;

	private: System::Windows::Forms::Button^ button_AddUser;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button_TestResult;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_NewPassword;
	private: System::Windows::Forms::Button^ button_EditPassword;
	public:
		   String^ fileLoginAdmin;
	protected:
		~AdminProfileForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_EditTest = (gcnew System::Windows::Forms::Button());
			this->button_DeleteTest = (gcnew System::Windows::Forms::Button());
			this->button_AddTest = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button_EditUser = (gcnew System::Windows::Forms::Button());
			this->buttonDeleteUser = (gcnew System::Windows::Forms::Button());
			this->button_AddUser = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button_TestResult = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_NewPassword = (gcnew System::Windows::Forms::TextBox());
			this->button_EditPassword = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button_EditTest);
			this->groupBox1->Controls->Add(this->button_DeleteTest);
			this->groupBox1->Controls->Add(this->button_AddTest);
			this->groupBox1->Location = System::Drawing::Point(12, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(218, 480);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Управление тестами";
			// 
			// button_EditTest
			// 
			this->button_EditTest->Location = System::Drawing::Point(37, 303);
			this->button_EditTest->Name = L"button_EditTest";
			this->button_EditTest->Size = System::Drawing::Size(131, 61);
			this->button_EditTest->TabIndex = 2;
			this->button_EditTest->Text = L"Редактировать тест";
			this->button_EditTest->UseVisualStyleBackColor = true;
			this->button_EditTest->Click += gcnew System::EventHandler(this, &AdminProfileForm::button_EditTest_Click);
			// 
			// button_DeleteTest
			// 
			this->button_DeleteTest->Location = System::Drawing::Point(37, 177);
			this->button_DeleteTest->Name = L"button_DeleteTest";
			this->button_DeleteTest->Size = System::Drawing::Size(131, 50);
			this->button_DeleteTest->TabIndex = 1;
			this->button_DeleteTest->Text = L"Удалить тест";
			this->button_DeleteTest->UseVisualStyleBackColor = true;
			this->button_DeleteTest->Click += gcnew System::EventHandler(this, &AdminProfileForm::button_DeleteTest_Click);
			// 
			// button_AddTest
			// 
			this->button_AddTest->Location = System::Drawing::Point(44, 69);
			this->button_AddTest->Name = L"button_AddTest";
			this->button_AddTest->Size = System::Drawing::Size(125, 46);
			this->button_AddTest->TabIndex = 0;
			this->button_AddTest->Text = L"Добавить тест";
			this->button_AddTest->UseVisualStyleBackColor = true;
			this->button_AddTest->Click += gcnew System::EventHandler(this, &AdminProfileForm::button_AddTest_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button_EditUser);
			this->groupBox2->Controls->Add(this->buttonDeleteUser);
			this->groupBox2->Controls->Add(this->button_AddUser);
			this->groupBox2->Location = System::Drawing::Point(270, 40);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(247, 480);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// button_EditUser
			// 
			this->button_EditUser->Location = System::Drawing::Point(85, 340);
			this->button_EditUser->Name = L"button_EditUser";
			this->button_EditUser->Size = System::Drawing::Size(94, 24);
			this->button_EditUser->TabIndex = 2;
			this->button_EditUser->Text = L"Редактировать пользователя";
			this->button_EditUser->UseVisualStyleBackColor = true;
			this->button_EditUser->Click += gcnew System::EventHandler(this, &AdminProfileForm::button_EditUser_Click);
			// 
			// buttonDeleteUser
			// 
			this->buttonDeleteUser->Location = System::Drawing::Point(66, 150);
			this->buttonDeleteUser->Name = L"buttonDeleteUser";
			this->buttonDeleteUser->Size = System::Drawing::Size(113, 63);
			this->buttonDeleteUser->TabIndex = 1;
			this->buttonDeleteUser->Text = L"Удалить пользователя";
			this->buttonDeleteUser->UseVisualStyleBackColor = true;
			this->buttonDeleteUser->Click += gcnew System::EventHandler(this, &AdminProfileForm::buttonDeleteUser_Click);
			// 
			// button_AddUser
			// 
			this->button_AddUser->Location = System::Drawing::Point(48, 54);
			this->button_AddUser->Name = L"button_AddUser";
			this->button_AddUser->Size = System::Drawing::Size(155, 31);
			this->button_AddUser->TabIndex = 0;
			this->button_AddUser->Text = L"Добавить пользователя";
			this->button_AddUser->UseVisualStyleBackColor = true;
			this->button_AddUser->Click += gcnew System::EventHandler(this, &AdminProfileForm::button_AddUser_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button_TestResult);
			this->groupBox3->Location = System::Drawing::Point(542, 40);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(259, 109);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"groupBox3";
			// 
			// button_TestResult
			// 
			this->button_TestResult->Location = System::Drawing::Point(70, 54);
			this->button_TestResult->Name = L"button_TestResult";
			this->button_TestResult->Size = System::Drawing::Size(120, 27);
			this->button_TestResult->TabIndex = 0;
			this->button_TestResult->Text = L"Результаты тестов";
			this->button_TestResult->UseVisualStyleBackColor = true;
			this->button_TestResult->Click += gcnew System::EventHandler(this, &AdminProfileForm::button_TestResult_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->textBox_NewPassword);
			this->groupBox4->Controls->Add(this->button_EditPassword);
			this->groupBox4->Location = System::Drawing::Point(566, 285);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(259, 206);
			this->groupBox4->TabIndex = 11;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"groupBox4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(77, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите новый пароль";
			// 
			// textBox_NewPassword
			// 
			this->textBox_NewPassword->Location = System::Drawing::Point(81, 95);
			this->textBox_NewPassword->Name = L"textBox_NewPassword";
			this->textBox_NewPassword->Size = System::Drawing::Size(100, 20);
			this->textBox_NewPassword->TabIndex = 1;
			// 
			// button_EditPassword
			// 
			this->button_EditPassword->Location = System::Drawing::Point(81, 152);
			this->button_EditPassword->Name = L"button_EditPassword";
			this->button_EditPassword->Size = System::Drawing::Size(100, 30);
			this->button_EditPassword->TabIndex = 0;
			this->button_EditPassword->Text = L"Изменить";
			this->button_EditPassword->UseVisualStyleBackColor = true;
			this->button_EditPassword->Click += gcnew System::EventHandler(this, &AdminProfileForm::button_EditPassword_Click);
			// 
			// AdminProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(870, 532);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"AdminProfileForm";
			this->Text = L"AdminProfileForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AdminProfileForm::AdminProfileForm_FormClosing);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:

		System::Void button_AddTest_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button_DeleteTest_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button_EditTest_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button_AddUser_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonDeleteUser_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button_EditUser_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button_TestResult_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button_EditPassword_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void AdminProfileForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
