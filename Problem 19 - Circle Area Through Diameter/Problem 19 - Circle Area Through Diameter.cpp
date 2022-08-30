#include <iostream>
#include <cmath>;
 using namespace std;
 float CircleAreaThroughDiameter(float Diameter)
 {
     const float Pi = 3.14;
     float Area = (Pi * pow(Diameter, 2) / 4);
     return Area;
 }
int main()
{
    float Diameter;
   
    cout << "Please Enter The Diameter of the Circle : \n";
    cin >> Diameter;
    cout << endl;
    
    cout << "The Area of This Rectangele is : " << CircleAreaThroughDiameter( Diameter) << endl;
}


