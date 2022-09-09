#include <iostream>
using namespace std;
int Number1, Number2, Number3;
void ReadNumbers()
{
    

    cout << "Please Enter First Number : " << endl;
    cin >> Number1;

    cout << "Please Enter Seconde Number : \n";
    cin >> Number2;

    cout << "Please Enter Third Number : \n";
    cin >> Number3;
    cout << endl;
}
int CalculateNumbers()
{
    int Result = Number1 + Number2 + Number3;
    return Result;
}
void PrintResult(int Result)
{
    cout << CalculateNumbers() << endl;
}
int main()
{
    ReadNumbers();
    PrintResult(CalculateNumbers());
}

