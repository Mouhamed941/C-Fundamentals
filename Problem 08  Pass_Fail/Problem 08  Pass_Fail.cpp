// Problem 08  Pass_Fail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Mark;
void ReadMark()
{
    cout << "Please Enter your Mark : \n";
    cin >> Mark;
}
void CheckPassFail()
{
    ReadMark();
    if (Mark >= 50)
        cout << "Passed\n";
    else
        cout << "Failed\n";
}
int main()
{
    CheckPassFail();
}

