//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 10 Part 4
//				Due Date		November 28, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes a setence from user input then calculates
//			and displays the total number of letters, digits, and words
//			in the sentence provided.
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip> 
#include <string>
#include <cctype> //mandatory for this project

using namespace std;

void GetCount(int &l, int &d, int &w);

int main()
{
	//declare variables
	int letters=0, digits=0, words=1;
	string sentence;
	time_t t;
	time(&t);

	//output time and date
	cout << "Time & Date: " << ctime(&t) << endl;

	//ask for sentence then call function
	cout << "Enter a sentence: ";
	GetCount(letters, digits, words);

	//output count
	cout << "\tNumber of letters = " << letters << endl;
	cout << "\tNumber of digits = " << digits << endl;
	cout << "\tNumber of words = " << words << endl;

	//terminate program
	system("PAUSE");
	return 0;
}

//--------------------------------------------------------------
//	Name: GetCount
//	Purpose: Takes user input and counts the total number of 
//			 letters, digits, and words.
//	Input: Pass by reference three integer variables: letters,
//		   digits, and words.
//	Output: 
//--------------------------------------------------------------
void GetCount(int &l, int &d, int &w)
{
	//initialize variable
	char Letter;
	//take user input
	cin.get(Letter);

	//performs while loop until newline found in user input
	while(Letter != '\n')
	{
		//evaluate user input and increment relative variables
		if(isalpha(Letter)){ l++; }
		if(isdigit(Letter)){ d++; }
		if(isspace(Letter)){ w++; }

		//move to next character of user input
		cin.get(Letter);

	}
}

/*
Time & Date: Thu Nov 15 20:56:39 2012

Enter a sentence: Today Is Nov 10
		Number of letters = 10
		Number of digits = 2
		Number of words = 4
Press any key to continue . . .
*/