#include "EditUserForm.h"
#include "Encryping.h"

using namespace System::Collections::Generic;

System::Void TestingProject::EditUserForm::button_EditUser_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ loginToEdit = textBox_EditLogin->Text;
	String^ newPassword = textBox_EditPassword->Text;
	String^ newEmail = textBox_EditEmail->Text;
	String^ newName = textBox_EditName->Text;
	String^ newPhone = textBox_EditPhone->Text;
	String^ newAddress = textBox_EditAddress->Text;

	if (String::IsNullOrWhiteSpace(loginToEdit))
	{
		MessageBox::Show("Введите логин пользователя для редактирования.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	String^ filePath = "UserData.txt";
	array<String^>^ fileLines = System::IO::File::ReadAllLines(filePath);

	bool userFound = false;
	List<String^>^ updatedLines = gcnew List<String^>();

	for each (String ^ line in fileLines)
	{
		array<String^>^ userData = line->Split(';');

		if (userData->Length > 0)
		{
			String^ decryptedLogin = Encryping::Decrypt(userData[0], Key);

			if (decryptedLogin == loginToEdit)
			{
				userFound = true;

				String^ encryptedLogin = Encryping::Encrypt(loginToEdit, Key);
				String^ encryptedPassword = Encryping::Encrypt(newPassword, Key);
				String^ encryptedEmail = Encryping::Encrypt(newEmail, Key);
				String^ encryptedName = Encryping::Encrypt(newName, Key);
				String^ encryptedPhone = Encryping::Encrypt(newPhone, Key);
				String^ encryptedAddress = Encryping::Encrypt(newAddress, Key);

				String^ updatedUserData = encryptedLogin + ";" + encryptedPassword + ";" + encryptedEmail + ";" + encryptedName + ";" + encryptedPhone + ";" + encryptedAddress;

				updatedLines->Add(updatedUserData);
			}
			else
			{
				updatedLines->Add(line);
			}
		}
	}

	if (userFound)
	{
		System::IO::File::WriteAllLines(filePath, updatedLines->ToArray());
		MessageBox::Show("Данные пользователя успешно обновлены!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		// Если пользователь не найден
		MessageBox::Show("Пользователь с таким логином не найден.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
