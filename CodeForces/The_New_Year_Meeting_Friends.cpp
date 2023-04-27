#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r = 0;
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = i; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 1; i < 3; i++)
    {
        r = r + (a[i] - a[i - 1]);
    }
    cout << r << endl;

    return 0;
}