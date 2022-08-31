#include <iostream>
using namespace std;
void SwapNumbers(int &Number1, int &Number2)
{
    int Plate = Number1;
    Number1 = Number2;
    Number2 = Plate;
    cout << Number1 << endl << Number2 << endl;
}
int main()
{
    int Number1, Number2;

    cout << "Please Enter First Number : \n";
    cin >> Number1;

    cout << "Please Enter Seconde Number : \n";
    cin >> Number2;
    cout << endl;

    cout << Number1 << endl << Number2 << endl;
    SwapNumbers(Number1, Number2);
    cout << Number1 << " " << Number2 << endl;

  
}


