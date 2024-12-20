#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<ll> d;
    d.push_back(1);
    d.push_front(2);
    for (auto &i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.pop_back();
    for (auto &i : d)
    {
        cout << i << " ";
    }
    return 0;
}