// Problem 37 - Sum Until -99.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;
	return Number;
}
float SumUntil99()
{
	int Num = 0, Sum = 0,Counter=1;
	do
	{
		Num = ReadNumber("Please Enter Number " + to_string(Counter));
		if (Num == -99)
		{
			break;
		}
		Sum += Num;
		Counter++;
	} while (Num != -99);
	return Sum;
}
int main()
{
	cout << "Result : " << SumUntil99();
}

