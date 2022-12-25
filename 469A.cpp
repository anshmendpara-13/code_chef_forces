#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[1000] = {0};

    int a;
    cin >> a;
    int a1[a];
    for (int i = 1; i <= a; i++)
    {
        cin >> a1[i];
        arr[i] = a1[i];
        // cout << i << endl;
    }

    int b;
    cin >> b;
    int b1[b];
    for (int i = a + 1; i <= a + b; i++)
    {
        cin >> b1[i];
        arr[i] = b1[i];
        // cout << i << endl;
    }

    sort(arr, arr + (a + b));

    int cnt = 0;
    for (int i = 1; i <= a + b; i++)
    {
        // cout << arr[i] << endl;
        if (arr[i] != arr[i + 1])
        {
            cnt++;
        }
        // cout << i << endl;
    }
    if (cnt == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}