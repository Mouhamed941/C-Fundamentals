// Problem 44  Day Of Week.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enWeekDays { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fra = 7 };
int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <From||Number>To);
    return Number;
}
enWeekDays ReadDayOfWeek()
{
    return (enWeekDays)ReadNumberInRange("Please Enter Number of day : ",1,7);
}
string GetdayOfWeek(enWeekDays Day)
{

    switch (Day)
    {
    case Sat:
        return "Saturday";
    case Sun:
        return "Sunday";
    case Mon:
        return "Monday";
    case Tue:
        return "Tuesday";
    case Wed:
        return "Wednesday";
    case Thu:
        return "Thursday";
    case Fra:
        return "Friday";
    default:
        return "Wrong Day";
    }
}
int Num;

int main()
{
    cout <<GetdayOfWeek(ReadDayOfWeek());
}

