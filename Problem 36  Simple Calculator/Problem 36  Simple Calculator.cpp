// Problem 36  Simple Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Num1, Num2, Result;
char OperationType;
void ReadNumbers()
{
    cout << "Please Enter The first Number : \n";
    cin >> Num1;

    cout << "Please Enter The Second Number : \n";
    cin >> Num2;

    cout << "Please Enter The Operation Type  : \n";
    cin >> OperationType;

}
int CalculatNumbers()
{
    switch (OperationType)
    {
    case '+':
        Result = Num1 + Num2;
        //cout << Result << endl;
        break;
    case '-':
        Result = Num1 - Num2;
        //cout << Result << endl;
        break;
    case '*':
        Result = Num1 * Num2;
        //cout << Result << endl;
        break;
    case '/':
        Result = Num1 / Num2;
        //cout << Result << endl;
        break;
    
    default:
        cout << "Invalid Inputs" << endl;
        break;
    }
    return Result;
}
int main()
{
    ReadNumbers();
    cout <<CalculatNumbers();
}

