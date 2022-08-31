// Problem 21 - Circle Area Along the Circumference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
float CircleArea(float Circumference)
{
    const float Pi = 3.14;
    float Area = pow(Circumference, 2) / (4 * Pi);
    return Area;
}
int main()
{
    float Circumference;
   
    cout << "Please Enter The Circumference of the Circle : \n";
    cin >> Circumference;
    cout << endl;
    
    cout << "The Area of This Circle is : " << CircleArea(Circumference) << endl;
}

