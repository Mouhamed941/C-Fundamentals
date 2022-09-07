// Problem 29 - Print Sum Even Numbers from 1 to N.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

int ReadNumber()
{
    cout << "Please Enter a Number : \n";
    int Num;
    cin >> Num;
    return Num;
}
int PrintEvenOddNumbers(int Num)
{
    int Sum = 0;
    int i = Num;
    while (i >= 1)
    {
        if (i % 2 == 0)
        {
            Sum += i;
        }
        i--;
    }
    return Sum;
}
int main()
{
    cout << PrintEvenOddNumbers(ReadNumber()) << endl;
}
