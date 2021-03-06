// Jeremy Harrell
// ITSE 1301
// Programming Problem Example 5-5 
// Coding straight out of the book

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char Letter;
	int Digit, Num;

	cout << "Program to convert uppercase letters to  "
		<< "their corresponding telephone digits."
		<< endl;

	cout << "to stop the program enter #." << endl;

	cout << "Enter an uppercase letter: ";
	cin >> Letter;
	cout << endl;

	while (Letter != '#')
	{
		cout << "Letter: " << Letter;
		cout << ", Corresponding telephone digit: ";

		Num = static_cast<int>(Letter)
			- static_cast<int>('A');

		if (0 <= Num && Num < 26)
		{

			Digit = (Num / 3) + 2;

			if (((Num / 3 == 6) || (Num / 3 == 7))
				&& (Num % 3 == 0))
				Digit = Digit - 1;

			if (Digit > 9)
				Digit = 9;

			cout << Digit << endl;
		}
		else
			cout << "Invalid input." << endl;

		cout << "\nEnter another uppercase "
			<< "letter to find its corresponding "
			<< "telephone digit." << endl;
		cout << "To stop the program enter #."
			<< endl;
	}  //end while
    return 0;
}

