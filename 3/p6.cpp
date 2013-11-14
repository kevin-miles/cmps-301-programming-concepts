//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 3 Part 6
//				Due Date		September 18, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program converts a user input temperature of Fahrenheit
//			degrees and converts it to Celsius degrees.
//----------------------------------------------------------------------

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	// declare variables
	float Fahrenheit;
	time_t p;
	time(&p);
	
	//display time and date
	cout << "Time & Date Completed: " << ctime(&p) << endl;

	//ask the user to input Fahrenheit temperature
	cout << "I can convert temperature from degrees Fahrenheit to degrees Celsius. Try me" << endl;
	cout << "	Enter a temperature in Fahrenheit: ";
	cin >> Fahrenheit;

	//compute and display Celsius conversion
	cout << "	" << Fahrenheit << " Fahrenheit  is " << (5*(Fahrenheit-32)/9) << " Celsius" << endl;

	//terminate program
	system("PAUSE");
	return 0;
}
/*---------------------------OUTPUT---------------------------

Time & Date Completed: Wed Sep 12 23:34:15 2012

I can convert temperature from degrees Fahrenheit to degrees Celsius. Try me
        Enter a temperature in Fahrenheit: 97
        97 Fahrenheit  is 36.1111 Celsius
Press any key to continue . . .

-----------------------------OUTPUT---------------------------*/