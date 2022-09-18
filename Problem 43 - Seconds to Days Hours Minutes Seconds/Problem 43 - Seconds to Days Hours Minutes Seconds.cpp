using namespace std;
#include <iostream>
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
struct strTaskDuration { int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds; };
strTaskDuration SecondsToTaskDurationConverter(int& NumberOfSecnds)
{
    strTaskDuration TaskDuration;
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinute = 60;
    TaskDuration.NumberOfDays = floor(NumberOfSecnds / SecondsPerDay);
    int Remainder = NumberOfSecnds % SecondsPerDay;

    TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;

    TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;

    TaskDuration.NumberOfSeconds = Remainder;
    return TaskDuration;
}
void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
    cout << "\n";
    cout << TaskDuration.NumberOfDays << ":";
    cout << TaskDuration.NumberOfHours << ":" ;
    cout << TaskDuration.NumberOfMinutes<< ":" ;
    cout << TaskDuration.NumberOfSeconds ;
}
int main()
{
    int TotalSeconds = ReadPositiveNumber("Please Enter The Number Of Seconds : ");
    
    PrintTaskDurationDetails(SecondsToTaskDurationConverter(TotalSeconds));
}

