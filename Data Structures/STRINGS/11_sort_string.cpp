#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s1 = "qwertyuiopasdfghjklzxcvbnm";
    cout << s1 << endl;
    sort(s1.begin(), s1.end());
    cout << s1 << endl;
     

    return 0;
}