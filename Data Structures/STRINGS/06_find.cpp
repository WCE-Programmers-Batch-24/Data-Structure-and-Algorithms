#include <iostream>

using namespace std;
int main()
{
    string s1 = "abcdefghijklmnopqrstuvwxyz";
    cout << s1 << endl;
    s1.find("mno"); //stores index of first character we pass
    cout << s1.find("mnz") << endl; 
    return 0;
}