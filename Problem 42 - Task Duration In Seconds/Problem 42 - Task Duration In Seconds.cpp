using namespace std;
#include <iostream>

int main()
{
    cout << "Please Enter The Number Of Days : \n";
    int NumberOfDays;
    cin >> NumberOfDays;
    int DayPerSeconds = 24 * 60 * 60;
    DayPerSeconds = NumberOfDays * DayPerSeconds;


    cout << "Please Enter The Number Of Hours : \n";
    int NumberOfHours;
    cin >> NumberOfHours;
    int HourPerSeconds =  60 * 60;
    HourPerSeconds = NumberOfHours * HourPerSeconds;

    cout << "Please Enter The Number Of Minutes : \n";
    int NumberOfMinutes;
    cin >> NumberOfMinutes;
    int MinutePerSeconds =  60;
    MinutePerSeconds = NumberOfMinutes * MinutePerSeconds;

    cout << "Please Enter The Number Of Seconds : \n";
    int NumberOfSeconds;
    cin >> NumberOfSeconds;
    int Seconds = NumberOfSeconds;
    
    int TotalSeconds = DayPerSeconds + HourPerSeconds + MinutePerSeconds + Seconds;
    cout << TotalSeconds << endl;

}


