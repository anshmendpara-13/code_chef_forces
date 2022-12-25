#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int num;
        cin >> num;
        long long int max = 1;
        for (int j = 0; j < num; j++)
        {
            double d = pow(10, j);

            if (num - d <= 0)
            {
                cout << num - max << endl;
                break;
            }
            if (d > max)
            {
                max = d;
            }
        }
    }
    return 0;
}
