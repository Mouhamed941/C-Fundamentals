// Problem 08  Pass_Fail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadMark()
{
    int Mark;
    cout << "Please Enter your Mark : \n";
    cin >> Mark;
    return Mark;
}
bool CheckPassFail(int Mark)
{  
    return (Mark >= 50);      
}
void PrintResult()
{
    if (CheckPassFail(ReadMark()))
        cout << "Passed\n";
    else
        cout << "Failed\n";
}
int main()
{
    PrintResult();
}

