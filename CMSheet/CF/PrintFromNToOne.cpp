#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void print(ll N)
{
    if (N == 0)
    {
        return;
    }
    if (N == 1)
    {
        cout << N << "\n";
    }
    else
    {
        cout << N << " ";
    }
    print(N - 1);
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