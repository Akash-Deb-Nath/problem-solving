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

    vector<ll> preXor(300002);
    preXor[0] = 0;
    for (ll i = 0; i < 300001; i++)
    {
        preXor[i + 1] = preXor[i] ^ i;
    }

    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll req = b ^ preXor[a];
        if (req == 0)
        {
            cout << a << "\n";
        }
        else if (req != a)
        {
            cout << a + 1 << "\n";
        }
        else
        {
            cout << a + 2 << "\n";
        }
    }

    return 0;
}