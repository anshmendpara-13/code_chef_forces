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

        int count = 0;
        int length;
        cin >> length;
        int a[length];
        for (int i = 0; i < length; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;

        for (int j = 0; j < length; j++)
        {
            for (int k = 0; k < length; k++)
            {
                if (a[j] == a[k] && s[j] != s[k])
                {
                    count++;
                }
                // cout << a[j] << " " << a[k] << " " << s[j] << " " << s[k] << " " << endl;
            }
        }
        if (count > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}