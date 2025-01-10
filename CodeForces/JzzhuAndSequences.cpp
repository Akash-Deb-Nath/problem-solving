#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll mod = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    n--;
    n %= 6;
    vector<ll> nums{
        x,
        y,
        y - x,
        -x,
        -y,
        x - y};
    cout << (nums[n] % mod + mod) % mod;
    return 0;
}