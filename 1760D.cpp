#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cnt = 0;
        ll x = *min_element(a, a + n);

        for (ll i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                b[i] = 1;
            }
            else
            {
                b[i] = 0;
            }
        }

        for (ll i = 0; i < n; i++)
        {
            if (b[i] == 1 && b[i + 1] == 0)
            {
                int cntt = 0;
                for (int j = i + 1; j < n; j++)
                {
                    if (b[j] == 1)
                    {
                        cntt = 1;
                    }
                }
                if (cntt == 0)
                {
                    cout << "YES" << endl;
                    break;
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else if (n == 1)
            {
                cout << "YES" << endl;
            }
        }
    }
}