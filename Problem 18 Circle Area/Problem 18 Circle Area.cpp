#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Please Enter The Radius of Circle : \n";
    double Radius;
    const float Pi = 3.14;
    cin >> Radius;

    double Area = Pi * pow(Radius, 2);
    cout << Area << endl;
}

