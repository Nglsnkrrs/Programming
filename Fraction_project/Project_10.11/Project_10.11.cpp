#include "Fraction.h"

int main() {
    Fraction f1(0, 1);
    Fraction f2(0, 1);


    cout << "Please enter a Fraction 1\n";
    cout << "Enter the numerator: \n";
    cin >> f1;
    cout << "Please enter a Fraction 2\n";
    cout << "Enter the denominator: \n";
    cin >> f2;
    cout << "Fraction 1: " << f1 << endl;
    cout << "Fraction 2: " << f2 << endl;
    cout << "---------------------" << endl;
    
    Fraction result = f1 + f2;
    cout << "Sum: " << result << endl;

    result = f1 - f2;
    cout << "Subtraction: " << result << endl;

    result = f1 * f2;
    cout << "Multiplication: " << result << endl;

    result = f1 / f2;
    cout << "Division: " << result << endl;
    return 0;
}
