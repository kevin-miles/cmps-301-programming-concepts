//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 2 Part 4
//				Due Date		September 12, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays three floats in a menu format.
//----------------------------------------------------------------------
#include <iostream>

using namespace std;

int main()
{
	// declare variables
	float DrinkPrice, ChipsPrice, BeerPrice;

	// initialize variables
	DrinkPrice = 2.25;
	ChipsPrice = 1.75;
	BeerPrice = 2.15;

	// display variables in a formatted menu
	cout << "---------------- MENU----------------" << endl;
	cout << "Drinks                           " << DrinkPrice << endl;
	cout << "Chips                            " << ChipsPrice << endl;
	cout << "Beer                             " << BeerPrice << endl;
	cout << "Please pick your order from the menu" << endl;

	// terminate program
	system("pause");
	return 0;
}
/*-------------------------------output-------------------------------

---------------- MENU----------------
Drinks                           2.25
Chips                            1.75
Beer                             2.15
Please pick your order from the menu
Press any key to continue . . .

-------------------------------output-------------------------------*/