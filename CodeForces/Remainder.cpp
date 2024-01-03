#include <bits/stdc++.h>

using namespace std;

int BinaryToDecimal(int n)
{
    int decimalValue = 0;
    int base = 1;
    while (n)
    {
        int lastDigit = n % 10;
        n = n / 10;
        decimalValue += lastDigit * base;
        base = base * 2;
    }
}

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = n - x; i < n; i++)
    {
        if (i == n - y - 1)
        {
            if (s[i] != '1')
            {
                ans++;
            }
        }
        else
        {
            if (s[i] != '0')
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}