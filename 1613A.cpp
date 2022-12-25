#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x1, z1, x2, z2;
        cin >> x1 >> z1 >> x2 >> z2;
        int s1 = 1, s2 = 1;
        int a1, a2;
        if (z1 != 0)
        {
            for (int i = 0; i < z1; i++)
            {
                s1 = (s1 * 10);
            }
            a1 = s1 * x1;
            // cout << a1 << endl;
        }
        else
        {
            a1 = x1;
            // cout << a1 << endl;
        }

        if (z2 != 0)
        {
            for (int i = 0; i < z2; i++)
            {
                s2 = (s2 * 10);
            }
            a2 = s2 * x2;
            // cout << a2 << endl;
        }
        else
        {
            a2 = x2;
            // cout << a2 << endl;
        }

        if (a1 > a2)
        {
            cout << ">" << endl;
        }

        else if (a2 > a1)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }

    return 0;
}