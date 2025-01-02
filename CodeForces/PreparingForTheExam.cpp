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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m);
        for (int &i : a)
        {
            cin >> i;
        }
        vector<int> q(k);
        for (int &i : q)
        {
            cin >> i;
        }
        string ans;
        if (k < n - 1)
        {
            ans.assign(m, '0');
        }
        else if (k == n)
        {
            ans.assign(m, '1');
        }
        else
        {
            vector<bool> known(n + 1, false);
            for (int x : q)
                known[x] = true;
            for (int i = 0; i < m; ++i)
            {
                if (!known[a[i]])
                {
                    ans += '1';
                }
                else
                {
                    ans += '0';
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}