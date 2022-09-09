#include <iostream>
using namespace std;
float Mark1, Mark2, Mark3, Avrg;
void ReadMarks()
{
    cout << "Please Enter First Mark : \n";
    cin >> Mark1;

    cout << "Please Enter Seconde Mark : \n";
    cin >> Mark2;

    cout << "Please Enter Third Mark : \n";
    cin >> Mark3;
    cout << endl;
}
float CalculateAverage()
{
    return (Mark1 + Mark2 + Mark3) / 3;
}
void PrintAverage()
{
    cout << CalculateAverage() << endl;
}
int main()
{
    ReadMarks();
    PrintAverage();
}
