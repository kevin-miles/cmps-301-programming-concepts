//highest and lowest check then assign

#include <iostream>

using namespace std;

int main()
{
	//declare variables
	int Score, Highest, Lowest, Total;

	cout << "Enter 5 scores: ";
	cin >> Score; //read first score
	Lowest = Score;
	Highest = Score;
	Total = Score;
	
	//read rest of scores
	for(int i=2; i<=5; i++)
	{
		cin >> Score;
		Total = Total + Score;
		//check scores and modify highest and/or lowest
		if(Score > Highest) { Highest = Score; }
		if(Score < Lowest) { Lowest = Score; }
	}

	//output highest, lowest, and average
	cout << "Highest: " << Highest << endl;
	cout << "Lowest: " << Lowest << endl;
	cout << "Average: " << Total/5 << endl;

	//terminate program
	system("PAUSE");
	return 0;
}