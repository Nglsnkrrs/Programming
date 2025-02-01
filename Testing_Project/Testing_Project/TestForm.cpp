#include "TestForm.h"
#include "Encryping.h"
#include "UserForm.h"
#include "MyUserProfileForm.h"
#include "MainForm.h"

System::Void TestingProject::TestForm::мойПрофильToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    panel_Testing->Hide();
    MyUserProfileForm^ MyUserProfileForm1 = gcnew MyUserProfileForm(Login1, Password1);
    MyUserProfileForm1->ShowDialog();
    
}

void TestingProject::TestForm::loadTests()
{
	menuStrip1->Items->Clear();

	String^ testsDirectory = "tests";
	array<String^>^ testFiles = System::IO::Directory::GetFiles(testsDirectory, "*.txt");

	Dictionary<String^, List<String^>^>^ categories = gcnew Dictionary<String^, List<String^>^>();

	for (int i = 0; i < testFiles->Length; ++i)
	{
		String^ fileName = System::IO::Path::GetFileNameWithoutExtension(testFiles[i]);
		String^ category = fileName->Split('_')[0];

		if (!categories->ContainsKey(category))
		{
			categories[category] = gcnew List<String^>();
		}
		categories[category]->Add(fileName);
	}

	for each (KeyValuePair<String^, List<String^>^> entry in categories)
	{
		ToolStripMenuItem^ categoryItem = gcnew ToolStripMenuItem(entry.Key);
		for each (String ^ testFile in entry.Value)
		{
			ToolStripMenuItem^ testItem = gcnew ToolStripMenuItem(testFile);
			testItem->Click += gcnew EventHandler(this, &TestForm::OnCategoryItemClick);
			categoryItem->DropDownItems->Add(testItem);
		}
		menuStrip1->Items->Add(categoryItem);
	}
}

void TestingProject::TestForm::OnCategoryItemClick(Object^ sender, EventArgs^ e)
{
	panel_Testing->Visible = true;

	correctAnswers = 0;

	testQuestions->Clear();
	testOptions->Clear();
	testAnswers->Clear();
	currentQuestionIndex = 0;

	ToolStripMenuItem^ categoryItem = dynamic_cast<ToolStripMenuItem^>(sender);
	categoryName = categoryItem->Text;

	loadTestFromFile(categoryName);
	displayQuestion();
}

void TestingProject::TestForm::loadTestFromFile(String^ testName)
{
	String^ filePath = "tests/" + testName + ".txt";

	try
	{
		System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);
		String^ line;
		String^ currentQuestion = nullptr;
		List<String^>^ currentOptions = gcnew List<String^>();
		String^ currentAnswer = nullptr;
		bool readingQuestion = true;

		while ((line = reader->ReadLine()) != nullptr)
		{
			if (line->Trim()->Length == 0)
				continue;

			if (readingQuestion)
			{
				currentQuestion = line;
				readingQuestion = false;
			}
			else
			{
				if (line->StartsWith("Ответ:"))
				{
					currentAnswer = line->Substring(7);
					testQuestions->Add(currentQuestion);
					testOptions->Add(currentOptions);
					testAnswers->Add(currentAnswer);

					currentOptions = gcnew List<String^>();
					readingQuestion = true;
				}
				else
				{
					currentOptions->Add(line);
				}
			}
		}
		reader->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Ошибка при загрузке теста: " + ex->Message);
	}
}

void TestingProject::TestForm::displayQuestion()
{
	if (currentQuestionIndex >= testQuestions->Count)
	{
		int grade = 1 + (correctAnswers * 11 / testQuestions->Count);
		MessageBox::Show("Тест завершен! Ваши результаты: " + grade.ToString() + " баллов.");

		saveTestResults(categoryName, grade);

		panel_Testing->Visible = false;
		return;
	}

	text_question->Text = testQuestions[currentQuestionIndex];
	text_num->Text = (currentQuestionIndex + 1).ToString() + "/" + testQuestions->Count.ToString();

	List<String^>^ options = testOptions[currentQuestionIndex];

	answer1->Text = options[0];
	answer2->Text = options[1];
	answer3->Text = options[2];
	answer4->Text = options[3];

	answer1->Checked = false;
	answer2->Checked = false;
	answer3->Checked = false;
	answer4->Checked = false;
}

void TestingProject::TestForm::saveTestResults(String^ testName, int grade)
{
	try
	{
		String^ result = Login1 + ";" + testName + ";" + grade.ToString();

		String^ resultsFilePath = "TestResults.txt";

		System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(resultsFilePath, true);
		writer->WriteLine(result);
		writer->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Ошибка при сохранении результатов: " + ex->Message);
	}
}

System::Void TestingProject::TestForm::главнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MainForm^ MainForm1 = gcnew MainForm();
	MainForm1->Show();
	this->Hide();
}

System::Void TestingProject::TestForm::TestForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	FormManager::CloseAllForms();
}

void TestingProject::TestForm::OnAnswerClick(Object^ sender, EventArgs^ e)
{
	RadioButton^ clickedRadioButton = dynamic_cast<RadioButton^>(sender);
	int selectedAnswerIndex = -1;

	if (clickedRadioButton == answer1)
		selectedAnswerIndex = 0;
	else if (clickedRadioButton == answer2)
		selectedAnswerIndex = 1;
	else if (clickedRadioButton == answer3)
		selectedAnswerIndex = 2;
	else if (clickedRadioButton == answer4)
		selectedAnswerIndex = 3;


}

void TestingProject::TestForm::OnNextButtonClick(Object^ sender, EventArgs^ e)
{
	if (!answer1->Checked && !answer2->Checked && !answer3->Checked && !answer4->Checked)
	{
		MessageBox::Show("Пожалуйста, выберите ответ перед переходом к следующему вопросу.");
		return;
	}

	int selectedAnswerIndex = -1;
	if (answer1->Checked) selectedAnswerIndex = 0;
	else if (answer2->Checked) selectedAnswerIndex = 1;
	else if (answer3->Checked) selectedAnswerIndex = 2;
	else if (answer4->Checked) selectedAnswerIndex = 3;

	if (testAnswers[currentQuestionIndex] == (selectedAnswerIndex + 1).ToString())
	{
		correctAnswers++;
	}

	currentQuestionIndex++;
	displayQuestion();
}



