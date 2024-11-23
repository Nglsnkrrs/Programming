#include <iostream>
#include <vector>
using namespace std;


template<typename T>
T Max_Elem(vector<T>mass)
{
    if (!mass.empty()) {
        return *max_element(mass.begin(), mass.end());
    }
    else
    {
        cout << "������ ������" << endl;
        return T();
    }

}
template<typename T>
T Min_Elem(vector<T>mass)
{
    if (!mass.empty()) {
        return *min_element(mass.begin(), mass.end());
    }
    else
    {
        cout << "������ ������" << endl;
    }
}

template<typename T>
void BubbleSort(vector<T>& mass)
{
    T n = mass.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {  
            if (mass[j] > mass[j + 1]) {  
                swap(mass[j], mass[j + 1]);
            }
        }
    }
}
template<typename T>
void Print(vector<T>& mass)
{
    for (int i = 0; i < mass.size(); i++) {
        cout << mass[i] << "\t";
    }
    cout << endl;
}

template<typename T>
int BinarySearch(const vector<T>& mass, T value)
{
    int left = 0;
    int right = mass.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (mass[mid] == value) {
            return mid; 
        }
        else if (mass[mid] < value) {
            left = mid + 1; 
        }
        else {
            right = mid - 1; 
        }
    }

    return -1;
}
template<typename T>
void Replace_Elem(vector<T>& mass, T value, T newValue)
{
    for (auto& elem : mass) {
        if (elem == value) {
            elem = newValue;  
        }
    }
}

int main()
{
    setlocale(LC_ALL, "russian");
    srand(time(0));
    int size, value;
    int value1, newValue;
    cout << "������� ������ �������: ";
    cin >> size;
    vector<int> arr(size);

   
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }

    cout << "�������� ������: ";
    Print(arr);
    cout << "������������ �������: " << Max_Elem(arr) << endl;
    cout << "����������� �������: " << Min_Elem(arr) << endl;
    cout << "������ ����� ����������: ";
    BubbleSort(arr);
    Print(arr);

    cout << "������� �������� ��� ������: ";
    cin >> value;

    int result = BinarySearch(arr, value);

    if (result != -1) {
        cout << "������� ������ �� �������: " << result << endl;
    }
    else {
        cout << "������� �� ������ � �������" << endl;
    }

    cout << "������� ������� ��� ������: ";
    cin >> value;
    cout << "������� ����� �������� ��� ������: ";
    cin >> newValue;

    Replace_Elem(arr, value, newValue);
    cout << "������ ����� ������: ";
    Print(arr);

}

