#include <iostream>
using namespace std;
int main()
{
    int Number1, Number2;

    cout << "Please Enter First Number : \n";
    cin >> Number1;

    cout << "Please Enter Seconde Number : \n";
    cin >> Number2;
    cout << endl;

    cout << Number1 << endl << Number2 << endl << endl;

    int emptyPlate;
    emptyPlate = Number1;
    Number1 = Number2;
    Number2 = emptyPlate;

    cout << Number1 << endl << Number2 << endl;
}


