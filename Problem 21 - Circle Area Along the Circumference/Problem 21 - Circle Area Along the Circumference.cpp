// Problem 21 - Circle Area Along the Circumference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
float ReadCircumference()
{
    float Circumference;

    cout << "Please Enter The Circumference of the Circle : \n";
    cin >> Circumference;
    cout << endl;
    return Circumference;
}
float CircleArea(float Circumference)
{
    const float Pi = 3.141592653589793238;
    float Area = pow(Circumference, 2) / (4 * Pi);
    return Area;
}
void PrintResult(float Result)
{
    cout << "The Area of This Square is : " << Result << endl;
}
int main()
{
    PrintResult(CircleArea(ReadCircumference()));
}

