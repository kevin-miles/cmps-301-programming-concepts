//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 5 Part 2
//				Due Date		October 10, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays a formatted menu and takes a user's
//			order. The orders input is used to calculate and display
//			the final bill.
//----------------------------------------------------------------------


#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

//define and assign constants for prices
const float UNLEADED = 4.25,
			PREMIUM = 4.45, 
			SUPER = 5.00,
			DELUXE = 6.00;

int main()
{
    //declare variables
    char GasType, CarWash, CarWashType;
    float GallonsGas, GasTotal, CarWashTotal, TotalBill;
	time_t t;
    time(&t);
   
	//output time and date
    cout << "Time & Date: " << ctime(&t) << endl;

	
	//display floats to the second decimal point
	cout << fixed << showpoint << setprecision(2) << endl;

    //display menu
    cout << setfill('.');
    cout << "-------------------- Exxon Gas Station --------------------" << endl;
    cout << left << "Type of Gas:" << endl;
    cout << left << setw(20) << "\t Unleaded(U)" << right << setw(20) << UNLEADED << endl;
    cout << left << setw(20) << "\t Premium(P)" << right << setw(20) << PREMIUM << endl;
    cout << left << "Type of Car wash" << endl;
    cout << left << setw(20) << "\t Super(S)" << right << setw(20) << SUPER << endl;
    cout << left << setw(20) << "\t Deluxe(D)" << right << setw(20) << DELUXE << endl << endl;

    //ask for gallons and type of gas then ask for car wash and if yes then what type
    cout << "How many gallons of gas? ";
    cin >> GallonsGas;
    cout << "\tEnter the type of gas(U, P): ";
    cin >> GasType;
    if (GasType == 'u' || GasType == 'U')
    {
        GasTotal = UNLEADED * GallonsGas;
    }
    else
    {
        GasTotal = PREMIUM * GallonsGas;
    }
	
	//find out if user wants a car wash then calculate prices depending
	cout << "Car Wash (y/n)? ";
    cin >> CarWash;

    if (CarWash == 'y' || CarWash == 'Y')
    {
        cout << "\tType of car wash(S,D): ";
		cin >> CarWashType;
		if (CarWashType == 's' || CarWashType == 'S')
		{
			CarWashTotal = SUPER;
		}
		else if (CarWashType == 'd' || CarWashType == 'D')
		{
			CarWashTotal = DELUXE;
		}

    }
	else
	{
		CarWashTotal = 0;
	}
 

    //calculate and display total cost
    TotalBill = CarWashTotal + GasTotal;
    cout << endl << "Total Bill: " << TotalBill << endl;
   
	//terminate program
    system("PAUSE");
    return 0;
}
/*
Time & Date: Tue Oct 02 15:27:28 2012


-------------------- Exxon Gas Station --------------------
Type of Gas:
         Unleaded(U).......................4.25
         Premium(P)........................4.45
Type of Car wash
         Super(S)..........................5.00
         Deluxe(D).........................6.00

How many gallons of gas? 10.2
        Enter the type of gas(U, P): p
Car Wash (y/n)? y
        Type of car wash(S,D): d

Total Bill: 51.39
Press any key to continue . . .
*/