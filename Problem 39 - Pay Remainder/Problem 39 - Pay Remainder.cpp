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
int CalculateRemainder(short TotalBill, short CashPaid)
{
    int Remainder = CashPaid - TotalBill ;
    return Remainder;
}

int main()
{
    short TotalBill = ReadPositiveNumber("Please Enter the total bill : ");
    short CashPaid= ReadPositiveNumber("Please Enter the Cash Paid : ");

    cout << "Total Bill : " << TotalBill << endl;
    cout << "Cash Paid : " << CashPaid << endl;
    cout << "**********************\n";
    cout << "Remainder : "<<CalculateRemainder(TotalBill, CashPaid);
}


