#include "CustomSharedPtr.h"
#include "CustomUniquePtr.h"
#include <iostream>

using namespace std;

int main() {
 
    setlocale(LC_ALL, "russian");
    cout << "Testing CustomUniquePtr:\n";
    CustomUniquePtr<int> uniquePtr(new int(10));
    cout << "Значение: " << *uniquePtr << "\n";
    
    CustomUniquePtr<int> uniquePtr2 = move(uniquePtr);
    cout << "Значение после перемещения: " << *uniquePtr2 << "\n";
    cout << "Исходный указатель теперь равен нулю: " << (uniquePtr.get() == nullptr) << "\n";

    int* rawPtr = uniquePtr2.release();
    cout << "Необработанное значение указателя: " << *rawPtr << "\n"; 
    delete rawPtr;
 
    cout << "\nTesting CustomSharedPtr:\n";
    CustomSharedPtr<int> sharedPtr(new int(20));

    cout << "Значение: " << *sharedPtr << "\n";
    cout << "Количество использований: " << sharedPtr.use_count() << "\n";

    CustomSharedPtr<int> sharedPtr2 = sharedPtr;
    cout << "Количество использований после копирования: " << sharedPtr.use_count() << "\n";
  
    CustomSharedPtr<int> sharedPtr3 = move(sharedPtr2);
    cout << "Количество использований после перемещния: " << sharedPtr.use_count() << "\n";
    cout << "Перемещенный указатель теперь имеет значение null: " << (sharedPtr2.get() == nullptr) << "\n";  

    sharedPtr3.reset(new int(30));
    cout << "Новое значение: " << *sharedPtr3 << "\n"; 
    cout << "Количество использований после сброса: " << sharedPtr3.use_count() << "\n";

    return 0;
}