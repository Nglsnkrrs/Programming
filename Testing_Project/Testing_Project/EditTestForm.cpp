#include "EditTestForm.h"
#include <cliext/list>

using namespace cliext;

bool fileLoaded = false;

void TestingProject::EditTestForm::LoadFile(String^ fileName)
{
    String^ directoryPath = "tests";
    String^ fullPath = Path::Combine(directoryPath, fileName);

    if (!Directory::Exists(directoryPath))
    {
        Directory::CreateDirectory(directoryPath);
    }

    if (File::Exists(fullPath))
    {
        try
        {
            array<String^>^ lines = File::ReadAllLines(fullPath);

            questions->Clear();
            answers->Clear();
            correctAnswers->Clear();

            for (int i = 0; i < lines->Length; )
            {
                String^ question = lines[i++]->Trim();
                if (String::IsNullOrWhiteSpace(question))
                {
                    throw gcnew FormatException("Некорректный формат вопроса: строка пустая.");
                }

                questions->Add(question);

                List<String^>^ options = gcnew List<String^>();
                for (int j = 0; j < 4; j++)
                {
                    if (i >= lines->Length)
                    {
                        throw gcnew FormatException("Файл завершился раньше, чем ожидалось.");
                    }
                    String^ option = lines[i++]->Trim();
                    if (String::IsNullOrWhiteSpace(option))
                    {
                        throw gcnew FormatException("Некорректный вариант ответа: строка пустая.");
                    }
                    options->Add(option);
                }
                answers->Add(options);

                if (i >= lines->Length)
                {
                    throw gcnew FormatException("Отсутствует строка с правильным ответом.");
                }
                String^ correctAnswerLine = lines[i++]->Trim();
                if (!correctAnswerLine->StartsWith("Ответ"))
                {
                    throw gcnew FormatException("Некорректный формат строки с правильным ответом: " + correctAnswerLine);
                }

                array<String^>^ parts = correctAnswerLine->Split(gcnew array<wchar_t>{':', ' '}, StringSplitOptions::RemoveEmptyEntries);
                if (parts->Length < 2)
                {
                    throw gcnew FormatException("Неверный формат строки правильного ответа: " + correctAnswerLine);
                }

                int correctAnswer;
                if (!Int32::TryParse(parts[1]->Trim(), correctAnswer) || correctAnswer < 1 || correctAnswer > 4)
                {
                    throw gcnew FormatException("Неверный номер правильного ответа: " + parts[1]);
                }
                correctAnswers->Add(correctAnswer);

                while (i < lines->Length && String::IsNullOrWhiteSpace(lines[i]))
                {
                    i++;
                }
            }
            fileLoaded = true; 
            MessageBox::Show("Файл успешно загружен!");
        }
        catch (FormatException^ ex)
        {
            fileLoaded = false;
            MessageBox::Show("Ошибка в формате файла: " + ex->Message);
        }
        catch (Exception^ ex)
        {
            fileLoaded = false;
            MessageBox::Show("Ошибка при чтении файла: " + ex->Message);
        }
    }
    else
    {
        fileLoaded = false;
        MessageBox::Show("Файл не найден: " + fileName);
    }
}


void TestingProject::EditTestForm::SaveFile(String^ fileName)
{
    if (!fileLoaded)
    {
        MessageBox::Show("Сначала загрузите файл перед сохранением.");
        return;
    }

    String^ directoryPath = "tests";
    String^ fullPath = Path::Combine(directoryPath, fileName);

    try
    {
        StreamWriter^ writer = gcnew StreamWriter(fullPath);
        for (int i = 0; i < questions->Count; i++)
        {
            writer->WriteLine(questions[i]);
            for (int j = 0; j < 4; j++)
            {
                writer->WriteLine(answers[i]->default[j]);
            }
            writer->WriteLine("Ответ: " + correctAnswers[i]);
            writer->WriteLine();
        }
        writer->Close();

        MessageBox::Show("Файл успешно сохранен!");
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Ошибка при сохранении файла: " + ex->Message);
    }
}

void TestingProject::EditTestForm::EditQuestion(int questionIndex, String^ newQuestion, array<String^>^ newAnswers, int newCorrectAnswer)
{
    if (!fileLoaded)
    {
        MessageBox::Show("Сначала загрузите файл перед редактированием вопросов.");
        return;
    }

    if (questionIndex >= 0 && questionIndex < questions->Count)
    {
        questions[questionIndex] = newQuestion;

        for (int i = 0; i < 4; i++)
        {
            answers[questionIndex]->default[i] = newAnswers[i];
        }

        correctAnswers[questionIndex] = newCorrectAnswer;

    }
    else
    {
        MessageBox::Show("Некорректный номер вопроса.");
    }
}

void TestingProject::EditTestForm::AddQuestion(String^ newQuestion, array<String^>^ newAnswers, int newCorrectAnswer)
{
    if (!fileLoaded)
    {
        MessageBox::Show("Сначала загрузите файл перед добавлением новых вопросов.");
        return;
    }

    questions->Add(newQuestion);
    answers->Add(gcnew List<String^>(newAnswers));
    correctAnswers->Add(newCorrectAnswer);

}

