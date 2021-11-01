#include <iostream>

using namespace std;
int main()
{
    string s1 = "abcdefghijklmnopqrstuvwxyz";
    cout << s1 << endl;
    cout << s1.size() << endl;
    cout << s1.length() << endl;
    s1.erase(12, 3);
    cout << s1 << endl;
    cout << s1.size() << endl;
    cout << s1.length() << endl;
    s1.insert(12, "mno");
    cout << s1 << endl;
    cout << s1.size() << endl;
    cout << s1.length() << endl;
    return 0;
}