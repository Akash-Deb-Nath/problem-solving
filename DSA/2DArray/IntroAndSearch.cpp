#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool isPresent(ll arr[][3], ll target, ll rows, ll cols)
{
    for (ll i = 0; i < rows; i++)
    {
        for (ll j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
// Row wise sum
void printRowSum(ll arr[][3], ll rows, ll cols)
{
    cout << "Printing rowwise sum" << endl;
    for (ll i = 0; i < rows; i++)
    {
        ll sum = 0;
        for (ll j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i << " is " << sum << endl;
    }
}
// Col wise sum
void printColSum(ll arr[][3], ll rows, ll cols)
{
    cout << "Printing columnwise sum" << endl;
    for (ll j = 0; j < cols; j++)
    {
        ll sum = 0;
        for (ll i = 0; i < rows; i++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of column " << j << " is " << sum << endl;
    }
}

ll largestRowSum(ll arr[][3], ll rows, ll cols)
{
    ll maxSum = INT_MIN;
    ll rowIndex = -1;
    for (ll i = 0; i < rows; i++)
    {
        ll sum = 0;
        for (ll j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            rowIndex = i;
        }
    }
    cout << "The maximum sum is " << maxSum << endl;
    return rowIndex;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll arr[3][3];
    cout << "Enter the elements of the array" << endl;
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Print the elements of the array" << endl;
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter the element to search" << endl;
    ll target;
    cin >> target;
    if (isPresent(arr, target, 3, 3))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    printRowSum(arr, 3, 3);
    printColSum(arr, 3, 3);
    cout << "The row,which has the maximum sum" << endl;
    cout << largestRowSum(arr, 3, 3) + 1 << endl;

    return 0;
}