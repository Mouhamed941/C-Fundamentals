// Problem 26 - Print Numbers from 1 to N.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadNumber()
{
    cout << "Please Enter a Number : \n";
    int Num;
    cin >> Num;
    return Num;
}
void PrintNumber_UsingWhile(int Num)
{
    int Counter = 0;

    while (Counter <=Num)
    {
        Counter++;
        cout << Num << endl;
    }
}
void PrintNumber_UsingDoWhile(int Num)
{
    int Counter = 0;
    do
    {
        Counter++;
        cout << Counter << endl;
    } while (Counter < Num);
}
void PrintNumbers_UsingFor(int Num)
{
    for (size_t i = 1; i <= Num; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    int Num = ReadNumber();
    PrintNumber_UsingDoWhile(Num);
    PrintNumbers_UsingFor(Num);
}
