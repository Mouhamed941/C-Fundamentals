#include <iostream>
#include <cmath>;
 using namespace std;
int main()
{
    float Diameter;
    const float Pi = 3.14;
    cout << "Please Enter The Diameter of the Circle : \n";
    cin >> Diameter;
    cout << endl;
    float Area = (Pi * pow(Diameter,2) / 4);
    cout << "The Area of This Rectangele is : " << Area << endl;
}


