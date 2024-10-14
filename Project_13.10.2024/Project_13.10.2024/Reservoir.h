#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Reservoir
{
private:
	char* Name;
	float Width;
	float Height;
	float Max_depth;
public:

	Reservoir() : Name(), Width(0), Height(0), Max_depth(0) {}

	void setName(const char* _Name);
	void setWidth(float _Width);
	void setHeight(float _Height);
	void setMaxDepth(float _MaxDepth);

	const char* getName();
	const float getWidth();
	const float getHeight();
	const float getMaxDepth();

	void Display();
};

