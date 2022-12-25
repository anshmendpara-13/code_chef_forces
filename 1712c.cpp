#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }

        if (i == j)
        {
            res++;
        }
    }
    return res;
}

void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
    int e[n];
    int cnt = 0;
    int x = countDistinct(arr, n);
    // cout << x << endl;

    for (int i = 0; i < n; i++)
    {

        // if (visited[i] == true)
        //     continue;

        int count = -1;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count--;
            }
        }

        // cout << arr[i] << " " << count + 1 << endl;
        if (count < 0)
        {
            e[i] = count + 1;
        }
        else
        {
            e[i] = 0;
        }
    }
    // for (int i = 0; i < n; i++)
    // {

    //     cout << e[i] << endl;
    // }
    // cout << e[n-1] << endl;

    if (e[n - 1] == -1)
    {
        cout << x - 1 << endl;
    }
    else
    {
        cout << x << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int s1;
        cin >> s1;
        int arr[s1];
        for (int i = 0; i < s1; i++)
        {
            cin >> arr[i];
        }
        countFreq(arr, s1);
    }

    return 0;
}