using namespace std;
#include <iostream>
float ReadPositiveNumber(string Message)
{
    int Num;
    do
    {
        cout << Message << endl;
        cin >> Num;

    } while (Num <= 0);

    return Num;
}
float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;
    return TotalBill;
}
int main()
{
    int TotalBill = ReadPositiveNumber("Please Enter Total Bill : \n");

    

    cout << "Total Bill After Fee Service And Sales Tax : " << TotalBillAfterServiceAndTax(TotalBill)<< endl;
}


