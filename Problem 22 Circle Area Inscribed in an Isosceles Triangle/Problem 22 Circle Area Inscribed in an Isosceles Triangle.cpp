// Problem 22 Circle Area Inscribed in an Isosceles Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

int main()
{
    float TriangleHeight, TriangleBase;
    const float Pi = 3.14;
    cout << "Please Enter The Heightof the Triangle: \n";
    cin >> TriangleHeight;

    cout << "Please Enter The Base  of the Triangle : \n";
    cin >> TriangleBase;
    cout << endl;
    float Area = (Pi * (pow(TriangleBase,2) / 4)) * ((2 * TriangleHeight - TriangleBase) / (2 * TriangleHeight + TriangleBase));
    cout << "The Area of This Circle is : " << Area << endl;
   
}

