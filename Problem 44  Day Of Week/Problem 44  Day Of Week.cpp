// Problem 44  Day Of Week.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Num;
void IdentifyDayOfWeek()
{
    cout << "Please Enter a Number : \n";
    cin >> Num;
    if (Num >= 1 && Num <= 7)
    {
        if (Num == 1)
        {
            cout << "Sunday" << endl;
        }
        else if (Num == 2)
        {
            cout << "Monday" << endl;
        }
        else if (Num == 3)
        {
            cout << "Tuesday" << endl;
        }
        else if (Num == 4)
        {
            cout << "Wednesday" << endl;
        }
        else if (Num == 5)
        {
            cout << "Thursday" << endl;
        }
        else if (Num == 6)
        {
            cout << "Friday" << endl;
        }
        else if (Num == 7)
        {
            cout << "Saturday" << endl;
        }
    }
    else
        cout << "Wrong Day Please Try Again\n";
}
int main()
{
    IdentifyDayOfWeek();
}

