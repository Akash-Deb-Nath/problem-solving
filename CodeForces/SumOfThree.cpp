#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n;
        a = 1;
        b = 2;
        c = n - 3;
        if (n <= 6 || n == 9)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (c % 3 == 0)
            {
                c -= 2;
                b += 2;
            }
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
    }

    return 0;
}