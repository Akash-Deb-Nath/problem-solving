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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(2 * n);
        map<ll, ll> firstHalf, secondHalf;
        for (ll i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
            if (i < n)
            {
                firstHalf[a[i]]++;
            }
            else
            {
                secondHalf[a[i]]++;
            }
        }
        ll twoS = 0;
        for (auto &i : firstHalf)
        {
            if (i.second == 2)
            {
                twoS++;
            }
        }
        vector<ll> ansA, ansB;
        if (twoS >= k)
        {
            for (auto &i : firstHalf)
            {
                if (ansA.size() >= 2 * k)
                {
                    break;
                }
                if (i.second == 2)
                {
                    ansA.push_back(i.first);
                    ansA.push_back(i.first);
                }
            }
            for (auto &i : secondHalf)
            {
                if (ansB.size() >= 2 * k)
                {
                    break;
                }
                if (i.second == 2)
                {
                    ansB.push_back(i.first);
                    ansB.push_back(i.first);
                }
            }
        }
        else if (twoS == 0)
        {
            for (ll i = 0; i < 2 * k; i++)
            {
                ansA.push_back(a[i]);
                ansB.push_back(a[i]);
            }
        }
        else
        {
            for (auto &i : firstHalf)
            {
                if (i.second == 2)
                {
                    if (ansA.size() >= 2 * k)
                    {
                        break;
                    }
                    ansA.push_back(i.first);
                    ansA.push_back(i.first);
                }
            }
            for (auto &i : secondHalf)
            {
                if (i.second == 2)
                {
                    if (ansB.size() >= 2 * k)
                    {
                        break;
                    }
                    ansB.push_back(i.first);
                    ansB.push_back(i.first);
                }
            }
            for (auto &i : firstHalf)
            {
                if (i.second == 1)
                {
                    if (ansA.size() >= 2 * k && ansB.size() >= 2 * k)
                    {
                        break;
                    }
                    ansA.push_back(i.first);
                    ansB.push_back(i.first);
                }
            }
        }
        for (auto &i : ansA)
        {
            cout << i << " ";
        }
        cout << "\n";
        for (auto &i : ansB)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}