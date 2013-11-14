//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 9 Part 4
//				Due Date		November 6, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes a users input for a table range that will
//			show the conversion from Fahrenheit to Celsius in a formatted
//			table.
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	//declare variables
	int First=0, Last=0, Number=0;
    char Answer;
	time_t t;
	time(&t);   
	
	//output time and date
	cout << "Time & Date: " << ctime(&t) << endl;

	
	//user inputs table range
	cout << "To display temperature chart," << endl;
	cout << "\tPlease enter the table's range: ";
    cin >> First; 
	cin.ignore(); 
	cin >> Last;
	

	//table head displayed
	cout << "\t\t" << 'F' << char(248) << "\t" <<  'C' <<  char(248) << endl;
        
	//limit to display two decimal points
	cout << showpoint << fixed << setprecision(2);

	//write line below table head
	cout << "\t\t";
    for(int i=1; i<=12; i++)
    {
            cout << char(220);
    }
    cout << endl;

	//display table data
    for(int i=First; i<=Last; i++)
    {	
			//convert data and display
            cout << "\t\t" << i << "\t" << 5*(i-32.)/9 <<   endl;
    }
    cout << endl;
 
  	system("PAUSE"); 
    return 0;
}
/*
Time & Date: Sat Nov 03 19:02:30 2012

To display temperature chart,
        Please enter the table's range: 50-60
                F°      C°
                ????????????
                50      10.00
                51      10.56
                52      11.11
                53      11.67
                54      12.22
                55      12.78
                56      13.33
                57      13.89
                58      14.44
                59      15.00
                60      15.56

Press any key to continue . . .
*/