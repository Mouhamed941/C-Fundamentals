#include <cmath>;
#include <iostream>
using namespace std;
void PowOf(short Number)
{

    cout << pow(Number, 2) << endl;
    cout << pow(Number, 3) << endl;
    cout << pow(Number, 4) << endl;
}
int main()
{
    cout << "Please Enter a Number : \n";
    short Number;
    cin >> Number;
    cout << endl;
    PowOf(Number);
    
}

