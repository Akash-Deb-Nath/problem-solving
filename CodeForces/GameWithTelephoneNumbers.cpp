#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll temp = 0;
    for (ll i = 0; i < n - 10; i++)
    {
        if (s[i] == '8')
        {
            temp++;
        }
        else
        {
            temp--;
        }
    }
    if (temp > 0)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}