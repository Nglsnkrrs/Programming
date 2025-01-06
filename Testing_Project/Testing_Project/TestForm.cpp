#include "TestForm.h"
#include "TestManager.h"

System::Void TestingProject::TestForm::��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel_Testing->Show();
	this->testManager->SwitchToTest(0);  
    LoadQuestion();
}

System::Void TestingProject::TestForm::��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    panel_Testing->Show();
    this->testManager->SwitchToTest(1);
    LoadQuestion();
}

void TestingProject::TestForm::LoadQuestion()
{
    if (this->testManager->GetCurrentQuestionIndex() < this->testManager->questions[this->testManager->currentTestIndex]->Length)
    {
        // ��������� ������� ������
        this->text_question->Text = this->testManager->GetCurrentQuestion();

        // Get current answers (2D array)
        array<String^, 2>^ answers = this->testManager->GetCurrentAnswers();

        // ��������� ��������� ������
        this->answer1->Text = answers[0, 0];
        this->answer2->Text = answers[0, 1];
        this->answer3->Text = answers[0, 2];
        this->answer4->Text = answers[0, 3];

        // ��������� ����� �������� �������
        this->text_num->Text = System::Convert::ToString(this->testManager->GetCurrentQuestionIndex() + 1) + "/10";
    }
    else
    {
        // ���� ������� �����������, ���������� ���������
        String^ result = "���� ��������! ���������� ���������� �������: " + System::Convert::ToString(this->testManager->GetCorrectAnswersCount()) + "/10";
        MessageBox::Show(result, "��������� �����", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // ���������� ����
        this->testManager->Reset();
        panel_Testing->Hide();  // �������� ������ � ������
    }
}




System::Void TestingProject::TestForm::Next_Question_Click(System::Object^ sender, System::EventArgs^ e)
{
    // ��������� ������������ ������ � ����������� ������� ���������� �������
    if (this->testManager->selectedAnswer == this->testManager->rightAnswers[this->testManager->currentTestIndex][this->testManager->GetCurrentQuestionIndex()])
    {
        this->testManager->correctAnswersCount++;
    }

    // ��������� � ���������� �������
    if (this->testManager->NextQuestion())
    {
        LoadQuestion();  // ��������� ����� ������
    }
    else
    {
        // ���� ��������, ���������� ���������
        String^ result = "���� ��������! ���������� ���������� �������: " + System::Convert::ToString(this->testManager->GetCorrectAnswersCount()) + "/10";
        MessageBox::Show(result, "��������� �����", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // ���������� ����
        this->testManager->Reset();
        panel_Testing->Hide();  // �������� ������ � ������
    }
}


System::Void TestingProject::TestForm::Answer_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (this->answer1->Checked)
    {
        this->testManager->SetSelectedAnswer(0);  // ����� 1
    }
    else if (this->answer2->Checked)
    {
        this->testManager->SetSelectedAnswer(1);  // ����� 2
    }
    else if (this->answer3->Checked)
    {
        this->testManager->SetSelectedAnswer(2);  // ����� 3
    }
    else if (this->answer4->Checked)
    {
        this->testManager->SetSelectedAnswer(3);  // ����� 4
    }
}
