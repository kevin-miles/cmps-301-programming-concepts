//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 5 Part 1
//				Due Date		October 10, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program calculates and outputs the users inputted 
//			numerical score as a letter grade.
//----------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{

    //declare variables
    int Grade;
    char LetterGrade;
    time_t t;
    time(&t);
   
	//output time and date
    cout << "Time & Date: " << ctime(&t) << endl;

    //ask for numerical score and assign value
    cout << "Enter your score: ";
    cin >> Grade;

	//decide value of the letter grade
    if (Grade < 60)
    {
         LetterGrade = 'F';
    }
    else if (Grade >= 60 && Grade <= 70)
    {
        LetterGrade = 'D';
    }
    else if (Grade > 70 && Grade <= 80)
    {
        LetterGrade = 'C';
    }
    else if (Grade > 80 && Grade <= 90)
    {
        LetterGrade = 'B';
    }
    else
    {
        LetterGrade = 'A';
    }
	
	//output letter grade
    cout << "\tYour grade is \" " << LetterGrade << "\"" << endl;
   
	//terminate program
    system("PAUSE");
    return 0;
}

/*
Time & Date: Wed Sep 26 20:32:32 2012

Enter your score: 95
        Your grade is " A"
Enter your score: 85
        Your grade is " B"
Enter your score: 75
        Your grade is " C"
Enter your score: 65
        Your grade is " D"
Enter your score: 55
        Your grade is " F"
*/

