#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    for (long long int i = 0; i < n; i++)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int d = b - a + 1;
        cout << d << endl;
        long long int arr[d];
        long long int max = INT_MIN;
        for (long long int i = 0, j = a; i < d; i++, j++)
        {
            long long int e = j / c;
            arr[i] = e + (j % c);
            // cout << arr[i] << endl;
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        cout << max << endl;
    }

    // cout << floor(3/3) <<endl;
    // cout << 5 % 3 << endl;
    return 0;
}