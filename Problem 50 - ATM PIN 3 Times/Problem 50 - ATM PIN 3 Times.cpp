// Problem 50 - ATM PIN 3 Times.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int counter = 0;
    while (counter <2)
    {
        if (PIN == "1234")
        {
            cout << Balance << endl;
            break;
        }
        else
        {

            cout << "Wrong PIN" << endl;
        }

        cout << "Please Enter Your PIN : ";
        cin >> PIN;

        counter++;
        if (counter == 2)
        {
            cout << "Card is Locked" << endl;
        }

    }
}

int main()
{

    ReadPIN();
    ChekPIN();

}