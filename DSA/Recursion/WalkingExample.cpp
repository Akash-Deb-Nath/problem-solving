#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void reachHome(ll src, ll dest)
{
    cout << "src = " << src << " dest = " << dest << "\n";
    // Base case
    if (src == dest)
    {
        cout << "Pauch gya" << "\n";
        return;
    }
    // Processing-ek step age bara
    src++;
    // Recursive case
    reachHome(src, dest);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll src = 1;
    ll dest = 10;
    reachHome(src, dest);

    return 0;
}