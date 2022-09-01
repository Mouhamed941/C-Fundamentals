// Arrays with Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadGradesData(float Grades[3])
{
	cout << "Please Enter Grade1 : \n";
	cin >> Grades[0];

	cout << "Please Enter Grade2 : \n";
	cin >> Grades[1];

	cout << "Please Enter Grade1 : \n";
	cin >> Grades[2];

	cout << "********************\n";
}
float CalculatAvrg(float Grades[3])
{
	float Avrg = (Grades[0] + Grades[1] + Grades[2]) / 3;
	cout << "The Average of Grades is : " << Avrg << endl;
	return Avrg;
}
int main()
{
	float Grades[3];
	ReadGradesData(Grades);
	cout << CalculatAvrg(Grades) << endl;
}
 
