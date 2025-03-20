#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void Print(ll n)
{
    if (n == 0)
    {
        return;
    }
    // cout << n << "\n";
    Print(n - 1);
    cout << n << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    Print(n);
    return 0;
}