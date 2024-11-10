#include "Complex.h"


int main()
{
    setlocale(LC_ALL, "russian");
    Complex c1(12, 59.384830);
    Complex c2(65, 11.96654614);
    Complex c3(12, 59.384830);

    cout << c1 << endl;

    cin >> c2;
    cout << c2 << endl;
    
    cout << c3 << endl;
    
    cout << "Сложение: " << c1 + c2 << endl;
    cout << "Вычитание: " << c1 - c2 << endl;
    cout << "Умножение: " << c1 * c2 << endl;
    cout << "Деление: " << c1 / c2 << endl;


    cout << ((c1==c2)?"yes, true": "no, false") << endl;
    cout << ((c1 == c3) ? "yes, true" : "no, false") << endl;
    cout << ((c1 != c2) ? "yes, true" : "no, false") << endl;
}
