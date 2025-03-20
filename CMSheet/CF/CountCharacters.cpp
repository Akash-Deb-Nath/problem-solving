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
    string s;
    cin >> s;
    map<char, ll> mp;
    set<char> st;
    for (char ch : s)
    {
        mp[ch]++;
        st.insert(ch);
    }
    for (auto ch : st)
    {
        cout << ch << " " << mp[ch] << "\n";
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