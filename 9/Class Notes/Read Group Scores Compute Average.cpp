/*
read group scores. compute average
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	int Total=0, n=0, Score=0; //n is number of scores	
	cout << fixed << showpoint << setprecision(2); //set output decimal point to two places

	//ask for user input
	cout << "Enter a group of scores: ";
	cin >> Score;

	//performs while loop until input is less than 0
	while(Score > 0)
	{
		n++; //increments total amount of scores
		Total = Score + Total;

		cin >> Score; //moves to next score
	}

	//output total words and uppercase letters
	cout << "Average: " << Total/float(n) << endl; 

	//terminate program
	system("PAUSE");
	return 0;
}