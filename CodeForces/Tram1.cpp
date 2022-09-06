#include <iostream>
using namespace std;
int main()
{
    int n, a[1000], b[1000], x, i, r = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        x = b[i] - a[i + 1] + b[i + 1];
        if (x >= r)
        {
            r = x;
        }

        b[i + 1] = x;
    }
    for (i = 0; i < n; i++)
    {
        if ((a[i] != 0 || b[i] != 0) && r == 0)
        {
            r = 1;
        }
    }
    if (n == 2)
    {
        for (i = 0; i < n; i++)
        {
            if ((a[i] == b[i + 1]) && (a[i + 1] == b[i]))
            {
                if (a[i] >= b[i])
                {
                    r = a[i];
                }
                else
                {
                    r = b[i];
                }
            }
        }
    }

    cout << r << endl;
    return 0;
}