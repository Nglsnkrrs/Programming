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
        this->rightAnswers[0] = gcnew array<int>{ 2, 3, 4, 1, 3, 4, 3, 1, 2, 4 };  // Тест 1
        this->rightAnswers[1] = gcnew array<int>{ 1, 3, 2, 4, 1, 2, 3, 4, 3, 2 };  // Тест 2

        this->questions = gcnew array<array<String^>^>(2);
        this->questions[0] = gcnew array<String^>
        {
            "Дуги в графе - это",
                "Множество – это",
                "Отношение взаимодостижимости на графе есть",
                "Для выделения компонент связности можно использовать",
                "В любом дереве",
                "В произвольном дереве можно выделить",
                "Граф с петлями и кратными ребрами называется",
                "В любом произвольном неорграфе число вершин нечетной степени",
                "В орграфе G вершина x инцидентна дуге v если",
                "Точки графа называются"
        };
        this->questions[1] = gcnew array<String^>
        {
            "Вопрос 1 (Тест 2)",
                "Вопрос 2 (Тест 2)",
                "Вопрос 3 (Тест 2)",
                "Вопрос 4 (Тест 2)",
                "Вопрос 5 (Тест 2)",
                "Вопрос 6 (Тест 2)",
                "Вопрос 7 (Тест 2)",
                "Вопрос 8 (Тест 2)",
                "Вопрос 9 (Тест 2)",
                "Вопрос 10 (Тест 2)"
        };

        this->answers = gcnew array<array<String^, 2>^>(2);
        this->answers[0] = gcnew array<String^, 2>
        {
            {"неорентированные ребра", "ориентированные ребра", "кратные ребра", "смежные ребра"},
            { "набор каких-либо элементов", "перечень одинаковых элементов", "совокупность элементов, \nобладающих некоторым признаком, свойством", "совокупность чисел" },
            { "отношение эквивалентности", "отношение простого порядка", "отношение строгого порядка", "отношение эквивалентности" },
            { "алгоритм Флойда", "алгоритм обхода графа «в глубину»", "алгоритм Дейкстры", "нет правильного ответа" },
            { "хотя бы одна висячая вершина", "хотя бы две висячие вершины", "ровно n-1 висячая вершина", "нет висячих вершин" },
            { "как простую цепь, \nтак и цепь, не являющуюся простой", "только простую цепь", "только простой цикл", "как простой цикл, \nтак и цикл, не являющийся простым" },
            { "графом", "псевдографом", "мультиграфом", "недографом" },
            { "всегда есть", "всегда четно", "всегда нечетно", "произвольно" },
            { "вершина x — начало дуги v", "вершина x либо начало дуги v, \nлибо конец дуги v", "вершина x конец дуги v", "нет правильного ответа" },
            { "ребрами графа", "пунктами графа", "вершинами графа", "узлами графа" }
        };
        this->answers[1] = gcnew array<String^, 2> {
            { "Ответ A", "Ответ B", "Ответ C", "Ответ D" }
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
