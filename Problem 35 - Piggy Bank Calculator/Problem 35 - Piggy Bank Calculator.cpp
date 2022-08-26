using namespace std;
#include <iostream>

int main()
{
    cout << "Please Enter The Number Of Pennies : \n";
    short Pennies;
    cin >> Pennies;

    cout << "Please Enter The Number Of Nikels : \n";
    short Nikels;
    cin >> Nikels;

    cout << "Please Enter The Number Of Dimes : \n";
    short Dimes;
    cin >> Dimes;

    cout << "Please Enter The Number Of Quarters : \n";
    short Quarters;
    cin >> Quarters;
    cout << endl;

    cout << "Please Enter The Number Of Dollars : \n";
    short Dollars;
    cin >> Dollars;

    float TotalPennies = Pennies * 1 + Nikels * 5 + Dimes * 10 + Quarters * 25 + Dollars * 100;
    float TotalDollars = TotalPennies / 100;

    cout << TotalPennies << endl;
    cout << TotalDollars << endl;
    
}

