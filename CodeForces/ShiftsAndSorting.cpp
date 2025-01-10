#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll ans = 0;
        ll temp = 0;
        for (auto &ch : s)
        {
            if (ch == '1')
            {
                temp++;
            }
            else if (ch == '0' && temp)
            {
                ans += (temp + 1);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}