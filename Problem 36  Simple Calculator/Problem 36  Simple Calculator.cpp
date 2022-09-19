// Problem 36  Simple Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enOperationType { Add = '+', Substract = '-', Multiply = '*', Divide = '/' };


float Result;
enOperationType OperationType;
void ReadNumbers(float& Num1,float& Num2)
{
    cout << "Please Enter The first Number : \n";
    cin >> Num1;

    cout << "Please Enter The Second Number : \n";
    cin >> Num2;


}
enOperationType ReadOperationType()
{
    char OT = '+';
    cout << "Please Enter Operation Type (+ ,-,*,/) : \n";
    cin >> OT;
    return (enOperationType)OT;
}
float CalculatNumbers(float Num1,float Num2,enOperationType OperationType)
{
    switch (OperationType)
    {
    case enOperationType::Add:
        return Num1 + Num2;
        

    case enOperationType::Substract:
        return Num1 - Num2;

    case enOperationType::Multiply:
        return Num1 * Num2;

    case enOperationType::Divide:
        return Num1 / Num2;
    
    default:
        return Num1 + Num2;
        
    }
    
}
void PrintResult(float Result)
{
    cout << Result << endl;
}
int main()
{
    float Num1=0, Num2=0;
    ReadNumbers(Num1,Num2);
    enOperationType OperationType = ReadOperationType();
    
    PrintResult(CalculatNumbers(Num1, Num2,OperationType));
}

