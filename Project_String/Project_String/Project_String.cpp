#include "String.h"

int main()
{
    setlocale(LC_ALL, "russian");
    int choice;
    int size;

    while (true) 
    {
        cout << "1. ������ ������������ �� ��������� (80��������)" << endl;
        cout << "2. ������ ������������ � ������������ �������� ������" << endl;
        cout << "3. ������������� ������ �������� ���������" << endl;
        cout << "4. ����� ��������� ��������" << endl;
        cout << "5. �����" << endl;
        cout << "��� �����: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1: 
        {
            String s1;
            s1.Input();
            s1.Output();
            break;
        }
        case 2: 
        {
            cout << "������� ������ ������: " << endl;
            cin >> size;
            String s2(size);
            s2.Input();
            s2.Output();
            break;
        }
        case 3: 
        {
            String s3("Cat");
            s3.Output();
            break;
        }
        case 4:
        {
            cout << "���������� ��������� �������� String: " << String::GetCount() << endl;
            break;
        }
        case 5:
            exit(0);
        }
    }
    
}

