// Problem 34 - Commission Percentage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double TotalSales,Comission;
void ReadTotalSalesk()
{
    cout << "Please Enter Your Total Sales Amount : \n";
    cin >> TotalSales;
}
double CalculateComission()
{
    if (TotalSales >= 1000000)
    {
        Comission = TotalSales * 0.01;
    }
    else if (TotalSales < 1000000 && TotalSales > 500000)
        Comission = TotalSales * 0.02;
    else if (TotalSales <= 500000 && TotalSales > 100000)
        Comission = TotalSales * 0.03;
    else if (TotalSales <= 100000 && TotalSales > 50000)
        Comission = TotalSales * 0.05;
    else
        Comission = 0;
    return Comission;
}
int main()
{
    ReadTotalSalesk();
    cout << CalculateComission() << endl;
}


