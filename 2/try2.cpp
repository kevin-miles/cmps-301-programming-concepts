#include <iostream>

using namespace std;

int main()
{
	int NumDrinks, NumCakes;
	float Total;

	//display menu
	cout << "----------------- MENU -----------------" << endl;
	cout << "Drinks								 2.75" << endl;
	cout << "Cakes								 1.65" << endl;
	cout << endl;

	//ask the user the number of each item in the menu
	cout << "How many drinks?" << endl;
	cin >> NumDrinks;
	cout << "How many cakes?" << endl;
	cin >> NumCakes;

	//compute total bill
	Total = ((NumDrinks*2.75)+(NumCakes*1.65));

	//display total bill
	cout << "Total: $" << Total << endl;

	//terminate program
	system("PAUSE");
	return 0;
}
/*---------------------------OUTPUT---------------------------
----------------- MENU -----------------
Drinks                                                           2.75
Cakes                                                            1.65

How many drinks?
0
How many cakes?
1
Total: $1.65
Press any key to continue . . .
 ---------------------------OUTPUT---------------------------*/