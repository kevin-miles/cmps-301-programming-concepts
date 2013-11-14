//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 2 Part 5
//				Due Date		September 12, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays two strings and an integer and then
//			outputs them into a report format.
//----------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//declare variables
	string Friend_Name, Friend_Salary;
	int Friend_Age;

	//initialize variables
	Friend_Name = "Mr/Mrs Bill Gate;";
	Friend_Age = 45;
	Friend_Salary = "$12345.67.";

	//display variables in a report
	cout << "Dear " << Friend_Name << endl;
	cout << "At age " << Friend_Age << " your salary is " << Friend_Salary << endl;
	cout << "Wow! It seems you have worked very hard." << endl;

	//terminate program
	system("pause");
	return 0;
}
/*-------------------------------output-------------------------------

Dear Mr/Mrs Bill Gate;
At age 45 your salary is $12345.67.
Wow! It seems you have worked very hard.
Press any key to continue . . .

-------------------------------output-------------------------------*/