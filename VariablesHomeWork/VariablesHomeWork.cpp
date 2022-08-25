
#include <iostream>
using namespace std;
int main()
{
    //First Program
    //Declaring my variables
    string Name = "Mouhamed-FARDOUSI";
    string City = "Istanbul";
    string Country = "Turkiye";
    short  Age = 28; 
    short MonthlySalary = 7500;
    short YearlySalary = MonthlySalary * 12;
    char Gender = 'M';
    bool Married = false;

    //Print my outputs
    cout << "********************\n";
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << " Years.\n";
    cout << "City: " << City << endl;
    cout << "Country: " <<Country << endl;
    cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << YearlySalary << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Married: " << Married << endl;
    cout << "********************\n";

    //Seconde Program
    short Num1 = 20, Num2 = 30, Num3 = 10, Total;
    Total = Num1 + Num2 + Num3;
    cout << Num1 << "+\n";
    cout << Num2 << "+\n";
    cout << Num3 << "\n\n";
    cout << "______________________\n\n";
    cout << "Total = " << Total << endl<< endl;

    //Tird Program
    short age = 25;
    cout << "After 5 Years you will be " << age + 5 << " years";
    
}


//Homework!
/*
Are the following valid varible namesand why ?
Age     valid
My-Age  invalid(contains invalid special character)
My_Age  valid
_Age    valid
2x      invalid(variables must not start with numbers)
X2      valid
My Name invalid(contains wihtespace)
MyName  valid
#Name   invalid(variables must not start with special characters)
$Name   invalid(variables must not start with special characters)
N@me    invalid(contains invalid special character)
int     invalid(Reserved word can not be used as name)
float   invalid(Reserved word can not be used as name)
*/