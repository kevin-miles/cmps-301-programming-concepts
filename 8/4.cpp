//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 8 Part 4
//				Due Date		October 31, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays a formatted table that includes 
//			calculated currency conversion rates based on the
//			user's input.
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
		//declare variables
	    int Size;
        char Grade;
		time_t t;
		time(&t);

		//output time and date
		cout << "Time & Date: " << ctime(&t) << endl;

		//user inputs table row size
		cout << "To see my currency exchange table, please enter the table size: ";
        cin >> Size;
	
		//table head displayed
		cout << '$' << '\t' << char(157) << '\t' <<  char(238) << '\t' <<  char(156) << endl;
        
		//limit to display two decimal points
		cout << showpoint << fixed << setprecision(2);

		//write line below table head
        for(int i=1; i<=30; i++)
        {
                cout << char(223);
        }
        cout << endl;

		//display table data
        for(int i=1; i<=Size; i++)
        {	
				//convert data and display
                cout << i << '\t' << i*80.27 <<  '\t'  << i*.7709 <<  '\t'  << i*1.6135 <<   endl;
        }
        cout << endl;
        system("PAUSE"); 
        return 0;

        //terminate program
        system("PAUSE"); 
        return 0;
}
/*
Time & Date: Thu Oct 25 10:33:08 2012

To see my currency exchange table, please enter the table size: 10
$       ¥       ε       £
▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
1       80.27   0.77    1.61
2       160.54  1.54    3.23
3       240.81  2.31    4.84
4       321.08  3.08    6.45
5       401.35  3.85    8.07
6       481.62  4.63    9.68
7       561.89  5.40    11.29
8       642.16  6.17    12.91
9       722.43  6.94    14.52
10      802.70  7.71    16.13

Press any key to continue . . .
*/


      