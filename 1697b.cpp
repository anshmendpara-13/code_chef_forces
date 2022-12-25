#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p.rbegin(), p.rend());

    for (int i = 0; i < q; i++)
    {
        ll x1, y1;
        cin >> x1 >> y1;

        ll sum = 0;
        for (int i = x1 - 1; i >= x1 - y1; i--)
        {
            sum = sum + p[i];
        }
        cout << sum << endl;
    }

    return 0;
}