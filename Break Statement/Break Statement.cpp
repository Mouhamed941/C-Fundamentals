// Break Statement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int Arr1[10] = { 10,20,30,40,50,60,70,80,90,100 };
	
	for (size_t i = 0; i <= 10; i++)
	{
		if (Arr1[i] == 20)
		{
			cout << Arr1[i] << endl;
			//break;
		}
		
	}
	int Num,Sum=0;
	
	for (size_t i = 0; i < 5; i++)
	{
		cout << "Please enter a Number : \n";
		cin >> Num;
		if (Num > 50)
		{
			cout << "The Number is greater than 50 and won't be calculated" << endl;
			continue;
		}
		else
		{
			Sum += Num;
		}
	}
	cout << Sum << endl;
}

