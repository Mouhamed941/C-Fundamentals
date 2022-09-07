// Problem 37 - Sum Until -99.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void SumUntil99()
{
	int Num=0, Sum=0;
	cout << "Please Enter a Number : \n";
	cin >> Num;
	while (Num != -99)
	{
		cout << "Please Enter a Number : \n";
		cin >> Num;
		Sum += Num;
	}
	cout << "Sum Of Numbers is : " << Sum << endl;
}
int main()
{
	SumUntil99();
}

