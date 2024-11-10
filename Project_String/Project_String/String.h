#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
	char* s;
	int size;
	static int count;
public:

	String()
	{
		size = 81;
		s = new char[size];
		count++;
	};

	String(const String& obj) : size{ obj.size }
	{
		if (obj.s) {
			this->s = new char[strlen(obj.s) + 1];
			strcpy_s(this->s, strlen(obj.s) + 1, obj.s);
		}
		else {
			this->s = nullptr;
		}
		count++;
	}

	String(size_t _size) : size(_size) {
		s = new char[size + 1];
		s[0] = '\0';
		count++;
	}

	String(const char* PersonStr) : size(strlen(PersonStr)) {
		s = new char[size + 1];
		strcpy_s(s, size + 1, PersonStr);
		count++;
	}

	~String()
	{
		delete[] this->s;
		count--;
	}

	void SetStr(const char* s);
	void SetSize(int size);

	char GetStr() const;
	int GetSize() const;
	static int GetCount();

	void Input();
	void Output();

};

