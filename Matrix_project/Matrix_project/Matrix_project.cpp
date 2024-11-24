#include "Matrix.h"

int main()
{
    setlocale(LC_ALL, "russian");
    Matrix<int> matr1(3, 3);
    matr1.FillRandMatrix();
    cout << "Матрица 1:\n";
    matr1.PrintMatrix();


    Matrix<int> matr2(3, 3);
    matr2.FillRandMatrix();
    cout << "Матрица 2:\n";
    matr2.PrintMatrix();

    Matrix<int> result = matr1 + matr2;
    cout << "Сумма матриц: \n";
    result.PrintMatrix();

    Matrix<int> result1 = matr1 - matr2;
    cout << "Разница матриц: \n";
    result1.PrintMatrix();

    Matrix<int> result2 = matr1 * matr2;
    cout << "Умножение матриц: \n";
    result2.PrintMatrix();

    cout << "Максимальный элемент матрицы 1: " << matr1.maxElem() << endl;
    cout << "Минимальный элемент матрицы 1: " << matr1.minElem() << endl;

    cout << "Максимальный элемент матрицы 2: " << matr2.maxElem() << endl;
    cout << "Минимальный элемент матрицы 2: " << matr2.minElem() << endl;

    cout << "Заполнение матрицы 1 вручную:\n" << endl;
    matr1.FillMatrix();
    cout << "Матрица 1 после ручного заполнения:\n";
    matr1.PrintMatrix();

    
}
  