#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, x, count = 0;
    cin >> n >> x;
    long long int d[n];
    char ch[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i] >> d[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (ch[i] == '+')
        {
            x = x + d[i];
        }
        else
        {
            if (x - d[i] >= 0)
            {
                x = x - d[i];
            }
            else
            {
                count++;
            }
        }
    }
    cout << x << " " << count << endl;

    return 0;
}