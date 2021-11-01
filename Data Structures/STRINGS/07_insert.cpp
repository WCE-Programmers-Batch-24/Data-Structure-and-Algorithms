#include <iostream>

using namespace std;
int main()
{
    string s1 = "abcdefghijklpqrstuvwxyz";
    cout << s1 << endl;
    s1.insert(12, "mno"); //insert second arguement at the index at first arguement
    cout << s1 << endl;
    return 0;
}