#include "AddNewUserForm.h"
#include "Encryping.h"

System::Void TestingProject::AddNewUserForm::AddNewUser_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ Newlogin = textBox_NewLogin->Text;
	String^ Newpassword = textBox_NewPassword->Text;
	String^ Newemail = textBox_NewEmail->Text;
	String^ Newname = textBox_NewName->Text;
	String^ Newphone = textBox_NewPhone->Text;
	String^ Newaddress = textBox_NewAddres->Text;

	String^ encryptedNewLogin = Encryping::Encrypt(Newlogin, Key);
	String^ encryptedNewPassword = Encryping::Encrypt(Newpassword, Key);
	String^ encryptedNewEmail = Encryping::Encrypt(Newemail, Key);
	String^ encryptedNewName = Encryping::Encrypt(Newname, Key);
	String^ encryptedNewPhone = Encryping::Encrypt(Newphone, Key);
	String^ encryptedNewAddress = Encryping::Encrypt(Newaddress, Key);

	String^ userData = encryptedNewLogin + "/" + encryptedNewPassword + "/" + encryptedNewEmail + "/" + encryptedNewName + "/" + encryptedNewPhone + "/" + encryptedNewAddress;

	Encryping::WriteEncryptedToFile(userData, "UserData.txt");

	MessageBox::Show("Пользователь добавлен!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
