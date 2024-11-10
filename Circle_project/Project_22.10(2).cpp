#include "Circle.h"


int main()
{
	Circle c1(6);
	Circle c2(7);

	cout << c1 << endl;
	cout << c2 << endl;
	

	bool res = c1 == c2;
	cout << res << endl;

	res = c1 < c2;
	cout << res << endl;

	res = c1 > c2;
	cout << res << endl;


	



}
