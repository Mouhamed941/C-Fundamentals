#include <iostream>
using namespace std;
void ReadInputs(float& TriangleBase, float& TriangleHeight)
{
    cout << "Please Enter The Base of the Triangle: \n";
    cin >> TriangleBase;

    cout << "Please Enter The Height of the Triangle : \n";
    cin >> TriangleHeight;
    cout << endl;
}
float CalculateTriangleArea(float TriangleBase, float TriangleHeight)
{
    float Area = 0.5 * (TriangleBase * TriangleHeight);
    return Area;
}
void PrintResult(float Result)
{
    cout << "Tringle Area : " << Result << endl;
}
int main()
{
    float TriangleBase, TriangleHeight;

    ReadInputs(TriangleBase, TriangleHeight);
    PrintResult(CalculateTriangleArea(TriangleBase, TriangleHeight));
    
}

