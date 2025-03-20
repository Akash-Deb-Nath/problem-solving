#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void sortArray(ll *arr, ll n)
{
    if (n == 1)
    {
        return;
    }
    for (ll i = 0; i + 1 < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    sortArray(arr, n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll arr[5] = {2, 5, 6, 1, 9};
    sortArray(arr, 5);
    for (ll i = 0; i < 5; i++)
    {
        cout << arr[i] << " \n"[i == 4];
    }

    return 0;
}