#include "String.h"

int main()
{
    setlocale(LC_ALL, "russian");
    int choice;
    int size;

    while (true) 
    {
        cout << "1. Работа конструктора по умолчанию (80символов)" << endl;
        cout << "2. Работа конструктора с произвольным размером строки" << endl;
        cout << "3. Инициализация строки заданным значением" << endl;
        cout << "4. Вывод количеста объектов" << endl;
        cout << "5. Выход" << endl;
        cout << "Ваш выбор: " << endl;
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
            cout << "Введите размер строки: " << endl;
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
            cout << "Количество созданных объектов String: " << String::GetCount() << endl;
            break;
        }
        case 5:
            exit(0);
        }
    }
    
}

