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
    TestManager();
    void SwitchToTest(int testIndex);
    bool NextQuestion();
    String^ GetCurrentQuestion();
    array<String^>^ GetCurrentAnswers();
    void SetSelectedAnswer(int answer);
    int GetCorrectAnswersCount();
    void Reset();
    int GetCurrentQuestionIndex();
    void SaveTestResults(String^ testName, int correctAnswers, String^ userLogin);
};
