// Problem 22 Circle Area Inscribed in an Isosceles Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
float TriangleArea(float TriangleHeight, float TriangleBase)
{
    const float Pi = 3.14159;
    float Area = (Pi * (pow(TriangleBase, 2) / 4)) * ((2 * TriangleHeight - TriangleBase) / (2 * TriangleHeight + TriangleBase));
    return Area;
}
int main()
{
    float TriangleHeight, TriangleBase;
    
    cout << "Please Enter The Heightof the Triangle: \n";
    cin >> TriangleHeight;

    cout << "Please Enter The Base  of the Triangle : \n";
    cin >> TriangleBase;
    cout << endl;
    
    cout << "The Area of This Circle is : " << TriangleArea(TriangleHeight,TriangleBase) << endl;
   
}

