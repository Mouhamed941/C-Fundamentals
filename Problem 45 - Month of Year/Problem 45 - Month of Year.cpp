// Problem 45 - Month of Year.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Num;
void IdentifyMonthOfYear()
{
    cout << "Please Enter a Number : \n";
    cin >> Num;
    if (Num >= 1 && Num <= 12)
    {
        if (Num == 1)
        {
            cout << "January" << endl;
        }
        else if (Num == 2)
        {
            cout << "February" << endl;
        }
        else if (Num == 3)
        {
            cout << "March" << endl;
        }
        else if (Num == 4)
        {
            cout << "April" << endl;
        }
        else if (Num == 5)
        {
            cout << "May" << endl;
        }
        else if (Num == 6)
        {
            cout << "June" << endl;
        }
        else if (Num == 7)
        {
            cout << "July" << endl;
        }
        else if (Num == 8)
        {
            cout << "August" << endl;
        }
        else if (Num == 9)
        {
            cout << "September" << endl;
        }
        else if (Num == 10)
        {
            cout << "October" << endl;
        }
        else if (Num == 11)
        {
            cout << "November" << endl;
        }
        else if (Num == 12)
        {
            cout << "December" << endl;
        }
    }
    else
        cout << "Wrong Month\n";
}
int main()
{
    IdentifyMonthOfYear();
}

