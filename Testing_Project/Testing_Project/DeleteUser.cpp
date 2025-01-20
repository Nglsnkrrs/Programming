#include "DeleteUser.h"
#include "Encryping.h"
using namespace System::Collections::Generic;

System::Void TestingProject::DeleteUser::button_DelLogin_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ DeleteLogin = textBox_DeleteLogin->Text;
	String^ filePath = "UserData.txt";
	array<String^>^ fileLines = System::IO::File::ReadAllLines(filePath);

	List<String^>^ updatedLines = gcnew List<String^>();
	for each (String ^ line in fileLines)
	{
		array<String^>^ userData = line->Split('/');
		if (userData->Length > 0 && Encryping::Decrypt(userData[0], Key) != DeleteLogin)
		{
			updatedLines->Add(line);
		}
	}

	System::IO::File::WriteAllLines(filePath, updatedLines->ToArray());
	MessageBox::Show("Пользователь удален!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
