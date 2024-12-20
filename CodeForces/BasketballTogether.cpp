#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N, D;
    cin >> N >> D;
    vector<ll> P(N);
    for (auto &i : P)
    {
        cin >> i;
    }
    sort(P.rbegin(), P.rend());
    ll ans = 0, temp = 0, i = 0;
    while (N--)
    {
        temp = temp + P[i];
        if (temp > D)
        {
            ans++;
            temp = 0;
            i++;
        }
    }
    cout << ans << endl;

    return 0;
}