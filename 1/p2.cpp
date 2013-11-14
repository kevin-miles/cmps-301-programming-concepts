#include <iostream>

using namespace std;

int main()
{
	//declare variables
	float DrinkLarge, DrinkMed, Sand5, Sand10;
	
	//initialize variables
	DrinkLarge = 1.10; DrinkMed = 1.00;
	Sand5 = 2.10; Sand10 = 3.75;

	//display menu
	cout << "----------------------- MENU -----------------------" << endl;
	cout << "Drinks									 " << endl;
	cout << "	Large................................" << DrinkLarge << endl;
	cout << "	Medium..............................." << DrinkMed << endl;
	cout << "Sandwiches								 " << endl;
	cout << "	5 Inch..............................." << Sand5 << endl;
	cout << "	10 Inch.............................." << Sand10 << endl;
	
	//terminate program
	system("pause");
	return 0;
}
/*------------------------------- OUTPUT ------------------------------------

----------------------- MENU -----------------------
Drinks
        Large................................1.1
        Medium...............................1
Sandwiches
        5 Inch...............................2.1
        10 Inch..............................3.75
Press any key to continue . . .

------------------------------- OUTPUT ------------------------------------*/