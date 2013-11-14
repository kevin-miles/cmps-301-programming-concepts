/*
read a string of votes and cout the number
of Yes(y) and No(n) votes. Suppose there is
a period at the end of the string.
*/

#include <iostream>

using namespace std;

int main()
{
	//declare variables
	int Yes=0, No=0, Total=0;
	char Vote;

	cout << "Enter a string of votes: ";
	cin.get(Vote);

	while(Vote != '\n')
	{
		//adds one to total amount
		Total++;
		//evaluate vote then add one vote to relative variable
		switch(Vote)
		{
		case 'y': case 'Y':
			Yes++;
			break;
		case 'n': case 'N':
			No++;
			break;
		}

		//assign next vote to Vote variable
		cin.get(Vote);

	}

	//output total amount
	cout << "Yes: " << Yes << endl; 
	cout << "No: " << No << endl;
	cout << "Total Votes: " << Total << endl;

	//terminate program
	system("PAUSE");
	return 0;
}