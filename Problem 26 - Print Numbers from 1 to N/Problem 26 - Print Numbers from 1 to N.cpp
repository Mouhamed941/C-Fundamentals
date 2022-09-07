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
void PrintNumbers(int Num)
{
    int i = 1;
    while (i <= Num)
    {
        cout << i << endl;
        i++;
    }
}
int main()
{
    int Num = ReadNumber();
    PrintNumbers(Num);
}
