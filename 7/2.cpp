//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 7 Part 2
//				Due Date		October 24, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program loops through an inputted amount of students
//			then calculates the grade average and letter grade for
//			each student's output.
//----------------------------------------------------------------------


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
    //declare variables
    int NumStudents, ExamScore1, ExamScore2;
    float Average;
    char Grade;
    string Name="";
	time_t t;
    time(&t);
   
	//output time and date
    cout << "Time & Date: " << ctime(&t) << endl;
   

    //display menu
    cout << "--------------------- Consulting Center ---------------------" << endl;
    cout << "Let's see how you are doing in your classes." << endl;

    //ask for amount of students
    cout << "Please enter the number of students: "; cin >> NumStudents;

    for(int a=1; a<=NumStudents; a++)
    {
        //ask for customer for information
        cout << "\t Whats your name? ";
        cin >> Name;
        cout << '\t' << Name << ", Please enter your scores in two exams: ";
        cin >> ExamScore1; cin >> ExamScore2;

        //calculate average
        Average = (ExamScore1 + ExamScore2) / 2;

        if (Average <= 65)
        {
            Grade = 'D';
        }
        else if (Average > 65 && Average <= 75)
        {
            Grade = 'C';
        }
        else if (Average > 75 && Average <= 85)
        {
            Grade = 'B';
        }
        else
        {
            Grade = 'A';
        }

        //display average and grade
        cout << "\t\tYour average is " << Average << " and your grade is " << Grade << endl << endl;

    }



    //terminate program
    system("PAUSE");
    return 0;
}
/*
Time & Date: Wed Oct 17 21:49:16 2012

--------------------- Consulting Center ---------------------
Let's see how you are doing in your classes.
Please enter the number of students: 3
         Whats your name? John
        John, Please enter your scores in two exams: 66 88
                Your average is 77 and your grade is B

         Whats your name? Bill
        Bill, Please enter your scores in two exams: 99 88
                Your average is 93 and your grade is A

         Whats your name? Arnold
        Arnold, Please enter your scores in two exams: 66 55
                Your average is 60 and your grade is D

Press any key to continue . . .
*/