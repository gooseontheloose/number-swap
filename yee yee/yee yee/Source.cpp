//This program takes 2 values from the user, 
//swaps them before printing values. The user
//will be prompted to enter both numbers.

//Oliver Kirsch

//Preprocessor Directives:
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int first_number, second_number, swap;

	cout << "Please input first number: ";
	cin >> first_number;
	cout << "Please input second number: ";
	cin >> second_number; 
	cout << "First number: " << first_number << endl;
	cout << "Second number: " << second_number << endl;
	cout << "Press enter to swap." << endl;
	system("pause");
	swap = first_number;
	first_number = second_number;
	second_number = swap;
	cout << "Numbers Swapped!" << endl;
	cout << "First number: " << first_number << endl;
	cout << "Second number: " << second_number << endl;
	system("pause");
}
