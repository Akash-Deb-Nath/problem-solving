#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll ans = power(a, b / 2);
    if (b & 1)
    {
        return a * ans * ans;
    }
    else
    {
        return ans * ans;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b;
    cin >> a >> b;
    ll ans = power(a, b);
    cout << "Answer is " << ans << "\n";
    return 0;
}