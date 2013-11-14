//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 3 Part 5
//				Due Date		September 18, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays a menu, asks for user input on the
//			integer amount of items they would like to buy and then
//			calculates and outputs the total bill.
//----------------------------------------------------------------------

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	// declare variables
	int Drinks, Chips, Nuts;
	float Total;
	time_t p;
	time(&p);
	
	//display time and date
	cout << "Time & Date Completed: " << ctime(&p) << endl;

	//display menu
	cout << "----------------- MENU -----------------" << endl;
	cout << "Drinks..............................1.25" << endl;
	cout << "Chips...............................1.09" << endl;
	cout << "Nuts................................1.18" << endl;

	//ask the user the number of each item in the menu
	cout << "	How many drinks? ";
	cin >> Drinks;
	cout << "	How many chips? ";
	cin >> Chips;
	cout << "	How many nuts? ";
	cin >> Nuts;

	//compute total bill
	Total = ((Drinks * 1.25) + (Chips * 1.09) + (Nuts * 1.18));

	//display total bill
	cout << "		Total bill = " << Total << endl;

	//terminate program
	system("PAUSE");
	return 0;
}
/*---------------------------OUTPUT---------------------------

Time & Date Completed: Wed Sep 12 23:23:14 2012

----------------- MENU -----------------
Drinks..............................1.25
Chips...............................1.09
Nuts................................1.18
        How many drinks? 2
        How many chips? 1
        How many nuts? 2
                Total bill = 5.95
Press any key to continue . . .

-----------------------------OUTPUT---------------------------*/