//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 4 Part 3
//				Due Date		September 26, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays mathematical expressions from problem
//			#3 as they would appear in C++ expressions.
//----------------------------------------------------------------------

#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
        //declare variables
		time_t p;
		time(&p);
	
		//display time and date
		cout << "Time & Date Completed: " << ctime(&p) << endl;

        //display equations
		cout << "X = (pow(a, b) + pow(b, 5))" << endl << endl;
		cout << "X = (a * pow(( b + c ), t))" << endl << endl;
		cout << "X = pow((a * b * c), float(1/5.))" << endl << endl;
		cout << "X = sqrt((pow(b, 2)) - (4 * a * c) / (2 * a))" << endl << endl;

        //terminate program
        system("PAUSE");
        return 0;
}

/*---------------------------OUTPUT---------------------------

Time & Date Completed: Wed Sep 19 22:37:07 2012

X = (pow(a, b) + pow(b, 5))

X = (a * pow(( b + c ), t))

X = pow((a * b * c), float(1/5.))

X = sqrt((pow(b, 2)) - (4 * a * c) / (2 * a))

Press any key to continue . . .

-----------------------------OUTPUT---------------------------*/