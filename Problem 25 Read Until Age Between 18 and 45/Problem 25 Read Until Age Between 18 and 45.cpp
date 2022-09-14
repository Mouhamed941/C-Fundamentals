// Problem 25 Read Until Age Between 18 and 45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int ReadAge()
{
    cout << "Please Enter your Age : \n";
    int Age;
    cin >> Age;
    return Age;
}
bool ValidateNumberInRange(int Number, int From, int To)
{
    if (Number >= From && Number <= To)
        return true;
    else
        return false;
}
int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;
    do
    {
        Age = ReadAge();
    } while (!ValidateNumberInRange(Age,From,To));
    return Age;
}
void PrintResult(int Result)
{
    cout << "Your Age is : " << Result << endl;
}
int main()
{
    PrintResult(ReadUntilAgeBetween(18, 45));
}
