// Problem 06 - FullName.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct stInfo
{
    string FirstName;
    string LastName;
};
stInfo ReadInfo()
{
    stInfo Info;
    
    cout << "Please Enter your First Name : \n";
    cin >> Info.FirstName;

    cout << "Please Enter your Last Name : \n";
    cin >> Info.LastName;
    return Info;
}
string GetFullName(stInfo Info,bool Reversed)
{
    string FullName = "";
    if(Reversed)
        FullName = Info.LastName + " " + Info.FirstName;
    else
        FullName = Info.FirstName + " " + Info.LastName;
    return FullName;
}
void PrintFullName(string FullName) {
    cout << "Your Name is : " << FullName << endl;
}
int main()
{
    PrintFullName(GetFullName(ReadInfo(),1));
}


