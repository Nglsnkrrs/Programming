#include "Building.h"

int main() {
    setlocale(LC_ALL, "russian");

    Building building(3);

    building.getApartment(1).addResident(Person("������ ���� ", 30));
    building.getApartment(1).addResident(Person("������ ����", 28));

    building.getApartment(2).addResident(Person("�������� �����", 25));

    building.getApartment(3).addResident(Person("�������� ��������", 40));
    building.getApartment(3).addResident(Person("������� ������", 38));
    building.getApartment(3).addResident(Person("������� ��������", 12));

    building.print();

    return 0;
}