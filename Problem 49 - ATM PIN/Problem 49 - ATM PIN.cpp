// Problem 49 - ATM PIN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
string PIN, Balance = "5151";;
string ReadPIN()
{
    cout << "Please Enter Your PIN : ";
    cin >> PIN;
    return PIN;
}
bool Login()
{
    string PinCode ;
    do
    {
        PinCode = ReadPIN();
        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            cout <<  "\n Wrong PIN Please Try again. \n";
            system("color 4F");
        }
    } while (PinCode != "1234");
}

int main()
{
    
    if (Login())
    {
        system("color 2F");
        cout << "Logined Successfully \nYour Balance is : 7500\n";
    }
    
}
