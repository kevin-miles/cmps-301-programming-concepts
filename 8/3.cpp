//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 8 Part 3
//				Due Date		October 31, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program calculates the average class score based on
//			user input of the number of students and their scores.
//----------------------------------------------------------------------
#include <iostream>
#include <ctime> //time

using namespace std;

int main()
{
		//declare variables
        int Total = 0, Score, Students;
        char Grade;
		time_t t;
		time(&t);

		//output time and date
		cout << "Time & Date: " << ctime(&t) << endl;

		//calculate grade totals based on user input
        cout << "Please enter the number of students: ";
        cin >> Students;

		//user inputs student scores
        cout << "\t Enter " << Students << " scores: ";
        for(int i=1; i<=Students; i++)
        {
                cin >> Score;
				//add score to total amount
                Total = Total + Score;
        }

		//calculate and display average
        cout << "\t\tClass average: " << Total/Students << endl;

        //terminate program
        system("PAUSE"); 
        return 0;
}
/*
Time & Date: Thu Oct 25 00:50:22 2012

Please enter the number of students: 5
         Enter 5 scores: 85 75 55 95 88
                Class average: 79
Press any key to continue . . .
*/

