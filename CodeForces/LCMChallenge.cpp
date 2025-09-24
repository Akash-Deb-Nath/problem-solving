#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

void solve()
{
    ll n;
    cin >> n;
    if (n <= 2)
    {
        cout << n << "\n";
    }
    else if (n % 2)
    {
        cout << n * (n - 1) * (n - 2) << "\n";
    }
    else if (n % 3)
    {
        cout << n * (n - 1) * (n - 3) << "\n";
    }
    else
    {
        cout << (n - 1) * (n - 2) * (n - 3) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}