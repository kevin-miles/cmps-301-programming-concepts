#include <iostream>
#include <string>

using namespace std;

int main()
{
	// declare variables
	int Age;
	float Gpa;
	char Grade;
	string Name, LastName;

	// ask user's information
	cout << "How old are you? ";	
	cin >> Age;
	cout << "What is your GPA? "; 
	cin >> Gpa;
	cout << "What is your Grade? ";
	cin >> Grade;
	cout << "What is your First Name? ";
	cin >> Name;
	cout << "What is your Last Name? ";
	cin >> LastName;


	//display a report
	cout << "	Age.............." << Age << endl;
	cout << "	GPA.............." << Gpa << endl;
	cout << "	Grade............" << Grade << endl;
	cout << "	Name............." << Name << " " << LastName << endl;

	// terminate program
	system("PAUSE");
	return 0;
}