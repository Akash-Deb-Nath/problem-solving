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
    string a;
    cin >> a;
    string ans;
    bool flag = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] == '0' && flag == 0)
        {
            flag = 1;
        }
        else
        {
            ans += a[i];
        }
    }
    if (flag == 0)
    {
        ans.pop_back();
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}