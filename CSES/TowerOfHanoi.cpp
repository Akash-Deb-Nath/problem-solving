#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void towerOfHanoi(ll n, ll left, ll middle, ll right, vector<pair<ll, ll>> &ans)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, left, right, middle, ans);
    ans.push_back({left, right});
    towerOfHanoi(n - 1, middle, left, right, ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll left = 1;
    ll middle = 2;
    ll right = 3;
    vector<pair<ll, ll>> ans;
    towerOfHanoi(n, left, middle, right, ans);
    cout << ans.size() << "\n";
    for (auto &i : ans)
    {
        cout << i.first << " " << i.second << "\n";
    }
    cout << "\n";
    return 0;
}