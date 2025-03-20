#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool linearSearch(ll a[], ll n, ll key)
{
    // Base case
    if (n == 0)
    {
        return 0;
    }
    /*
        if(a[0] == key){
            return 1;
        }
        else{
            return linearSearch(a + 1, n - 1, key);
        }
    */
    if (a[n - 1] == key)
    {
        return 1;
    }
    // Recursive case
    return linearSearch(a, n - 1, key);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a[5] = {3, 5, 1, 2, 6};
    ll n = 5;
    ll key = 2;
    bool ans = linearSearch(a, n, key);
    if (ans)
    {
        cout << "Paichi" << "\n";
    }
    else
    {
        cout << "Paichi na" << "\n";
    }

    return 0;
}