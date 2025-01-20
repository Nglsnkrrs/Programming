#include "MyUserProfileForm.h"
#include "Encryping.h"
#include "TestForm.h"

System::Void TestingProject::MyUserProfileForm::MyUserProfileForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    String^ filePath = "UserData.txt";
    String^ Key = "MySecretKey12345";

    array<System::String^>^ fileLines = System::IO::File::ReadAllLines(filePath);
    bool userFound = false;

    for each (System::String ^ line in fileLines) {
        array<System::String^>^ userData = line->Split('/');
        if (userData->Length != 6) {
            continue; // ������� ������������ ������
        }

        System::String^ fileLogin = Encryping::Decrypt(userData[0], Key);
        System::String^ filePassword = Encryping::Decrypt(userData[1], Key);

        if (fileLogin == Login && filePassword == Password) {
            userFound = true;
            System::String^ email = Encryping::Decrypt(userData[2], Key);
            System::String^ name = Encryping::Decrypt(userData[3], Key);
            System::String^ phone = Encryping::Decrypt(userData[4], Key);
            System::String^ address = Encryping::Decrypt(userData[5], Key);

            this->labelLogin->Text = "�����: " + fileLogin;
            this->labelEmail->Text = "����������� �����: " + email;
            this->labelName->Text = "���: " + name;
            this->labelPhone->Text = "�������: " + phone;
            this->labelAddres->Text = "�����: " + address;

            LoadTestResults(fileLogin);
            break;
        }
    }

    if (!userFound) {
        MessageBox::Show("������������ �� ������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
void TestingProject::MyUserProfileForm::LoadTestResults(String^ userLogin)
{
    String^ filePath = "TestResults.txt";
    array<System::String^>^ results = System::IO::File::ReadAllLines(filePath);

    String^ resultText = "���������� ������:\n";

    for each (System::String ^ resultLine in results) {
        array<System::String^>^ resultData = resultLine->Split('/');
        if (resultData->Length == 3 && resultData[0] == userLogin) {
            String^ testName = resultData[1];
            String^ marks = resultData[2];

            resultText += testName + ": " + marks + "\n";
        }
    }
    if (resultText == "���������� ������:\n") {
        resultText += "���������� �� �������.\n";
    }

    this->labelResultTests->Text = resultText;
}