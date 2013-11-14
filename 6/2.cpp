//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 6 Part 2
//				Due Date		October 17, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: Displays a formatted menu, takes user input on menu info then
//			computes total bill based off of the user input.
//----------------------------------------------------------------------


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declare variables
    char GasType, WashAsk, WashType, PayType;
    float GasAmount, WashTotal, GasTotal, PayTotal, TotalBill;

    //two decimal points
    cout << fixed << showpoint << setprecision(2) << endl;

    //display menu
    cout << setfill('.');
    cout << "---------- Exxon Gas Station ----------" << endl;
    cout << left << "Type of Gas:" << endl;
    cout << left << setw(10) << "\t Unleaded(U)" << right << setw(10) << "3.85" << endl;
    cout << left << setw(10) << "\t Super Plus(S)" << right << setw(10) << "3.99" << endl;
    cout << left << setw(10) << "\t Premium (P)" << right << setw(10) << "4.15" << endl;
    cout << left << "Type of Car wash" << endl;
    cout << left << setw(10) << "\t Super(S)" << right << setw(10) << "4.00" << endl;
    cout << left << setw(10) << "\t Deluxe(D)" << right << setw(10) << "6.00" << endl;
    cout << left << "Type of pay" << endl;
    cout << left << setw(10) << "\t ATM(A)" << right << setw(10) << "0.75" << endl;
    cout << left << setw(10) << "\t Credit Card(P)" << right << setw(10) << "1.00" << endl;
    cout << left << setw(10) << "\t Cash(C)" << right << setw(10) << "0.00" << endl << endl;

    //take gas information and compute gas total
    cout << "How many gallons of gas? ";
    cin >> GasAmount;
	cout << "\t Enter the type of gas(U,S,P): ";
    cin >> GasType;
	switch(GasType)
	{
	case 'u': case 'U':
		GasTotal = GasAmount * 3.85;
		break;
	case 's': case 'S':
		GasTotal = GasAmount * 3.99;
		break;
	case 'p': case 'P':
		GasTotal = GasAmount * 4.15;
		break;
	}


	//take wash type input and compute wash total
	cout << "Car Wash (y/n)? ";
	cin >> WashAsk;
	if (WashAsk=='y' || WashAsk=='Y')
	{
		cout << "Type of car wash(S,D): ";
		cin >> WashType;
		//compute Wash Total
		switch(WashType)
		{
		case 's': case 'S':
			WashTotal = 4.00;
			break;
		case 'd': case 'D':
			WashTotal = 6.00;
			break;
		}
	}

	//take pay type input and calculate pay total
	cout << "How do you want to pay(A=ATM, C=Cash, P=Credit card)? ";
	cin >> PayType;
	switch(PayType)
	{
	case 'a': case 'A':
		PayTotal = .75;
		break;
	case 'c': case 'C':
		PayTotal = 0;
		break;
	case 'p': case 'P':
		PayTotal = 1.00;
		break;
	}

	//compute and output total bill
	TotalBill = (GasTotal + WashTotal + PayTotal);
	cout << endl;
	cout << "Total Bill: " << TotalBill << endl;
    
  
    system("PAUSE");
    return 0;
}
/*

---------- Exxon Gas Station ----------
Type of Gas:
         Unleaded(U)......3.85
         Super Plus(S)......3.99
         Premium (P)......4.15
Type of Car wash
         Super(S)......4.00
         Deluxe(D)......6.00
Type of pay
         ATM(A)........0.75
         Credit Card(P)......1.00
         Cash(C).......0.00

How many gallons of gas? 10.2
         Enter the type of gas(U,S,P): p
Car Wash (y/n)? y
Type of car wash(S,D): d
How do you want to pay(A=ATM, C=Cash, P=Credit card)? p

Total Bill: 49.33
Press any key to continue . . .

*/