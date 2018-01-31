#include <iostream>

using namespace std;

int choice;
float value1, value2, result;

int main()
{
	while (true)
	{
		cout << "1. Add\n" <<
				"2. Subtract\n" <<
				"3. Divide\n" <<
				"4. Multiply\n" <<
				"5. Exit\n\n" <<
				"What would you like do do? ";
		cin >> choice;
		
		if (choice == 5)
			break;

		cout << "\nPlease enter the first value: ";
		cin >> value1;
		cout << "Please enter the second value: ";
		cin >> value2;

		if (choice == 1)
			result = value1 + value2;
		else if (choice == 2)
			result = value1 - value2;
		else if (choice == 3)
			result = value1 / value2;
		else if (choice == 4)
			result = value1 * value2;
		
		cout << "\nThe result is : " << result << "\n\n";
		

	}
	cout << "\n\nHave a good day :D";
}