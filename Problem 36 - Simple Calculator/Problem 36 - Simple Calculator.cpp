

#include <iostream>
using namespace std;
int Num1, Num2;
char OperationType;
void ReadInfo()
{
    cout << "Please Enter The First Number : \n";
    cin >> Num1;

    cout << "Please Enter The Second Number : \n";
    cin >> Num2;

    cout << "Please Enter The Operation Type (+ - * /): \n";
    cin >> OperationType;
}
int Calculat(int Num1, int Num2, char OperationType)
{
    int Result;
    if (OperationType == '+')
    {
        Result = Num1 + Num2;
    }
    else if (OperationType == '-')
    {
         Result = Num1 - Num2;
    }
    else if (OperationType == '*')
    {
         Result = Num1 * Num2;
    }
    else if (OperationType == '/')
    {
         Result = Num1 / Num2;
    }
    return Result;
}
int main()
{
    ReadInfo();
    cout << Calculat(Num1, Num2, OperationType) << endl;
}
