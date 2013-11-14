//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 6 Part 1
//				Due Date		October 17, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes a users input on today's date in a
//			specified format. Then it takes that information,
//			converts it to another date format, and outputs it.
//----------------------------------------------------------------------


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // declare variables
    int Month, Day, Year;
	time_t t;
    time(&t);
   
	//output time and date
    cout << "Time & Date: " << ctime(&t) << endl;

    //enter date and read it
    cout << "Enter today's date(MM/DD/YYYY): ";
    cin >> Month; cin.ignore();
    cin >> Day; cin.ignore();
    cin >> Year;

    cout << "\tToday is ";

    // display month in word format
    switch(Month)
    {
        case 1: cout << "Jan "; break;
        case 2: cout << "Feb "; break;
        case 3: cout << "Mar "; break;
        case 4: cout << "Apr "; break;
        case 5: cout << "May "; break;
        case 6: cout << "Jun "; break;
        case 7: cout << "Jul "; break;
        case 8: cout << "Aug "; break;
        case 9: cout << "Sep "; break;
        case 10: cout << "Oct "; break;
        case 11: cout << "Nov "; break;
        case 12: cout << "Dec "; break;
    }

	//display date with ending attached
    switch(Day)
    {
    case 1: case 21: case 31:
        cout << Day << "st, ";
        break;
    case 2: case 22:
        cout << Day << "nd, ";
        break;
    case 3: case 23:
        cout << Day << "rd, ";
        break;
    default:
        cout << Day << "th, ";
        break;
    }

	//display year
    cout << Year << endl;
  
	//terminate program
    system("PAUSE");
    return 0;
}
/*
Time & Date: Wed Oct 10 21:30:22 2012

Enter today's date(MM/DD/YYYY): 10/11/2012
        Today is Oct 11th, 2012
Press any key to continue . . .
*/