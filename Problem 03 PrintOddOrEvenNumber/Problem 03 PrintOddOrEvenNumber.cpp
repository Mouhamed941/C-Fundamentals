// Problem 03 PrintOddOrEvenNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enNumberType{Odd = 1, Even = 2};
int ReadNumber()
{
    int Num;
    cout << "Please Enter a Number : " << endl;
    cin >> Num;
    return Num;
}
enNumberType CheckNumberType(int Num)
{
    int Result = Num % 2;
    if (Result == 0)
    {
        return enNumberType::Even;
    }
    else
    {
        return enNumberType::Odd;
    }
}
void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
    {
        cout << "\n Number is Even \n";
    }
    else
        cout << "\n Number is Odd \n";
}
int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));
}

