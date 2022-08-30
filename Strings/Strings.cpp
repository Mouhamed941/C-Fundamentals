using namespace std;
#include <iostream>
#include <string>
int main()
{
    std::cout << "Please Enter String1 \n";
    string string1;
    getline(cin, string1);

    string string2, string3;
    std::cout << "Please Enter String2 \n";
    getline(cin, string2);
    
    std::cout << "Please Enter String3 \n";
    getline(cin, string3);
    cout << "****************************************" << endl;

    cout << "The Length of string1 is " << string1.length() << endl;
    cout << "Characters at 0, 2, 4, 7 ";
    cout << " are : " << string1[0] << " " << string1[2] << " " << string1[4] << " " << string1[7] << endl;

    cout << "Concatenating String 2 and String3 = " << string2 + string3 << endl;
    cout << "5 * 10 = " << stoi(string2) * stoi(string3) << endl;
    


}

