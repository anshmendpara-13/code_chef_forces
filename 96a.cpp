#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, s1, s2;
    getline(cin, s);
    int c = 0;
    s1 = "1111111";
    s2 = "0000000";

    for (int i = 0; i < 100; i++)
    {
        int a = s.find(s1);
        int b = s.find(s2);
        if (a > 0 || b > 0)
        {
            c = 1;
            break;
        }
    }

    if (c > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}