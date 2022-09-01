// Structures and Functions - Re-usability.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enColor { Red, Yellow, green, Black };
enum enGender { Male, Female };
enum enMaritalStatus { Singel, Married };
struct Addres
{
    string Street;
    string PoCod;

};
struct Contact
{
    string Phone;
    string Mail;

};
struct strPerson
{
    string FirstName;
    string LastName;
    short Age;
    string City;
    string Country;
    int MonthlySalary;
    enGender Gender;
    bool isMarried;
    Addres Addres;
    Contact Contact;
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
    cin >> PersonInfo.Contact.Phone;

    cout << "Please Enter your City : " << endl;
    cin >> PersonInfo.City;

    cout << "Please Enter your Country : " << endl;
    cin >> PersonInfo.Country;

    cout << "Please Enter your Monthly Salary : " << endl;
    cin >> PersonInfo.MonthlySalary;

    //cout << "Please Enter your Gender M/F : " << endl;
    //cin >> PersonInfo.Gender;
    enGender userGender = (enGender)PersonInfo.Gender;

}
void PrintPersonInfo(strPerson PersonInfo)
{
    cout << "********************************\n";
    cout <<"First Name : " << PersonInfo.FirstName << endl;
    cout << "Last Name : " << PersonInfo.LastName << endl;
    cout << "Age : " << PersonInfo.Age << endl;
    cout << "Gender : " << PersonInfo.Gender << endl;
    cout << "********************************\n";

}
int main()
{
    strPerson Person1Info;
    ReadPersonInfo(Person1Info);
    PrintPersonInfo(Person1Info);
}

