#include "TestForm.h"
#include "TestManager.h"
#include "Encryping.h"
#include "UserForm.h"

System::Void TestingProject::TestForm::дискретнаяМатематикаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
 
	panel_Testing->Show();
	this->testManager->SwitchToTest(0);  
    LoadQuestion();
    panel_Profile->Hide();
}

System::Void TestingProject::TestForm::математическийАнализToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    panel_Testing->Show();
    this->testManager->SwitchToTest(1);
    LoadQuestion();
    panel_Profile->Hide();

}

System::Void TestingProject::TestForm::английскийToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    panel_Testing->Show();
    this->testManager->SwitchToTest(2);
    LoadQuestion();
    panel_Profile->Hide();
}

System::Void TestingProject::TestForm::русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    panel_Testing->Show();
    this->testManager->SwitchToTest(3);
    LoadQuestion();
    panel_Profile->Hide();
}

System::Void TestingProject::TestForm::тестыПоПрограммированиюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    panel_Testing->Show();
    this->testManager->SwitchToTest(4);
    LoadQuestion();
    panel_Profile->Hide();
}

System::Void TestingProject::TestForm::мойПрофильToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ filePath = "UserData.txt";
    String^ Key = "MySecretKey12345";

    array<System::String^>^ fileLines = System::IO::File::ReadAllLines(filePath);

    for each(System::String ^ line in fileLines) {
        array<System::String^>^ userData = line->Split('/');
        if (userData->Length != 6) {
            continue;
        }

        fileLogin = Encryping::Decrypt(userData[0], Key);
        System::String^ filePassword = Encryping::Decrypt(userData[1], Key);

        if (fileLogin == Login && filePassword == Password) {
            System::String^ login = Encryping::Decrypt(userData[0], Key);
            System::String^ email = Encryping::Decrypt(userData[2], Key);
            System::String^ name = Encryping::Decrypt(userData[3], Key);
            System::String^ phone = Encryping::Decrypt(userData[4], Key);
            System::String^ address = Encryping::Decrypt(userData[5], Key);

            this->labelLogin->Text = "Логин: " + login;
            this->labelEmail->Text = "Электронная почта: " + email;
            this->labelName->Text = "ФИО: " + name;
            this->labelPhone->Text = "Телефон: " + phone;
            this->labelAddres->Text = "Адрес: " + address;

            LoadTestResults(fileLogin);
            this->panel_Profile->Visible = true;
            return;
        }
    }
    MessageBox::Show("Неверный логин или пароль", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

void TestingProject::TestForm::LoadQuestion()
{
    if (this->testManager->GetCurrentQuestionIndex() < this->testManager->questions[this->testManager->currentTestIndex]->Length)
    {
        this->answer1->Checked = false;
        this->answer2->Checked = false;
        this->answer3->Checked = false;
        this->answer4->Checked = false;
        
        this->text_question->Text = this->testManager->GetCurrentQuestion();

        array<String^>^ answers = this->testManager->GetCurrentAnswers();

        this->answer1->Text = answers[0];
        this->answer2->Text = answers[1];
        this->answer3->Text = answers[2];
        this->answer4->Text = answers[3];

        this->text_num->Text = System::Convert::ToString(this->testManager->GetCurrentQuestionIndex() + 1) + "/10";
    }
}

System::Void TestingProject::TestForm::Next_Question_Click(System::Object^ sender, System::EventArgs^ e)
{

    if (this->testManager->NextQuestion())
    {
        LoadQuestion();
    }
    else
    {
        System::String^ testName = "Тест";

        switch (this->testManager->currentTestIndex)
        {
        case 0:
            testName = "Дискретная математика";  
            break;
        case 1:
            testName = "Математический анализ";
            break;
        case 2:
            testName = "Английский";
            break;
        case 3:
            testName = "Русский";
            break;
        case 4:
            testName = "Программирование";
            break;
        }

        int correctAnswers = this->testManager->GetCorrectAnswersCount();
        this->testManager->SaveTestResults(testName, correctAnswers,fileLogin);
   

        String^ result = "Тест завершен! Количество правильных ответов: " + System::Convert::ToString(correctAnswers) + "/10";
        MessageBox::Show(result, "Результат теста", MessageBoxButtons::OK, MessageBoxIcon::Information);

        this->testManager->Reset();
        panel_Testing->Hide();
    }
}

System::Void TestingProject::TestForm::Answer_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (this->answer1->Checked)
    {
        this->testManager->SetSelectedAnswer(0);
    }
    else if (this->answer2->Checked)
    {
        this->testManager->SetSelectedAnswer(1);
    }
    else if (this->answer3->Checked)
    {
        this->testManager->SetSelectedAnswer(2);
    }
    else if (this->answer4->Checked)
    {
        this->testManager->SetSelectedAnswer(3);
    }
}

void TestingProject::TestForm::LoadTestResults(String^ userLogin)
{
    String^ filePath = "TestResults.txt";
    array<System::String^>^ results = System::IO::File::ReadAllLines(filePath);

    String^ resultText = "Результаты тестов:\n";

    for each(System::String ^ resultLine in results) {
        array<System::String^>^ resultData = resultLine->Split('/');
        if (resultData->Length == 4 && resultData[0] == userLogin) {
            String^ testName = resultData[1];
            String^ correctAnswers = resultData[2];
            String^ totalQuestions = resultData[3];

            resultText += testName + ": " + correctAnswers + "/" + totalQuestions + "\n";
        }
    }
    this->labelResultTests->Text = resultText;
}

System::Void TestingProject::TestForm::главнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    panel_Testing->Hide();
    panel_Profile->Hide();
    UserForm^ form5 = gcnew UserForm();
    form5->Show();
    this->Hide();
}


