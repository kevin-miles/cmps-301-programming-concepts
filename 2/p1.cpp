//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 2 Part 1
//				Due Date		September 12, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays three formatted variables: two strings
//			and an integer.
//----------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// declare variables
	string MyName, MyMajor;
	float MyGpa;

	// initialize variables
	MyName = "Kevin Miles";
	MyMajor = "Computer Science";
	MyGpa = 3.1;

	// display formatted variables
	cout << "Name.........." << MyName << endl;
	cout << "GPA..........." << MyGpa << endl;
	cout << "Major........." << MyMajor << endl;

	// terminate program
	system("pause");
	return 0;
}
/*-------------------------------output-------------------------------

Name..........Kevin Miles
GPA...........3.1
Major.........Computer Science
Press any key to continue . . .

-------------------------------output-------------------------------*/