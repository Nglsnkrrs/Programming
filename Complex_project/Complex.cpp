#include "Complex.h"

Complex operator+(Complex& obj, const Complex& _obj)
{
     obj.real += _obj.real;
     obj.mean += _obj.mean;
     return obj;
}

Complex operator-(Complex& obj, const Complex& _obj)
{
    obj.real -= _obj.real;
    obj.mean -= _obj.mean;
    return obj;
}

Complex operator*(Complex& obj, const Complex& _obj)
{
    obj.real *= _obj.real;
    obj.mean *= _obj.mean;
    return obj;
}

Complex operator/(Complex& obj, const Complex& _obj)
{
    obj.real /= _obj.real;
    obj.mean /= _obj.mean;
    return obj;
}

ostream& operator<<(ostream& out, const Complex& obj)
{
    out << obj.real << " + " << obj.mean << "i\n";
    return out;
}
istream& operator>>(istream& in, Complex& obj)
{
    in >> obj.real; 
    in.ignore(1); 
    in >> obj.mean; 
    in.ignore(1);
    return in;
}

bool Complex::operator!=(const Complex& obj)
{
    return this->real != obj.real or this->mean != obj.mean;
}

bool Complex::operator==(const Complex& obj)
{
    return this->real == obj.real or this->mean != obj.mean;
}

void Complex::setReal(double real)
{
    this->real = real;
}

void Complex::setMean(double mean)
{
    this->mean = mean;
}

double Complex::gatReal() const
{
    return this->real;
}

double Complex::getMean() const
{
    return this->mean;
}
