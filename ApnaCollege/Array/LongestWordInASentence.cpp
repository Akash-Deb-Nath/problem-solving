#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    // Using getline() to take a sentence as input
    cin.getline(arr, n);
    // using ignore() to ignore buffer,which is arises because of using getline()
    cin.ignore();
    int i = 0, currentLength = 0, maxLength = 0;
    int start = 0, maxStart = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                maxStart = start;
            }
            currentLength = 0;
            start = i + 1;
        }
        // else
        // {
        currentLength++;
        // }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << maxLength << endl;
    for (int i = 0; i < maxLength; i++)
    {
        cout << arr[i + maxStart];
    }

    return 0;
}