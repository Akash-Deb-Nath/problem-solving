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
        bool flag = 1;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'W')
            {
                continue;
            }
            string temp = "";
            while (i < n && s[i] != 'W')
            {
                temp += s[i];
                i++;
            }
            int cnt = count(temp.begin(), temp.end(), 'B');
            if (cnt == 0 || cnt == temp.size())
            {
                flag = 0;
                break;
            }
        }
        if (flag)
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