#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    for (long long int i = 0; i < n; i++)
    {
        long long int ele, no_q;
        cin >> ele >> no_q;
        long long int a[ele];
        for (long long int e = 0; e < ele; e++)
        {
            cin >> a[e];
        }
        for (long long int p = 0; p < no_q; p++)
        {
            long long int q, addi;
            cin >> q >> addi;
            long long int summm = 0;
            if (q == 1)
            {
                for (long long int j = 0; j < ele; j++)
                {
                    if (a[j] % 2 != 0)
                    {
                        a[j] = a[j] + addi;
                    }
                    summm = summm + a[j];
                }
            }
            else
            {
                for (long long int j = 0; j < ele; j++)
                {
                    if (a[j] % 2 == 0)
                    {

                        a[j] = a[j] + addi;
                    }
                    summm = summm + a[j];
                }
            }
            cout << summm << endl;
        }
    }
    return 0;
}
