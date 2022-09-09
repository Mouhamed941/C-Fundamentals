// Problem 11 - Average Pass Fail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enPassFail { Pass = 1, Fail = 2 };
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
enPassFail CheckAverage()
{
    
    if (Avrg >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail; 
}
void PrintResult()
{
    cout << "Your Average is : " << Avrg << endl;
    if (CheckAverage() == enPassFail::Pass)
    {
        cout << "you passed" << endl;
    }
    else
        cout << "you failed" << endl;
}
int main()
{
    ReadMarks();
    CalculatMarksAverag();
    CheckAverage();
    PrintResult();
}

