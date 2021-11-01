//form biggest number from numeric string.
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    int a = s.size();
    int num[a];
    for (int i = 0; i < a; i++)
    {

        num[i] = int(s[i]);
    }
    sort(num, num + a);
    for (int i = 0; i < a; i++)
    {

        s[a - i - 1] = char(num[i]);
    }
    cout << s << endl;
    //or
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;
    return 0;
}