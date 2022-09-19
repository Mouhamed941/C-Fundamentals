// Problem 50 - ATM PIN 3 Times.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int counter = 3;
    string PinCode;
    do
    {
        PinCode = ReadPIN();
        counter--;
        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            system("color 4F");
            cout << "Wrong PIN ,You have " << counter << " more tries " << endl;
        }

    } while (counter >= 1 && PinCode != "1234");
    return 0;
}

int main()
{

    
    if (Login())
    {
        system("color 2F");
        cout << "Logined Successfully \nYour Balance is : 7500\n";
    }
    else
    {
        cout << "Your card blocked call the bank for help!" << endl;
    }

}