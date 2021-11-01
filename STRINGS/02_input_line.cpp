#include <iostream>

using namespace std;
int main()
{
    string str = "devil should've been my name";
    cout << str << endl; // here you can print a string with spaces.
    string str3;
    getline(cin, str3);
    cout << str3 << endl; //here you can  take input of a string with spaces.
    string str2;
    cin >> str2;
    cout << str2 << endl; // here you can not take input of a string with spaces.
    return 0;
}