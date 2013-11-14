//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 9 Part 3
//				Due Date		November 6, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes user input of a sentence. It evaluates
//			each letter of the sentence to calculate and output the
//			total amount of uppercase letters, digits, and vowels.
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	//declare variables
	int Uppercase=0, Digits=0, Vowels=0;
	char Letter;
	time_t t;
	time(&t);

	//output time and date
	cout << "Time & Date: " << ctime(&t) << endl;

	//ask for user input
	cout << "Enter a sentence: ";
	cin.get(Letter);

	//performs while loop until newline found in user input
	while(Letter != '\n')
	{
		//evaluate user input and increment relative variables
		if(Letter >= 'A' && Letter <='Z'){ Uppercase++; }
		if(Letter >= '0' && Letter <='9'){ Digits++; }
		switch(Letter)
		{
		case 'A': case 'a': case 'E': case 'e': case 'I': case 'i':
		case 'O': case 'o': case 'U': case 'u':
			Vowels++;
			break;
		}

		//move to next portion of user input
		cin.get(Letter);

	}

	//output totals
	cout << "\tNo. of uppercase letters: " << Uppercase << endl;
	cout << "\tNo. of vowels: " << Vowels << endl;
	cout << "\tNo. of digits: " << Digits << endl;

	//terminate program
	system("PAUSE");
	return 0;
}
/*
Time & Date: Sat Nov 03 18:25:07 2012

Enter a sentence: Today Is November 1
        No. of uppercase letters: 3
        No. of vowels: 6
        No. of digits: 1
Press any key to continue . . .
*/
