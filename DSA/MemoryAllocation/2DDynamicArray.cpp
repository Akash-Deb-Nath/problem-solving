#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll row;
    cin >> row;

    ll col;
    cin >> col;

    // Creating a 2D array
    ll **arr = new ll *[row];
    for (ll i = 0; i < row; i++)
    {
        arr[i] = new ll[col];
    }

    // Taking input in the array
    for (ll i = 0; i < row; i++)
    {
        for (ll j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing the array
    for (ll i = 0; i < row; i++)
    {
        for (ll j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocating the memory
    for (ll i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}