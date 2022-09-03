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
        switch (Num)
        {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4 :
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6 :
            cout << "Friday" << endl;
            break;
        case 7 :
            cout << "Saturday" << endl;
            break;
        }
    }
    else
        cout << "Wrong Day \n";
}
int main()
{
    IdentifyDayOfWeek();
}

