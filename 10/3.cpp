//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 10 Part 3
//				Due Date		November 28, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program asks a user to choose a number from a menu provided
//			then the program outputs information based on the user decision.
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip> 

using namespace std;

void Addition();
void Subtraction();
void DisplayMenu();

int main()
{
	//declare variables
	int choice;
	time_t t;
	time(&t);

	//output time and date
	cout << "Time & Date: " << ctime(&t) << endl;

	//display menu and ask for users choice
	DisplayMenu();
	cout << "\tEnter your choice: ";
	cin >> choice;
	cout << endl;
	
	//call function based on users choice
	switch(choice)
	{
	case 1: Addition(); break;
	case 2: Subtraction(); break;
	}

	//tell user to have a nice day before program ends
	cout << "Have a nice day\n";

	//terminate program
	system("PAUSE");
	return 0;
}

//--------------------------------------------------------------
//	Name: Addition
//	Purpose: Outputs the total of 10 + 2
//	Input: 
//	Output: The total of 10 + 2
//--------------------------------------------------------------
void Addition()
{
	//prints equation and answer
	cout << "10 + 2 = " << 10 + 2 << endl;
}

//--------------------------------------------------------------
//	Name: Subtraction
//	Purpose: Outputs the total of 10 - 2
//	Input: 
//	Output: The total of 10 - 2
//--------------------------------------------------------------
void Subtraction()
{
	//prints equation and answer
	cout << "10 - 2 = " << 10 - 2 << endl;
}

//--------------------------------------------------------------
//	Name: DisplayMenu
//	Purpose: Displays a menu with numbers for user so they can input
//			 their decision
//	Input: 
//	Output: Prints a menu with number choices
//--------------------------------------------------------------
void DisplayMenu()
{
	//print menu
	cout << setfill('.');
	cout << "You are given the numbers 10 and 2." << endl;
	cout << "What would you like to do with them?" << endl << endl;
	cout << "----------- MENU -----------" << endl;	 
	cout << left << setw(2) << " 1.)" << right << setw(24) << " Add them!" << endl;
	cout << left << setw(2) << " 2.)" << right << setw(24) << " Subtract them!" << endl;
}
/*
Time & Date: Thu Nov 15 20:24:20 2012

You are given the numbers 10 and 2.
What would you like to do with them?

----------- MENU -----------
 1.).............. Add them!
 2.)......... Subtract them!
		Enter your choice: 2

10 - 2 = 8
Have a nice day
Press any key to continue . . .
*/