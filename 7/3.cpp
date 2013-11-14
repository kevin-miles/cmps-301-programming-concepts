//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 7 Part 3
//				Due Date		October 24, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays a formatted table using setw. It then
//			calculates and outputs the rates of the dollar in other 
//			currencies using a for loop.
//----------------------------------------------------------------------


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
    //declare variables
	time_t t;
    time(&t);
   
	//output time and date
    cout << "Time & Date: " << ctime(&t) << endl;

	//two decimal points
    cout << fixed << showpoint << setprecision(2) << endl;

    //display menu
    cout << left << setw(5) << "$" << left << setw(10)  << "Yen" << left << setw(10)  << "B.Pound" << left << setw(10) << "Euro" << endl;
    cout << "-----------------------------" << endl;

	//loop output of table data
	for(int i=1; i<=5; i++)
	{
		//calculate currency rates and output table data
		cout << left << setw(5) << i << left << setw(10)  << (i*79.1300) << left << setw(10)  << (i*0.6198) << left << setw(10) << (i*0.7630) << endl;
	}
    //terminate program
    system("PAUSE");
    return 0;
}
/*
Time & Date: Wed Oct 17 22:05:32 2012


$    Yen       B.Pound   Euro
-----------------------------
1    79.13     0.62      0.76
2    158.26    1.24      1.53
3    237.39    1.86      2.29
4    316.52    2.48      3.05
5    395.65    3.10      3.81
Press any key to continue . . .
*/