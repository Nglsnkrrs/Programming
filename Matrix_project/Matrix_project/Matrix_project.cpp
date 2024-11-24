#include "Matrix.h"

int main()
{
    setlocale(LC_ALL, "russian");
    Matrix<int> matr1(3, 3);
    matr1.FillRandMatrix();
    cout << "������� 1:\n";
    matr1.PrintMatrix();


    Matrix<int> matr2(3, 3);
    matr2.FillRandMatrix();
    cout << "������� 2:\n";
    matr2.PrintMatrix();

    Matrix<int> result = matr1 + matr2;
    cout << "����� ������: \n";
    result.PrintMatrix();

    Matrix<int> result1 = matr1 - matr2;
    cout << "������� ������: \n";
    result1.PrintMatrix();

    Matrix<int> result2 = matr1 * matr2;
    cout << "��������� ������: \n";
    result2.PrintMatrix();

    cout << "������������ ������� ������� 1: " << matr1.maxElem() << endl;
    cout << "����������� ������� ������� 1: " << matr1.minElem() << endl;

    cout << "������������ ������� ������� 2: " << matr2.maxElem() << endl;
    cout << "����������� ������� ������� 2: " << matr2.minElem() << endl;

    cout << "���������� ������� 1 �������:\n" << endl;
    matr1.FillMatrix();
    cout << "������� 1 ����� ������� ����������:\n";
    matr1.PrintMatrix();

    
}
  