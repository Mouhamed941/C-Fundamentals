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
void ReadPersonsInfo(strPerson Persons[100],int &Length)
{
   
    cout << "How Many Persons Do you want to Enter : \n";
    cin >> Length;
    for (int i = 0; i < Length ; i++)
    {
        cout << "Please Enter Person's " << i +1 << " Info" << endl;
        ReadPersonInfo(Persons[i]);
    }
}
void PrintPersonsInfo(strPerson Persons[100],int Length)
{
    
    for (int i = 0; i < Length; i++)
    {
        PrintPersonInfo(Persons[i]);
    }
}
int main()
{
    strPerson Persons[100];
    int Length = 0;

    ReadPersonsInfo(Persons,Length);
    PrintPersonsInfo(Persons,Length);
}

