#include "Info.h"

void Info::Input()
{
	Reservoir data;

	char name[100];
	float w;
	float h;
	float d;

	cout << "������� ��������� �������(�� ���������� �����): ";
	cin >> name;
	data.setName(name);

	cout << "������� ������ �������: ";
	cin >> w;
	data.setWidth(w);

	cout << "������� ����� �������: ";
	cin >> h;
	data.setHeight(h);

	cout << "������� ������������ ������� �������: ";
	cin >> d;
	data.setMaxDepth(d);

	Data_Res.push_back(data);

}

void Info::Display_Data()
{
	for (auto& i : Data_Res) {
		i.Display();
	}

}
