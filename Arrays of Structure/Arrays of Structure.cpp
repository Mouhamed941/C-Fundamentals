// Arrays of Structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct strPerson
{
    string FirstName;
    string LastName;
    short Age;
    string Phone;
};

void ReadPersonInfo(strPerson &PersonInfo)
    {
        cout << "Please Enter your First Name  : " << endl;
        cin >> PersonInfo.FirstName;

        cout << "Please Enter your Last Name : " << endl;
        cin >> PersonInfo.LastName;

        cout << "Please Enter your Age : " << endl;
        cin >> PersonInfo.Age;

        cout << "Please Enter your Phone : " << endl;
        cin >> PersonInfo.Phone;

}
void PrintPersonInfo(strPerson PersonInfo)
{
    cout << "********************************\n";
    cout << "First Name : " << PersonInfo.FirstName << endl;
    cout << "Last Name : " << PersonInfo.LastName << endl;
    cout << "Age : " << PersonInfo.Age << endl;
    cout << "Phone : " << PersonInfo.Phone << endl;
    cout << "********************************\n";

}
void Read2PersonInfo(strPerson Persons[2])
{
    ReadPersonInfo(Persons[0]);
    ReadPersonInfo(Persons[1]);
}
void Print2PersonInfo(strPerson Persons[2])
{
    PrintPersonInfo(Persons[0]);
    PrintPersonInfo(Persons[1]);
}
int main()
{
    strPerson Persons[2];
    Read2PersonInfo(Persons);
    Print2PersonInfo(Persons);
}

