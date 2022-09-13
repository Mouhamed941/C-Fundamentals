// Problem 16 - Rectangle area Through Diagonal and Side Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <cmath>;
void ReadRectangleInfo(float& Side, float& Diagonal)
{
    cout << "Please Enter The Side  Of Rectangle : \n";
    cin >> Side;

    cout << "Please Enter The Diagonal  Of Rectangle : \n";
    cin >> Diagonal;
}
float RectangleAreaThroughDiagonalandSideArea(float Side, float Diagonal)
{
    float Area = Side * (sqrt(pow(Diagonal, 2) - (pow(Side, 2))));
    return Area;
}
void PrintResult(float Result)
{
    cout << "Rectangle Area : " << Result << endl;
}
int main()
{  
    float Side;
    float Diagonal;
    ReadRectangleInfo(Side,Diagonal);
    PrintResult(RectangleAreaThroughDiagonalandSideArea(Side, Diagonal));


}


