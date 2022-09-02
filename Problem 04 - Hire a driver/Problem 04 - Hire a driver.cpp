// Problem 04 - Hire a driver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Age;
bool HasDriverLicense;
void ReadEmplooyesInfo()
{
    cout << "Enter Your Age : \n";
    cin >> Age;

    cout << "Do You Have a Driver license : 1/0 \n";
    cin >> HasDriverLicense;
}
void CheckEmployeesEmployeeQualifications()
{
    if (Age > 21 && HasDriverLicense == 1)
    {
        cout << "Hired\n";
    }
    else
        cout << "Rejected\n";
}
void HireaDriver()
{
    ReadEmplooyesInfo();
    CheckEmployeesEmployeeQualifications();
}

int main()
{
    HireaDriver();
    
}


