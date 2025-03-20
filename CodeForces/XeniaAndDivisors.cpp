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
    ll n;
    cin >> n;
    ll cnt[8] = {0};
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        cnt[a]++;
    }
    if (cnt[5] == 0 && cnt[7] == 0 && cnt[1] == n / 3 && cnt[2] >= cnt[4] && cnt[6] >= cnt[3] && cnt[2] - cnt[4] == cnt[6] - cnt[3])
    {
        while (cnt[4])
        {
            cout << 1 << ' ' << 2 << ' ' << 4 << '\n';
            cnt[1]--;
            cnt[2]--;
            cnt[4]--;
        }
        while (cnt[3])
        {
            cout << 1 << ' ' << 3 << ' ' << 6 << '\n';
            cnt[1]--;
            cnt[3]--;
            cnt[6]--;
        }
        while (cnt[1])
        {
            cout << 1 << ' ' << 2 << ' ' << 6 << '\n';
            cnt[1]--;
            cnt[2]--;
            cnt[6]--;
        }
    }
    else
    {
        cout << -1 << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}