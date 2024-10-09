#pragma once
#include <iostream>
using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
public:

	void setNumerator(int a) { numerator = a; };
	void setDenominator(int b)
	{ 
		if ( b != 0)
		{
			denominator = b;
		}
		else {
			cout << "Error! The denominator cannot be zero!" << endl;
			denominator = 1;
		}
		
	};

	int getNumerator() {
		return numerator;
	};
	int getDenominator() {

		return denominator;
	}

	void input();
	void output();

	float fractionTranslation() ;
	static float addition( Fraction& f1,  Fraction& f2);
	static float subtraction(Fraction& f1, Fraction& f2);
	static float multiplication(Fraction& f1, Fraction& f2);
	static float division(Fraction& f1, Fraction& f2);
};

