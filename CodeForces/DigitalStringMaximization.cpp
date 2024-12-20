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
        vector<ll> a;
        for (auto &c : s)
        {
            a.push_back(c - '0');
        }
        ll n = a.size();
        for (int i = 1; i < n; i++)
        {
            int pos = i;
            while (pos > 0 && a[pos] > a[pos - 1] + 1)
            {
                swap(a[pos], a[pos - 1]);
                pos--;
                a[pos]--;
            }
        }

        for (auto i : a)
            cout << i;
        cout << endl;
    }

    return 0;
}