#include "Date.h"


int main()
{
	Date d1(12,1,1978);
	Date d2(4,8,2006);

	cin >> d2;
	cout << d1 - d2 << endl;
	cout << d1 + 30 << endl;
	cout << d2 << endl;

}

