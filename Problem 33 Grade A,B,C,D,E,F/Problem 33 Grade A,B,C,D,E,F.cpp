// Problem 33 Grade A,B,C,D,E,F.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

short Mark;
void ReadMark()
{
    cout << "Please Enter Your Mark : \n";
    cin >> Mark;
}
void CheckGrade()
{
    if (Mark <= 100)
    {
        if (Mark <= 100 && Mark >= 90)
        {
            cout << 'A' << endl;
        }
        else if (Mark >= 80 && Mark <= 89)
        {
            cout << 'B' << endl;
        }
        else if (Mark >= 70 && Mark <= 79)
        {
            cout << 'C' << endl;
        }
        else if (Mark >= 60 && Mark <= 69)
        {
            cout << 'D' << endl;
        }
        else if (Mark >= 50 && Mark <= 59)
        {
            cout << 'D' << endl;
        }
        else
        {
            cout << 'F' << endl;
        }
    }
    else
    {
        cout << "Invalid Mark" << endl;
    }
}
int main()
{
    ReadMark();
    CheckGrade();
   
    
}