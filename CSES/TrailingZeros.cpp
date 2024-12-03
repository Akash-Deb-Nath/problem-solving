#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;
    ll count = 0;
    ll res = 5;
    while (n / res)
    {
        count = count + (n / res);
        res = res * 5;
    }
    cout << count << endl;

    return 0;
}