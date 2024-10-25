#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, even = 0, odd = 0, result = 0, e, o;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    sort(a, a + n);
    e = even - odd;
    o = odd - even;
    if (even >= odd)
    {
        if (e >= 2)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    result = result + a[i];
                    e--;
                    if (e < 2)
                    {
                        break;
                    }
                }
            }
            cout << result << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        if (o >= 2)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    result = result + a[i];
                    o--;
                    if (o < 2)
                    {
                        break;
                    }
                }
            }
            cout << result << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}