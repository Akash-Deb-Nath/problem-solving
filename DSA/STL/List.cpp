#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    list<ll> l;
    list<ll> n(5, 100);
    l.push_back(1);
    l.push_front(2);
    for (auto &i : l)
    {
        cout << i << " ";
    }
    cout << "\n";
    l.erase(l.begin());
    cout << "After erase: " << l.size() << "\n";
    for (auto &i : l)
    {
        cout << i << " ";
    }
    cout << "\n";
    cout << "List n: " << n.size() << "\n";
    for (auto &i : n)
    {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}