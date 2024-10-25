#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k % 2 == 0)
    {
        sort(s.begin(), s.end());
        cout << s << endl;
        return;
    }
    string s1 = "";
    string s2 = "";
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            s1 += s[i];
        }
        else
        {
            s2 += s[i];
        }
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    int p = 0, q = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << s1[p++];
        }
        else
        {
            cout << s2[q++];
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}