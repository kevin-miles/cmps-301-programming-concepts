//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 9 Part 2
//				Due Date		November 6, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes user input of a group of scores trailing
//			with a -1 at the end. The program computes the total amount
//			of the scores and divides by the number of scores given,
//			outputting the average score with two decimal places.
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	int Total=0, n=0, Score=0; //n is number of scores	
	time_t t;
	time(&t);

	//output time and date
	cout << "Time & Date: " << ctime(&t) << endl;

	cout << fixed << showpoint << setprecision(2); //set output decimal point to two places

	//ask for user input
	cout << "Please enter a group of scores with -1 at the end: ";
	cin >> Score;

	//performs while loop until input is less than 0
	while(Score > 0)
	{
		n++; //increments total amount of scores
		Total = Score + Total;

		cin >> Score; //moves to next score
	}

	//output total words and uppercase letters
	cout << "\tScore Average: " << Total/float(n) << endl; 

	//terminate program
	system("PAUSE");
	return 0;
}
/*
Time & Date: Sat Nov 03 18:13:33 2012

Please enter a group of scores with -1 at the end: 85 22 65 44 100 -1
        Score Average: 63.20
Press any key to continue . . .
*/