#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<ll> v;
    v.push_back(1);
    cout << "Capacity = " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity = " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity = " << v.capacity() << endl;
    cout << "Size = " << v.size() << endl;
    v.pop_back();
    for (auto &i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<ll> a(5, 1);
    vector<ll> b(a);
    for (auto &i : b)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}