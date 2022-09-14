#include <iostream>
#include <cmath>
using namespace std;
void ReadInputs(double& Radius)
{
    cout << "Please Enter The Radius of Circle : \n";
   

    cin >> Radius;
}
double CircleArea(double Radius)
{
    const float Pi = 3.14;
    double Area = Pi * pow(Radius, 2);
    return Area;
}void PrintResult(double Result)
{
    cout << Result << endl;
}
int main()
{
   
    double Radius;
    ReadInputs(Radius);
    PrintResult(CircleArea(Radius));
    
   
}

