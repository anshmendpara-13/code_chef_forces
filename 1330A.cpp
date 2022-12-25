#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int arr[210] = {0};
        int cnt = 0;
        int n, x;
        cin >> n >> x;
        int z[n];
        for (int k = 1; k <= n; k++)
        {
            cin >> z[k];
            arr[z[k]] = z[k];
        }

        for (int j = 1; j <= 210; j++)
        {
            if (z[j] == j)
            {
                arr[j] = j;
            }
        }
        for (int j = 1; j <= 210 && x > 0; j++)
        {
            if (arr[j] == 0)
            {
                arr[j] = j;
                x--;
            }
        }

        for (int k = 1; k <= 210; k++)
        {
            if (arr[k] == 0)
            {
                break;
            }

            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}