// #include <iostream>

// using namespace std;
// int main()
// {
//     string s1 = "dev";
//     string s2 = "il";

//     cout << s1.compare(s2) << endl;

//     return 0;
// }
//check two strings are equal or not
#include <iostream>

using namespace std;
int main()
{
    string s1 = "Woww";
    string s2 = "Woww";
    if (!s1.compare(s2))
    {
        cout << "equal" << endl;
    }

    return 0;
}