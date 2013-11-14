//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 5 Part 3
//				Due Date		October 10, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays a formatted menu, takes a user's order,
//			then calculates and displays the total bill.
//----------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

//define and assign constants for prices
const float BEER = 2.75,
			WINE = 10.15, 
			PIZZA = 7.20,
			SANDWICH = 2.25;

int main()
{
    //declare variables
    char DrinkType, FoodType;
    float TotalBill, DrinkTotal, FoodTotal;
	int DrinkAmount, FoodAmount;
	time_t t;
    time(&t);
   
	//output time and date
    cout << "Time & Date: " << ctime(&t) << endl;

	
	//display floats to the second decimal point
	cout << fixed << showpoint << setprecision(2) << endl;

    //display menu
    cout << setfill('.');
    cout << "-------------------- K-Store --------------------" << endl;
    cout << left << "Drinks" << endl;
    cout << left << setw(20) << "\t Beer" << right << setw(20) << BEER << endl;
    cout << left << setw(20) << "\t Wine" << right << setw(20) << WINE << endl;
    cout << left << "Food" << endl;
    cout << left << setw(20) << "\t Pizza" << right << setw(20) << PIZZA << endl;
    cout << left << setw(20) << "\t Sandwich" << right << setw(20) << SANDWICH << endl << endl;

    //take users drink order and calculate totals
    cout << "Would you like to drink Beer or Wine? ";
    cin >> DrinkType;
	
    if (DrinkType == 'b' || DrinkType == 'B')
    {
        cout << "How many beers? ";
		cin >> DrinkAmount;
		DrinkTotal = DrinkAmount * BEER;
    }
    else if (DrinkType == 'w' || DrinkType == 'W')
    {
        cout << "How many glasses of wine? ";
		cin >> DrinkAmount;
		DrinkTotal = DrinkAmount * WINE;
    }
	else
    {
        cout << "No drink for you." << endl;
		DrinkAmount = 0;
		DrinkTotal = 0;
    }

	//take users food order and calculate totals
    cout << endl << "Would you like to eat pizza or sandwich? ";
    cin >> FoodType;
	
    if (FoodType == 'p' || FoodType == 'P')
    {
        cout << "How many pizzas? ";
		cin >> FoodAmount;
		FoodTotal = FoodAmount * PIZZA;
    }
    else if (FoodType == 's' || FoodType == 'S')
    {
        cout << "How many sandwiches? ";
		cin >> FoodAmount;
		FoodTotal = FoodAmount * SANDWICH;
    }
	else
    {
        cout << "No food for you." << endl;
		FoodAmount = 0;
		FoodTotal = 0;
    }
	
	
    //calculate and display total cost
    TotalBill = DrinkTotal + FoodTotal;
    cout << endl << "\tYour total Bill: " << TotalBill << endl;
   
	//terminate program
    system("PAUSE");
    return 0;
}
/*
Time & Date: Tue Oct 02 15:52:39 2012


-------------------- K-Store --------------------
Drinks
         Beer..............................2.75
         Wine.............................10.15
Food
         Pizza.............................7.20
         Sandwich..........................2.25

Would you like to drink Beer or Wine? b
How many beers? 2

Would you like to eat pizza or sandwich? S
How many sandwiches? 3

        Your total Bill: 12.25
Press any key to continue . . .
*/