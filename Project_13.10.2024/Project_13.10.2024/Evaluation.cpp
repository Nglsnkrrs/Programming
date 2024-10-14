#include "Evaluation.h"

float Evaluation::Approximate_volume( Reservoir& obj) {
    return obj.getWidth() * obj.getHeight() * obj.getMaxDepth();
}

float Evaluation::Square( Reservoir& obj) {
    return obj.getWidth() * obj.getHeight();
}

string Evaluation::Assigning_values(float approximate_volume)
{
    if (approximate_volume < 5000) {
        cout << "Пруд" << endl;
        return "Пруд";
    }
    else if (approximate_volume < 10000) {
        cout << "Море" << endl;
        return "Море";
    }
    else {
        cout << "Бассейн" << endl;
        return "Бассейн";
    } 
}

void Evaluation::Comparison(vector<Reservoir>& obj, char* name1, char* name2)
{
    float area1 = 0, area2 = 0;
    
    for (auto& i : obj) {
        if (strcmp(i.getName(), name1) == 0) {
            area1 = Approximate_volume(i);
            
        }
        else if (strcmp(i.getName(), name2) == 0) {
            area2 = Approximate_volume(i);
            
        }
        else 
        {
            cout << "Объекты не найдены" << endl;
        }
    }

    cout << name1 << "относится к категории: ";
    Assigning_values(area1);

    cout << name2 << " относится к категории: ";
    Assigning_values(area2);

    if (Assigning_values(area1) == Assigning_values(area2)) {
        cout << "Оба объекта относятся к одной категории." << endl;
    }
    else {
        cout << "Объекты относятся к разным категориям." << endl;
    }
}

void Evaluation::Comparison_Square(vector<Reservoir>& obj, char* name1, char* name2)
{
    float area1 = 0, area2 = 0;
    
    for (auto& i : obj) {
        if (strcmp(i.getName(), name1) == 0) {
            area1 = Approximate_volume(i);

        }
        else if (strcmp(i.getName(), name2) == 0) {
            area2 = Approximate_volume(i);

        }
        else
        {
            cout << "Объекты не найдены" << endl;
        }
    }

    if (Assigning_values(area1) == Assigning_values(area2)) {
        for (auto& i : obj) {
            if (strcmp(i.getName(), name1) == 0) {
                area1 = Square(i);

            }
            else if (strcmp(i.getName(), name2) == 0) {
                area2 = Square(i);

            }
        }
    }
    else {
        cout << "Объекты относятся к разным категориям." << endl;
    }

    if (area1 < area2) {
        cout << "Площадь: " << name1 << " < " << " площади: " << name2 << endl;
    }
    else if (area1 > area2) {
        cout << "Площадь: " << name1 << " > " << " площади: " << name2 << endl;
    }
    else {
        cout << "Площади равны" << endl;
    }
      
}

void Evaluation::SaveToFileTXT(vector<Reservoir>& obj, const string& filename)
{
    ofstream file(filename);

    if (!file.is_open()) {
        cout << "Не удалось открыть файл для записи" << endl;
        return;
    }
    for ( auto& res : obj) {
        float volume = Approximate_volume(res);
        float square = Square(res);
        string category = Assigning_values(volume);
 
        file << "Название: " << res.getName() << endl;
        file << "Длина: " << res.getWidth() << endl;
        file << "Ширина: " << res.getHeight() << endl;
        file << "Максимальная глубина: " << res.getMaxDepth() << endl;
        file << "Объем: " << volume << endl;
        file << "Категория: " << category << endl;
        file << "Площадь: " << square << endl;
        file << "--------------------------" << endl;
    }
    file.close();

    cout << "Информация успешно сохранена в файл " << filename << endl;
}

void Evaluation::LoadFromFileTXT(vector<Reservoir>& obj, const string& filename)
{
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Не удалось открыть файл для чтения" << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        if (line.find("Название:") != string::npos) {
            Reservoir res;

            // Чтение имени резервуара
            string name = line.substr(line.find(":") + 2); // Получаем значение после ": "
            res.setName(name.c_str());

            // Чтение длины (ширины) резервуара
            getline(file, line);
            float width = stof(line.substr(line.find(":") + 2)); // Преобразуем строку в число
            res.setWidth(width);

            // Чтение ширины (высоты) резервуара
            getline(file, line);
            float height = stof(line.substr(line.find(":") + 2)); // Преобразуем строку в число
            res.setHeight(height);

            // Чтение максимальной глубины резервуара
            getline(file, line);
            float maxDepth = stof(line.substr(line.find(":") + 2)); // Преобразуем строку в число
            res.setMaxDepth(maxDepth);


            for (int i = 0; i <= 4; i++) {
                getline(file, line);
            }
            
            obj.push_back(res);
        }
    }

    file.close();

    cout << "Информация успешно загружена из файла " << filename << endl;
}



