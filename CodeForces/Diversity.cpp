#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    string s;
    cin >> s;
    ll k;
    cin >> k;
    ll n = s.size();
    if (k > n)
    {
        cout << "impossible" << "\n";
        return;
    }
    set<char> st;
    for (auto &ch : s)
    {
        st.insert(ch);
    }
    if (st.size() > k)
    {
        cout << 0 << "\n";
        return;
    }
    ll ans = k - st.size();
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