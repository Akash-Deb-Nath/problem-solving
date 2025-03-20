#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void print(ll *p)
{
    cout << *p << endl;
}

void update(ll *p)
{
    // p = p + 1;
    // cout << p << "\n";
    *p = *p + 1;
}

ll getSum(ll a[], ll n)
{
    cout << "\n";
    cout << "Size = " << sizeof(a) << "\n";
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /*
    ll value = 5;
    ll *p = &value;
    print(p);

    cout << "Before update " << *p << "\n";
    update(p);
    cout << "After update " << *p << "\n";
    */

    ll a[5] = {1, 2, 3, 4, 5};
    cout << "Sum is " << getSum(a, 5) << "\n";

    return 0;
}