#pragma once
#include <iostream>
using namespace std;

class Fraction {

    friend Fraction operator+(const Fraction& obj, const Fraction& _obj) {
        int newDenom = obj.denominator * _obj.denominator;
        int newNum = (obj.numerator * _obj.denominator) + (_obj.numerator * obj.denominator);
        return Fraction(newNum, newDenom); 
    }

    friend Fraction operator-(const Fraction& obj, const Fraction& _obj) {
        int newDenom = obj.denominator * _obj.denominator;
        int newNum = (obj.numerator * _obj.denominator) - (_obj.numerator * obj.denominator);
        return Fraction(newNum, newDenom); 
    }

    /*friend Fraction operator*(const Fraction& obj, const Fraction& _obj);
    friend Fraction operator/(const Fraction& obj, const Fraction& _obj);*/

    friend ostream& operator<<(ostream& output, const Fraction& obj) {
        output << obj.numerator << " / " << obj.denominator;
        return output;
    }

    friend istream& operator>>(istream& input, Fraction& obj) {
        input >> obj.numerator;
        input >> obj.denominator;
        if (obj.denominator == 0) { 
            std::cout << "Error! The denominator cannot be zero!" << endl;
            obj.denominator = 1; 
        }
        return input;
    }

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

  
    void setNumerator(int a) { numerator = a; }
    void setDenominator(int b) {
        if (b != 0) {
            denominator = b;
        }
        else {
            std::cout << "Error! The denominator cannot be zero!" << endl;
            denominator = 1;
        }
    }

    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }
};


