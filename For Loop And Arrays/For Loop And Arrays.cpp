

#include <iostream>
using namespace std;

void ReadArrayData(int Arr1[100],int &Length)
{
    cout << "Please Enter The Number of Arrays Elemants : \n";
    cin >> Length;
    for (int i = 0; i <= Length-1; i++)
    {
        cout << "Please Enter Number : " << i + 1 << endl;
        cin >> Arr1[i];
    }
}
void PrintArrayData(int Arr1[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << "Number " << i + 1 << " : " << Arr1[i] << endl;
    }
}
int CalculateArraySum(int Arr1[100], int Length)
{
    int Sum = 0;
    for (int i = 0; i <= Length -1; i++)
    {
        Sum = Sum + Arr1[i];
    }
    return Sum;
}
float ArrayAverage(int Arr1[100], int Length)
{
    return float(CalculateArraySum(Arr1, Length) / Length);
}
int main()
{
    int Arr1[100], Length = 0;
    ReadArrayData(Arr1, Length);
    PrintArrayData(Arr1, Length);

    float Sum = CalculateArraySum(Arr1, Length);
    float Avrg = Sum / Length;
    cout << "Sum Of Array : " << Sum << endl;
    cout << "The average of array is : " << Avrg << endl;
}




