#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        set<int> s;
        map<int, int> mA, mB;
        vector<int> a, b;
        for (i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            s.insert(x);
        }
        for (i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            b.push_back(y);
            s.insert(y);
        }
        a.push_back(INT_MIN);
        b.push_back(INT_MIN);
        int cnt = 1, cnt1 = 1;
        for (i = 1; i < n + 1; i++)
        {
            if (a[i] == a[i - 1])
            {
                cnt++;
            }
            else
            {
                mA[a[i - 1]] = max(cnt, mA[a[i - 1]]);
                cnt = 1;
            }

            if (b[i] == b[i - 1])
            {
                cnt1++;
            }
            else
            {
                mB[b[i - 1]] = max(cnt1, mB[b[i - 1]]);
                cnt1 = 1;
            }
        }
        int ans = 0;
        int res;
        for (auto x : s)
        {
            res = mA[x] + mB[x];
            ans = max(res, ans);
        }

        cout << ans << endl;
    }
}