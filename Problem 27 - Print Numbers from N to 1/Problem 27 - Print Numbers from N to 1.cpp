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
int main()
{
    int Num = ReadNumber();
    PrintNumbers(Num);
}
