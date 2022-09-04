// Problem 32 - Power of M.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <cmath>;
int Num, Exponent,Result=1;

void ReadNumberAndExponent()
{
    std::cout << "Please Enter a Number : \n";
    cin >> Num;

    std::cout << "Please Enter a power : \n";
    cin >> Exponent;
}
int PowerOfNumberUsingForLoop()
{
    for (int i = 1; i <= Exponent; i++)
    {
        Result = Result * Num;
    }
    return Result;
}
void PrintTheResult()
{
    cout <<PowerOfNumberUsingForLoop();
}
int main()
{
    ReadNumberAndExponent();
    PrintTheResult();
}

