#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool isPossible(vector<ll> &trees, ll N, ll M, ll mid)
{
    ll sum = 0;
    for (ll i = 0; i < N; i++)
    {
        sum += max(0ll, trees[i] - mid);
    }
    return sum >= M;
}

ll height(vector<ll> &trees, ll N, ll M)
{
    ll s = 0;
    ll mx = -1;
    for (ll i = 0; i < N; i++)
    {
        mx = max(mx, trees[i]);
    }
    ll e = mx;
    ll ans = -1;
    while (s <= e)
    {
        ll mid = s + (e - s) / 2;
        if (isPossible(trees, N, M, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    ll N, M;
    cin >> N >> M;
    vector<ll> trees(N);
    for (auto &i : trees)
    {
        cin >> i;
    }
    ll ans = height(trees, N, M);
    cout << ans << endl;
    return 0;
}