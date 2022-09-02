// Problem 49 - ATM PIN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
string PIN, Balance = "5151";;
void ReadPIN()
{
    cout << "Please Enter Your PIN : ";
    cin >> PIN;
}
void ChekPIN()
{
    if (PIN == "1234")
        cout << Balance << endl;
    else
    {
        cout << "Wrong PIN" << endl;
    }
}

int main()
{
    
    ReadPIN();
    ChekPIN();
    
}
