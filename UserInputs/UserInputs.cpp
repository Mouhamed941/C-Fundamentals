

#include <iostream>
#include <string>
using namespace std;
int main()
{
    //First Homework
    string Name;
    string City;
    string Country;
    short Age ;
    short MonthlySalary ;
    char Gender ;
    bool isMarried ;

    cout << "Please Enter your Name :\n";
    cin >> Name;

    cout << "Please Enter your City :\n";
    cin >> City;

    cout << "Please Enter your Country :\n";
    cin >> Country;

    cout << "Please Enter your Age :\n";
    cin >> Age;

    cout << "Please Enter your Monthly Salary :\n";
    cin >> MonthlySalary;

    cout << "Please Enter your Gender M/F :\n";
    cin >> Gender;

    cout << "Are You Married true/false:\n";
    cin >> isMarried;

    cout << "********************\n";
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << " Years.\n";
    cout << "City: " << City << endl;
    cout << "Country: " << Country << endl;
    cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << MonthlySalary * 12 << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Married: " << isMarried << endl;
    cout << "********************\n";

    //Seconde Homework
    short Num1 , Num2 , Num3 , Total;
    cout << "Please Enter Num1 :\n";
    cin >> Num1;
    cout << "Please Enter Num2 :\n";
    cin >> Num2;
    cout << "Please Enter Num3 :\n";
    cin >> Num3;
    cout << "\n";
;
    Total = Num1 + Num2 + Num3;
    cout << Num1 << "+\n";
    cout << Num2 << "+\n";
    cout << Num3 << "\n\n";
    cout << "______________________\n\n";
    cout << "Total = " << Total << endl << endl;

    //Tird Homework
    short age ;

    cout << "Please Enter your Age :\n";
    cin >> age;
    cout << "After 5 Years you will be " << age + 5 << " years";
}

