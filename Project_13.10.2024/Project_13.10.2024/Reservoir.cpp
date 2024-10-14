#include "Reservoir.h"

void Reservoir::setName(const char* _Name)
{
	delete[] this-> Name;

	this->Name = new char[strlen(_Name) + 1];
	strcpy_s(this->Name, strlen(_Name) + 1, _Name);
}

void Reservoir::setWidth(float _Width)
{
	this->Width = _Width;
}

void Reservoir::setHeight(float _Height)
{
	this->Height = _Height;
}


void Reservoir::setMaxDepth(float _MaxDepth)
{
	this->Max_depth = _MaxDepth;
}

const char* Reservoir::getName()
{
	return this->Name;
}

const float Reservoir::getWidth()
{
	return this->Width;
}

const float Reservoir::getHeight()
{
	return this->Height;
}

const float Reservoir::getMaxDepth()
{
	return this->Max_depth;
}

void Reservoir::Display()
{
	cout << "Водоем: "<< Name << "\n";
	cout << "Ширина: " << Width << "\n";
	cout << "Длина: " << Height << "\n";
	cout << "Максимальная глубина: " << Max_depth << "\n";
}
