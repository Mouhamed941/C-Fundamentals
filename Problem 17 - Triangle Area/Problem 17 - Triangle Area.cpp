#include <iostream>
using namespace std;
int main()
{
    int TriangleBase, TriangleHeight;

    cout << "Please Enter The Base of the Triangle: \n";
    cin >> TriangleBase;

    cout << "Please Enter The Height of the Triangle : \n";
    cin >> TriangleHeight;
    cout << endl;
    float Area = 0.5 *(TriangleBase * TriangleHeight);
    cout << "The Area of This Rectangele is : " << Area << endl;
}

