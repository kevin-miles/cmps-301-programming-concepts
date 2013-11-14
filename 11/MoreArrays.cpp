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

for(int i=0; i<8; i++) { Total = Total + x[i]; } //compute total
Average = Total / 8.;
	

max = x[0]; min = x[0];
for(int i=1; i<8; i++)
{
	if(x[i] > max){ max = x[i]; }
	if(x[i] < min){ min = x[i]; }
}

for(int i=0; i<8; i++){ if(x[i] > Average){ AboveAverage++; }}
int AboveAverage=0;
for(int i=0; i<8; i++){ if(x[i] > AverageNumber){ AboveAverage++; }}
cout << AboveAverage << " are above average" << endl;



*/

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{

1) Find the average of all scores
2) Display the name of students with score >= average
3) Find highest and lowest score
4) Display the name of student with highest score
5) Display the name of student with lowest score

	string Name[5]={"Tom", "Bob", "Bill", "John", "Mary"};
	int Total=0, max, min, AboveAverage, Average, Scores[5]={75,85,50,60,90};

	cout << "Name\tScore\n";
	cout << "-----------------\n";
	
	for(int i=0; i<5; i++)
	{
		cout <<  Name[i] << "\t" << Scores[i] << endl;
	}

	for(int i=0; i<5; i++) { Total = Total + Scores[i]; } //compute total
	Average = Total / 5.;
	
	.
	max = Scores[0]; min = Scores[0];
	for(int i=1; i<8; i++)
	{
		if(Scores[i] > max){ max = Scores[i]; }
		if(Scores[i] < min){ min = Scores[i]; }
	}

	cout << endl;
	cout << "People with scores above average: " << endl;
	for(int i=0; i<8; i++)
	{ 
		if(Scores[i] > Average)
		{ 
			cout << Name[i] << "\t";
		}
	}
	cout << endl;



	system("PAUSE");
	return 0;
}