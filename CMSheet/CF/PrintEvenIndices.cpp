#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void printEvenIndices(vector<ll> &a, ll N)
{
    if (N == 0)
    {
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N;
    cin >> N;
    vector<ll> a(N);
    for (auto &i : a)
    {
        cin >> i;
    }
    printEvenIndices(a, N);

    return 0;
}