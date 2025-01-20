#include "ResultForm.h"

System::Void TestingProject::ResultForm::ResultForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->comboBox_Categories->Items->Clear();

	array<System::String^>^ testFiles = System::IO::Directory::GetFiles("tests", "*.txt");
	System::Collections::Generic::List<System::String^>^ categories = gcnew System::Collections::Generic::List<System::String^>();

	for (int i = 0; i < testFiles->Length; ++i)
	{
		String^ fileName = System::IO::Path::GetFileNameWithoutExtension(testFiles[i]);
		category = fileName->Split('_')[0];

		if (!categories->Contains(category))
		{
			categories->Add(category);
		}
	}

	for each (String ^ category in categories)
	{
		comboBox_Categories->Items->Add(category);
	}
}

void TestingProject::ResultForm::LoadTestResultsByCategory(String^ category)
{
	String^ filePath = "TestResults.txt";
	array<System::String^>^ results = System::IO::File::ReadAllLines(filePath);

	String^ resultText = "Результаты тестов по категории \"" + category + "\":\n";
	bool dataFound = false;

	for each (System::String ^ line in results)
	{
		array<System::String^>^ resultData = line->Split('/');

		if (resultData->Length == 3)
		{
			String^ userLogin = resultData[0]->Trim();
			String^ testFullName = resultData[1]->Trim();
			String^ testId = resultData[2]->Trim();

			array<System::String^>^ testNameParts = testFullName->Split('_');
			String^ testCategory = testNameParts[0];

			if (testCategory->ToLower() == category->Trim()->ToLower())
			{
				resultText += "Логин: " + userLogin + ", Тест: " + testFullName + ", Идентификатор: " + testId + "\n";
				dataFound = true;
			}
		}
	}

	if (dataFound)
	{
		this->label_Results->Text = resultText;
	}
	else
	{
		this->label_Results->Text = "Нет результатов для выбранной категории.";
	}
}


void TestingProject::ResultForm::LoadTestResultsByUser(String^ userLogin)
{
	String^ filePath = "TestResults.txt";
	array<System::String^>^ results = System::IO::File::ReadAllLines(filePath);

	String^ resultText = "Результаты тестов для пользователя \"" + userLogin + "\":\n";

	for each (System::String ^ line in results)
	{
		array<System::String^>^ resultData = line->Split('/');
		if (resultData->Length == 3 && resultData[0] == userLogin)
		{
			String^ categoryName = resultData[1];
			String^ testId = resultData[2];

			resultText += "Категория: " + categoryName + ", Тест: " + testId + "\n";
		}
	}

	this->label_Results->Text = resultText;
}

System::Void TestingProject::ResultForm::comboBox_Categories_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedCategory = comboBox_Categories->SelectedItem->ToString();

	LoadTestResultsByCategory(selectedCategory);
}

System::Void TestingProject::ResultForm::button_SearchUser_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ userLogin = this->textBox_UserLogin->Text;
	String^ selectedCategory = comboBox_Categories->SelectedItem->ToString();

	if (String::IsNullOrWhiteSpace(userLogin))
	{
		LoadTestResultsByCategory(selectedCategory);
	}
	else
	{
		LoadTestResultsByUser(userLogin);
	}
}