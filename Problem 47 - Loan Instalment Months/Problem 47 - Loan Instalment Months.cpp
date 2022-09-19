// Problem 47 - Loan Instalment Months.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
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
float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
    return LoanAmount / MonthlyInstallment;
}
int main()
{             
    int LoanAmount = ReadPositiveNumber("Please Enter the loan installment :");
    int MonthlyPayment = ReadPositiveNumber("Please Enter the Monthly Payment : ");

    cout <<"Total Months to Pay : " << TotalMonths(LoanAmount, MonthlyPayment) << endl;

}