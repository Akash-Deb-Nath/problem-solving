#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    int evenIndex = binarySearch(even, 6, 12);
    cout << "Index of 12 in even array: " << evenIndex << endl;
    int oddIndex = binarySearch(odd, 5, 12);
    cout << "Index of 12 in odd array: " << oddIndex << endl;
    return 0;
}