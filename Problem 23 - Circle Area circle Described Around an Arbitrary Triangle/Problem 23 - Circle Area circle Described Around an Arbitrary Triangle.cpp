
#include <iostream>
#include <cmath>;
using namespace std;
int main()
{
    cout << "Please enter A : \n";
    float A;
    cin >> A;

    cout << "Please enter B : \n";
    float B;
    cin >> B;

    cout << "Please enter C : \n";
    float C;
    cin >> C;

    float P = (A + B + C) / 2;
    float  const Pi = 3.14159;
    float x = ((A * B * C) / (4 * (sqrt(P * (P - A) * (P - B) * (P - C)))));
    float Area = Pi * pow(x, 2);
    cout << Area << endl;
}

