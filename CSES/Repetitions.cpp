#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    string s;
    cin >> s;
    ll ans = 1;
    ll result = 0;
    for (ll i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            ans++;
        }
        else
        {
            ans = 1;
        }
        result = max(result, ans);
    }
    if (s.size() == 1)
    {
        result = 1;
    }

    cout << result << endl;

    return 0;
}