#include <cmath>;
#include <iostream>
using namespace std;
int ReadNumber()
{
    cout << "Please Enter a Number : \n";
    short Number;
    cin >> Number;
    return Number;
}
void PowOf_2_3_4(short Number)
{

    cout << pow(Number, 2) << endl;
    cout << pow(Number, 3) << endl;
    cout << pow(Number, 4) << endl;
}
int main()
{
    
    PowOf_2_3_4(ReadNumber());
    
}

