//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 10 Part 2
//				Due Date		November 28, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes two integer variables from user input then
//			displays the equation and answer of the input in addition,
//			subtraction, and multiplication form.
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip> 

using namespace std;

void ComputeTotal(int x, int y);
void ComputeDiff(int x, int y);
void ComputeProd(int x, int y);

int main()
{
	//declare variables
	int x, y;
	time_t t;
	time(&t);

	//output time and date
	cout << "Time & Date: " << ctime(&t) << endl;

	//ask user to input table size and assign to variable
	cout << "Enter two integer numbers: ";
	cin >> x >> y;

	//call functions
	ComputeTotal(x, y);
	ComputeDiff(x, y);
	ComputeProd(x, y);

	//terminate program
	system("PAUSE");
	return 0;
}

//--------------------------------------------------------------
//	Name: ComputeTotal
//	Purpose: Computes the total of two integers and outputs the
//			 total.
//	Input: Two integer variables, x and y
//	Output: Prints the equation and total of two integer variables
//--------------------------------------------------------------
void ComputeTotal(int x, int y)
{
	//print equation and total of the two variables
	cout << "\t" << x << " + " << y << " = " << x + y << endl;
}

//--------------------------------------------------------------
//	Name: ComputeDiff
//	Purpose: Computes the difference of two integers and outputs the
//			 remainder.
//	Input: Two integer variables, x and y
//	Output: Prints the equation and remainder of two integer variables
//--------------------------------------------------------------
void ComputeDiff(int x, int y)
{
	//print equation and remainder of the two variables
	cout << "\t" << x << " - " << y << " = " << x - y << endl;
}

//--------------------------------------------------------------
//	Name: ComputeProd
//	Purpose: Computes the product of two integers and outputs the
//			 total.
//	Input: Two integer variables, x and y
//	Output: Prints the equation and total product of two integer variables
//--------------------------------------------------------------
void ComputeProd(int x, int y)
{
	//print equation and remainder of the two variables
	cout << "\t" << x << " * " << y << " = " << x * y << endl;	
}
/*
Time & Date: Thu Nov 15 19:03:58 2012

Enter two integer numbers: 2 2
		2 + 2 = 4
		2 - 2 = 0
		2 * 2 = 4
Press any key to continue . . .
*/