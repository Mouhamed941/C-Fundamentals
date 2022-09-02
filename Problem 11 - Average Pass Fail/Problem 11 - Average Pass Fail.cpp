// Problem 11 - Average Pass Fail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float Mark1, Mark2, Mark3, Avrg;
void ReadMarks()
{
    cout << "Please Enter First Mark : \n";
    cin >> Mark1;

    cout << "Please Enter second Mark : \n";
    cin >> Mark2;

    cout << "Please Enter Third  Mark : \n";
    cin >> Mark3;
}
float CalculatMarksAverag()
{
    Avrg = (Mark1 + Mark2 + Mark3) / 3;
    return Avrg;
}
void CheckPassFail()
{
    
    if (Avrg >= 50)
        cout << "Passed\n";
    else
        cout << "Failed\n";
}
int main()
{
    ReadMarks();
    CalculatMarksAverag();
    CheckPassFail();
}

