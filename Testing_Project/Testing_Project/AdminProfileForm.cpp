#include "AdminProfileForm.h"
#include "AddNewUserForm.h"
#include "ResultForm.h"
#include "DeleteUser.h"
#include "EditUserForm.h"
#include "AddNewTestForm.h"

System::Void TestingProject::AdminProfileForm::ðåçóëüòàòûÒåñòèðîâàíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{

	ResultForm^ ResultForm1 = gcnew ResultForm();
	ResultForm1->ShowDialog();
}

System::Void TestingProject::AdminProfileForm::äîáàâèòüÏîëüçîâàòåëÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddNewUserForm^ AddNewUserForm1 = gcnew AddNewUserForm();
	AddNewUserForm1->ShowDialog();
}

System::Void TestingProject::AdminProfileForm::óäàëèòüÏîëüçîâàòåëÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DeleteUser^ DeleteUser1 = gcnew DeleteUser();
	DeleteUser1->ShowDialog();
}

System::Void TestingProject::AdminProfileForm::ðåäàêòèðîâàòüÏîëüçîâàòåëÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	EditUserForm^ EditUserForm1 = gcnew EditUserForm();
	EditUserForm1->ShowDialog();
}

System::Void TestingProject::AdminProfileForm::äîáàâèòüÒåñòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddNewTestForm^ AddNewTestForm1 = gcnew AddNewTestForm();
	AddNewTestForm1->ShowDialog();
}