void TestingProject::EditTestForm::DeleteQuestion(int questionIndex)
{
    if (!fileLoaded)
    {
        MessageBox::Show("Сначала загрузите файл перед удалением вопросов.");
        return;
    }

    if (questionIndex >= 0 && questionIndex < questions->Count)
    {
        questions->RemoveAt(questionIndex);
        answers->RemoveAt(questionIndex);
        correctAnswers->RemoveAt(questionIndex);

    }
    else
    {
        MessageBox::Show("Некорректный номер вопроса.");
    }
}

System::Void TestingProject::EditTestForm::Button_LoadFile_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ fileName = TextBox_FileName->Text->Trim();
    if (String::IsNullOrWhiteSpace(fileName))
    {
        MessageBox::Show("Введите корректное имя файла.");
        return;
    }

    array<wchar_t>^ invalidChars = Path::GetInvalidFileNameChars();
    if (fileName->IndexOfAny(invalidChars) >= 0)
    {
        MessageBox::Show("Имя файла содержит недопустимые символы.");
        return;
    }

    LoadFile(fileName);
}

System::Void TestingProject::EditTestForm::Button_SaveFile_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ fileName = TextBox_FileName->Text->Trim();
    if (String::IsNullOrWhiteSpace(fileName))
    {
        MessageBox::Show("Введите корректное имя файла.");
        return;
    }

    SaveFile(fileName);

    TextBox_NewQuestion->Clear();
    textBox_NewAnswer1->Clear();
    textBox_NewAnswer2->Clear();
    textBox_NewAnswer3->Clear();
    textBox_NewAnswer4->Clear();
    ComboBox_NewCorrectAnswer->SelectedIndex = -1;
}


System::Void TestingProject::EditTestForm::Button_EditQuestion_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (String::IsNullOrWhiteSpace(TextBox_QuestionIndex->Text))
    {
        MessageBox::Show("Введите корректный номер вопроса.");
        return;
    }

    if (questions->Count == 0)
    {
        MessageBox::Show("Вопросы не загружены. Сначала загрузите файл.");
        return;
    }

    int questionIndex = Convert::ToInt32(TextBox_QuestionIndex->Text) - 1;

    if (questionIndex < 0 || questionIndex >= questions->Count)
    {
        MessageBox::Show("Некорректный номер вопроса. Убедитесь, что вы указали правильный номер.");
        return;
    }

    String^ newQuestion = TextBox_EditQuestion->Text;

    array<String^>^ newAnswers = gcnew array<String^>(4);
    newAnswers[0] = textBox_NewAnswer1->Text;
    newAnswers[1] = textBox_NewAnswer2->Text;
    newAnswers[2] = textBox_NewAnswer3->Text;
    newAnswers[3] = textBox_NewAnswer4->Text;

    if (ComboBox_CorrectAnswer->SelectedIndex == -1)
    {
        MessageBox::Show("Выберите правильный ответ.");
        return;
    }

    int newCorrectAnswer = Convert::ToInt32(ComboBox_CorrectAnswer->SelectedItem);

    EditQuestion(questionIndex, newQuestion, newAnswers, newCorrectAnswer);

    MessageBox::Show("Вопрос успешно отредактирован.");

    TextBox_NewQuestion->Clear();
    textBox_NewAnswer1->Clear();
    textBox_NewAnswer2->Clear();
    textBox_NewAnswer3->Clear();
    textBox_NewAnswer4->Clear();
    ComboBox_NewCorrectAnswer->SelectedIndex = -1;
}



System::Void TestingProject::EditTestForm::Button_AddQuestion_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ newQuestion = TextBox_NewQuestion->Text;

    array<String^>^ newAnswers = gcnew array<String^>(4);
    newAnswers[0] = textBox_NewAnswer1->Text;
    newAnswers[1] = textBox_NewAnswer2->Text;
    newAnswers[2] = textBox_NewAnswer3->Text;
    newAnswers[3] = textBox_NewAnswer4->Text;

    int newCorrectAnswer = Convert::ToInt32(ComboBox_NewCorrectAnswer->SelectedItem);

    AddQuestion(newQuestion, newAnswers, newCorrectAnswer);

    TextBox_NewQuestion->Clear();
    textBox_NewAnswer1->Clear();
    textBox_NewAnswer2->Clear();
    textBox_NewAnswer3->Clear();
    textBox_NewAnswer4->Clear();
    ComboBox_NewCorrectAnswer->SelectedIndex = -1;

    MessageBox::Show("Вопрос успешно добавлен.");
}


System::Void TestingProject::EditTestForm::Button_DeleteQuestion_Click(System::Object^ sender, System::EventArgs^ e)
{
    int questionIndex = Convert::ToInt32(TextBox_QuestionIndex->Text) - 1;
    DeleteQuestion(questionIndex);

    TextBox_NewQuestion->Clear();
    textBox_NewAnswer1->Clear();
    textBox_NewAnswer2->Clear();
    textBox_NewAnswer3->Clear();
    textBox_NewAnswer4->Clear();
    ComboBox_NewCorrectAnswer->SelectedIndex = -1;

    MessageBox::Show("Вопрос успешно удален.");
}
