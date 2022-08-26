using namespace std;
#include <iostream>

int main()
{
    cout << "Please Enter The Total Bill : \n";
    short TotalBill;
    cin >> TotalBill;

    cout << "Please Enter The Cash Paid : \n";
    short CashPaid;
    cin >> CashPaid;
    cout << endl;

    short Remainder = CashPaid - TotalBill;
    cout << Remainder << endl;
}


