#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (b % a == 0)
        {
            cout << b * (b / a) << endl;
        }
        else
        {
            cout << a / __gcd(a, b) * b << endl;
        }
    }

    return 0;
}