// Problem 41 - Service Fee and Sales Tax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
    int Num;
    do
    {
        cout << Message << endl;
        cin >> Num;

    } while (Num <= 0);

    return Num;
}

float HoursToWeeks(float NumberOfHours)
{
    return NumberOfHours / 168;
}
float HoursToDays(float NumberOfHours)
{
    return NumberOfHours / 24;
}
float DaysToWeeks(float NumberOfDays)
{
    return NumberOfDays / 7;
}

int main()
{
    float NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours/n");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = HoursToWeeks(NumberOfHours);

    cout << "Total Hours : " << NumberOfHours << endl;
    cout << "Number Of Days : " << NumberOfDays << endl;
    cout << "Number Of Weeks : " << NumberOfWeeks << endl;
}


