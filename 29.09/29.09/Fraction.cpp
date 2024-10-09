#include "Fraction.h"

void Fraction::input()
{
    int a, b;
    cout << "Please enter a numerator: ";
    cin >> a;
    cout << "Please enter a denominator: ";
    cin >> b;

    setNumerator(a);
    setDenominator(b);
}

void Fraction::output() 
{
    cout << "You entered a fraction: " << numerator << "/" << denominator << endl;
}


float Fraction::fractionTranslation() 
{
    return static_cast<float>(numerator) / denominator;
};


float Fraction::addition( Fraction& f1,  Fraction& f2) {

   float num1 = f1.fractionTranslation();
   float num2 = f2.fractionTranslation();

    return num1 + num2;
}
float Fraction::subtraction(Fraction& f1, Fraction& f2) {
    float num1 = f1.fractionTranslation();
    float num2 = f2.fractionTranslation();
    return num1 - num2;
}
float Fraction::multiplication(Fraction& f1, Fraction& f2) {
    float num1 = f1.fractionTranslation();
    float num2 = f2.fractionTranslation();
    return num1 * num2;
}
float Fraction::division(Fraction& f1, Fraction& f2) {
    float num1 = f1.fractionTranslation();
    float num2 = f2.fractionTranslation();
    return num1 / num2;
}