// Problem 04 - Hire a driver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct stInfo    
{
    int Age;
    bool HasDriverLicense;
    bool HasRecommendation;
};
stInfo ReadEmplooyesInfo()
{
    stInfo Info;
    cout << "Enter Your Age : \n";
    cin >> Info.Age;

    cout << "Do You Have a Driver license : 1/0 \n";
    cin >> Info.HasDriverLicense;

    cout << "Do You Have a Recommendation : 1/0 \n";
    cin >> Info.HasRecommendation;
    return Info;
}
bool IsAccepted(stInfo Info)
{
    if (Info.HasRecommendation)
    {
        return true;
    }
    else
        return(Info.Age > 21 && Info.HasDriverLicense);  
}
void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
    {
        cout << "Hired\n";
    }
    else
        cout << "Rejected\n";
}

int main()
{
    PrintResult(ReadEmplooyesInfo());
    
}


