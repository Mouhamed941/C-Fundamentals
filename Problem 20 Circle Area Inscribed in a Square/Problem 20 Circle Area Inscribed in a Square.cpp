// Problem 20 Circle Area Inscribed in a Square.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <cmath>;
float ReadSquareHieght()
{
    float A;

    cout << "Please Enter The Hieght of the Square : \n";
    cin >> A;
    cout << endl;
    return A;
}
float CircleArea(float A)
{
    const float Pi = 3.14;
    float Area = (Pi * pow(A, 2) / 4);
    return Area;
}
void PrintResult(float Result)
{
    cout << "The Area of This Square is : " << Result << endl;
}
int main()
{
    
    PrintResult(CircleArea(ReadSquareHieght()));
}

