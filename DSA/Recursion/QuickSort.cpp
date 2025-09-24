#include <bits/stdc++.h>

using namespace std;

#define ll long long int

// ll partition(vector<ll> &a, ll s, ll e)
// {
//     ll pivot = a[e];
//     ll i = (s - 1);
//     for (ll j = s; j <= e - 1; j++)
//     {
//         if (a[j] <= pivot)
//         {
//             i++;
//             swap(a[i], a[j]);
//         }
//     }
//     swap(a[i + 1], a[e]);
//     return (i + 1);
// }

ll partition(vector<ll> &a, ll s, ll e)
{
    ll pivot = a[s];
    ll cnt = 0;
    for (ll i = s + 1; i <= e; i++)
    {
        if (a[i] <= pivot)
        {
            cnt++;
        }
    }
    // Place pivot at right position
    ll pivotIndex = s + cnt;
    swap(a[pivotIndex], a[s]);

    ll i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    return (pivotIndex);
}

void quickSort(vector<ll> &a, ll s, ll e)
{
    // Base Case
    if (s >= e)
    {
        return;
    }

    // Partition korbo
    ll p = partition(a, s, e);

    // Left part sort korbo
    quickSort(a, s, p - 1);

    // Right part sort korbo
    quickSort(a, p + 1, e);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    quickSort(a, 0, n - 1);
    for (auto &i : a)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}