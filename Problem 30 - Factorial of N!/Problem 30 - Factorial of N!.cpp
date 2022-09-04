// Problem 30 - Factorial of N!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Num,Result=1;
int ReadNumber()
{
	cout << "Please Enter a Number : \n";
	cin >> Num;
	return Num;
}
int Factorial(int num)
{
	if (num <= 1)
		Result = 0;
	else
	{
		for (int i = 1; i <= num; i++)
		{
			Result = Result * i;
		}
	}
	return Result;
}
int main()
{
	cout << Factorial(ReadNumber());
}


