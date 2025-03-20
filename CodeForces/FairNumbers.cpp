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
        ll temp = n;
        while (n)
        {
            ll digit = n % 10;
            if (digit != 0 && temp % digit != 0)
            {
                temp++;
                n = temp;
            }
            else
            {
                n /= 10;
            }
        }
        cout << temp << endl;
    }

    return 0;
}