// Problem 22 Circle Area Inscribed in an Isosceles Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
void ReadTriangelData(float& TriangleHeight, float& TriangleBase)
{
    

    cout << "Please Enter The Heightof the Triangle: \n";
    cin >> TriangleHeight;

    cout << "Please Enter The Base  of the Triangle : \n";
    cin >> TriangleBase;
    cout << endl;

}
float TriangleArea(float TriangleHeight, float TriangleBase)
{
    const float Pi = 3.141592653589793238;
    float Area = (Pi * (pow(TriangleBase, 2) / 4)) * ((2 * TriangleHeight - TriangleBase) / (2 * TriangleHeight + TriangleBase));
    return Area;
}
void PrintResult(float Result)
{
    cout << "The Area of This Triangel is : " << Result << endl;
}
int main()
{
    float TriangleHeight, TriangleBase;
    ReadTriangelData(TriangleBase, TriangleHeight);
    PrintResult(TriangleArea(TriangleBase, TriangleHeight));
   
}

