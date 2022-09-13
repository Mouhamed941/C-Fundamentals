#include <iostream>
using namespace std;
void ReadInputs(int& RectangleWidth,int&  RectangleHeight)
{
    

    cout << "Please Enter The Width of the rectangle : \n";
    cin >> RectangleWidth;

    cout << "Please Enter The Height of the rectangle : \n";
    cin >> RectangleHeight;
    cout << endl;
}
int RectangleArea(int RectangleWidth, int RectangleHeight)
{
    int Area = RectangleWidth * RectangleHeight;
    return Area;
}
int main()
{
    int RectangleWidth=0, int RectangleHeight=0;
    ReadInputs(RectangleWidth, RectangleHeight);
    
    cout << "The Area of This Rectangele is : " << RectangleArea(RectangleWidth, RectangleHeight) << endl;
}

