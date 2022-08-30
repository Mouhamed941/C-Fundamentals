
#include <iostream>
using namespace std;
enum enColor {Red,Yellow,green,Black};
enum enGender { Male, Female };
enum enMaritalStatus { Singel, Married };

struct stAddress
{
    string StreetName;
    string BuildingNo;
    string PoBox;
    string ZipCode;
};

struct stContactInfo
{
    string phone;
    string Email;
    stAddress Address;
};
struct stPerson
{
    string FirstName;
    string LastName;
    short Age;
    string City;
    string Country;
    int MonthlySalary;
    enColor FavourateColor;
    enGender Gender;
    enMaritalStatus MaritalStatus;
    stContactInfo ContactInfo;
    
    

};
int main()
{
    stPerson Person;
    Person.FirstName = "Mouhamed ";
    Person.LastName = "FARDOUSI ";
    Person.Age = 28;
    Person.City = "Istanbul";
    Person.Country = "Turkiye";
    Person.MonthlySalary = 7500;
    Person.Gender = enGender::Male;
    Person.ContactInfo.Address.StreetName = "Kirazli Cad";
    Person.ContactInfo.Address.BuildingNo = "7898";
    Person.ContactInfo.Address.PoBox = "369";
    Person.ContactInfo.Address.ZipCode = "9634000";
    Person.ContactInfo.Email = "fardosi1994@gmail.com";
    Person.ContactInfo.phone = "009058687565";
    Person.MaritalStatus = enMaritalStatus::Singel;
    
    cout << "****************************\n";
    cout << "First Name : " << Person.FirstName << endl;
    cout << "Last Name : " << Person.LastName << endl;
    cout << "Age : " << Person.Age << endl;
    cout << "Country: " << Person.Country << endl;
    cout << "Monthly Salary: " << Person.MonthlySalary << endl;
    cout << "Yearly Salary: " << Person.MonthlySalary * 12 << endl;
    cout << "Gender: " << Person.Gender << endl;
    cout << "Contact Informations" << endl;
    cout << "Phone : " << Person.ContactInfo.phone << endl;
    cout << "Email : " << Person.ContactInfo.Email << endl;
    cout << "Address Informations : \n";
    cout << "Street Name : " << Person.ContactInfo.Address.StreetName << " ,";
    cout << "Building No : " << Person.ContactInfo.Address.BuildingNo << " ,";
    cout << "Post Box : " << Person.ContactInfo.Address.PoBox << " ";
    cout << "Zip Code : " << Person.ContactInfo.Address.ZipCode << endl;

    cout << "Status: " << Person.MaritalStatus << endl;
    

}

