#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;

    cin >> n;
    vector<int> p(n);

    for (auto &x : p)
        cin >> x;

    for (int i = 0; i < n - 1; i++)
    {
        if (p[i] != i + 1)
        {
            if (p[i + 1] == i + 1 && p[i] == i + 2)
                swap(p[i], p[i + 1]);
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while (t--)
    {
        solve();
    }
}