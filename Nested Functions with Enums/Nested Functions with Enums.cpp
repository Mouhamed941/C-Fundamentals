

#include <iostream>
using namespace std;
enum enWeekDays { Sun = 1, Sat = 2, Mon = 3, Tus = 4, Wed = 5, Thu = 6, Fra = 7 };
void PrintWeekDays()
{
    
    cout << "\tWeek Days\n";
    cout << "*********************\n";
    cout << "1- Sunday\n";
    cout << "2- Monday\n";
    cout << "3- Tuesday\n";
    cout << "4- Wednesday\n";
    cout << "5- Thursday\n";
    cout << "6- Friday\n";
    cout << "7- Saterday\n";
}
enWeekDays ReadWeekDay()
{
    
    int wk;
    cout << "Please Enter Number Of Day : \n";
    cin >> wk;
    return (enWeekDays)wk;
}
string GetWeekDayName(enWeekDays WeekDay)
{
    switch (WeekDay)
    {
    case Sun:
        return "Sunday";
        break;
    case Mon:
        return "Monday";
        break;
    case Tus:
        return "Tuesday";
        break;
    case Wed:
        return "Wednesday";
        break;
    case Thu:
        return "Thursday";
        break;
    case Fra:
        return "Friday";
        break;
    case Sat:
        return "Saterday";
        break;
    default:
        return "Not Week day";
        break;
    }
}
int main()
{
    PrintWeekDays();
    cout << GetWeekDayName(ReadWeekDay()) << endl;
}


