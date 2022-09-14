#include <iostream>
#include <cmath>;
 using namespace std;
 float ReadDiameter()
 {
     float Diameter;

     cout << "Please Enter The Diameter of the Circle : \n";
     cin >> Diameter;
     cout << endl;
     return Diameter;
 }
 float CircleAreaThroughDiameter(float Diameter)
 {
     const float Pi = 3.14;
     float Area = (Pi * pow(Diameter, 2) / 4);
     return Area;
 }
 void PrintResult(float Result)
 {
      cout << "The Area of This Rectangele is : " << Result<< endl; 
 }
int main()
{
    
    PrintResult(CircleAreaThroughDiameter(ReadDiameter()));
}


