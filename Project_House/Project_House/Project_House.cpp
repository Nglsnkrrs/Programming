#include "Building.h"

int main() {
    setlocale(LC_ALL, "russian");

    Building building(3);

    building.getApartment(1).addResident(Person("Иванов Ваня ", 30));
    building.getApartment(1).addResident(Person("Аникин Илья", 28));

    building.getApartment(2).addResident(Person("Булатова Арина", 25));

    building.getApartment(3).addResident(Person("Макарова Василиса", 40));
    building.getApartment(3).addResident(Person("Поляков Степан", 38));
    building.getApartment(3).addResident(Person("Макаров Владимир", 12));

    building.print();

    return 0;
}