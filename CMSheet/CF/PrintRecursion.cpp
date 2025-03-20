#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void print(ll n)
{
    if (n == 0)
    {
        return;
    }
    cout << "I love Recursion" << "\n";
    print(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    print(n);

    return 0;
}