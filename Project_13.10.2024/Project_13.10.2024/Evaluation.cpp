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
        cout << "����" << endl;
        return "����";
    }
    else if (approximate_volume < 10000) {
        cout << "����" << endl;
        return "����";
    }
    else {
        cout << "�������" << endl;
        return "�������";
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
            cout << "������� �� �������" << endl;
        }
    }

    cout << name1 << "��������� � ���������: ";
    Assigning_values(area1);

    cout << name2 << " ��������� � ���������: ";
    Assigning_values(area2);

    if (Assigning_values(area1) == Assigning_values(area2)) {
        cout << "��� ������� ��������� � ����� ���������." << endl;
    }
    else {
        cout << "������� ��������� � ������ ����������." << endl;
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
            cout << "������� �� �������" << endl;
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
        cout << "������� ��������� � ������ ����������." << endl;
    }

    if (area1 < area2) {
        cout << "�������: " << name1 << " < " << " �������: " << name2 << endl;
    }
    else if (area1 > area2) {
        cout << "�������: " << name1 << " > " << " �������: " << name2 << endl;
    }
    else {
        cout << "������� �����" << endl;
    }
      
}

void Evaluation::SaveToFileTXT(vector<Reservoir>& obj, const string& filename)
{
    ofstream file(filename);

    if (!file.is_open()) {
        cout << "�� ������� ������� ���� ��� ������" << endl;
        return;
    }
    for ( auto& res : obj) {
        float volume = Approximate_volume(res);
        float square = Square(res);
        string category = Assigning_values(volume);
 
        file << "��������: " << res.getName() << endl;
        file << "�����: " << res.getWidth() << endl;
        file << "������: " << res.getHeight() << endl;
        file << "������������ �������: " << res.getMaxDepth() << endl;
        file << "�����: " << volume << endl;
        file << "���������: " << category << endl;
        file << "�������: " << square << endl;
        file << "--------------------------" << endl;
    }
    file.close();

    cout << "���������� ������� ��������� � ���� " << filename << endl;
}

void Evaluation::LoadFromFileTXT(vector<Reservoir>& obj, const string& filename)
{
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "�� ������� ������� ���� ��� ������" << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        if (line.find("��������:") != string::npos) {
            Reservoir res;

            // ������ ����� ����������
            string name = line.substr(line.find(":") + 2); // �������� �������� ����� ": "
            res.setName(name.c_str());

            // ������ ����� (������) ����������
            getline(file, line);
            float width = stof(line.substr(line.find(":") + 2)); // ����������� ������ � �����
            res.setWidth(width);

            // ������ ������ (������) ����������
            getline(file, line);
            float height = stof(line.substr(line.find(":") + 2)); // ����������� ������ � �����
            res.setHeight(height);

            // ������ ������������ ������� ����������
            getline(file, line);
            float maxDepth = stof(line.substr(line.find(":") + 2)); // ����������� ������ � �����
            res.setMaxDepth(maxDepth);


            for (int i = 0; i <= 4; i++) {
                getline(file, line);
            }
            
            obj.push_back(res);
        }
    }

    file.close();

    cout << "���������� ������� ��������� �� ����� " << filename << endl;
}



