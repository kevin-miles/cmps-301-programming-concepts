//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 6 Part 3
//				Due Date		October 17, 2012
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays a formatted menu, takes user input and
//			calculates the total bill using switch statements.
//----------------------------------------------------------------------


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declare variables
    int DrinkAmount, FoodAmount;
    char DrinkType, DrinkType2, FoodType, FoodType2;
    float DrinkTotal, FoodTotal, TotalBill;
   	time_t t;
    time(&t);
   
	//output time and date
    cout << "Time & Date: " << ctime(&t) << endl;
   
    //two decimal points
    cout << fixed << showpoint << setprecision(2) << endl;

    //display menu
    cout << setfill('.');
    cout << "---------- K-Store ----------" << endl;
    cout << left << "Drinks" << endl;
    cout << left << setw(10) << "\t Imported" << endl;
    cout << left << setw(10) << "\t\t Beer" << right << setw(10) << "2.75" << endl;
    cout << left << setw(10) << "\t\t Wine" << right << setw(10) << "10.15" << endl;
    cout << left << setw(10) << "\t Domestic" << endl;
    cout << left << setw(10) << "\t\t Beer" << right << setw(10) << "2.15" << endl;
    cout << left << setw(10) << "\t\t Wine" << right << setw(10) << "9.15" << endl;
    cout << left << "Food" << endl;
    cout << left << setw(10) << "\t Italian" << endl;
    cout << left << setw(10) << "\t\t Pizza" << right << setw(10) << "7.25" << endl;
    cout << left << setw(10) << "\t\t Ravioli" << right << setw(10) << "6.10" << endl;
    cout << left << setw(10) << "\t Mexican" << endl;
    cout << left << setw(10) << "\t\t Taco" << right << setw(10) << "1.10" << endl;
    cout << left << setw(10) << "\t\t Burrito" << right << setw(10) << "2.25" << endl << endl;

    //ask for information and compute totals for each item
    cout << "How many drinks? ";
    cin >> DrinkAmount;
    cout << "Imported or Domestic? ";
    cin >> DrinkType;
    switch(DrinkType)
    {
    case 'i': case 'I':
        cout << "Beer or Wine? ";
        cin >> DrinkType2;
            switch (DrinkType2)
            {
            case 'b': case 'B':
                DrinkTotal = DrinkAmount * 2.75;
                break;
            case 'w': case 'W':
                DrinkTotal = DrinkAmount * 10.15;
                break;
            }
		break;
    case 'd': case 'D':
        cout << "Beer or Wine? ";
        cin >> DrinkType2;
            switch (DrinkType2)
            {
            case 'b': case 'B':
                DrinkTotal = DrinkAmount * 2.15;
                break;
            case 'w': case 'W':
                DrinkTotal = DrinkAmount * 9.15;
                break;
            }
		break;
    }

    cout << "\nMexican or Italian food? ";
    cin >> FoodType;
       
    switch(FoodType)
    {
    case 'm': case 'M':
        cout << "Taco or burrito? ";
        cin >> FoodType2;
        switch (FoodType2)
        {
        case 't': case 'T':
            cout << "How many tacos? ";
            cin >> FoodAmount;
            FoodTotal = FoodAmount * 1.10;
            break;
        case 'b': case 'B':
            cout << "How many burritos? ";
            cin >> FoodAmount;
            FoodTotal = FoodAmount * 2.25;
            break;
        }
		break;
    case 'i': case 'I':
        cout << "Pizza or ravioli? ";
        cin >> FoodType2;
        switch (FoodType2)
        {
        case 'p': case 'P':
            cout << "How many pizzas? ";
            cin >> FoodAmount;
            FoodTotal = FoodAmount * 7.25;
            break;
        case 'r': case 'R':
            cout << "How many ravioli? ";
            cin >> FoodAmount;
            FoodTotal = FoodAmount * 6.10;
            break;
        }
		break;
    }

    //calculate and display total bill
    TotalBill = DrinkTotal + FoodTotal;
   
    cout << "\n\tYour Total Bill = " << TotalBill << endl;
  
    system("PAUSE");
    return 0;
}
/*
Time & Date: Wed Oct 10 21:38:45 2012


---------- K-Store ----------
Drinks
         Imported
                 Beer.........2.75
                 Wine........10.15
         Domestic
                 Beer.........2.15
                 Wine.........9.15
Food
         Italian.
                 Pizza........7.25
                 Ravioli......6.10
         Mexican.
                 Taco.........1.10
                 Burrito......2.25

How many drinks? 2
Imported or Domestic? I
Beer or Wine? b

Mexican or Italian food? m
Taco or burrito? T
How many tacos? 3

        Your Total Bill = 8.80
Press any key to continue . . .
*/