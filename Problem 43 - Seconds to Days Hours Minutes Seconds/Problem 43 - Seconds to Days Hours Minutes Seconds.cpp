using namespace std;
#include <iostream>
void SecondsConverter(int NumberOfSecnds)
{
    int SecondsPerDay = 24 * 60 * 60;
    int SecondsPerHour = 60 * 60;
    int SecondsPerMinute = 60;
    int NumberOfDays = floor(NumberOfSecnds / SecondsPerDay);
    int Remainder = NumberOfSecnds % SecondsPerDay;

    int NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;

    int NumberOfMinutes = floor(Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;

    int NumberOfSeconds = Remainder;
    cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds << endl;
}
int main()
{
    cout << "Please Enter The Number Of Seconds : \n";
    int TotalSeconds;
    cin >> TotalSeconds;
    SecondsConverter(TotalSeconds);
}

