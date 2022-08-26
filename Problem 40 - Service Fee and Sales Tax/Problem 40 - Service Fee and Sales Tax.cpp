using namespace std;
#include <iostream>

int main()
{
    cout << "Please Enter The  Bill Value: \n";
    short BillValue;
    cin >> BillValue;

    //Calculating the total bill adding the Fee Service(10%)
    float TotalBill = BillValue * 1.1;

    //Calculating the total bill adding the Sales Tax(16%)
    TotalBill = TotalBill * 1.16;

    cout << TotalBill << endl;
}


