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
struct stTaskDuration { int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds; };
stTaskDuration ReadTaskDuration()
{
    stTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter The Number Of Days : ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter The Number Of Hours : ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter The Number Of Minutes : ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter The Number Of Seconds : ");
    return TaskDuration;
}
int TotalTaskDurationInSeconds(stTaskDuration TaskDuration)
{
    float TotalSeconds = 0;
    TotalSeconds = TaskDuration.NumberOfDays * 60 * 60 * 24;
    TotalSeconds += TaskDuration.NumberOfHours * 60 * 60;
    TotalSeconds += TaskDuration.NumberOfMinutes * 60;
    TotalSeconds += TaskDuration.NumberOfSeconds;
    return TotalSeconds;
}
int main()
{
    cout << TotalTaskDurationInSeconds(ReadTaskDuration());
}


