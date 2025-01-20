#include "AdminForm.h"
#include "AdminRegister.h"
#include "Encryping.h"
#include "AdminProfileForm.h"

System::Void TestingProject::AdminForm::Admin_Register_Click(System::Object^ sender, System::EventArgs^ e)
{
    AdminRegister^ form7 = gcnew AdminRegister;
    form7->Show();
    this->Hide();


}

System::Void TestingProject::AdminForm::Admin_Login_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ Key = "MySecretKey12345";
	String^ filePath = "AdminData.txt";

	LoginAdminInput = textBox_LoginAdm->Text;
	PasswordAdminInput = textBox_PasswordAdm->Text;

	String^ EncryptLoginINPUT = Encryping::Encrypt(LoginAdminInput, Key);
	String^ EncryptPasswordINPUT = Encryping::Encrypt(PasswordAdminInput, Key);

    if (Encryping::IsLoginExists(LoginAdminInput, filePath) && Encryping::IsPasswordExists(PasswordAdminInput, filePath))
    {
        AdminProfileForm^ form8 = gcnew AdminProfileForm(LoginAdminInput, PasswordAdminInput);
        form8->fileLoginAdmin = LoginAdminInput;
        form8->Show();
        this->Hide();
    }
    else
    {
        MessageBox::Show("Неверный логин или пароль", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

}
