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
        string s;
        cin >> s;
        string sub;
        cin >> sub;
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                if (j < sub.size())
                {
                    s[i] = sub[j];
                    j++;
                }
                else
                {
                    s[i] = 'a';
                }
            }
            else if (j < sub.size() && s[i] == sub[j])
            {
                j++;
            }
        }
        if (j == sub.size())
        {
            cout << "YES\n";
            cout << s << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}