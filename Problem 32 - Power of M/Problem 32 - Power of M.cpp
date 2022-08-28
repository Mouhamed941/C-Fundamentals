// Problem 32 - Power of M.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <cmath>;
int main()
{
    std::cout << "Please Enter a Number : \n";
    int Number;
    cin >> Number;

    std::cout << "Please Enter a power : \n";
    int M;
    cin >> M;

    cout << pow(Number, M) << endl;

}

