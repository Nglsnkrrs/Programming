#include "Airplane.h"

int main()
{
	Airplane a1(Type::MILLITARY, 5, 10);
	Airplane a2(Type::PRIVATE, 20, 40);

	cout << a1 << endl;
	cout << a2 << endl;

	bool res;
	res = a1 < a2;
	cout << res << endl;

	res = a1 > a2;
	cout << res << endl;

	res = a1 == a2;
	cout << res << endl;

	cout << a1++ << endl;
	cout << a2-- << endl;
}
