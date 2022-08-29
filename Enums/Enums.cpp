
#include <iostream>
using namespace std;

struct Person
{
    string FullName;
    short Age;
    string City;
    string Country;
    int monthlySalary;
    enum Gender { Male, Female };
    enum Status { Single, Married };

};
int main()
{
    Person P;
    P.FullName = "Mouhamed FARDOUSI";
    P.Age = 28;
    P.City = "Istanbul";
    P.Country = "Turkiye";
    P.monthlySalary = 7500;
    P.Gender::Male;
    P.Status::Single;
    
    cout << "****************************\n";
    cout << "Name : " << P.FullName << endl;
    cout << "Age : " << P.Age << endl;
    cout << "Country: " << P.Country << endl;
    cout << "Monthly Salary: " << P.monthlySalary << endl;
    cout << "Yearly Salary: " << P.monthlySalary * 12 << endl;
    cout << "Gender: " << P.Gender::Male << endl;
    cout << "Status: " << P.Married << endl;
    

}

