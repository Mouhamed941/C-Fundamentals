// Problem 16 - Rectangle area Through Diagonal and Side Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <cmath>;
int main()
{   std::cout << "Please Enter The Side  Of Rectangle : \n";
    double Side;
    cin >> Side;

    std::cout << "Please Enter The Diagonal  Of Rectangle : \n";
    double Diagonal;
    cin >> Diagonal;

    
    double Area = Side * (sqrt(pow(Diagonal, 2) - (pow(Side, 2))));
    cout << Area << endl;


}


