//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 10 Part 1
//				Due Date		November 28, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes an integer variable from user input and 
//			prints a table whose length is based on the user's input.
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip> 

using namespace std;


void DrawHeading();
void UnderLineHeading(int n);
void ShowTable(int n);


int main()
{
	//declare variables
	int size;
	time_t t;
	time(&t);

	//output time and date
	cout << "Time & Date: " << ctime(&t) << endl;

	//ask user to input table size and assign to variable
	cout << "Enter the table size: ";
	cin >> size;

	//call functions
	DrawHeading();
	UnderLineHeading(20);
	ShowTable(size);

	//terminate program
	system("PAUSE");
	return 0;
}

//--------------------------------------------------------------
//	Name: DrawHeading
//	Purpose: Prints the heading of the menu
//	Input: 
//	Output:	Prints the heading of the menu
//--------------------------------------------------------------
void DrawHeading()
{
	//draw heading of the menu
	cout << right << setw(3) << "N" << "   " << left << setw(7) << "N^1/2" << left << setw(8) << "N^1/4" << endl;
}

//--------------------------------------------------------------
//	Name: UnderLineHeading
//	Purpose: Underline the heading of the menu as many times as
//			 is passed to it.
//	Input: Integer length of menu
//	Output:	Prints underline of menu
//--------------------------------------------------------------
void UnderLineHeading(int n)
{
	//loops the length passed to it
	for(int i=1; i<=n; i++)
	{
		//outputs character as many times given
		cout << char(223);
	}
	cout << endl;
}

//--------------------------------------------------------------
//	Name: ShowTable
//	Purpose: Prints a table whos length is based on the integer 
//			 variable.
//	Input: Integer length of menu
//	Output:	Prints the menu
//--------------------------------------------------------------
void ShowTable(int n)
{
	//limits decimal length to two digits
	cout << fixed << showpoint << setprecision(2);

	//loops table until length is met
	for(int i=1; i<=n; i++)
	{
		//prints a line of the table
		cout << right << setw(3) << i << "   " << left << setw(7) << pow(i,.5) << left << setw(8) << pow(i,.25) << endl;
	}
	
}

/*
Time & Date: Thu Nov 15 20:24:53 2012

Enter the table size: 3
  N   N^1/2  N^1/4
▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
  1   1.00   1.00
  2   1.41   1.19
  3   1.73   1.32
Press any key to continue . . .
*/