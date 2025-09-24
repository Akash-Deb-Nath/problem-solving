#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Max heap
    priority_queue<int> mx;

    // Min heap
    priority_queue<int, vector<int>, greater<int>> mn;

    mx.push(1);
    mx.push(3);
    mx.push(2);
    mx.push(0);

    cout << "Max heap size: " << mx.size() << endl;
    ll n = mx.size();
    ll top = mx.top();
    cout << "Max heap top: " << top << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << mx.top() << " ";
        mx.pop();
    }
    cout << endl;

    mn.push(5);
    mn.push(1);
    mn.push(0);
    mn.push(4);
    mn.push(3);
    cout << "Min heap size: " << mn.size() << endl;
    ll m = mn.size();
    for (ll i = 0; i < m; i++)
    {
        cout << mn.top() << " ";
        mn.pop();
    }

    return 0;
}