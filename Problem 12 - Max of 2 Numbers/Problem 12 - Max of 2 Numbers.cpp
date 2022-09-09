// Problem 12 - Max of 2 Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadNumbers(int& Num1,int& Num2)
{
    cout << "Please Enter First Numbers : " << endl;
    cin >> Num1;

    cout << "Please Enter Second Numbers : " << endl;
    cin >> Num2;
}
int MaxOf2Number(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else if (Num2 > Num1)
        return Num2;
    else
        cout << "Numbers are equal";
}
void PrintResult(int Max)
{
    cout << Max << endl;
}
int main()
{
    int Num1=0, Num2=0;
    ReadNumbers( Num1, Num2);
    PrintResult(MaxOf2Number(Num1, Num2));
}

