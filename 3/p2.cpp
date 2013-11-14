//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 3 Part 2
//				Due Date		September 18, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays the sum of two user input integers.
//----------------------------------------------------------------------

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	// declare variables
	int Num1, Num2;
	time_t p;
	time(&p);
	
	//display time and date
	cout << "Time & Date Completed: " << ctime(&p) << endl;

	//ask user to input two integers
	cout << "Enter two integer numbers: ";
	cin >> Num1;
	cin >> Num2;
	
	//calculate and display sum
	cout << Num1 << " + " << Num2 << " = " << (Num1 + Num2) << endl;
	cout << "The total of " << Num1 << " and " << Num2 << " is " << (Num1 + Num2) << endl;
	
	//terminate program
	system("PAUSE");
	return 0;
}
/*---------------------------OUTPUT---------------------------

Time & Date Completed: Wed Sep 12 23:08:49 2012

Enter two integer numbers: 12 14
12 + 14 = 26
The total of 12 and 14 is 26
Press any key to continue . . .

-----------------------------OUTPUT---------------------------*/