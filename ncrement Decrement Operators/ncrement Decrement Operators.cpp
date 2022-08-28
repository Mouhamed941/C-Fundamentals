// ncrement Decrement Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

int main()
{
    int A = 10;
    int B = A++;    //B Will take the old value of A,then A will incerease by 1
    cout << "B = " << B << endl;
    cout << "A = " << A << endl;

    B = ++A;        // A will incerease by 1,then B Will take the new value 
    cout << "B = " << B << endl;
    cout << "A = " << A << endl;
}

