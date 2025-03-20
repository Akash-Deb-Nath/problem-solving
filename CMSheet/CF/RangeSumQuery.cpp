#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N, Q;
    cin >> N >> Q;
    vector<ll> a(N);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<ll> pre(N + 1);
    for (ll i = 1; i <= N; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1];
    }
    while (Q--)
    {
        ll L, R;
        cin >> L >> R;
        cout << pre[R] - pre[L - 1] << "\n";
    }

    return 0;
}