#include <iostream>
using namespace std;

int RectangleArea(int RectangleWidth, int RectangleHeight)
{
    int Area = RectangleWidth * RectangleHeight;
    return Area;
}
int main()
{
    int RectangleWidth, RectangleHeight;

    cout << "Please Enter The Width of the rectangle : \n";
    cin >> RectangleWidth;

    cout << "Please Enter The Height of the rectangle : \n";
    cin >> RectangleHeight;
    cout << endl;
    
    cout << "The Area of This Rectangele is : " << RectangleArea(RectangleWidth, RectangleHeight) << endl;
}

