// Problem 24 Validate Age Between 18 and 45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void CheckAgeValidity()
{
    cout << "Please Enter your Age : \n";
    short Age;
    cin >> Age;
    if (Age >= 18 && Age <= 45)
    {
        cout << "Valid Age\n";
    }
    else
        cout << "Invalid Ag\n";

}
int main()
{
    CheckAgeValidity();
}

