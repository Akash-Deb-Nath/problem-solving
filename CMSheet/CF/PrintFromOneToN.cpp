#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void print(ll n)
{
    if (n == 0)
    {
        return;
    }
    print(n - 1);
    cout << n << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N;
    cin >> N;
    print(N);

    return 0;
}