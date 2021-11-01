#include <iostream>

using namespace std;
int main()
{
    string s1 = "abcdefghijklmnopqrstuvwxyz";
    cout << s1 << endl;
    string s = s1.substr(3, 2);
    cout << s << endl;
    return 0;
}