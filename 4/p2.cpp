//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 4 Part 2
//				Due Date		September 26, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays a triangle, takes user input and 
//			assigns it to variables representing the sides. The
//			program then computes the Area and Perimeter and
//			displays the output.
//----------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
        //declare variables
        float a, b, c, p_formula, Area, Perimeter;
		time_t p;
		time(&p);
	
		//display time and date
		cout << "Time & Date Completed: " << ctime(&p) << endl;

        //display a triangle
        cout << "         /\\         "   << endl;
        cout << "        /  \\        "   << endl;
        cout << "side_a /    \\ side_b"   << endl;
        cout << "      /      \\      "   << endl;
	    cout << "     /        \\     "   << endl;
        cout << "    ------------     "   << endl;
        cout << "        side_c       "   << endl;
		cout << endl;

        /*
                ask for input of measurement and height
                then assign to all relative variables
        */
        cout << "Enter the Measurement of all three sides: "; cin >> a >> b >> c;

        //compute perimeter
        Perimeter = a + b + c;
		//compute area using Heron formula
        p_formula = Perimeter / 2;
        Area = sqrt((p_formula * (p_formula-a) * (p_formula-b) * (p_formula-c) ));

        //output Area and Perimeter
        cout << fixed << showpoint << setprecision(2);
        cout << "\t Area: " << Area << endl;
        cout << "\t Perimeter: " << Perimeter << endl;

        //terminate program
        system("PAUSE");
        return 0;
}

/*---------------------------OUTPUT---------------------------

Time & Date Completed: Wed Sep 19 22:24:17 2012

         /\
        /  \
side_a /    \ side_b
      /      \
     /        \
    ------------
        side_c

Enter the Measurement of all three sides: 10.5 20.7 15.9
         Area: 81.86
         Perimeter: 47.10
Press any key to continue . . .

-----------------------------OUTPUT---------------------------*/