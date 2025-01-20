#pragma once

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
		}
	public:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ управлениеТестамиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьТестToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьТестToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редактироватьТестToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ управлениеПользователямиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьПользователяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьПользователяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редактироватьПользователяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ результатыТестированияToolStripMenuItem;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->управлениеТестамиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьТестToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьТестToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактироватьТестToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->управлениеПользователямиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьПользователяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьПользователяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактироватьПользователяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->результатыТестированияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->управлениеТестамиToolStripMenuItem,
					this->управлениеПользователямиToolStripMenuItem, this->результатыТестированияToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(870, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// управлениеТестамиToolStripMenuItem
			// 
			this->управлениеТестамиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->добавитьТестToolStripMenuItem,
					this->удалитьТестToolStripMenuItem, this->редактироватьТестToolStripMenuItem
			});
			this->управлениеТестамиToolStripMenuItem->Name = L"управлениеТестамиToolStripMenuItem";
			this->управлениеТестамиToolStripMenuItem->Size = System::Drawing::Size(132, 20);
			this->управлениеТестамиToolStripMenuItem->Text = L"Управление тестами";
			// 
			// добавитьТестToolStripMenuItem
			// 
			this->добавитьТестToolStripMenuItem->Name = L"добавитьТестToolStripMenuItem";
			this->добавитьТестToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->добавитьТестToolStripMenuItem->Text = L"Добавить тест";
			this->добавитьТестToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminProfileForm::добавитьТестToolStripMenuItem_Click);
			// 
			// удалитьТестToolStripMenuItem
			// 
			this->удалитьТестToolStripMenuItem->Name = L"удалитьТестToolStripMenuItem";
			this->удалитьТестToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->удалитьТестToolStripMenuItem->Text = L"Удалить тест";
			// 
			// редактироватьТестToolStripMenuItem
			// 
			this->редактироватьТестToolStripMenuItem->Name = L"редактироватьТестToolStripMenuItem";
			this->редактироватьТестToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->редактироватьТестToolStripMenuItem->Text = L"Редактировать тест";
			// 
			// управлениеПользователямиToolStripMenuItem
			// 
			this->управлениеПользователямиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->добавитьПользователяToolStripMenuItem,
					this->удалитьПользователяToolStripMenuItem, this->редактироватьПользователяToolStripMenuItem
			});
			this->управлениеПользователямиToolStripMenuItem->Name = L"управлениеПользователямиToolStripMenuItem";
			this->управлениеПользователямиToolStripMenuItem->Size = System::Drawing::Size(179, 20);
			this->управлениеПользователямиToolStripMenuItem->Text = L"Управление пользователями";
			// 
			// добавитьПользователяToolStripMenuItem
			// 
			this->добавитьПользователяToolStripMenuItem->Name = L"добавитьПользователяToolStripMenuItem";
			this->добавитьПользователяToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->добавитьПользователяToolStripMenuItem->Text = L"Добавить пользователя";
			this->добавитьПользователяToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminProfileForm::добавитьПользователяToolStripMenuItem_Click);
			// 
			// удалитьПользователяToolStripMenuItem
			// 
			this->удалитьПользователяToolStripMenuItem->Name = L"удалитьПользователяToolStripMenuItem";
			this->удалитьПользователяToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->удалитьПользователяToolStripMenuItem->Text = L"Удалить пользователя";
			this->удалитьПользователяToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminProfileForm::удалитьПользователяToolStripMenuItem_Click);
			// 
			// редактироватьПользователяToolStripMenuItem
			// 
			this->редактироватьПользователяToolStripMenuItem->Name = L"редактироватьПользователяToolStripMenuItem";
			this->редактироватьПользователяToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->редактироватьПользователяToolStripMenuItem->Text = L"Редактировать пользователя";
			this->редактироватьПользователяToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminProfileForm::редактироватьПользователяToolStripMenuItem_Click);
			// 
			// результатыТестированияToolStripMenuItem
			// 
			this->результатыТестированияToolStripMenuItem->Name = L"результатыТестированияToolStripMenuItem";
			this->результатыТестированияToolStripMenuItem->Size = System::Drawing::Size(159, 20);
			this->результатыТестированияToolStripMenuItem->Text = L"Результаты тестирования";
			this->результатыТестированияToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminProfileForm::результатыТестированияToolStripMenuItem_Click);
			// 
			// AdminProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(870, 532);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"AdminProfileForm";
			this->Text = L"AdminProfileForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void результатыТестированияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void добавитьПользователяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void удалитьПользователяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void редактироватьПользователяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void добавитьТестToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
