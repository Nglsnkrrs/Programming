#pragma once
using namespace System;

public ref class TestManager
{
public:
    int currentTestIndex;
    int currentQuestionIndex;
    int correctAnswersCount;
    int selectedAnswer;

    array<array<int>^>^ rightAnswers;
    array<array<String^>^>^ questions;
    array<array<String^, 2>^>^ answers;
public:
    TestManager()
    {
        this->currentTestIndex = 0;
        this->currentQuestionIndex = 0;
        this->correctAnswersCount = 0;
        this->selectedAnswer = 0;

        this->rightAnswers = gcnew array<array<int>^>(2);
        this->rightAnswers[0] = gcnew array<int>{ 2, 3, 4, 1, 3, 4, 3, 1, 2, 4 };  // ���� 1
        this->rightAnswers[1] = gcnew array<int>{ 1, 3, 2, 4, 1, 2, 3, 4, 3, 2 };  // ���� 2

        this->questions = gcnew array<array<String^>^>(2);
        this->questions[0] = gcnew array<String^>
        {
            "���� � ����� - ���",
                "��������� � ���",
                "��������� ������������������ �� ����� ����",
                "��� ��������� ��������� ��������� ����� ������������",
                "� ����� ������",
                "� ������������ ������ ����� ��������",
                "���� � ������� � �������� ������� ����������",
                "� ����� ������������ ��������� ����� ������ �������� �������",
                "� ������� G ������� x ���������� ���� v ����",
                "����� ����� ����������"
        };
        this->questions[1] = gcnew array<String^>
        {
            "������ 1 (���� 2)",
                "������ 2 (���� 2)",
                "������ 3 (���� 2)",
                "������ 4 (���� 2)",
                "������ 5 (���� 2)",
                "������ 6 (���� 2)",
                "������ 7 (���� 2)",
                "������ 8 (���� 2)",
                "������ 9 (���� 2)",
                "������ 10 (���� 2)"
        };

        this->answers = gcnew array<array<String^, 2>^>(2);
        this->answers[0] = gcnew array<String^, 2>
        {
            {"���������������� �����", "��������������� �����", "������� �����", "������� �����"},
            { "����� �����-���� ���������", "�������� ���������� ���������", "������������ ���������, \n���������� ��������� ���������, ���������", "������������ �����" },
            { "��������� ���������������", "��������� �������� �������", "��������� �������� �������", "��������� ���������������" },
            { "�������� ������", "�������� ������ ����� �� �������", "�������� ��������", "��� ����������� ������" },
            { "���� �� ���� ������� �������", "���� �� ��� ������� �������", "����� n-1 ������� �������", "��� ������� ������" },
            { "��� ������� ����, \n��� � ����, �� ���������� �������", "������ ������� ����", "������ ������� ����", "��� ������� ����, \n��� � ����, �� ���������� �������" },
            { "������", "������������", "������������", "����������" },
            { "������ ����", "������ �����", "������ �������", "�����������" },
            { "������� x � ������ ���� v", "������� x ���� ������ ���� v, \n���� ����� ���� v", "������� x ����� ���� v", "��� ����������� ������" },
            { "������� �����", "�������� �����", "��������� �����", "������ �����" }
        };
        this->answers[1] = gcnew array<String^, 2> {
            { "����� A", "����� B", "����� C", "����� D" }
        }; 
    }

    void SwitchToTest(int testIndex)
    {
        this->currentTestIndex = testIndex;
        this->currentQuestionIndex = 0;
        this->correctAnswersCount = 0;
    }

    bool NextQuestion()
    {
        if (this->selectedAnswer == this->rightAnswers[this->currentTestIndex][this->currentQuestionIndex])
        {
            this->correctAnswersCount++;
        }

        this->currentQuestionIndex++;

        if (this->currentQuestionIndex >= this->questions[this->currentTestIndex]->Length)
        {
            return false;
        }

        return true;
    }

    String^ GetCurrentQuestion()
    {
        return this->questions[this->currentTestIndex][this->currentQuestionIndex];
    }

    array<String^, 2>^ GetCurrentAnswers()
    {
        return this->answers[this->currentTestIndex];
    }

    void SetSelectedAnswer(int answer)
    {
        this->selectedAnswer = answer;
    }

    int GetCorrectAnswersCount()
    {
        return this->correctAnswersCount;
    }

    void Reset()
    {
        this->currentQuestionIndex = 0;
        this->correctAnswersCount = 0;
    }

    int GetCurrentQuestionIndex()
    {
        return this->currentQuestionIndex;
    }
};
