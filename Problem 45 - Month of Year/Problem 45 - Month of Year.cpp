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
        switch (Num)
        {
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
        }
    }
    else
        cout << "Wrong Month\n";
       
}
int main()
{
    IdentifyMonthOfYear();
}

