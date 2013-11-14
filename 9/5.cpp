//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 9 Part 5
//				Due Date		November 6, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program continues generating random numbers that are
//			evaluated and assosciated with a task. The user inputs if
//			they would like to continue. The program evaluates the user
//			answer and continues or terminates.
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
	
	srand(time(0)); //ensures unique random numbers

	do {
		Number = rand() % 5 + 1; //generate random number
		switch(Number) //evaluate random number
		{
		case 1:
			cout << "\tWork Harder" << endl;
			break;
		case 2:
			cout << "\tHave enough sleep" << endl;
			break;
		case 3:
			cout << "\tGo to movie" << endl;
			break;
		case 4:
			cout << "\tCall a friend" << endl;
			break;
		case 5:
			cout << "\tSave Money" << endl;
			break;
		default:
			cout << "Error: Out of Range - "  << Number << endl;
			break;
		}
		//ask user if they want to continue
		cout << "\t\tContinue(y/n)? ";
		cin >> Answer;
	} while(Answer == 'y' || Answer == 'Y');
	 
	//terminate program
	system("PAUSE"); 
    return 0;
}
/*
Time & Date: Sat Nov 03 18:48:23 2012

        Go to movie
                Continue(y/n)? y
        Save Money
                Continue(y/n)? y
        Call a friend
                Continue(y/n)? y
        Have enough sleep
                Continue(y/n)? y
        Work Harder
                Continue(y/n)? n
Press any key to continue . . .
*/