#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Matrix
{
private:
	T **matr;
	int cols;
	int rows;

    void clear() {
        if (matr) {
            for (int i = 0; i < rows; ++i) {
                delete[] matr[i];
            }
            delete[] matr;
            matr = nullptr;
        }
    }

    void allocate(T r, T c) {
        rows = r;
        cols = c;
        matr = new T * [rows];
        for (T i = 0; i < rows; ++i) {
            matr[i] = new T[cols]();
        }
    }

public:
	Matrix() : rows(0), cols(0), matr(nullptr) {}
    Matrix(int r, int c) : rows(0), cols(0), matr(nullptr) {
        allocate(r, c);
    }
	~Matrix() {
		clear();
	}
    T getRows() const {
        return rows;
    }

    
    T getCols() const {
        return cols;
    }

	void PrintMatrix() const
    {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << matr[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    
    }
    void FillRandMatrix() 
    {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                matr[i][j] = rand() % 100 + 1;
            }
        }
    }
	void FillMatrix()
    {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> matr[i][j];
            }
        }
    }

	T maxElem() const
    {
        T max = matr[0][0];
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (matr[i][j] > max) {
                    max = matr[i][j];
                }
            }
        }
        return max;
    }

    T minElem() const 
    {
        T min = matr[0][0];
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (matr[i][j] < min) {
                    min = matr[i][j];
                }
            }
        }
        return min;
    }
    Matrix operator+(const Matrix& obj) const 
    {
        Matrix res(rows, cols);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                res.matr[i][j] = matr[i][j] + obj.matr[i][j];
            }
        }
        return res;
    }
    Matrix operator-(const Matrix& obj) const
    {
        Matrix res(rows, cols);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                res.matr[i][j] = matr[i][j] - obj.matr[i][j];
            }
        }
        return res;
    }

    Matrix operator*(const Matrix& obj) const {
       
        Matrix res(rows, obj.cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < obj.cols; ++j) {
                res.matr[i][j] = 0;
                for (size_t k = 0; k < cols; ++k) {
                    res.matr[i][j] += matr[i][k] * obj.matr[k][j];
                }
            }
        }
        return res;
    }
};

