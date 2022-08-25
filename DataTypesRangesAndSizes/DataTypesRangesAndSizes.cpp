

#include <iostream>
using namespace std;
int main()
{
    //By Default everything is signed
    int v1;     // from -2,147,483,648 To +2,147,483,647
    signed int v2; //same

    unsigned int v3;    // From 0 to 4,294,967,295
    long int v4;    //from - 2, 147, 483, 648 To + 2,147,483,647
    unsigned long int v5;   // From 0 to 4,294,967,295

    short int v6;   //From -32,678 To +32,676
    short v7;       //From -32,678 To +32,676

    unsigned short int v8; //From 0 To 65,563
    unsigned short  v9;          //From 0 To 65,563

    //sizof function 
    //we can know the size of each data type using sizeof function
    cout << sizeof(v9) <<  " byts" <<endl;   // 2 byts

    //We can know the range of each data type using their own range functions
    cout << "char Range: " << CHAR_MIN << "," << CHAR_MAX << endl;
    cout << "unsigned char Range: " << 0 << "," << UCHAR_MAX << endl << endl;

    cout << "short Range: " << SHRT_MIN << "," << SHRT_MAX << endl;
    cout << "unsigned short Range: " << 0 << "," << USHRT_MAX << endl << endl;

    cout << "int  Range: " << INT_MIN << "," << INT_MAX << endl;
    cout << "unsigned int Range: " << 0 << "," << UINT32_MAX << endl << endl;

    cout << "Long Range: " << LONG_MIN << "," << LONG_MAX << endl;
    cout << "unsigned long int Range: " << 0 << "," << ULONG_MAX << endl << endl;
    
    cout << "long long int Range: " << LLONG_MIN << "," << LLONG_MAX << endl;
    cout << "unsigned long long int Range: " << 0 << "," << ULLONG_MAX << endl << endl;

    cout << "float Range: " << FLT_MIN << "," << FLT_MAX << endl;
    cout << "float(negative) Range: " << -FLT_MIN << ", " <<-FLT_MAX << endl << endl;

    cout << "double Range: " << DBL_MIN << "," << DBL_MAX << endl;
    cout << "double(negative) Range: " << -DBL_MIN << ", " << -DBL_MAX << endl << endl;

    cout << "long double Range: " << LDBL_MIN << "," << LDBL_MAX << endl;
    cout << "long double(negative) Range: " << -LDBL_MIN_10_EXP << ", " << -LDBL_MAX_10_EXP << endl << endl;

    cout << "New Line Added\n";
    
}

