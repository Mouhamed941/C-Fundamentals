// Problem 38 Is Prime Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
float ReadPositiveNumber(string Message)
{   
    int Num;
    do
    {
        cout << Message << endl;
        cin >> Num;

    } while (Num <= 0);
   
    return Num;
}
enPrimeNotPrime CheckPrime(int Number)
{
    
    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter ==0)
        {
            return enPrimeNotPrime::NotPrime;
        }
        
    }
    return enPrimeNotPrime::Prime;
}   
void PrintnumberType(int Number)
{
    switch (CheckPrime(Number))
    {
    case enPrimeNotPrime::NotPrime:
        cout << "The Number is Not Prime " << endl;
        break;
    case enPrimeNotPrime::Prime:
        cout << "The Number is  Prime " << endl;
        break;
    default:
        break;
    }
}
int main()
{
    int Number = ReadPositiveNumber("Please Enter a Number : ");
    PrintnumberType(Number);
}

