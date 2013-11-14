//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 3 Part 3
//				Due Date		September 18, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program computes the average of two midterm score 
//			integers.
//----------------------------------------------------------------------

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	// declare variables
	int Score1, Score2;
	time_t p;
	time(&p);
	
	//display time and date
	cout << "Time & Date Completed: " << ctime(&p) << endl;

	//ask user to input two integers
	cout << "I can compute your midterm's average, try me" << endl;
	cout << "Enter your first score: "; 
	cin >> Score1;
	cout << "Enter your second score: "; 
	cin >> Score2;
	
	
	//calculate and display average in float format
	cout << "	Your average is: " << (Score1 + Score2)/2. << endl;
	
	//terminate program
	system("PAUSE");
	return 0;
}
/*---------------------------OUTPUT---------------------------

Time & Date Completed: Wed Sep 12 23:11:17 2012

I can compute your midterm's average, try me
Enter your first score: 88
Enter your second score: 79
        Your average is: 83.5
Press any key to continue . . .

-----------------------------OUTPUT---------------------------*/