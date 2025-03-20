#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void update1(ll n)
{
    n++;
}

void update2(ll &n)
{
    n++;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /*
    ll i = 5;

    // Create a ref variable for i
    ll &j = i;
    cout << i << "\n";
    i++;
    cout << i << "\n";
    j++;
    cout << i << "\n";
    */

    ll n = 5;

    cout << "Before = " << n << "\n";
    update2(n);
    cout << "After = " << n << "\n";

    return 0;
}