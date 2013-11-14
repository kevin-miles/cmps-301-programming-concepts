//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 7 Part 4
//				Due Date		October 24, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program loops through user input three times.
//			The program outputs fractions based on the user's
//			input and operator choice.
//----------------------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declare variables
    int a,b,c,d,e,f,g;
    char op;
    float TotalBill, SumTotal = 0;
	time_t t;
    time(&t);
   
	//output time and date
    cout << "Time & Date: " << ctime(&t) << endl;

	//loop through input three times
    for(int loop=1; loop<=3; loop++)
    {
		//take user information
        cout << "Enter a fraction: ";
        cin >> a; cin.ignore(); cin >> b;
        cout << "Enter another fraction: ";
        cin >> c; cin.ignore(); cin >> d;
        cout << "Enter an operation(+,-,*): ";
        cin >> op;

		//display output based on op variable content
        switch(op)
        {
        case '+':
            cout << '\t' << a << "/" << b << " + " << c << "/" << d << " = "
            << a*d+b*c << "/" << b*d << endl <<  endl;

            break;
        case '*':
            cout << '\t' <<  a << "/" << b << " * " << c << "/" << d << " = "
            << a*c << "/" << b*d << endl << endl;
            break;
        case '-':
            cout << '\t' <<  a << "/" << b << " - " << c << "/" << d << " = "
            << a*d-b*c << "/" << b*d << endl << endl;
            break;
			    }
    }

    //terminate program
    system("PAUSE");
    return 0;
}
/*
Time & Date: Wed Oct 17 21:53:56 2012

Enter a fraction: 2/3
Enter another fraction: 4/5
Enter an operation(+,-,*): +
        2/3 + 4/5 = 22/15

Enter a fraction: 2/3
Enter another fraction: 4/5
Enter an operation(+,-,*): -
        2/3 - 4/5 = -2/15

Enter a fraction: 2/3
Enter another fraction: 4/5
Enter an operation(+,-,*): *
        2/3 * 4/5 = 8/15

Press any key to continue . . .
*/