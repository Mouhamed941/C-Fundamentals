
#include <iostream>
using namespace std;
void MySumProcedure()
{
    cout << "Please Enter Number1: \n";
    int Num1;
    cin >> Num1;

    cout << "Please Enter Number2: \n";
    int Num2;
    cin >> Num2;
    cout << "*********************\n";
    cout << Num1 + Num2 << endl;
}
int MySumFunction()
{
    cout << "Please Enter Number1: \n";
    int Num1;
    cin >> Num1;

    cout << "Please Enter Number2: \n";
    int Num2;
    cin >> Num2;
    cout << "*********************\n";
    int Result = Num1 + Num2;
    return Result;
}
int main()
{
    MySumProcedure();
    cout << MySumFunction() << endl;


}

