#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N;
    cin >> N;
    ll ans = 0;
    if (N == 1)
    {
        ans = 3;
    }
    else if (N % 3 == 0)
    {
        ans = (N / 3) * 4 + 3;
    }
    else if (N % 3 == 1)
    {
        ans = (N / 3) * 4 + 4;
    }
    else if (N % 3 == 2)
    {
        ans = (N / 3) * 4 + 5;
    }
    cout << ans << endl;

    return 0;
}