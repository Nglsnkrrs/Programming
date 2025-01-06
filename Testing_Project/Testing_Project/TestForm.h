#pragma once

namespace TestingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TestForm
	/// </summary>
	public ref class TestForm : public System::Windows::Forms::Form
	{
	public:
		TestForm(void)
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
		~TestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip_Test;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ìàòåìàòè÷åñêèåÒåñòûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àíãëèéñêèéToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip_Main;

	private: System::Windows::Forms::ToolStripMenuItem^ ãëàâíàÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òåñòûÏîÏğîãğàììèğîâàíèşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ìîéÏğîôèëüToolStripMenuItem;

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
			this->menuStrip_Test = (gcnew System::Windows::Forms::MenuStrip());
			this->ìàòåìàòè÷åñêèåÒåñòûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àíãëèéñêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip_Main = (gcnew System::Windows::Forms::MenuStrip());
			this->ãëàâíàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåñòûÏîÏğîãğàììèğîâàíèşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìîéÏğîôèëüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip_Test->SuspendLayout();
			this->menuStrip_Main->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip_Test
			// 
			this->menuStrip_Test->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ìàòåìàòè÷åñêèåÒåñòûToolStripMenuItem,
					this->àíãëèéñêèéToolStripMenuItem, this->òåñòûÏîÏğîãğàììèğîâàíèşToolStripMenuItem
			});
			this->menuStrip_Test->Location = System::Drawing::Point(0, 24);
			this->menuStrip_Test->Name = L"menuStrip_Test";
			this->menuStrip_Test->Size = System::Drawing::Size(901, 24);
			this->menuStrip_Test->TabIndex = 0;
			this->menuStrip_Test->Text = L"menuStrip1";
			// 
			// ìàòåìàòè÷åñêèåÒåñòûToolStripMenuItem
			// 
			this->ìàòåìàòè÷åñêèåÒåñòûToolStripMenuItem->Name = L"ìàòåìàòè÷åñêèåÒåñòûToolStripMenuItem";
			this->ìàòåìàòè÷åñêèåÒåñòûToolStripMenuItem->Size = System::Drawing::Size(146, 20);
			this->ìàòåìàòè÷åñêèåÒåñòûToolStripMenuItem->Text = L"Ìàòåìàòè÷åñêèå òåñòû";
			// 
			// àíãëèéñêèéToolStripMenuItem
			// 
			this->àíãëèéñêèéToolStripMenuItem->Name = L"àíãëèéñêèéToolStripMenuItem";
			this->àíãëèéñêèéToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->àíãëèéñêèéToolStripMenuItem->Text = L"ßçûêîâûå òåñòû";
			// 
			// menuStrip_Main
			// 
			this->menuStrip_Main->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ãëàâíàÿToolStripMenuItem,
					this->ìîéÏğîôèëüToolStripMenuItem
			});
			this->menuStrip_Main->Location = System::Drawing::Point(0, 0);
			this->menuStrip_Main->Name = L"menuStrip_Main";
			this->menuStrip_Main->Size = System::Drawing::Size(901, 24);
			this->menuStrip_Main->TabIndex = 1;
			this->menuStrip_Main->Text = L"menuStrip2";
			// 
			// ãëàâíàÿToolStripMenuItem
			// 
			this->ãëàâíàÿToolStripMenuItem->Name = L"ãëàâíàÿToolStripMenuItem";
			this->ãëàâíàÿToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->ãëàâíàÿToolStripMenuItem->Text = L"Ãëàâíàÿ";
			// 
			// òåñòûÏîÏğîãğàììèğîâàíèşToolStripMenuItem
			// 
			this->òåñòûÏîÏğîãğàììèğîâàíèşToolStripMenuItem->Name = L"òåñòûÏîÏğîãğàììèğîâàíèşToolStripMenuItem";
			this->òåñòûÏîÏğîãğàììèğîâàíèşToolStripMenuItem->Size = System::Drawing::Size(186, 20);
			this->òåñòûÏîÏğîãğàììèğîâàíèşToolStripMenuItem->Text = L"Òåñòû ïî ïğîãğàììèğîâàíèş";
			// 
			// ìîéÏğîôèëüToolStripMenuItem
			// 
			this->ìîéÏğîôèëüToolStripMenuItem->Name = L"ìîéÏğîôèëüToolStripMenuItem";
			this->ìîéÏğîôèëüToolStripMenuItem->Size = System::Drawing::Size(97, 20);
			this->ìîéÏğîôèëüToolStripMenuItem->Text = L"Ìîé ïğîôèëü";
			// 
			// TestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(901, 477);
			this->Controls->Add(this->menuStrip_Test);
			this->Controls->Add(this->menuStrip_Main);
			this->MainMenuStrip = this->menuStrip_Test;
			this->Name = L"TestForm";
			this->Text = L"TestForm";
			this->menuStrip_Test->ResumeLayout(false);
			this->menuStrip_Test->PerformLayout();
			this->menuStrip_Main->ResumeLayout(false);
			this->menuStrip_Main->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}
