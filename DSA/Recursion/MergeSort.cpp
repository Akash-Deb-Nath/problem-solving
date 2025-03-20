#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void merge(ll *arr, ll s, ll e)
{
    ll mid = s + (e - s) / 2;
    ll len1 = mid - s + 1;
    ll len2 = e - mid;
    ll *first = new ll[len1];
    ll *second = new ll[len2];
    // Copy values
    ll mainArrayIndex = s;
    for (ll i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for (ll i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }
    // Merge 2 sorted arrays
    ll index1 = 0;
    ll index2 = 0;
    mainArrayIndex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(ll *arr, ll s, ll e)
{
    // Base case
    if (s >= e)
    {
        return;
    }
    ll mid = s + (e - s) / 2;
    // Sort left side
    mergeSort(arr, s, mid);
    // Sort right side
    mergeSort(arr, mid + 1, e);
    // merge
    merge(arr, s, e);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll arr[5] = {2, 6, 1, 5, 9};
    ll n = 5;
    mergeSort(arr, 0, n - 1);

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}