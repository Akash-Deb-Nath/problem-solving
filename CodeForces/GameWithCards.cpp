#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
    {
        cin >> x;
    }
    cin >> m;
    vector<int> b(m);
    for (int &x : b)
    {
        cin >> x;
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    if (a[0] > b[0])
    {
        cout << "Alice" << endl;
        cout << "Alice" << endl;
    }
    else if (b[0] > a[0])
    {
        cout << "Bob" << endl;
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
        cout << "Bob" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
