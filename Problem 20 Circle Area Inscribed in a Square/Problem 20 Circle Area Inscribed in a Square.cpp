// Problem 20 Circle Area Inscribed in a Square.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <cmath>;
int main()
{
    float A;
    const float Pi = 3.14;
    cout << "Please Enter The Hieght of the Square : \n";
    cin >> A;
    cout << endl;
    float Area = (Pi * pow(A, 2) / 4);
    cout << "The Area of This Circle is : " << Area << endl;
}

