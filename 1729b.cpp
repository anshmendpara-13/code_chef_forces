#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char c[27] = {'A',
                  'a',
                  'b',
                  'c',
                  'd',
                  'e',
                  'f',
                  'g',
                  'h',
                  'i',
                  'j',
                  'k',
                  'l',
                  'm',
                  'n',
                  'o',
                  'p',
                  'q',
                  'r',
                  's',
                  't',
                  'u',
                  'v',
                  'w',
                  'x',
                  'y',
                  'z'};

    for (int i = 0; i < n; i++)
    {
        int size;
        string s;
        cin >> size;
        cin >> s;
        int a[size] = {0};
        for (int i = 0; i < size; i++)
        {
            a[i] = s[i] - 48;
            // cout << a[i];
        }

        for (int i = 0; i < size; i++)
        {
            if (a[i + 2] != 0 || a[i + 3] != 0)
            {
                if ((a[i + 2] != 0))
                {
                    cout << c[a[i]];
                }
                else if ((a[i + 2] == 0))
                {
                    int ss = a[i] * 10 + a[i + 1];
                    cout << c[ss];
                    i = i + 2;
                }
            }
            else
            {
                if ((a[i + 2] != 0 && a[i + 3] != 0))
                {
                    int ss = a[i] * 10 + a[i + 1];
                    cout << c[ss];
                    i = i + 2;
                }
                else if ((a[i + 2] == 0 && a[i + 3] == 0))
                {

                    cout << c[a[i]];
                }
            }
        }
        cout << endl;
    }

    return 0;
}