//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 3 Part 1
//				Due Date		September 18, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays user input taken for the width and 
//			length of a rectangle.
//----------------------------------------------------------------------

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	// declare variables
	float Length, Width;
	time_t p;
	time(&p);
	
	//display time and date
	cout << "Time & Date Completed: " << ctime(&p) << endl;

	// display rectangle
	cout << "For the following rectangle:" << endl;
	cout << "-------------------------" << endl;
	cout << "|                       |" << endl;
	cout << "|                       | width" << endl;
	cout << "|                       |" << endl;
	cout << "-------------------------" << endl;
	cout << "         length		  " << endl;

	//ask user to define width and length
	cout << "Enter the measure of width: ";
	cin >> Width;
	cout << "Enter the measure of length: ";
	cin >> Length;
	
	//calculate and display area and perimeter
	cout << "Area = " << (Length * Width) << endl;
	cout << "Perimeter = " << ((Width * 2)+(Length * 2)) << endl;
	
	//terminate program
	system("PAUSE");
	return 0;
}
/*---------------------------OUTPUT---------------------------

Time & Date Completed: Wed Sep 12 23:02:50 2012

For the following rectangle:
-------------------------
|                       |
|                       | width
|                       |
-------------------------
         length
Enter the measure of width: 23.90
Enter the measure of length: 44.01
Area = 1051.84
Perimeter = 135.82
Press any key to continue . . .

-----------------------------OUTPUT---------------------------*/