// Nested For Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	/*for (size_t i = 1; i <= 10; i++)
	{
		cout << "***************************" << endl;
		for (size_t j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}*/
#pragma region Homework1
	for (size_t i = 65; i < 91; i++)
	{
		cout << "Letter : " << char(i) << endl;
		for (size_t j = 65; j < 90; j++)
		{
			cout << char(i) << char(j) << endl;
		}
		cout << "******************\n";
	}
#pragma endregion

#pragma region Homework2
	for (size_t i = 1; i <= 10; i++)
	{
		for (size_t j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << endl;
	}
#pragma endregion 

#pragma region Homework3
	for (size_t i = 10; i >= 1; i--)
	{
		for (size_t j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#pragma endregion 

#pragma region Homework4
	for (size_t i = 10; i >= 1; i--)
	{
		for (size_t j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << endl;
	}
#pragma endregion 

#pragma region Homework5
	for (size_t i = 65; i <= 69; i++)
	{
		for (size_t j = 65; j <= i; j++)
		{
			cout << char(j);
		}
		cout << endl;
	}

#pragma endregion 

#pragma region Homework6
	for (size_t i = 1; i <= 10; i++)
	{
		for (size_t j = i; j <= 10; j++)
		{
			cout << j;
		}
		cout << endl;
	}
}
#pragma endregion 