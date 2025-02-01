#include "AdminRegister.h"
#include "Encryping.h"
#include "AdminForm.h"

System::Void TestingProject::AdminRegister::Regiter_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ filePath = "AdminData.txt";
	String^ Key = "MySecretKey12345";

	LoginAdmin = textBox_login->Text;
	PasswordAdmin = textBox_password->Text;

	encryptedLoginAdmin = Encryping::Encrypt(LoginAdmin, Key);
	encryptedPasswordAdmin = Encryping::Encrypt(PasswordAdmin, Key);

	String^ adminData = encryptedLoginAdmin + ";" + encryptedPasswordAdmin;

	if (System::IO::File::Exists(filePath))
	{
		String^ existingData = System::IO::File::ReadAllText(filePath);

		if (!String::IsNullOrWhiteSpace(existingData))
		{
			MessageBox::Show("Администратор уже зарегистрирован.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
			AdminForm^ form4 = gcnew AdminForm();
			form4->Show();
			this->Hide();
		}
	}

	Encryping::WriteEncryptedToFile(adminData, filePath);

	AdminForm^ form4 = gcnew AdminForm();
	form4->Show();
	this->Hide();
}

System::Void TestingProject::AdminRegister::AdminRegister_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	FormManager::CloseAllForms();
}
