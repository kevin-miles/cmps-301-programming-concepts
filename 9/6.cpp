//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 9 Part 6
//				Due Date		November 6, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes the user input of seven scores then returns
//			the highest score, lowest score, and average score from all.
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	int Total=0, High=0, Low=0, Score=0, Count=1; //n is number of scores	
	time_t t;
	time(&t);

	//output time and date
	cout << "Time & Date: " << ctime(&t) << endl;
	
	cout << fixed << showpoint << setprecision(2); //set output decimal point to two places

	//ask for user input
	cout << "Enter 7 scores: ";
	cin >> Score;
	High = Score;	Low = Score;	//assign first score as highest and lowest
	Total = Score + Total;  //add first score to total

	while(Count <= 6)
	{
		

		if(Score > High)
		{
			High = Score; //assign score to high if higher than current
		}
		if (Score < Low)
		{
			Low = Score; //assign score to low if lower than current
		}
		
		Count++; //increment count
		cin >> Score; //assign next score to variable
		Total = Score + Total; //add score to total amount

	}


	//output total words and uppercase letters
	
	cout << "\tHighest score: " << High << endl; 
	cout << "\tLowest score: " << Low << endl; 
	cout << "\tAverage = " << Total/7. << endl; 

	//terminate program
	system("PAUSE");
	return 0;
}
/*
Time & Date: Sat Nov 03 19:28:39 2012

Enter 7 scores: 80 50 77 33 66 90 55
        Highest score: 90
        Lowest score: 33
        Average = 64.43
Press any key to continue . . .
*/