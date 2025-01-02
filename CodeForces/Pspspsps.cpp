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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        if (s[0] == 's')
        {
            s[0] = '.';
        }
        if (s.back() == 'p')
        {
            s.back() = '.';
        }
        set<char> temp;
        for (auto ch : s)
        {
            if (ch != '.')
            {
                temp.insert(ch);
            }
        }
        if (temp.size() <= 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}