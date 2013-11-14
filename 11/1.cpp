#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare and initialize variables
	string maxName, minName, Name[5]={"Tom", "Bob", "Bill", "John", "Mary"};
	int Total=0, max, maxId, min, minId, Scores[5]={75,85,50,60,90};
	float Average;
	time_t t;
	time(&t);

	//output time and date
	cout << "Time & Date: " << ctime(&t) << endl;


	//print out table of names and scores
	cout << "Name\tScore\n";
	cout << "-----------------\n";
	for(int i=0; i<5; i++)
	{
		cout <<  Name[i] << "\t" << Scores[i] << endl;
	}

	for(int i=0; i<5; i++) { Total = Total + Scores[i]; } //compute total

	Average = Total / float(5); //compute average
	
	max = Scores[0]; min = Scores[0]; //initialize max and min with first score 
	for(int i=1; i<5; i++) //starts at one because index 0 already loaded into max and min
	{
		//assigns index of max and min to variables
		if(Scores[i] > max){ maxId = i;} 
		if(Scores[i] < min){ minId = i;} 
	}
	cout << endl;

	//output max and min scores
	cout << "Max Score: " << Scores[maxId] << " - " << Name[maxId] << endl;
	cout << "Min Score: " << Scores[minId] << " - " << Name[minId] << endl;	
	cout << endl;

	//print out above average scores
	cout << "Scores above average: " << endl; 
	for(int i=0; i<5; i++)
	{ 
		if(Scores[i] > Average)
		{ 
			cout << Name[i] << "\t";
		}
	}
	cout << endl << endl;


	//terminate program
	system("PAUSE");
	return 0;
}

