#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<ll> d;
    d.push_front(12);
    d.push_back(14);
    cout << d.front() << "\n";
    cout << d.back() << "\n";
    d.pop_front();
    cout << d.front() << "\n";
    cout << d.back() << "\n";
    d.pop_back();
    if (d.empty())
    {
        cout << "Queue is empty" << "\n";
    }
    else
    {
        cout << "Queue is not empty" << "\n";
    }

    return 0;
}