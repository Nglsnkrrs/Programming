#pragma once
#include "Apartment.h"
class Building {
private:
    Apartment* apartments;
    int apartmentCount;

public:
    Building() : apartments(nullptr), apartmentCount(0) {}

    Building(int count) : apartmentCount(count) {
        apartments = new Apartment[apartmentCount];
        for (int i = 0; i < apartmentCount; ++i) {
            apartments[i] = Apartment(i + 1);
        }
    }

    Building(const Building& other) : apartmentCount(other.apartmentCount) {
        apartments = new Apartment[apartmentCount];
        for (int i = 0; i < apartmentCount; ++i) {
            apartments[i] = other.apartments[i];
        }
    }

    ~Building() {
        delete[] apartments;
    }

    Building& operator=(const Building& other) {
        if (this != &other) {
            delete[] apartments;
            apartmentCount = other.apartmentCount;
            apartments = new Apartment[apartmentCount];
            for (int i = 0; i < apartmentCount; ++i) {
                apartments[i] = other.apartments[i];
            }
        }
        return *this;
    }

    Apartment& getApartment(int number) {
        if (number >= 1 && number <= apartmentCount) {
            return apartments[number - 1];
        }
        throw out_of_range("Номер квартиры вне зоны доступа");
    }

    void print() const {
        cout << "Дом с " << apartmentCount << " квартирами:" << endl;
        for (int i = 0; i < apartmentCount; ++i) {
            apartments[i].print();
        }
    }
};