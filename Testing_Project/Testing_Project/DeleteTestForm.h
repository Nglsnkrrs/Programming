#pragma once

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeleteTestForm
	/// </summary>
	public ref class DeleteTestForm : public System::Windows::Forms::Form
	{
	public:
		DeleteTestForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DeleteTestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_nameFilefromDelete;
	protected:
	private: System::Windows::Forms::Button^ button_DeleteTest;
	private: System::Windows::Forms::Label^ label1;

	protected:

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
			this->textBox_nameFilefromDelete = (gcnew System::Windows::Forms::TextBox());
			this->button_DeleteTest = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox_nameFilefromDelete
			// 
			this->textBox_nameFilefromDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_nameFilefromDelete->Location = System::Drawing::Point(40, 127);
			this->textBox_nameFilefromDelete->Name = L"textBox_nameFilefromDelete";
			this->textBox_nameFilefromDelete->Size = System::Drawing::Size(225, 30);
			this->textBox_nameFilefromDelete->TabIndex = 0;
			// 
			// button_DeleteTest
			// 
			this->button_DeleteTest->Location = System::Drawing::Point(92, 196);
			this->button_DeleteTest->Name = L"button_DeleteTest";
			this->button_DeleteTest->Size = System::Drawing::Size(113, 39);
			this->button_DeleteTest->TabIndex = 1;
			this->button_DeleteTest->Text = L"Удалить тест";
			this->button_DeleteTest->UseVisualStyleBackColor = true;
			this->button_DeleteTest->Click += gcnew System::EventHandler(this, &DeleteTestForm::button_DeleteTest_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(49, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 58);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите название файла для удаления";
			// 
			// DeleteTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 308);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_DeleteTest);
			this->Controls->Add(this->textBox_nameFilefromDelete);
			this->Name = L"DeleteTestForm";
			this->Text = L"DeleteTestForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void button_DeleteTest_Click(System::Object^ sender, System::EventArgs^ e);
		void Delete(String^ fileName);
	};
}
