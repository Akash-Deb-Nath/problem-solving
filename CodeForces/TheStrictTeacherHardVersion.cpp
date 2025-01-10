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
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());

        for (int i = 0; i < q; i++)
        {
            int a;
            cin >> a;

            auto it = lower_bound(b.begin(), b.end(), a);
            int ans;
            if (it == b.begin())
            {
                ans = b[0] - 1;
            }
            else if (it == b.end())
            {
                ans = n - b[m - 1];
            }
            else
            {
                ans = (*it - *(it - 1)) / 2;
            }
            cout << ans << "\n";
        }
    }

    return 0;
}