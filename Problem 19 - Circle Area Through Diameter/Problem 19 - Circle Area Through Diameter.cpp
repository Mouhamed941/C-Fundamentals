#include <iostream>
 using namespace std;
int main()
{
    float Diameter;
    const float Pi = 3.14;
    cout << "Please Enter The Diameter of the Circle : \n";
    cin >> Diameter;
    cout << endl;
    float Area = (Pi * Diameter*Diameter) / 4;
    cout << "The Area of This Rectangele is : " << Area << endl;
}


