#include <iostream>,

using namespace std;
int ReadIntNumberInRangUsingWhile(int From, int To)
{
	int Number;
	cout << "Please Enter 2 Numbers Between " << From << " To " << To << endl;
	cin >> Number;
	while (Number < From || Number > To)
	{
		cout << "Wron Number " << endl;
		cout << "Please Enter 2 Numbers Between " << From << " To " << To << endl;	
		cin >> Number;
	}
	return Number;
}
int ReadIntNumberInRangUsingDoWhile(int From, int To)
{
	int Number;
	do
	{
		cout << "Please Enter 2 Numbers Between " << From << " To " << To << endl;
		cin >> Number;
	} while (Number < From || Number > To);
	
	
	return Number;
}

int main()
{
	cout << ReadIntNumberInRangUsingWhile(18, 45) << endl;
	cout << ReadIntNumberInRangUsingDoWhile(18, 45);
}

