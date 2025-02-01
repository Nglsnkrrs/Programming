#include "UserForm.h"
#include "UserRegister.h"
#include "TestForm.h"
#include "Encryping.h"

System::Void TestingProject::UserForm::Register_User_Click(System::Object^ sender, System::EventArgs^ e)
{
    UserRegister^ form3 = gcnew UserRegister();
    form3->Show();
    this->Hide();
}

System::Void TestingProject::UserForm::Login_User_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ Key = "MySecretKey12345";
    String^ filePath = "UserData.txt";

    LoginINPUT = textBox_Log->Text;
    PasswordINPUT = textBox_Pass->Text;

    String^ EncryptLoginINPUT = Encryping::Encrypt(LoginINPUT, Key);
    String^ EncryptPasswordINPUT = Encryping::Encrypt(PasswordINPUT, Key);

    if (Encryping::IsLoginExists(LoginINPUT, filePath) && Encryping::IsPasswordExists(PasswordINPUT, filePath))
    {
        TestForm^ formTest = gcnew TestForm(LoginINPUT, PasswordINPUT);
        formTest->fileLogin = LoginINPUT;
        formTest->Show();
        this->Hide();
    }
    else 
    {
        MessageBox::Show("Неверный логин или пароль", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

}

System::Void TestingProject::UserForm::UserForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    FormManager::CloseAllForms();
}
