//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 8 Part 5
//				Due Date		October 31, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program calculates and outputs the total amount of grades
//			based on the user's input.
//----------------------------------------------------------------------
#include <iostream>
#include <ctime> //time

using namespace std;

int main()
{
		//declare variables
	    int ATotal=0, BTotal=0, CTotal=0;
        char Grade;
		time_t t;
		time(&t);

		//output time and date
		cout << "Time & Date: " << ctime(&t) << endl;

		//calculate grade totals based on user input
        cout << "Enter 10 grades(A,B,C): ";
        for(int i=1; i<=10; i++)
        {
                cin >> Grade;
                switch(Grade)
                {
                        case 'A': case 'a':
                                ATotal++;
                                break;
                        case 'B': case 'b':
                                BTotal++;
                                break;
						case 'C': case 'c':
                                CTotal++;
                                break;
                        default:
                                break;
                }
        }

		//display grade totals
        cout << "\tNo. of \"A\" scores= " << ATotal << endl;
        cout << "\tNo. of \"B\" scores= " << BTotal << endl;
		cout << "\tNo. of \"C\" scores= " << CTotal << endl;

        //terminate program
        system("PAUSE"); 
        return 0;
}
/*
Time & Date: Thu Oct 25 00:42:10 2012

Enter 10 grades(A,B,C): AbbBCCAAca
        No. of "A" scores= 4
        No. of "B" scores= 3
        No. of "C" scores= 3
Press any key to continue . . .
*/

