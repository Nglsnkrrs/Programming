#include "Fraction.h"


int main()
{
	Fraction f1;
	Fraction f2;

	int choice;

	while (true) {
		cout << "----------------------------------------------" << endl;
		cout << "1. Enter the first fraction" << endl;
		cout << "2. Enter the second fraction" << endl;
		cout << "3. Perform the addition of fractions" << endl;
		cout << "4. Perform fraction subtraction" << endl;
		cout << "5. Perform the multiplication of fractions" << endl;
		cout << "6. Perform the division of fractions" << endl;
		cout << "7. Display the first fraction on the screen" << endl;
		cout << "8. Display the second fraction on the screen" << endl;
		cout << "9. Exit" << endl;
		cout << "Your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1: 
			f1.input();
			cout << "The fraction is entered" << endl;
			break;
		case 2:
			f2.input();
			cout << "The fraction is entered" << endl;
			break;
		case 3: {
			float result = Fraction::addition(f1, f2);
			cout << "The sum of the two fractions in decimal form is: " << result << endl;
			break;
		}
		case 4: {
			float result = Fraction::subtraction(f1, f2);
			cout << "The subtraction of the two fractions in decimal form is: " << result << endl;
			break;
		}
		case 5: {
			float result = Fraction::multiplication(f1, f2);
			cout << "The multiplication of the two fractions in decimal form is: " << result << endl;
			break;
		}
		case 6: {
			float result = Fraction::division(f1, f2);
			cout << "The division of the two fractions in decimal form is: " << result << endl;
			break;
		}
		case 7:
			f1.output();
			break;
		case 8:
			f2.output();
			break;
		case 9:
			exit(0);
			break;
		}
	}
}
