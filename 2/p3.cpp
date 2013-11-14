//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 2 Part 3
//				Due Date		September 12, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays three strings and outputs them in a 
//			letter format.
//----------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// declare variables
	string Name, Address, PhoneNumber;

	// initialize variables
	Name = "Mary Jones";
	Address = "234 E. Main Street";
	PhoneNumber = "714-123-4567";

	// display variables in a letter to Mary
	cout << "Hello " << Name << "," << endl;
	cout << "I just found out that you live in " << Address << " and" <<  endl;
	cout << "your phone number is " << PhoneNumber << "." << endl;
	cout << "Good to know you!" << endl;

	// terminate program
	system("pause");
	return 0;
}
/*-------------------------------output-------------------------------

Hello Mary Jones,
I just found out that you live in 234 E. Main Street and
your phone number is 714-123-4567.
Good to know you!
Press any key to continue . . .

-------------------------------output-------------------------------*/