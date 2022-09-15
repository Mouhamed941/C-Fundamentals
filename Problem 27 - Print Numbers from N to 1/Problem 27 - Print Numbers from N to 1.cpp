// Problem 27 - Print Numbers from N to 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void PrintNumbers(int Num)
{
    int i = Num;
    while (i >= 1)
    {
        cout << i << endl;
        i--;
    }
}
void PrintNumber_UsingDoWhile(int Num)
{
    int Counter = Num+1;
    do
    {
        Counter--;
        cout << Counter << endl;
    } while (Counter > 1);
}
void PrintNumbers_UsingFor(int Num)
{
    for (size_t i = Num; i >= 1; i--)
    {
        cout << i << endl;
    }
}
int main()
{
    int Num = ReadNumber();
    PrintNumbers_UsingFor(Num);
}
