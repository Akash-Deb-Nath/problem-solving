#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto &i : p)
    {
        cin >> i;
    }
    for (int i = 1; i + 1 < n; i++)
    {
        if (p[i - 1] < p[i] && p[i] > p[i + 1])
        {
            cout << "Yes" << endl;
            cout << i << " " << i + 1 << " " << i + 2 << endl;
            return;
        }
    }
    cout << "No" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}