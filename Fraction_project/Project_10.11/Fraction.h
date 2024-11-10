#pragma once
#include <iostream>
using namespace std;

class Fraction {

    friend Fraction operator+(const Fraction& obj, const Fraction& _obj);
    friend Fraction operator-(const Fraction& obj, const Fraction& _obj);
    friend Fraction operator*(const Fraction& obj, const Fraction& _obj);
    friend Fraction operator/(const Fraction& obj, const Fraction& _obj);
    friend ostream& operator<<(ostream& output, const Fraction& obj);
    friend istream& operator>>(istream& input, Fraction& obj);

private:
    int numerator;
    int denominator;

public:

    Fraction(int _numerator, int _denominator) : numerator{ _numerator }, denominator{ _denominator } {
        if (denominator == 0) {
            std::cout << "Error! The denominator cannot be zero!" << endl;
            denominator = 1;
        }
    }
    Fraction() : Fraction(0, 1) {}
    Fraction(const Fraction& obj) : numerator{ obj.numerator }, denominator{ obj.denominator } {}
    ~Fraction() {}


    void setNumerator(int a);
    void setDenominator(int b);

    int getNumerator() const;
    int getDenominator() const;
};