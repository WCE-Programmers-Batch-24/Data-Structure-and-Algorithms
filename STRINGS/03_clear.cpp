#include <iostream>

using namespace std;
int main()
{
    string str = "devil should've been my name";
    cout << str << endl;
    str.clear(); // clears string data
    cout << str << endl;
    if (str.empty())
    {
        cout << "empty" << endl;
    }

    return 0;
}