#include <iostream>
using namespace std;
void ReadNumbers(int& Num1, int& Num2)
{
    cout << "Please Enter First Number : \n";
    cin >> Num1;

    cout << "Please Enter Seconde Number : \n";
    cin >> Num2;
    cout << endl;
    cout << Num1 << endl << Num2 << endl;
}
void SwapNumbers(int &Number1, int &Number2)
{
    int Plate = Number1;
    Number1 = Number2;
    Number2 = Plate;
    cout << Number1 << endl << Number2 << endl;
}
int main()
{
    int Number1 = 0, Number2 = 0;
    ReadNumbers(Number1, Number2);
    SwapNumbers(Number1, Number2);
    
}


