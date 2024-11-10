#pragma once
#include <iostream>

using namespace std;

class Complex
{

	friend Complex operator+(Complex& obj, const Complex& _obj);
	friend Complex operator-(Complex& obj, const Complex& _obj);
	friend Complex operator*(Complex& obj, const Complex& _obj);
	friend Complex operator/(Complex& obj, const Complex& _obj);
	friend ostream& operator<<(ostream& out, const Complex& _obj);
	friend istream& operator>>(istream& in, Complex& _obj);

private:
	double real;
	double mean;
public:
	Complex(double _real, double _mean) : real(_real), mean(_mean){}
	Complex() :Complex(0, 0) {}
	Complex(const Complex& obj): real(obj.real), mean(obj.mean){}

	bool operator!=(const Complex& _obj);
	bool operator==(const Complex& _obj);

	void setReal(double real);
	void setMean(double mean);

	double gatReal() const;
	double getMean() const;

};

