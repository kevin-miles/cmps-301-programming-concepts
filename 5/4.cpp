//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 5 Part 4
//				Due Date		October 10, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays a formatted menu for a health club,
//			takes user information and then calculates and displays
//			the monthly cost of membership.
//----------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

//define and assign constants for prices
const float MENTEEN = 100,
			MENADULT = 120, 
			WOMENTEEN = 110,
			WOMENADULT = 90;

int main()
{
    //declare variables
    char UserGender;
	int UserAge;
	float TotalMonthly;
	string UserName;
	time_t t;
    time(&t);
   
	//output time and date
    cout << "Time & Date: " << ctime(&t) << endl;

	
	//display floats to the second decimal point
	cout << fixed << showpoint << setprecision(2) << endl;

    //display menu
    cout << setfill('.');
    cout << "-------------------- Health Club --------------------" << endl;
    cout << left << "Men" << endl;
    cout << left << setw(20) << "\t Teenagers" << right << setw(20) << MENTEEN << endl;
    cout << left << setw(20) << "\t Adults" << right << setw(20) << MENADULT << endl;
    cout << left << "Women" << endl;
    cout << left << setw(20) << "\t Teenagers" << right << setw(20) << WOMENTEEN<< endl;
    cout << left << setw(20) << "\t Adults" << right << setw(20) << WOMENADULT << endl << endl;

    //take user information and calculate totals
    cout << "What is your name? ";
    cin >> UserName;

	cout << UserName << ", what is your gender(m / f)? ";
	cin >> UserGender;

	cout << "How old are you? ";
	cin >> UserAge;

	if (UserGender == 'm' || UserGender == 'M')
	{
		if (UserAge > 19)
		{
			TotalMonthly = MENADULT;
		}
		else
		{
			TotalMonthly = MENTEEN;
		}
	}
	else if (UserGender == 'f' || UserGender == 'F')
	{
		if (UserAge > 19)
		{
			TotalMonthly = WOMENADULT;
		}
		else
		{
			TotalMonthly = WOMENTEEN;
		}
	}
	else
	{
		cout << "Please enter M or F for gender." << endl;
	}

	//output total
	cout << UserName << ", your monthly payment is " << TotalMonthly << endl;

   
	//terminate program
    system("PAUSE");
    return 0;
}
/*
Time & Date: Tue Oct 02 16:08:06 2012


-------------------- Health Club --------------------
Men
         Teenagers.......................100.00
         Adults..........................120.00
Women
         Teenagers.......................110.00
         Adults...........................90.00

What is your name? John
John, what is your gender(m / f)? M
How old are you? 17
John, your monthly payment is 120.00

Time & Date: Tue Oct 02 16:09:33 2012


-------------------- Health Club --------------------
Men
         Teenagers.......................100.00
         Adults..........................120.00
Women
         Teenagers.......................110.00
         Adults...........................90.00

What is your name? Kristy
Kristy, what is your gender(m / f)? f
How old are you? 27
Kristy, your monthly payment is 90.00
Press any key to continue . . .
*/