// Data Type Conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <string>


int main()
{
    int Number1;
    double Number2 = 15.88;
    Number1 = Number2;  //Implecit conversion from double to int
    Number1 = (int)Number2; //Explicit conversion 
    Number1 = int(Number2); //Explicit conversion 
    cout << Number1 << endl;

    string str = "123.456";
    //Convert String To Integer
    int num_int = stoi(str);

    //Convert String To Double
    double num_double = stod(str);

    //Convert String To Float
    float num_float = stof(str);

    cout << "num int " << num_int << endl;
    cout << "num double " << num_double << endl;
    cout << "num float " << num_float << endl;


    int Num1 = 123;
    double Num2 = 18.77;
    string St1, St2;
    St1 = to_string(Num1);
    St2 = to_string(Num2);
    cout << Num1 << endl;
    cout << Num2 << endl;

#pragma region HomeworkSection
    string st1 = "43.22";
    double st1_double = stod(st1);
    float st1_float = stof(st1);
    int st1_int = stoi(st1);
    cout << st1_double << endl;
    cout << st1_float << endl;
    cout << st1_int << endl;

    int N1 = 20;
    string strN1 = to_string(N1);

    double N2 = 33.5;
    string strN2 = to_string(N2);

    float N3 = 55.23;
    string strN3 = to_string(N3);
    int N4;
    N4 = N3;        //Implecit conversion from float to int
    N4 = (int)N3;   //Explicit conversio
    N4 = int(N3);   //Explicit conversio
#pragma endregion


}

