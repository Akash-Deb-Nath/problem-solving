#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

void solve()
{
    ll q;
    cin >> q;
    bool otherS = 0, otherT = 0;
    ll cntS = 0, cntT = 0;
    while (q--)
    {
        ll d, k;
        string x;
        cin >> d >> k >> x;
        for (auto ch : x)
        {
            if (d == 1)
            {
                if (ch != 'a')
                {
                    otherS = 1;
                }
                else
                {
                    cntS += k;
                }
            }
            else
            {
                if (ch != 'a')
                {
                    otherT = 1;
                }
                else
                {
                    cntT += k;
                }
            }
        }
        if (otherT)
        {
            cout << "YES" << "\n";
        }
        else if (!otherS && cntS < cntT)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}