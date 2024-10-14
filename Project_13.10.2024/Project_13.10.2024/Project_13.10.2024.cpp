#include "Evaluation.h"


int main()
{
    setlocale(LC_ALL, "russian");
    Info info;
    Evaluation eval;
    int choice;
    char n1[100], n2[100];

    while (true) {
        cout << "1. Добавить водоем" << endl;
        cout << "2. Вывести на экран водоемы" << endl;
        cout << "3. Вычислить приблизительный объем" << endl;
        cout << "4. Вычислить площадь" << endl;
        cout << "5. Проверить относятся ли водоесы к одному типу" << endl;
        cout << "6. Сравнить площади водоемов одного типа" << endl;
        cout << "7. Записать данные в файл" << endl;
        cout << "8. Прочитать данные из файла" << endl;
        cout << "9. Выход" << endl;
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            info.Input();
            break;
        case 2:
            info.Display_Data();
            break;
        case 3:
        {
            cout << "Введите название водоема, объем которого необходимо посчитать: ";
            cin >> n1;
            for (auto& i : info.Data_Res) {
                if (strcmp(i.getName(), n1) == 0) {
                    float volume = eval.Approximate_volume(i);
                    cout << "Объем водоема \"" << n1 << "\": " << volume << " куб. метров" << endl;
                    break;
                }
            }
            break;
        }
        case 4:
        {
            cout << "Введите название водоема, площадь которого необходимо посчитать: ";
            cin >> n1;
            for (auto& i : info.Data_Res) {
                if (strcmp(i.getName(), n1) == 0) {
                    float area = eval.Square(i);
                    cout << "Площадь водоема \"" << n1 << "\": " << area << " квадратных метров" << endl;
                    break;
                }
            }
            break;
        }
        case 5:
        {
            cout << "Введите названия водоемов для сравнения: " << endl;
            cout << "Первый водоем: ";
            cin >> n1;
            cout << "Второй водоем: ";
            cin >> n2;
            eval.Comparison(info.Data_Res, n1, n2);
            break;
        }
        case 6:
        {
            cout << "Введите названия водоемов для сравнения площадей: " << endl;
            cout << "Первый водоем: ";
            cin >> n1;
            cout << "Второй водоем: ";
            cin >> n2;
            eval.Comparison_Square(info.Data_Res, n1, n2);
            break;

        }
        case 7:
            eval.SaveToFileTXT(info.Data_Res, "Evaluation.txt");
            break;
        case 8:
            eval.LoadFromFileTXT(info.Data_Res, "Evaluation.txt");
            break;
        case 9:
            exit(0);
        }
    }
}

