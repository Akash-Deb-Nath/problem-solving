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
        ll n, m;
        cin >> n >> m;
        vector<string> s(n);
        ll temp = 0, ans = 0;
        for (auto &i : s)
        {
            cin >> i;
        }
        for (auto &i : s)
        {
            temp = temp + i.size();
            if (temp <= m)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}