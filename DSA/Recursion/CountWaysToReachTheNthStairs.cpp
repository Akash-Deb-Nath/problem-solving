#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll countDistinctWays(ll nStairs)
{
    if (nStairs < 0)
    {
        return 0;
    }
    if (nStairs == 0)
    {
        return 1;
    }
    return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll ans = countDistinctWays(n);
    cout << ans << "\n";

    return 0;
}