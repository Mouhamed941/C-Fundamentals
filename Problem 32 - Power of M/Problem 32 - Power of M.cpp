// Problem 32 - Power of M.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <cmath>;
void PowerOfM(int Number, int Exponent)
{
    //This function prints the result of given Number and given exponent
    cout << pow(Number, Exponent) << endl;
}
int main()
{
    std::cout << "Please Enter a Number : \n";
    int Number;
    cin >> Number;

    std::cout << "Please Enter a power : \n";
    int Exponent;
    cin >> Exponent;

    PowerOfM(Number, Exponent);

}

