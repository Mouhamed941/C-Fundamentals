// Problem 13 - Max of 3 Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ReadNumbers(int& Num1, int& Num2,int& Num3)
{
    cout << "Please Enter First Numbers : " << endl;
    cin >> Num1;

    cout << "Please Enter Second Numbers : " << endl;
    cin >> Num2;

    cout << "Please Enter Third Numbers : " << endl;
    cin >> Num3;
}
int MaxOf3Number(int Num1, int Num2, int Num3)
{
    int Max;
    if (Num1 > Num2 && Num1 > Num3)
    {
        Max = Num1;
        return Max;
    }
    else if (Num2 > Num1 && Num2 > Num3)
    {
        Max = Num2;
        return Max;
    }
    else if (Num3 > Num1 && Num3 > Num2)
    {
        Max = Num3;
        return Max;
    }
    else
        cout << "Numbers are equal";
}
void PrintResult(int Max)
{
    cout << Max << endl;
}
int main()
{
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResult(MaxOf3Number(Num1, Num2, Num3));
}
