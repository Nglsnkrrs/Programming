#include "Fraction.h"

Fraction operator+(const Fraction& obj, const Fraction& _obj)
{
    int newDenom = obj.denominator * _obj.denominator;
    int newNum = (obj.numerator * _obj.denominator) + (_obj.numerator * obj.denominator);
    return Fraction(newNum, newDenom);

}

Fraction operator-(const Fraction& obj, const Fraction& _obj)
{
    int newDenom = obj.denominator * _obj.denominator;
    int newNum = (obj.numerator * _obj.denominator) - (_obj.numerator * obj.denominator);
    return Fraction(newNum, newDenom);


}

Fraction operator*(const Fraction& obj, const Fraction& _obj)
{
    return Fraction(obj.numerator * _obj.numerator, obj.denominator * _obj.denominator);
}

Fraction operator/(const Fraction& obj, const Fraction& _obj) 
{
    return Fraction(obj.numerator * _obj.denominator, obj.denominator * _obj.numerator);
}

ostream& operator<<(ostream& output, const Fraction& obj) {
    output << obj.numerator << " / " << obj.denominator;
    return output;
}

istream& operator>>(istream& input, Fraction& obj) {
    input >> obj.numerator;
    input >> obj.denominator;
    if (obj.denominator == 0) {
        std::cout << "Error! The denominator cannot be zero!" << endl;
        obj.denominator = 1;
    }
    return input;
}

void Fraction::setNumerator(int a)
{
     numerator = a; 
}

void Fraction::setDenominator(int b)
{
    if (b != 0) {
        denominator = b;
    }
    else {
        std::cout << "Error! The denominator cannot be zero!" << endl;
        denominator = 1;
    }
}

int Fraction::getNumerator() const
{
    return numerator;
}

int Fraction::getDenominator() const
{
    return denominator;
}
