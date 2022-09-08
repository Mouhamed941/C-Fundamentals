#include <iostream>
using namespace std;
float ReadNumber()
{
    cout << "Please Enter a Number :\n";
    float Number;
    cin >> Number;
    return Number;
}
float CalculateHalfOfNumber(float Num)
{
    return Num / 2;
}
void PrintResult(float Num)
{
    cout << "Half of The Number is : " << Num << endl;
}
int main()
{
    PrintResult(CalculateHalfOfNumber(ReadNumber()));
    return 0;
}

