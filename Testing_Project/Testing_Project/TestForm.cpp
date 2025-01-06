#include "TestForm.h"
#include "TestManager.h"

System::Void TestingProject::TestForm::дискретнаяМатематикаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel_Testing->Show();
	this->testManager->SwitchToTest(0);  
    LoadQuestion();
}

System::Void TestingProject::TestForm::математическийАнализToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    panel_Testing->Show();
    this->testManager->SwitchToTest(1);
    LoadQuestion();
}

void TestingProject::TestForm::LoadQuestion()
{
    if (this->testManager->GetCurrentQuestionIndex() < this->testManager->questions[this->testManager->currentTestIndex]->Length)
    {
        // Загружаем текущий вопрос
        this->text_question->Text = this->testManager->GetCurrentQuestion();

        // Get current answers (2D array)
        array<String^, 2>^ answers = this->testManager->GetCurrentAnswers();

        // Загружаем возможные ответы
        this->answer1->Text = answers[0, 0];
        this->answer2->Text = answers[0, 1];
        this->answer3->Text = answers[0, 2];
        this->answer4->Text = answers[0, 3];

        // Обновляем номер текущего вопроса
        this->text_num->Text = System::Convert::ToString(this->testManager->GetCurrentQuestionIndex() + 1) + "/10";
    }
    else
    {
        // Если вопросы закончились, показываем результат
        String^ result = "Тест завершен! Количество правильных ответов: " + System::Convert::ToString(this->testManager->GetCorrectAnswersCount()) + "/10";
        MessageBox::Show(result, "Результат теста", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // Сбрасываем тест
        this->testManager->Reset();
        panel_Testing->Hide();  // Скрываем панель с тестом
    }
}




System::Void TestingProject::TestForm::Next_Question_Click(System::Object^ sender, System::EventArgs^ e)
{
    // Проверяем правильность ответа и увеличиваем счетчик правильных ответов
    if (this->testManager->selectedAnswer == this->testManager->rightAnswers[this->testManager->currentTestIndex][this->testManager->GetCurrentQuestionIndex()])
    {
        this->testManager->correctAnswersCount++;
    }

    // Переходим к следующему вопросу
    if (this->testManager->NextQuestion())
    {
        LoadQuestion();  // Загружаем новый вопрос
    }
    else
    {
        // Тест завершен, показываем результат
        String^ result = "Тест завершен! Количество правильных ответов: " + System::Convert::ToString(this->testManager->GetCorrectAnswersCount()) + "/10";
        MessageBox::Show(result, "Результат теста", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // Сбрасываем тест
        this->testManager->Reset();
        panel_Testing->Hide();  // Скрываем панель с тестом
    }
}


System::Void TestingProject::TestForm::Answer_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (this->answer1->Checked)
    {
        this->testManager->SetSelectedAnswer(0);  // Ответ 1
    }
    else if (this->answer2->Checked)
    {
        this->testManager->SetSelectedAnswer(1);  // Ответ 2
    }
    else if (this->answer3->Checked)
    {
        this->testManager->SetSelectedAnswer(2);  // Ответ 3
    }
    else if (this->answer4->Checked)
    {
        this->testManager->SetSelectedAnswer(3);  // Ответ 4
    }
}
