#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 1; i < 8; i += 2)
    {
        swap(arr[i - 1], arr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}