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
    for (int i = Num; i >= 1; i--)
    {
        cout << i << endl;
    }
}
int main()
{
    int Num = ReadNumber();
    PrintNumbers(Num);
}
