// Variable Scope_Local vs Global Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
string str = "This is a Global Variable";

void Print()
{
    string str = "This is a local varivble from Print function";
    cout << str << endl;
}
int main()
{
    string str = "This is a local varivble from main function";

    cout << ::str << endl;
    ::str = "This is a Global Variable updated";
    cout << ::str << endl;

    Print();

    cout << str << endl;
}
