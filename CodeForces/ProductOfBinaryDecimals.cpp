#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

vector<ll> v;

void BinaryDecimals()
{
    for (ll i = 10; i <= 100005; i++)
    {
        ll num = i;
        bool flag = 1;
        while (num)
        {
            ll digit = num % 10;
            if (digit != 0 && digit != 1)
            {
                flag = 0;
                break;
            }
            num /= 10;
        }
        if (flag)
        {
            v.push_back(i);
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    for (ll i = v.size() - 1; i >= 0; i--)
    {
        while (n % v[i] == 0 && n >= v[i])
        {
            n /= v[i];
        }
    }
    if (n == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    BinaryDecimals();

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}