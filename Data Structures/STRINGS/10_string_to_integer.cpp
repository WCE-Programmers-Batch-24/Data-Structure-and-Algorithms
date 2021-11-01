#include <iostream>

using namespace std;
int main()
{
    string s1 = "65";
    int a = stoi(s1); // string to integer.
    cout << a + 4 << endl;
    int x = 6;
    string s = to_string(x) + "9";
    cout << s << endl;
    return 0;
}