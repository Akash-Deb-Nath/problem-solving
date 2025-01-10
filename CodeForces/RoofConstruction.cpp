#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = 1;
        while (2 * k < n)
        {
            k *= 2;
        }
        for (int i = k - 1; i >= 0; i--)
        {
            cout << i << " ";
        }
        for (int i = k; i < n; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}