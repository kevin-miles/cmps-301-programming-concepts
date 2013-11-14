//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 8 Part 1
//				Due Date		October 31, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes user input on yes and no votes. It then 
//			displays the YES or NO votes totals with a star for each
//			vote displayed next to them.
//----------------------------------------------------------------------
#include <iostream>
#include <ctime> //time

using namespace std;

int main()
{
		//declare variables
	    int Yes=0, No=0, Amount;
        char Vote;
		time_t t;
		time(&t);

		//output time and date
		cout << "Time & Date: " << ctime(&t) << endl;

		//calculate vote totals based on user input
        cout << "Enter 10 votes: ";
        for(int i=1; i<=10; i++)
        {
                cin >> Vote;
                switch(Vote)
                {
                        case 'Y': case 'y':
                                Yes++;
                                break;
                        case 'N': case 'n':
                                No++;
                                break;
                        default:
                                break;
                }
        }

		//display vote totals
        cout << "\tYES VOTES=" << Yes << " = ";
		for(int i=1; i<=Yes; i++)
		{
			cout << "* ";
		}
		cout << endl;
        cout << "\tNO VOTES=" << No << " = ";
		for(int i=1; i<=No; i++)
		{
			cout << "* ";
		}
		cout << endl;

        //terminate program
        system("PAUSE"); 
        return 0;
}
/*
Time & Date: Thu Oct 25 00:35:46 2012

Enter 10 votes: yNNNYnyynN
        YES VOTES=4 = * * * *
        NO VOTES=6 = * * * * * *
Press any key to continue . . .
*/

