
#include <iostream>
#include <cmath>;
using namespace std;
void ReadCircleData(float& A, float& B, float& C)
{
    cout << "Please enter A : \n";
    cin >> A;

    cout << "Please enter B : \n";
    cin >> B;

    cout << "Please enter C : \n";
    cin >> C;
}
float CircleArea(float A, float B, float C)
{
    float P = (A + B + C) / 2;
    float  const Pi = 3.141592653589793238;
    float x = ((A * B * C) / (4 * (sqrt(P * (P - A) * (P - B) * (P - C)))));
    float Area = Pi * pow(x, 2);
    return Area;
}
void PrintResult(float Result)
{
    cout << "The Area of This Circle is : " << Result << endl;
}
int main()
{
    float A, B, C;
    ReadCircleData(A, B, C);
    PrintResult(CircleArea(A, B, C));

    
    
}

