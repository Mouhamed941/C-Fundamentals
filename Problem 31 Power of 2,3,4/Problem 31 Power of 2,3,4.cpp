
#include <iostream>
using namespace std;
int main()
{
    cout << "Please Enter a Number : \n";
    short Number;
    cin >> Number;
    cout << endl;
    short PowerOf2 = Number * Number;
    short PowerOf3 = Number * Number * Number;
    short PowerOf4 = Number * Number * Number * Number;
    cout << PowerOf2 << endl;
    cout << PowerOf3 << endl;
    cout << PowerOf4 << endl;
}

