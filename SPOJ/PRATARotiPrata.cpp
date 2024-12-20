#include <bits/stdc++.h>

using namespace std;

#define ll long long int

// bool isPossible(ll P, ll N, vector<ll> L, ll mid)
// {
//     ll totalParatas = 0;
//     for (ll i = 0; i < N; i++)
//     {
//         ll temp = 0;
//         temp = (-1 + sqrt(1 + 8LL * mid / L[i])) / 2;
//         totalParatas += temp;
//         if (totalParatas >= P)
//         {
//             return true;
//         }
//     }
//     return totalParatas >= P;
// }

bool isPossible(ll P, ll N, vector<ll> &ranks, ll mid)
{
    ll totalPratas = 0;
    for (ll rank : ranks)
    {
        ll low = 0, high = P;
        ll pratas = 0;

        while (low <= high)
        {
            ll midPratas = (low + high) / 2;
            long long totalTime = rank * (1LL * midPratas * (midPratas + 1)) / 2;

            if (totalTime <= mid)
            {
                pratas = midPratas;
                low = midPratas + 1;
            }
            else
            {
                high = midPratas - 1;
            }
        }

        totalPratas += pratas;
        if (totalPratas >= P)
        {
            return true;
        }
    }
    return false;
}

ll numberOfMinutes(ll P, ll N, vector<ll> L)
{
    ll s = 0;
    ll mx = -1;
    for (ll i = 0; i < N; i++)
    {
        mx = max(mx, L[i]);
    }
    ll temp;
    for (ll i = 1; i <= P; i++)
    {
        temp += (mx * i);
    }
    ll e = temp;
    ll ans = -1;
    while (s <= e)
    {
        ll mid = s + (e - s) / 2;
        if (isPossible(P, N, L, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll P;
        cin >> P;
        ll N;
        cin >> N;
        vector<ll> L(N);
        for (auto &i : L)
        {
            cin >> i;
        }
        ll ans = numberOfMinutes(P, N, L);
        cout << ans << endl;
    }

    return 0;
}