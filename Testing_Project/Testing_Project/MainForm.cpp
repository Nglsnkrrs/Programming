#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    TestingProject::MainForm form;  
    Application::Run(% form);
}

System::Void TestingProject::MainForm::Main_User_Click(System::Object^ sender, System::EventArgs^ e)
{
    
    UserForm^ form2 = gcnew UserForm();
    form2->Show();

    this->Hide();
}

System::Void TestingProject::MainForm::MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{

	for each (Form ^ f in Application::OpenForms)
	{
		if (f != this)
		{
			f->Close();
		}
	}

	Application::Exit();
}