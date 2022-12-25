#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    if ((2 * n) > m)
    {
        cout << -1 << endl;
    }
    else
    {
        while (n < m)
        {
            if ((3 * n) <= m)
            {
                if (m % (3 * n) == 0)
                {
                    n = 3 * n;
                    cnt++;
                }
                if (n == m)
                {
                    break;
                }
                // cout << cnt << endl;
            }
            else if ((2 * n) <= m)
            {
                if (m % (2 * n) == 0)
                {
                    n = 2 * n;
                    cnt++;
                }
                if (n == m)
                {
                    break;
                }
            }
            // cnt++;
        }
        if (cnt == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }
    return 0;
}