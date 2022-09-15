using namespace std;
#include <iostream>
float Pennies, Nikels,Dimes, Quarters, Dollars=0;
void ReadData()
{
    cout << "Please Enter The Number Of Pennies : \n";
    cin >> Pennies;

    cout << "Please Enter The Number Of Nikels : \n";
    cin >> Nikels;

    cout << "Please Enter The Number Of Dimes : \n";
    cin >> Dimes;

    cout << "Please Enter The Number Of Quarters : \n";
    cin >> Quarters;

    cout << "Please Enter The Number Of Dollars : \n";
    cin >> Dollars;
}
float CalculateTotalPennies()
{
    
    float TotalPennies = Pennies * 1 + Nikels * 5 + Dimes * 10 + Quarters * 25 + Dollars * 100;
    return TotalPennies;
}
float CalculateTotalDollars()
{
    float TotalDollars = CalculateTotalPennies() / 100;
    return TotalDollars;
}
void PrintResults()
{
    cout << "Total Pennies : " << CalculateTotalPennies() << endl;
    cout << "Total Dollars : " << CalculateTotalDollars() << endl;
}
int main()
{
    ReadData();
    PrintResults();
    
}

