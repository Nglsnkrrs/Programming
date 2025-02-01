#include "DeleteTestForm.h"

System::Void TestingProject::DeleteTestForm::button_DeleteTest_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ file = textBox_nameFilefromDelete->Text;
    Delete(file);
}

void TestingProject::DeleteTestForm::Delete(String^ fileName)
{
    String^ directoryPath = "tests";
    String^ fullPath = System::IO::Path::Combine(directoryPath, fileName);

    if (System::IO::File::Exists(fullPath))
    {
        try
        {
            System::IO::File::Delete(fullPath);
            MessageBox::Show("���� ������� �����: " + fileName);
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("������ ��� �������� �����: " + ex->Message);
        }
    }
    else
    {
        MessageBox::Show("���� �� ������: " + fileName);
    }
}
