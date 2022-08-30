// Problem 02 UserNamePrinter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <string>
string PrintUserName(string Name)
{
    return Name;
}
int main()
{
    cout << "Please Enter Your Name : " << endl;
    string Name;
    cin >> Name;
    cout <<"Your Name is : " << PrintUserName(Name) << endl;
}


