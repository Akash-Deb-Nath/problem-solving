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
        string a;
        cin >> a;
        for (ll i = 0; i < a.size(); i++)
        {
            if (a[i] == 'q')
            {
                a[i] = 'p';
            }
            else if (a[i] == 'p')
            {
                a[i] = 'q';
            }
        }
        reverse(a.begin(), a.end());
        cout << a << endl;
    }

    return 0;
}