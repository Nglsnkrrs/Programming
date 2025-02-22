#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
    char* name;
    int age;

public:
    Person() : name(nullptr), age(0) {}

    Person(const char* name, int age) : age(age) {
        this->name = new char[strlen(name) + 1];
        strcpy_s(this->name, strlen(name) + 1, name);
    }

    Person(const Person& other) : age(other.age) {
        name = new char[strlen(other.name) + 1];
        strcpy_s(name, strlen(other.name) + 1, other.name);
    }

    ~Person() {
        delete[] name;
    }

    Person& operator=(const Person& other) {
        if (this != &other) {
            delete[] name;
            name = new char[strlen(other.name) + 1];
            strcpy_s(name, strlen(other.name) + 1, other.name);
            age = other.age;
        }
        return *this;
    }

    const char* getName() const { return name; }
    int getAge() const { return age; }

    void setName(const char* name) {
        delete[] this->name;
        this->name = new char[strlen(name) + 1];
        strcpy_s(this->name, strlen(name) + 1, name);
    }

    void setAge(int age) { this->age = age; }

    void print() const {
        cout << "Имя: " << name << ", Возраст: " << age << endl;
    }
};