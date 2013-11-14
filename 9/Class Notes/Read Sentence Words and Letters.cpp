/*
read a sentence. counter the number of words
and uppercase letters
*/

#include <iostream>

using namespace std;

int main()
{
	//declare variables
	int Words=1, Uppercase=0;
	char Letter;

	//ask for user input
	cout << "Enter a sentence: ";
	cin.get(Letter);

	//performs while loop until newline found in user input
	while(Letter != '\n')
	{
		//evaluate user input and increment relative variables
		if(Letter >= 'A' && Letter <='Z'){ Uppercase++; }
		if(Letter == ' '){ Words++; }

		//move to next portion of user input
		cin.get(Letter);

	}

	//output total words and uppercase letters
	cout << "Words: " << Words << endl; 
	cout << "Uppercase Letters: " << Uppercase << endl;

	//terminate program
	system("PAUSE");
	return 0;
}