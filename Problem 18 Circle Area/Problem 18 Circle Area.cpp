#include <iostream>
#include <cmath>
using namespace std;
double CircleArea(double Radius)
{
    const float Pi = 3.14;
    double Area = Pi * pow(Radius, 2);
    return Area;
}
int main()
{
    cout << "Please Enter The Radius of Circle : \n";
    double Radius;
    
    cin >> Radius;

    
    cout << CircleArea(Radius) << endl;
}

