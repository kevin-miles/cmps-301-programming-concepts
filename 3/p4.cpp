//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 3 Part 4
//				Due Date		September 18, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes two user string inputs and one char input 
//			and formats it into a birthday card output.
//----------------------------------------------------------------------

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	// declare variables
	string FirstName, LastName;
	char MiddleInitial;
	time_t p;
	time(&p);
	
	//display time and date
	cout << "Time & Date Completed: " << ctime(&p) << endl;

	//ask user to input their name
	cout << "Give me your name, I will send you a birthday card" << endl;
	cout << "What is your first name: "; 
	cin >> FirstName;
	cout << "What is your middle initial: "; 
	cin >> MiddleInitial;
	cout << "What is your last name: ";
	cin >> LastName;
	
	
	//output a birthday card based on the input
	cout << "	<<<<<<< Happy Birthday " << FirstName << " " << MiddleInitial << ". " << LastName << " >>>>>>>" << endl;
	
	//terminate program
	system("PAUSE");
	return 0;
}
/*---------------------------OUTPUT---------------------------

Time & Date Completed: Wed Sep 12 23:15:41 2012

Give me your name, I will send you a birthday card
What is your first name: Barack
What is your middle initial: H
What is your last name: Obama
        <<<<<<< Happy Birthday Barack H. Obama >>>>>>>
Press any key to continue . . .

-----------------------------OUTPUT---------------------------*/