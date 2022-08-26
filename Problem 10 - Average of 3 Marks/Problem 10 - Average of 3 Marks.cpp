#include <iostream>
using namespace std;
int main()
{
    int Mark1, Mark2, Mark3,Avrg;

    cout << "Please Enter First Mark : \n";
    cin >> Mark1;

    cout << "Please Enter Seconde Mark : \n";
    cin >> Mark2;

    cout << "Please Enter Third Mark : \n";
    cin >> Mark3;
    cout << endl;
    Avrg = (Mark1 + Mark2 + Mark3) / 3;
    cout << Avrg << endl;
}
