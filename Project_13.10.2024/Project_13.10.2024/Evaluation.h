#pragma once
#include "Info.h"

class Evaluation
{
public:
	float Approximate_volume( Reservoir& obj);
	float Square( Reservoir& obj);
	string Assigning_values(float approximate_volume);
	void Comparison(vector<Reservoir>& obj, char* name1, char* name2);
	void Comparison_Square(vector<Reservoir>& obj, char* name1, char* name2);
	void SaveToFileTXT(vector<Reservoir>& reservoirs, const string& filename);
	void LoadFromFileTXT(vector<Reservoir>& obj, const string& filename);
};

