#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int test;
        cin >> test;
        int a[test] = {0};
        int max = -1;
        for (int i = 1; i <= test; i++)
        {
            cin >> a[i];
        }
        for (int j = 1; j <= test; j++)
        {
            for (int k = 1; k <= test; k++)
            {
                if ((__gcd(a[j], a[k]) == 1))
                {
                    if (j + k > max)
                    {
                        max = j + k;
                    }
                }
            }
        }
        cout << max << endl;
    }

    // cout <<  <<endl;
    return 0;
}