#include "String.h"

void String::SetStr(const char* s)
{
	
	this->s = new char[strlen(s) + 1];
	strcpy_s(this->s, strlen(s) + 1, s);
}

void String::SetSize(int size)
{
	this->size = size;
}

char String::GetStr() const
{
	return *this -> s;
}

int String::GetSize() const
{
	return this-> size;
}

int String::GetCount()
{
	return count;
}

void String::Input()
{
	cout << "Введите строку: " << endl;
	cin.ignore();
	cin.getline(s, size + 1);
}

void String::Output()
{
	cout << "Строка: " << s <<endl;
}

int String::count = 0;
