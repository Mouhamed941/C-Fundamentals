#include <iostream>,

using namespace std;
int ReadIntNumberInRang(int From, int To)
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
int main()
{
	cout << ReadIntNumberInRang(18, 45);
}

