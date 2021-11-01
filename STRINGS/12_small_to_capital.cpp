#include <iostream>

using namespace std;
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32; // lower cases has ASCII value greater than 32.
        }
    }
    cout << "all upper\n"<<str << endl;
    
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32; // lower cases has ASCII value greater than 32.
        }
    }
    cout << "all lower\n"<< str << endl;

    return 0;
}