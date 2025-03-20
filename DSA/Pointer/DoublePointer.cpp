#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll *p = &n;
    ll **q = &p;
    // Print the address of n
    cout << &n << "\n";
    cout << p << "\n";
    cout << *q << "\n";
    // Print address of p
    cout << &p << "\n";
    cout << q << "\n";
    // Print value of n
    cout << n << "\n";
    cout << *p << "\n";
    cout << **q << "\n";
    return 0;
}