#include "AdminProfileForm.h"
#include "AddNewUserForm.h"
#include "ResultForm.h"
#include "DeleteUser.h"
#include "EditUserForm.h"
#include "AddNewTestForm.h"
#include "DeleteTestForm.h"
#include "EditTestForm.h"
#include "Encryping.h"

System::Void TestingProject::AdminProfileForm::button_AddTest_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddNewTestForm^ AddNewTestForm1 = gcnew AddNewTestForm();
	AddNewTestForm1->ShowDialog();
}

System::Void TestingProject::AdminProfileForm::button_DeleteTest_Click(System::Object^ sender, System::EventArgs^ e)
{
	DeleteTestForm^ DeleteTestForm1 = gcnew DeleteTestForm();
	DeleteTestForm1->ShowDialog();
}

System::Void TestingProject::AdminProfileForm::button_EditTest_Click(System::Object^ sender, System::EventArgs^ e)
{
	EditTestForm^ EditTestForm1 = gcnew EditTestForm();
	EditTestForm1->ShowDialog();
}

System::Void TestingProject::AdminProfileForm::button_AddUser_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddNewUserForm^ AddNewUserForm1 = gcnew AddNewUserForm();
	AddNewUserForm1->ShowDialog();
}

System::Void TestingProject::AdminProfileForm::buttonDeleteUser_Click(System::Object^ sender, System::EventArgs^ e)
{
	DeleteUser^ DeleteUser1 = gcnew DeleteUser();
	DeleteUser1->ShowDialog();
}

System::Void TestingProject::AdminProfileForm::button_EditUser_Click(System::Object^ sender, System::EventArgs^ e)
{
	EditUserForm^ EditUserForm1 = gcnew EditUserForm();
	EditUserForm1->ShowDialog();
}

System::Void TestingProject::AdminProfileForm::button_TestResult_Click(System::Object^ sender, System::EventArgs^ e)
{
	ResultForm^ ResultForm1 = gcnew ResultForm();
	ResultForm1->ShowDialog();
}

System::Void TestingProject::AdminProfileForm::button_EditPassword_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ NewPassword = textBox_NewPassword->Text;
    String^ Key = "MySecretKey12345";

    String^ filePath = "AdminData.txt";

    if (String::IsNullOrWhiteSpace(NewPassword))
    {
        MessageBox::Show("Пароль не может быть пустым!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    array<String^>^ fileLines = System::IO::File::ReadAllLines(filePath);
    List<String^>^ updatedLines = gcnew List<String^>();

    for each(String ^ line in fileLines)
    {
        array<String^>^ adminData = line->Split(';');

        if (adminData->Length == 2)
        {
            String^ login = adminData[0];
            String^ encryptedPassword = adminData[1];

            String^ encryptedNewPassword = Encryping::Encrypt(NewPassword, Key);

            String^ updatedLine = login + ";" + encryptedNewPassword;
            updatedLines->Add(updatedLine);
        }
        else
        {
            updatedLines->Add(line);
        }
    }

    System::IO::File::WriteAllLines(filePath, updatedLines->ToArray());

    MessageBox::Show("Пароль успешно изменён!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

System::Void TestingProject::AdminProfileForm::AdminProfileForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    FormManager::CloseAllForms();
}

