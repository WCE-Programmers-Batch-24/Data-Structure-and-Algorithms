#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper); // first we pass whole string (s.begin() & s.end())
                                                         //and then from where do you want to transfrom and then
                                                         //  in what do you want to transform
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return 0;
}