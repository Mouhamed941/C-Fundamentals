using namespace std;
#include <iostream>
int TotalSecondCalculator(int NumberOfDays, int NumberOfHours, int NumberOfMinutes, int NumberOfSeconds)
{
    int DayPerSeconds = 24 * 60 * 60;
    DayPerSeconds = NumberOfDays * DayPerSeconds;

    int HourPerSeconds = 60 * 60;
    HourPerSeconds = NumberOfHours * HourPerSeconds;

    int MinutePerSeconds = 60;
    MinutePerSeconds = NumberOfMinutes * MinutePerSeconds;

    int Seconds = NumberOfSeconds;

    int TotalSeconds = DayPerSeconds + HourPerSeconds + MinutePerSeconds + Seconds;
    return TotalSeconds;
}
int main()
{
    cout << "Please Enter The Number Of Days : \n";
    int Days;
    cin >> Days;

    cout << "Please Enter The Number Of Hours : \n";
    int Hours;
    cin >> Hours;
    
    cout << "Please Enter The Number Of Minutes : \n";
    int Minutes;
    cin >> Minutes;

    cout << "Please Enter The Number Of Seconds : \n";
    int Seconds;
    cin >> Seconds;

    cout << TotalSecondCalculator(Days,Hours, Minutes, Seconds) << endl;
}


