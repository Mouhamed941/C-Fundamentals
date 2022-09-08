// Problem 02 UserNamePrinter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <string>
void ReadName()
{
    cout << "Please Enter Your Name : " << endl;
    string Name;
    getline(cin, Name);
}
void PrintUserName(string Name)
{
    cout << "Your Name is : " << Name << endl;
}
int main()
{
    
    cout <<"Your Name is : " << PrintUserName(Name) << endl;
}


