using namespace std;
#include <iostream>
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
struct Person 
{
    string FullName;
    short Age;
    string City;
    string Country;
    int monthlySalary;
    char Gender;
    bool isMarried;
    Addres Addres;
    Contact Contact;
};

int main()
{
    Person P;
    P.FullName = "Mouhamed FARDOUSI";
    P.Age = 28;
    P.City = "Istanbul";
    P.Country = "Turkiye";
    P.monthlySalary = 7500;
    P.Gender = 'M';
    P.isMarried = false;
    P.Addres.Street = "Kirazl cad";
    P.Addres.PoCod = "34000";
    P.Contact.Phone = "009053756878";
    P.Contact.Mail = "fardosi1994@gmail.com";

    cout << "****************************\n";
    cout << "Name : " << P.FullName << endl;
    cout << "Age : " << P.Age << endl;
    cout << "Country: " << P.Country << endl;
    cout << "Monthly Salary: " <<P.monthlySalary << endl;
    cout << "Yearly Salary: " << P.monthlySalary*12 << endl;
    cout << "Gender: " << P.Gender << endl;
    cout << "Married: " << P.isMarried << endl;
    cout << "Street : " << P.Addres.Street << endl;
    cout << "POsta Code : " << P.Addres.PoCod << endl;
    cout << "Phone Number : " << P.Contact.Phone << endl;
    cout << "Email Adress  : " << P.Contact.Mail << endl;

    cout << "****************************\n";
}

