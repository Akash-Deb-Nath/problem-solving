#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    string s;
    cin >> s;
    for (ll i = 0; i + 1 < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            if (s[i] != 'a' && s[i + 2] != 'a')
            {
                s[i + 1] = 'a';
            }
            else if (s[i] != 'b' && s[i + 2] != 'b')
            {
                s[i + 1] = 'b';
            }
            else if (s[i] != 'c' && s[i + 2] != 'c')
            {
                s[i + 1] = 'c';
            }
        }
    }
    cout << s << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}