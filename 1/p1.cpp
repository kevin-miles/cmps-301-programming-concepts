//----------------------------------------------------------------------
//				Name			Bob Smith
//				Course			CMPS 301
//				Project			No. 1 Part 1
//				Due Date		September 12, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This profram displays a report consisting
//			of info from myself and you
//----------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// declare variables
	int MyAge, YourAge;
	string MyName, YourName;

	// initialize variables
	MyAge = 25;	YourAge = 18;
	MyName = "Ray"; YourName = "John Smith";

	// display a report
	cout << "--------------------Report--------------------" << endl;
	cout << "My age.........." << MyAge << endl;
	cout << "Your age........" << YourAge << endl;
	cout << "My name........." << MyName << endl;
	cout << "Your name......." << YourName << endl;

	// terminate program
	system("pause");
	return 0;
}
/*-------------------------------output-------------------------------

--------------------Report--------------------
My age..........25
Your age........18
My name.........Ray
Your name.......John Smith
Press any key to continue . . .

-------------------------------output-------------------------------*/