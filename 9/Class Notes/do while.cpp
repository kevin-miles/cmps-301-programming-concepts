/*
do while loops
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	char Answer;

	//do while loop
	do {
		cout << "Happy Halloween\n";
		cout << "Do you want to see this message again? ";
		cin >> Answer;
		}
	while(Answer == 'y' || Answer == 'Y');

	cout << "Goodbye." << endl;

	//terminate program
	system("PAUSE");
	return 0;
}