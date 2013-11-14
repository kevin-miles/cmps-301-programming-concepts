//while loop example

#include <iostream>

using namespace std;

int main()
{
	//declare variables
	int Total=0, i=1;

	//while loop that adds i to total
	//then increments i by 1
	while(i<=5)
	{
		Total = Total + i;
		i++;
	}

	//output total amount
	cout << "Total: " << Total << endl; 

	//terminate program
	system("PAUSE");
	return 0;
}