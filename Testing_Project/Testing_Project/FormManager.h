#pragma once

using namespace System::Collections::Generic;
using namespace System::Windows::Forms;  
using namespace System;
using namespace System::IO;

public ref class FormManager
{
public:
	static List<Form^>^ ActiveForms = gcnew List<Form^>();
    static void CloseAllForms()
    {
        array<Form^>^ formsToClose = ActiveForms->ToArray();

        for each (Form ^ form in formsToClose)
        {
            if (form != nullptr && !form->IsDisposed)
            {
                form->Close();
            }
        }

        ActiveForms->Clear();
    }
};

