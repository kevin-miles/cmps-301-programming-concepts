//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 4 Part 1
//				Due Date		September 26, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays a formatted menu using <iomanip> and 
//			calculates the total bill based on user input.
//----------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//declare constant float prices
const float SANDWICH_PRICE = 2.60, DRINK_PRICE = 1.10, CHIP_PRICE = 0.95;

int main()
{
        //declare identifiers
                float Total;
		string Sandwich = "Sandwich", Drink = "Drink", Chip = "Chips";
        int SandInput, DrinkInput, ChipInput;
        time_t p;
		time(&p);
	
		//display time and date
		cout << "Time & Date Completed: " << ctime(&p) << endl;


        //construct a menu
        cout << fixed << showpoint << setprecision(2);
        cout << setfill('.');
        cout << "-------- K Store Menu --------" << endl;
        cout << left << "1. " << setw(12) << Sandwich << right << setw(15) << SANDWICH_PRICE << endl;
        cout << left << "2. " << setw(12) << Drink << right << setw(15) << DRINK_PRICE << endl;
		cout << left << "3. " << setw(12) << Chip << right << setw(15) << CHIP_PRICE << endl;
        cout << endl;

        //take user input and assign to variable
		cout << "\tHow many sandwiches? "; cin >> SandInput;
        cout << "\tHow many drinks? "; cin >> DrinkInput;
		cout << "\tHow many chips? "; cin >> ChipInput;

        //calculate and display total cost
        Total = (DrinkInput * DRINK_PRICE) + (SandInput * SANDWICH_PRICE) + (ChipInput * CHIP_PRICE);
        cout << "\t\tYour total bill is " << Total << endl;

        //terminate program
        system("PAUSE");
        return 0;
}


/*---------------------------OUTPUT---------------------------

Time & Date Completed: Wed Sep 19 22:13:09 2012

-------- K Store Menu --------
1. Sandwich...............2.60
2. Drink..................1.10
3. Chips..................0.95

        How many sandwiches? 3
        How many drinks? 2
        How many chips? 4
                Your total bill is 13.80
Press any key to continue . . .

-----------------------------OUTPUT---------------------------*/