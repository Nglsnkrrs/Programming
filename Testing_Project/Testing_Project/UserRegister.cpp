#include "UserRegister.h"
#include "UserForm.h"
#include "Encryping.h"

System::Void TestingProject::UserRegister::Reg_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ filePath = "UserData.txt";
    String^ Key = "MySecretKey12345";

    Login = textBox_Login->Text;
    Password = textBox_Password->Text;
    Email = textBox_Email->Text;
    Name = textBox_Name->Text;
    Addres = textBox_Addres->Text;
    Phone = textBox_Phone->Text;

    if (!IsValidEmail(Email))
    {
        MessageBox::Show("Некорректный адрес электронной почты. Почта должна содержать символы '@' и '.'",
            "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    if (Login->Trim()->Length == 0 || Password->Trim()->Length == 0 || Email->Trim()->Length == 0 ||
        Name->Trim()->Length == 0 || Addres->Trim()->Length == 0 || Phone->Trim()->Length == 0)
    {
        MessageBox::Show("Введите все данные!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    if (Encryping::IsLoginExists(Login, filePath))
    {
        MessageBox::Show("Этот логин уже занят. Выберите другой логин.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }
    
    encryptedLogin = Encryping::Encrypt(Login, Key);
    encryptedPassword = Encryping::Encrypt(Password, Key);
    encryptedEmail = Encryping::Encrypt(Email, Key);
    encryptedName = Encryping::Encrypt(Name, Key);
    encryptedAddres = Encryping::Encrypt(Addres, Key);
    encryptedPhone = Encryping::Encrypt(Phone, Key);

    String^ userData = encryptedLogin + "/" + encryptedPassword +
        "/" + encryptedEmail + "/" + encryptedName + "/" + encryptedAddres + "/" + encryptedPhone;

    

    Encryping::WriteEncryptedToFile(userData, filePath);

    UserForm^ form2 = gcnew UserForm();
    form2->Show();
    this->Hide();
}


bool TestingProject::UserRegister::IsValidEmail(String^ email)
{
    System::Text::RegularExpressions::Regex^ regex = gcnew System::Text::RegularExpressions::Regex("^[^@]+@[^@]+\\.[^@]+$");

    return regex->IsMatch(email);
}

System::Void TestingProject::UserRegister::Back_Click(System::Object^ sender, System::EventArgs^ e)
{
    UserForm^ form5 = gcnew UserForm();
    form5->Show();
    this->Hide();
}
