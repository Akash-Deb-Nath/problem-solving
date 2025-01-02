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
        ll n, d;
        cin >> n >> d;
        set<ll> ans;
        ans.insert(1);
        if (d % 3 == 0 || n >= 3)
        {
            ans.insert(3);
        }
        if (d % 5 == 0)
        {
            ans.insert(5);
        }
        if (d % 7 == 0 || n >= 3)
        {
            ans.insert(7);
        }
        if (d % 9 == 0)
        {
            ans.insert(9);
        }
        if (d % 3 == 0 && n >= 3)
        {
            ans.insert(9);
        }
        if (n >= 6)
        {
            ans.insert(9);
        }
        for (auto &i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}