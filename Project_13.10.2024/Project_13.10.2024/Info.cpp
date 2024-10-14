#include "Info.h"

void Info::Input()
{
	Reservoir data;

	char name[100];
	float w;
	float h;
	float d;

	cout << "¬ведите назавание водоема(на английском €зыке): ";
	cin >> name;
	data.setName(name);

	cout << "¬ведите ширину водоема: ";
	cin >> w;
	data.setWidth(w);

	cout << "¬ведите длину водоема: ";
	cin >> h;
	data.setHeight(h);

	cout << "¬ведите максимальную глубину водоема: ";
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
