#include "AddNewTestForm.h"
#include "TestForm.h"

System::Void TestingProject::AddNewTestForm::button_SaveQuestion_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (comboBox_CorrectAnswer->SelectedItem != nullptr)
    {
        questions->Add(textBox_question->Text);
        answers->Add(textBox_answer1->Text + "\n" + textBox_answer2->Text + "\n" + textBox_answer3->Text + "\n" + textBox_answer4->Text);

        correctAnswers->Add(Convert::ToInt32(comboBox_CorrectAnswer->SelectedItem));

        textBox_question->Clear();
        textBox_answer1->Clear();
        textBox_answer2->Clear();
        textBox_answer3->Clear();
        textBox_answer4->Clear();
        comboBox_CorrectAnswer->SelectedIndex = -1;
    }
    else
    {
        MessageBox::Show("Пожалуйста, выберите правильный ответ.");
    }
}

System::Void TestingProject::AddNewTestForm::button_SaveTest_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ directoryPath = "tests";
    String^ fileName = textBox_NameFile->Text + ".txt";
    String^ fullPath = System::IO::Path::Combine(directoryPath, fileName);

    if (!System::IO::Directory::Exists(directoryPath))
    {
        System::IO::Directory::CreateDirectory(directoryPath);
    }

    System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(fullPath);

    for (int i = 0; i < questions->Count; i++)
    {
        array<String^>^ answerParts = answers[i]->Split('\n');

        writer->WriteLine(questions[i]);
        writer->WriteLine(answerParts[0]);
        writer->WriteLine(answerParts[1]);
        writer->WriteLine(answerParts[2]);
        writer->WriteLine(answerParts[3]);
        writer->WriteLine("Ответ: " + correctAnswers[i]);
        writer->WriteLine();
    }

    writer->Close();

    questions->Clear();
    answers->Clear();
    correctAnswers->Clear();
}

System::Void TestingProject::AddNewTestForm::AddNewTestForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    if (comboBox_CorrectAnswer != nullptr)
    {
        comboBox_CorrectAnswer->Items->Clear();

        for (int i = 1; i <= 4; i++)
        {
            comboBox_CorrectAnswer->Items->Add(i);
        }
        comboBox_CorrectAnswer->SelectedIndex = 0;
    }
}

