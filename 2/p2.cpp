//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 2 Part 2
//				Due Date		September 12, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays the length and width variables next to
//			an output of a rectangle.
//----------------------------------------------------------------------
#include <iostream>

using namespace std;

int main()
{
	// declare variables
	float RecLength, RecWidth;

	// initialize variables
	RecLength = 25.5;
	RecWidth = 7.8;

	// display formatted variables next to rectangle
	cout << "-------------------------" << endl;
	cout << "|                       |" << endl;
	cout << "|                       | width=" << RecWidth << endl;
	cout << "|                       |" << endl;
	cout << "-------------------------" << endl;
	cout << "          length=" << RecLength << endl;

	// terminate program
	system("pause");
	return 0;
}
/*-------------------------------output-------------------------------

-------------------------
|                       |
|                       | width=7.8
|                       |
-------------------------
          length=25.5
Press any key to continue . . .

-------------------------------output-------------------------------*/