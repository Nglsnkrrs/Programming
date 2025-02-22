#pragma once
#include "Person.h"
class Apartment {
private:
    Person* residents;
    int residentCount;
    int apartmentNumber;

public:
    Apartment() : residents(nullptr), residentCount(0), apartmentNumber(0) {}

    Apartment(int number) : residents(nullptr), residentCount(0), apartmentNumber(number) {}

    Apartment(const Apartment& other) : apartmentNumber(other.apartmentNumber), residentCount(other.residentCount) {
        residents = new Person[residentCount];
        for (int i = 0; i < residentCount; ++i) {
            residents[i] = other.residents[i];
        }
    }

    ~Apartment() {
        delete[] residents;
    }

    Apartment& operator=(const Apartment& other) {
        if (this != &other) {
            delete[] residents;
            apartmentNumber = other.apartmentNumber;
            residentCount = other.residentCount;
            residents = new Person[residentCount];
            for (int i = 0; i < residentCount; ++i) {
                residents[i] = other.residents[i];
            }
        }
        return *this;
    }

    void addResident(const Person& person) {
        Person* newResidents = new Person[residentCount + 1];
        for (int i = 0; i < residentCount; ++i) {
            newResidents[i] = residents[i];
        }
        newResidents[residentCount] = person;
        delete[] residents;
        residents = newResidents;
        residentCount++;
    }

    void print() const {
        cout << " вартира #" << apartmentNumber << endl;
        for (int i = 0; i < residentCount; ++i) {
            residents[i].print();
        }
    }
};
