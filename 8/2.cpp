//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 8 Part 2
//				Due Date		October 31, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes user input on the subject choice and
//			number of questions. The program then checks user answers
//			and displays the total correct and wrong.
//----------------------------------------------------------------------
#include <iostream>
#include <ctime> //time

using namespace std;

int main()
{
		//declare variables
        int x, y, Answer, Choice, Questions;
        int Correct = 0, Wrong = 0;
        srand(time(0)); //randomize
		time_t t;
		time(&t);
	  
		//output time and date
		cout << "Time & Date: " << ctime(&t) << endl;

		//display menu
		cout << "----- Subjects Menu -----" << endl;
		cout << "\t1. Addition" << endl;
		cout << "\t2. Subtraction" << endl << endl;
        
		//take input on subject choice and number of questions
		cout << "Enter your choice: ";
        cin >> Choice;
        cout << "Enter the number of questions: ";
        cin >> Questions;

        //generate and display random numbers
		switch(Choice)
		{
		case 1:
			for(int i=1; i<=Questions; i++)
			{
					//generate random numbers
					x = rand() % 100;
					y = rand() % 100;

					//display problem, take input, check answer
					cout << '\t' << x << " + " << y << " =? ";
					cin >> Answer;
					if(Answer==(x+y))
					{
							cout << "\t\tCorrect\n";
							Correct++;
					}
					else
					{
							cout << "\t\tWrong\n";
							Wrong++;
					}
                
			}
			break;
		case 2:
			for(int i=1; i<=Questions; i++)
			{
					//generate random numbers
					x = rand() % 100;
					y = rand() % 100;

					//display problem, take input, check answer
					cout << '\t' << x << " - " << y << " =? ";
					cin >> Answer;
					if(Answer==(x-y))
					{
							cout << "\t\tCorrect\n";
							Correct++;
					}
					else
					{
							cout << "\t\tWrong\n";
							Wrong++;
					}
                
			}
			break;
		}
		//display answer totals
		cout << endl << endl;
        cout << "Number of correct answers: " << Correct << endl;
        cout << "Number of wrong answers: " << Wrong << endl;

		//terminate program
        system("PAUSE"); 
        return 0;
}
/*
Time & Date: Thu Oct 25 00:24:00 2012

----- Subjects Menu -----
        1. Addition
        2. Subtraction

Enter your choice: 1
Enter the number of questions: 2
        48 + 30 =? 78
                Correct
        60 + 63 =? 0
                Wrong


Number of correct answers: 1
Number of wrong answers: 1
Press any key to continue . . .
*/