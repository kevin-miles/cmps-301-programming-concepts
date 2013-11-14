#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	//declare and initialize variables
	int x, total=0, max, min, count=0;
	float Average;
	time_t t;
	time(&t);

	//output time and date
	cout << "Time & Date: " << ctime(&t) << endl;

	int billy [] = {16, 2, 77, 40, 12071};
	max = billy[0]; min = billy[0]; total = billy[0];
	for (int n=1 ; n<(sizeof(billy)) ; n++ )
	{
		total = total + billy[n];
		if (billy[n] > max)
		{
			max = billy[n];
		}
		else if (billy[n] < min)
		{
			min = billy[n];
		}
	}

	cout << "max: " << max << endl;
	cout << "min: " << min << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "avg: " << total / float(5) << endl;


	//terminate program
	system("PAUSE");
	return 0;
}

