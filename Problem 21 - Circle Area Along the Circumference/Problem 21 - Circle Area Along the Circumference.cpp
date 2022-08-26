// Problem 21 - Circle Area Along the Circumference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

int main()
{
    float Circumference;
    const float Pi = 3.14;
    cout << "Please Enter The Circumference of the Circle : \n";
    cin >> Circumference;
    cout << endl;
    float Area = (Circumference * Circumference) / (4 * Pi);
    cout << "The Area of This Circle is : " << Area << endl;
}

