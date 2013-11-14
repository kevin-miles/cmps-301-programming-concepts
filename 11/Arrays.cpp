/*
Arrays
=======
int x[8] will read as an array of size 8 of type integer
	-the number in the brackets refers to the array's index
	-the first index is always begins at 0
int x[4]={1,3,6,8} will assign the numbers to each index in order
	-declares and initializes at the same time
	-when delcaring and initializing with less values than required
	 (EX: int x[4]={1,3,6}) the compiler will fill the unknown values 
	 with a standard value based on the type of the variable.
	 (char = space, int = 0, float = 0.0, etc.)
int x[100]={0} will assign 0 to index 0-99


Display Array
==============
for(int i=0; i<8; i++) { cout << x[i] << "\t"; } cout << endl; //display data


Compute Array Total Values
===========================
for(int i=0; i<8; i++) { Total = Total + x[i]; }


Find Maximum and Minimum 
=========================
int max, int min;
max = x[0]; min = x[0];
for(int i=1, i<8, i++)
{
	if(x[i] > max){ max = x[i]; }
	if(x[i] < min){ min = x[i]; }
}

Read Data into Array X
=======================
for(int i=0; i<8, i++)
{
	cout << "Enter a number: ";
	cin >> x[i];
}

Check Data Above Average
=========================
//Compute Total Here
//Find Average and Assign to Variable
int AboveAverage=0;
for(int i=0; i<8; i++){ if(x[i] > AverageNumber){ AboveAverage++; }}
cout << AboveAverage << " are above average" << endl;



*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int x[8], Total=0, max,  min, AboveAverage=0; //initializes an integer array with indexes from 0-7
	float Average;

	for(int i=0; i<8; i++) //read data into array
	{
		cout << "Enter data: ";
		cin >> x[i];
	}

	for(int i=0; i<8; i++) { cout << x[i] << "\t"; } cout << endl; //display data

	for(int i=0; i<8; i++) { Total = Total + x[i]; } //compute total
	Average = Total / 8.;
	

	max = x[0]; min = x[0];
	for(int i=1; i<8; i++)
	{
		if(x[i] > max){ max = x[i]; }
		if(x[i] < min){ min = x[i]; }
	}

	for(int i=0; i<8; i++){ if(x[i] > Average){ AboveAverage++; }}
	


	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	cout << "Avg: " << Average << endl;
	cout << AboveAverage << " are above average" << endl;

	system("PAUSE");
	return 0;
}