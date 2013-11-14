//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 9 Part 1
//				Due Date		November 6, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes user input of a group of grade letters.
//			It then counts the number of grades in the group and
//			displays the total amount of each grade in a formatted
//			table.
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	int ACount=0, BCount=0, CCount=0, DCount=0, FCount=0;
	char Grade;
	time_t t;
	time(&t);

	//output time and date
	cout << "Time & Date: " << ctime(&t) << endl;

	//ask user to input grades
	cout << "Enter a group of grades: ";
	cin.get(Grade);

	while(Grade != '\n')
	{
		//evaluate grade then increment relative variable
		switch(Grade)
		{
		case 'A': case 'a':
			ACount++;
			break;
		case 'B': case 'b':
			BCount++;
			break;
		case 'C': case 'c':
			CCount++;
			break;
		case 'D': case 'd':
			DCount++;
			break;
		case 'F': case 'f':
			FCount++;
			break;
		}

		//move next grade to Grade variable
		cin.get(Grade);

	}

	//output total amount of each grade
	cout << setfill('.');
	cout << left << setw(10) << "\tNo. of \"A\": " << right << setw(10) << ACount << endl; 
	cout << left << setw(10) << "\tNo. of \"B\": " << right << setw(10) << BCount << endl; 
	cout << left << setw(10) << "\tNo. of \"C\": " << right << setw(10) << CCount << endl; 
	cout << left << setw(10) << "\tNo. of \"D\": " << right << setw(10) << DCount << endl; 
	cout << left << setw(10) << "\tNo. of \"F\": " << right << setw(10) << FCount << endl; 

	//terminate program
	system("PAUSE");
	return 0;
}
/*
Time & Date: Sat Nov 03 18:08:15 2012

Enter a group of grades: ABaaCbcD
        No. of "A": .........3
        No. of "B": .........2
        No. of "C": .........2
        No. of "D": .........1
        No. of "F": .........0
Press any key to continue . . .
*/