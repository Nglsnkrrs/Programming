//#ifndef MARTIX_CPP
//#define MARTIX_CPP
// 
//
//
//
//
//template <typename T>
//void Matrix<T>::PrintMatrix()
//{
//    for (const auto & row : matr) {
//        for (int element : row) {
//            cout << element << "\t";
//        }
//        cout << endl;
//    }
//    cout << endl;
//}
//
//template<typename T>
//void Matrix<T>::FillRandMatrix()
//{
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            matr[i][j] = rand() % 100 + 1;
//        }
//    }
//}
//
//template<typename T>
//void Matrix<T>::FillMatrix()
//{
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cin >> matr[i][j];
//        }
//    }
//
//}
//template<typename T>
//T minElem()
//{
//    T min = matr[0][0];
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            if (matr[0][0] < min) {
//                min = matr[0][0]
//            }
//        }
//    }
//    return min;
//}
//template<typename T>
//T maxElem()
//{
//    T max = matr[0][0];
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            if (matr[0][0] > min) {
//                max = matr[0][0];
//            }
//        }
//    }
//    return max;
//}
//#include "Matrix.h"
//#endif MARTIX_CPP