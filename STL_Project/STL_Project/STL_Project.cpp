#include "CustomSharedPtr.h"
#include "CustomUniquePtr.h"
#include <iostream>

using namespace std;

int main() {
 
    setlocale(LC_ALL, "russian");
    cout << "Testing CustomUniquePtr:\n";
    CustomUniquePtr<int> uniquePtr(new int(10));
    cout << "��������: " << *uniquePtr << "\n";
    
    CustomUniquePtr<int> uniquePtr2 = move(uniquePtr);
    cout << "�������� ����� �����������: " << *uniquePtr2 << "\n";
    cout << "�������� ��������� ������ ����� ����: " << (uniquePtr.get() == nullptr) << "\n";

    int* rawPtr = uniquePtr2.release();
    cout << "�������������� �������� ���������: " << *rawPtr << "\n"; 
    delete rawPtr;
 
    cout << "\nTesting CustomSharedPtr:\n";
    CustomSharedPtr<int> sharedPtr(new int(20));

    cout << "��������: " << *sharedPtr << "\n";
    cout << "���������� �������������: " << sharedPtr.use_count() << "\n";

    CustomSharedPtr<int> sharedPtr2 = sharedPtr;
    cout << "���������� ������������� ����� �����������: " << sharedPtr.use_count() << "\n";
  
    CustomSharedPtr<int> sharedPtr3 = move(sharedPtr2);
    cout << "���������� ������������� ����� ����������: " << sharedPtr.use_count() << "\n";
    cout << "������������ ��������� ������ ����� �������� null: " << (sharedPtr2.get() == nullptr) << "\n";  

    sharedPtr3.reset(new int(30));
    cout << "����� ��������: " << *sharedPtr3 << "\n"; 
    cout << "���������� ������������� ����� ������: " << sharedPtr3.use_count() << "\n";

    return 0;
}