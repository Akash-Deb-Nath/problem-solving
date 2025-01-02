#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<ll> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for (auto &i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<ll>::iterator it = s.begin();
    it++;
    s.erase(it);

    for (auto &i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "-5 is present or not = " << s.count(-5) << endl;

    set<ll>::iterator itr = s.find(5);
    for (auto i = itr; i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}