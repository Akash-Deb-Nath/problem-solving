#include <bits/stdc++.h>

using namespace std;

int FirstOccurence(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return FirstOccurence(arr, n, i + 1, key);
}

int LastOccurence(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int restArray = LastOccurence(arr, n, i + 1, key);
    if (restArray != -1)
    {
        return restArray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

// int LastOccurence(int arr[], int n, int key)
// {
//     if (n == 0)
//     {
//         return -1;
//     }

//     if (arr[n - 1] == key)
//     {
//         return n - 1;
//     }
//     return LastOccurence(arr, n - 1, key);
// }

int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << FirstOccurence(arr, 7, 0, 2) << endl;
    cout << LastOccurence(arr, 7, 0, 2);
    return 0;
}